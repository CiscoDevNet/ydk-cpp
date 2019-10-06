
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_sysadmin_controllers_ncs55A1_3.hpp"
#include "Cisco_IOS_XR_sysadmin_controllers_ncs55A1_4.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_sysadmin_controllers_ncs55A1 {

Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::State::Down::Brief::DataIdx::History::History()
    :
    history_idx{YType::int32, "history_idx"},
    time_stamp{YType::str, "time_stamp"},
    admin_state{YType::str, "admin-state"},
    oper_state{YType::str, "oper_state"},
    error_state{YType::str, "error_state"}
{

    yang_name = "history"; yang_parent_name = "data_idx"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::State::Down::Brief::DataIdx::History::~History()
{
}

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::State::Down::Brief::DataIdx::History::has_data() const
{
    if (is_presence_container) return true;
    return history_idx.is_set
	|| time_stamp.is_set
	|| admin_state.is_set
	|| oper_state.is_set
	|| error_state.is_set;
}

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::State::Down::Brief::DataIdx::History::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(history_idx.yfilter)
	|| ydk::is_set(time_stamp.yfilter)
	|| ydk::is_set(admin_state.yfilter)
	|| ydk::is_set(oper_state.yfilter)
	|| ydk::is_set(error_state.yfilter);
}

std::string Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::State::Down::Brief::DataIdx::History::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "history";
    ADD_KEY_TOKEN(history_idx, "history_idx");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::State::Down::Brief::DataIdx::History::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (history_idx.is_set || is_set(history_idx.yfilter)) leaf_name_data.push_back(history_idx.get_name_leafdata());
    if (time_stamp.is_set || is_set(time_stamp.yfilter)) leaf_name_data.push_back(time_stamp.get_name_leafdata());
    if (admin_state.is_set || is_set(admin_state.yfilter)) leaf_name_data.push_back(admin_state.get_name_leafdata());
    if (oper_state.is_set || is_set(oper_state.yfilter)) leaf_name_data.push_back(oper_state.get_name_leafdata());
    if (error_state.is_set || is_set(error_state.yfilter)) leaf_name_data.push_back(error_state.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::State::Down::Brief::DataIdx::History::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::State::Down::Brief::DataIdx::History::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::State::Down::Brief::DataIdx::History::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
}

void Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::State::Down::Brief::DataIdx::History::set_filter(const std::string & value_path, YFilter yfilter)
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
}

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::State::Down::Brief::DataIdx::History::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "history_idx" || name == "time_stamp" || name == "admin-state" || name == "oper_state" || name == "error_state")
        return true;
    return false;
}

Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::State::Down::Detail::Detail()
    :
    data_idx(this, {"port_data_idx"})
{

    yang_name = "detail"; yang_parent_name = "down"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::State::Down::Detail::~Detail()
{
}

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::State::Down::Detail::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<data_idx.len(); index++)
    {
        if(data_idx[index]->has_data())
            return true;
    }
    return false;
}

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::State::Down::Detail::has_operation() const
{
    for (std::size_t index=0; index<data_idx.len(); index++)
    {
        if(data_idx[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::State::Down::Detail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "detail";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::State::Down::Detail::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::State::Down::Detail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "data_idx")
    {
        auto ent_ = std::make_shared<Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::State::Down::Detail::DataIdx>();
        ent_->parent = this;
        data_idx.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::State::Down::Detail::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : data_idx.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::State::Down::Detail::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::State::Down::Detail::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::State::Down::Detail::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data_idx")
        return true;
    return false;
}

Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::State::Down::Detail::DataIdx::DataIdx()
    :
    port_data_idx{YType::int64, "port_data_idx"},
    sfe_port{YType::str, "sfe_port"},
    admin_state{YType::str, "admin-state"},
    oper_state{YType::str, "oper_state"},
    near_end_cdr_ln{YType::str, "near_end_cdr_ln"},
    near_end_cxp_ch{YType::str, "near_end_cxp_ch"},
    far_end_cxp_ch{YType::str, "far_end_cxp_ch"},
    far_end_cdr_ln{YType::str, "far_end_cdr_ln"},
    neighbor_link{YType::str, "neighbor_link"}
        ,
    history(this, {"history_idx"})
{

    yang_name = "data_idx"; yang_parent_name = "detail"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::State::Down::Detail::DataIdx::~DataIdx()
{
}

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::State::Down::Detail::DataIdx::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<history.len(); index++)
    {
        if(history[index]->has_data())
            return true;
    }
    return port_data_idx.is_set
	|| sfe_port.is_set
	|| admin_state.is_set
	|| oper_state.is_set
	|| near_end_cdr_ln.is_set
	|| near_end_cxp_ch.is_set
	|| far_end_cxp_ch.is_set
	|| far_end_cdr_ln.is_set
	|| neighbor_link.is_set;
}

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::State::Down::Detail::DataIdx::has_operation() const
{
    for (std::size_t index=0; index<history.len(); index++)
    {
        if(history[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(port_data_idx.yfilter)
	|| ydk::is_set(sfe_port.yfilter)
	|| ydk::is_set(admin_state.yfilter)
	|| ydk::is_set(oper_state.yfilter)
	|| ydk::is_set(near_end_cdr_ln.yfilter)
	|| ydk::is_set(near_end_cxp_ch.yfilter)
	|| ydk::is_set(far_end_cxp_ch.yfilter)
	|| ydk::is_set(far_end_cdr_ln.yfilter)
	|| ydk::is_set(neighbor_link.yfilter);
}

std::string Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::State::Down::Detail::DataIdx::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "data_idx";
    ADD_KEY_TOKEN(port_data_idx, "port_data_idx");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::State::Down::Detail::DataIdx::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port_data_idx.is_set || is_set(port_data_idx.yfilter)) leaf_name_data.push_back(port_data_idx.get_name_leafdata());
    if (sfe_port.is_set || is_set(sfe_port.yfilter)) leaf_name_data.push_back(sfe_port.get_name_leafdata());
    if (admin_state.is_set || is_set(admin_state.yfilter)) leaf_name_data.push_back(admin_state.get_name_leafdata());
    if (oper_state.is_set || is_set(oper_state.yfilter)) leaf_name_data.push_back(oper_state.get_name_leafdata());
    if (near_end_cdr_ln.is_set || is_set(near_end_cdr_ln.yfilter)) leaf_name_data.push_back(near_end_cdr_ln.get_name_leafdata());
    if (near_end_cxp_ch.is_set || is_set(near_end_cxp_ch.yfilter)) leaf_name_data.push_back(near_end_cxp_ch.get_name_leafdata());
    if (far_end_cxp_ch.is_set || is_set(far_end_cxp_ch.yfilter)) leaf_name_data.push_back(far_end_cxp_ch.get_name_leafdata());
    if (far_end_cdr_ln.is_set || is_set(far_end_cdr_ln.yfilter)) leaf_name_data.push_back(far_end_cdr_ln.get_name_leafdata());
    if (neighbor_link.is_set || is_set(neighbor_link.yfilter)) leaf_name_data.push_back(neighbor_link.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::State::Down::Detail::DataIdx::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "history")
    {
        auto ent_ = std::make_shared<Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::State::Down::Detail::DataIdx::History>();
        ent_->parent = this;
        history.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::State::Down::Detail::DataIdx::get_children() const
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

void Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::State::Down::Detail::DataIdx::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "port_data_idx")
    {
        port_data_idx = value;
        port_data_idx.value_namespace = name_space;
        port_data_idx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sfe_port")
    {
        sfe_port = value;
        sfe_port.value_namespace = name_space;
        sfe_port.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "near_end_cdr_ln")
    {
        near_end_cdr_ln = value;
        near_end_cdr_ln.value_namespace = name_space;
        near_end_cdr_ln.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "near_end_cxp_ch")
    {
        near_end_cxp_ch = value;
        near_end_cxp_ch.value_namespace = name_space;
        near_end_cxp_ch.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "far_end_cxp_ch")
    {
        far_end_cxp_ch = value;
        far_end_cxp_ch.value_namespace = name_space;
        far_end_cxp_ch.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "far_end_cdr_ln")
    {
        far_end_cdr_ln = value;
        far_end_cdr_ln.value_namespace = name_space;
        far_end_cdr_ln.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor_link")
    {
        neighbor_link = value;
        neighbor_link.value_namespace = name_space;
        neighbor_link.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::State::Down::Detail::DataIdx::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "port_data_idx")
    {
        port_data_idx.yfilter = yfilter;
    }
    if(value_path == "sfe_port")
    {
        sfe_port.yfilter = yfilter;
    }
    if(value_path == "admin-state")
    {
        admin_state.yfilter = yfilter;
    }
    if(value_path == "oper_state")
    {
        oper_state.yfilter = yfilter;
    }
    if(value_path == "near_end_cdr_ln")
    {
        near_end_cdr_ln.yfilter = yfilter;
    }
    if(value_path == "near_end_cxp_ch")
    {
        near_end_cxp_ch.yfilter = yfilter;
    }
    if(value_path == "far_end_cxp_ch")
    {
        far_end_cxp_ch.yfilter = yfilter;
    }
    if(value_path == "far_end_cdr_ln")
    {
        far_end_cdr_ln.yfilter = yfilter;
    }
    if(value_path == "neighbor_link")
    {
        neighbor_link.yfilter = yfilter;
    }
}

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::State::Down::Detail::DataIdx::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "history" || name == "port_data_idx" || name == "sfe_port" || name == "admin-state" || name == "oper_state" || name == "near_end_cdr_ln" || name == "near_end_cxp_ch" || name == "far_end_cxp_ch" || name == "far_end_cdr_ln" || name == "neighbor_link")
        return true;
    return false;
}

Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::State::Down::Detail::DataIdx::History::History()
    :
    history_idx{YType::int32, "history_idx"},
    time_stamp{YType::str, "time_stamp"},
    admin_state{YType::str, "admin-state"},
    oper_state{YType::str, "oper_state"},
    error_state{YType::str, "error_state"}
{

    yang_name = "history"; yang_parent_name = "data_idx"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::State::Down::Detail::DataIdx::History::~History()
{
}

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::State::Down::Detail::DataIdx::History::has_data() const
{
    if (is_presence_container) return true;
    return history_idx.is_set
	|| time_stamp.is_set
	|| admin_state.is_set
	|| oper_state.is_set
	|| error_state.is_set;
}

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::State::Down::Detail::DataIdx::History::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(history_idx.yfilter)
	|| ydk::is_set(time_stamp.yfilter)
	|| ydk::is_set(admin_state.yfilter)
	|| ydk::is_set(oper_state.yfilter)
	|| ydk::is_set(error_state.yfilter);
}

std::string Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::State::Down::Detail::DataIdx::History::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "history";
    ADD_KEY_TOKEN(history_idx, "history_idx");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::State::Down::Detail::DataIdx::History::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (history_idx.is_set || is_set(history_idx.yfilter)) leaf_name_data.push_back(history_idx.get_name_leafdata());
    if (time_stamp.is_set || is_set(time_stamp.yfilter)) leaf_name_data.push_back(time_stamp.get_name_leafdata());
    if (admin_state.is_set || is_set(admin_state.yfilter)) leaf_name_data.push_back(admin_state.get_name_leafdata());
    if (oper_state.is_set || is_set(oper_state.yfilter)) leaf_name_data.push_back(oper_state.get_name_leafdata());
    if (error_state.is_set || is_set(error_state.yfilter)) leaf_name_data.push_back(error_state.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::State::Down::Detail::DataIdx::History::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::State::Down::Detail::DataIdx::History::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::State::Down::Detail::DataIdx::History::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
}

void Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::State::Down::Detail::DataIdx::History::set_filter(const std::string & value_path, YFilter yfilter)
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
}

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::State::Down::Detail::DataIdx::History::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "history_idx" || name == "time_stamp" || name == "admin-state" || name == "oper_state" || name == "error_state")
        return true;
    return false;
}

Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::State::Mismatch::Mismatch()
    :
    data_idx(this, {"port_data_idx"})
    , brief(std::make_shared<Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::State::Mismatch::Brief>())
    , detail(std::make_shared<Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::State::Mismatch::Detail>())
{
    brief->parent = this;
    detail->parent = this;

    yang_name = "mismatch"; yang_parent_name = "state"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::State::Mismatch::~Mismatch()
{
}

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::State::Mismatch::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<data_idx.len(); index++)
    {
        if(data_idx[index]->has_data())
            return true;
    }
    return (brief !=  nullptr && brief->has_data())
	|| (detail !=  nullptr && detail->has_data());
}

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::State::Mismatch::has_operation() const
{
    for (std::size_t index=0; index<data_idx.len(); index++)
    {
        if(data_idx[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (brief !=  nullptr && brief->has_operation())
	|| (detail !=  nullptr && detail->has_operation());
}

std::string Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::State::Mismatch::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mismatch";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::State::Mismatch::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::State::Mismatch::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "data_idx")
    {
        auto ent_ = std::make_shared<Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::State::Mismatch::DataIdx>();
        ent_->parent = this;
        data_idx.append(ent_);
        return ent_;
    }

    if(child_yang_name == "brief")
    {
        if(brief == nullptr)
        {
            brief = std::make_shared<Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::State::Mismatch::Brief>();
        }
        return brief;
    }

    if(child_yang_name == "detail")
    {
        if(detail == nullptr)
        {
            detail = std::make_shared<Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::State::Mismatch::Detail>();
        }
        return detail;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::State::Mismatch::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : data_idx.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

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

void Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::State::Mismatch::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::State::Mismatch::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::State::Mismatch::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data_idx" || name == "brief" || name == "detail")
        return true;
    return false;
}

Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::State::Mismatch::DataIdx::DataIdx()
    :
    port_data_idx{YType::int64, "port_data_idx"},
    sfe_port{YType::str, "sfe_port"},
    admin_state{YType::str, "admin-state"},
    oper_state{YType::str, "oper_state"},
    near_end_cdr_ln{YType::str, "near_end_cdr_ln"},
    near_end_cxp_ch{YType::str, "near_end_cxp_ch"},
    far_end_cxp_ch{YType::str, "far_end_cxp_ch"},
    far_end_cdr_ln{YType::str, "far_end_cdr_ln"},
    neighbor_link{YType::str, "neighbor_link"}
        ,
    history(this, {"history_idx"})
{

    yang_name = "data_idx"; yang_parent_name = "mismatch"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::State::Mismatch::DataIdx::~DataIdx()
{
}

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::State::Mismatch::DataIdx::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<history.len(); index++)
    {
        if(history[index]->has_data())
            return true;
    }
    return port_data_idx.is_set
	|| sfe_port.is_set
	|| admin_state.is_set
	|| oper_state.is_set
	|| near_end_cdr_ln.is_set
	|| near_end_cxp_ch.is_set
	|| far_end_cxp_ch.is_set
	|| far_end_cdr_ln.is_set
	|| neighbor_link.is_set;
}

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::State::Mismatch::DataIdx::has_operation() const
{
    for (std::size_t index=0; index<history.len(); index++)
    {
        if(history[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(port_data_idx.yfilter)
	|| ydk::is_set(sfe_port.yfilter)
	|| ydk::is_set(admin_state.yfilter)
	|| ydk::is_set(oper_state.yfilter)
	|| ydk::is_set(near_end_cdr_ln.yfilter)
	|| ydk::is_set(near_end_cxp_ch.yfilter)
	|| ydk::is_set(far_end_cxp_ch.yfilter)
	|| ydk::is_set(far_end_cdr_ln.yfilter)
	|| ydk::is_set(neighbor_link.yfilter);
}

std::string Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::State::Mismatch::DataIdx::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "data_idx";
    ADD_KEY_TOKEN(port_data_idx, "port_data_idx");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::State::Mismatch::DataIdx::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port_data_idx.is_set || is_set(port_data_idx.yfilter)) leaf_name_data.push_back(port_data_idx.get_name_leafdata());
    if (sfe_port.is_set || is_set(sfe_port.yfilter)) leaf_name_data.push_back(sfe_port.get_name_leafdata());
    if (admin_state.is_set || is_set(admin_state.yfilter)) leaf_name_data.push_back(admin_state.get_name_leafdata());
    if (oper_state.is_set || is_set(oper_state.yfilter)) leaf_name_data.push_back(oper_state.get_name_leafdata());
    if (near_end_cdr_ln.is_set || is_set(near_end_cdr_ln.yfilter)) leaf_name_data.push_back(near_end_cdr_ln.get_name_leafdata());
    if (near_end_cxp_ch.is_set || is_set(near_end_cxp_ch.yfilter)) leaf_name_data.push_back(near_end_cxp_ch.get_name_leafdata());
    if (far_end_cxp_ch.is_set || is_set(far_end_cxp_ch.yfilter)) leaf_name_data.push_back(far_end_cxp_ch.get_name_leafdata());
    if (far_end_cdr_ln.is_set || is_set(far_end_cdr_ln.yfilter)) leaf_name_data.push_back(far_end_cdr_ln.get_name_leafdata());
    if (neighbor_link.is_set || is_set(neighbor_link.yfilter)) leaf_name_data.push_back(neighbor_link.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::State::Mismatch::DataIdx::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "history")
    {
        auto ent_ = std::make_shared<Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::State::Mismatch::DataIdx::History>();
        ent_->parent = this;
        history.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::State::Mismatch::DataIdx::get_children() const
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

void Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::State::Mismatch::DataIdx::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "port_data_idx")
    {
        port_data_idx = value;
        port_data_idx.value_namespace = name_space;
        port_data_idx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sfe_port")
    {
        sfe_port = value;
        sfe_port.value_namespace = name_space;
        sfe_port.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "near_end_cdr_ln")
    {
        near_end_cdr_ln = value;
        near_end_cdr_ln.value_namespace = name_space;
        near_end_cdr_ln.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "near_end_cxp_ch")
    {
        near_end_cxp_ch = value;
        near_end_cxp_ch.value_namespace = name_space;
        near_end_cxp_ch.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "far_end_cxp_ch")
    {
        far_end_cxp_ch = value;
        far_end_cxp_ch.value_namespace = name_space;
        far_end_cxp_ch.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "far_end_cdr_ln")
    {
        far_end_cdr_ln = value;
        far_end_cdr_ln.value_namespace = name_space;
        far_end_cdr_ln.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor_link")
    {
        neighbor_link = value;
        neighbor_link.value_namespace = name_space;
        neighbor_link.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::State::Mismatch::DataIdx::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "port_data_idx")
    {
        port_data_idx.yfilter = yfilter;
    }
    if(value_path == "sfe_port")
    {
        sfe_port.yfilter = yfilter;
    }
    if(value_path == "admin-state")
    {
        admin_state.yfilter = yfilter;
    }
    if(value_path == "oper_state")
    {
        oper_state.yfilter = yfilter;
    }
    if(value_path == "near_end_cdr_ln")
    {
        near_end_cdr_ln.yfilter = yfilter;
    }
    if(value_path == "near_end_cxp_ch")
    {
        near_end_cxp_ch.yfilter = yfilter;
    }
    if(value_path == "far_end_cxp_ch")
    {
        far_end_cxp_ch.yfilter = yfilter;
    }
    if(value_path == "far_end_cdr_ln")
    {
        far_end_cdr_ln.yfilter = yfilter;
    }
    if(value_path == "neighbor_link")
    {
        neighbor_link.yfilter = yfilter;
    }
}

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::State::Mismatch::DataIdx::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "history" || name == "port_data_idx" || name == "sfe_port" || name == "admin-state" || name == "oper_state" || name == "near_end_cdr_ln" || name == "near_end_cxp_ch" || name == "far_end_cxp_ch" || name == "far_end_cdr_ln" || name == "neighbor_link")
        return true;
    return false;
}

Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::State::Mismatch::DataIdx::History::History()
    :
    history_idx{YType::int32, "history_idx"},
    time_stamp{YType::str, "time_stamp"},
    admin_state{YType::str, "admin-state"},
    oper_state{YType::str, "oper_state"},
    error_state{YType::str, "error_state"}
{

    yang_name = "history"; yang_parent_name = "data_idx"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::State::Mismatch::DataIdx::History::~History()
{
}

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::State::Mismatch::DataIdx::History::has_data() const
{
    if (is_presence_container) return true;
    return history_idx.is_set
	|| time_stamp.is_set
	|| admin_state.is_set
	|| oper_state.is_set
	|| error_state.is_set;
}

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::State::Mismatch::DataIdx::History::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(history_idx.yfilter)
	|| ydk::is_set(time_stamp.yfilter)
	|| ydk::is_set(admin_state.yfilter)
	|| ydk::is_set(oper_state.yfilter)
	|| ydk::is_set(error_state.yfilter);
}

std::string Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::State::Mismatch::DataIdx::History::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "history";
    ADD_KEY_TOKEN(history_idx, "history_idx");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::State::Mismatch::DataIdx::History::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (history_idx.is_set || is_set(history_idx.yfilter)) leaf_name_data.push_back(history_idx.get_name_leafdata());
    if (time_stamp.is_set || is_set(time_stamp.yfilter)) leaf_name_data.push_back(time_stamp.get_name_leafdata());
    if (admin_state.is_set || is_set(admin_state.yfilter)) leaf_name_data.push_back(admin_state.get_name_leafdata());
    if (oper_state.is_set || is_set(oper_state.yfilter)) leaf_name_data.push_back(oper_state.get_name_leafdata());
    if (error_state.is_set || is_set(error_state.yfilter)) leaf_name_data.push_back(error_state.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::State::Mismatch::DataIdx::History::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::State::Mismatch::DataIdx::History::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::State::Mismatch::DataIdx::History::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
}

void Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::State::Mismatch::DataIdx::History::set_filter(const std::string & value_path, YFilter yfilter)
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
}

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::State::Mismatch::DataIdx::History::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "history_idx" || name == "time_stamp" || name == "admin-state" || name == "oper_state" || name == "error_state")
        return true;
    return false;
}

Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::State::Mismatch::Brief::Brief()
    :
    data_idx(this, {"port_data_idx"})
{

    yang_name = "brief"; yang_parent_name = "mismatch"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::State::Mismatch::Brief::~Brief()
{
}

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::State::Mismatch::Brief::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<data_idx.len(); index++)
    {
        if(data_idx[index]->has_data())
            return true;
    }
    return false;
}

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::State::Mismatch::Brief::has_operation() const
{
    for (std::size_t index=0; index<data_idx.len(); index++)
    {
        if(data_idx[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::State::Mismatch::Brief::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "brief";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::State::Mismatch::Brief::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::State::Mismatch::Brief::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "data_idx")
    {
        auto ent_ = std::make_shared<Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::State::Mismatch::Brief::DataIdx>();
        ent_->parent = this;
        data_idx.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::State::Mismatch::Brief::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : data_idx.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::State::Mismatch::Brief::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::State::Mismatch::Brief::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::State::Mismatch::Brief::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data_idx")
        return true;
    return false;
}

Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::State::Mismatch::Brief::DataIdx::DataIdx()
    :
    port_data_idx{YType::int64, "port_data_idx"},
    sfe_port{YType::str, "sfe_port"},
    admin_state{YType::str, "admin-state"},
    oper_state{YType::str, "oper_state"},
    near_end_cdr_ln{YType::str, "near_end_cdr_ln"},
    near_end_cxp_ch{YType::str, "near_end_cxp_ch"},
    far_end_cxp_ch{YType::str, "far_end_cxp_ch"},
    far_end_cdr_ln{YType::str, "far_end_cdr_ln"},
    neighbor_link{YType::str, "neighbor_link"}
        ,
    history(this, {"history_idx"})
{

    yang_name = "data_idx"; yang_parent_name = "brief"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::State::Mismatch::Brief::DataIdx::~DataIdx()
{
}

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::State::Mismatch::Brief::DataIdx::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<history.len(); index++)
    {
        if(history[index]->has_data())
            return true;
    }
    return port_data_idx.is_set
	|| sfe_port.is_set
	|| admin_state.is_set
	|| oper_state.is_set
	|| near_end_cdr_ln.is_set
	|| near_end_cxp_ch.is_set
	|| far_end_cxp_ch.is_set
	|| far_end_cdr_ln.is_set
	|| neighbor_link.is_set;
}

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::State::Mismatch::Brief::DataIdx::has_operation() const
{
    for (std::size_t index=0; index<history.len(); index++)
    {
        if(history[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(port_data_idx.yfilter)
	|| ydk::is_set(sfe_port.yfilter)
	|| ydk::is_set(admin_state.yfilter)
	|| ydk::is_set(oper_state.yfilter)
	|| ydk::is_set(near_end_cdr_ln.yfilter)
	|| ydk::is_set(near_end_cxp_ch.yfilter)
	|| ydk::is_set(far_end_cxp_ch.yfilter)
	|| ydk::is_set(far_end_cdr_ln.yfilter)
	|| ydk::is_set(neighbor_link.yfilter);
}

std::string Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::State::Mismatch::Brief::DataIdx::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "data_idx";
    ADD_KEY_TOKEN(port_data_idx, "port_data_idx");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::State::Mismatch::Brief::DataIdx::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port_data_idx.is_set || is_set(port_data_idx.yfilter)) leaf_name_data.push_back(port_data_idx.get_name_leafdata());
    if (sfe_port.is_set || is_set(sfe_port.yfilter)) leaf_name_data.push_back(sfe_port.get_name_leafdata());
    if (admin_state.is_set || is_set(admin_state.yfilter)) leaf_name_data.push_back(admin_state.get_name_leafdata());
    if (oper_state.is_set || is_set(oper_state.yfilter)) leaf_name_data.push_back(oper_state.get_name_leafdata());
    if (near_end_cdr_ln.is_set || is_set(near_end_cdr_ln.yfilter)) leaf_name_data.push_back(near_end_cdr_ln.get_name_leafdata());
    if (near_end_cxp_ch.is_set || is_set(near_end_cxp_ch.yfilter)) leaf_name_data.push_back(near_end_cxp_ch.get_name_leafdata());
    if (far_end_cxp_ch.is_set || is_set(far_end_cxp_ch.yfilter)) leaf_name_data.push_back(far_end_cxp_ch.get_name_leafdata());
    if (far_end_cdr_ln.is_set || is_set(far_end_cdr_ln.yfilter)) leaf_name_data.push_back(far_end_cdr_ln.get_name_leafdata());
    if (neighbor_link.is_set || is_set(neighbor_link.yfilter)) leaf_name_data.push_back(neighbor_link.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::State::Mismatch::Brief::DataIdx::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "history")
    {
        auto ent_ = std::make_shared<Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::State::Mismatch::Brief::DataIdx::History>();
        ent_->parent = this;
        history.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::State::Mismatch::Brief::DataIdx::get_children() const
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

void Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::State::Mismatch::Brief::DataIdx::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "port_data_idx")
    {
        port_data_idx = value;
        port_data_idx.value_namespace = name_space;
        port_data_idx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sfe_port")
    {
        sfe_port = value;
        sfe_port.value_namespace = name_space;
        sfe_port.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "near_end_cdr_ln")
    {
        near_end_cdr_ln = value;
        near_end_cdr_ln.value_namespace = name_space;
        near_end_cdr_ln.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "near_end_cxp_ch")
    {
        near_end_cxp_ch = value;
        near_end_cxp_ch.value_namespace = name_space;
        near_end_cxp_ch.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "far_end_cxp_ch")
    {
        far_end_cxp_ch = value;
        far_end_cxp_ch.value_namespace = name_space;
        far_end_cxp_ch.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "far_end_cdr_ln")
    {
        far_end_cdr_ln = value;
        far_end_cdr_ln.value_namespace = name_space;
        far_end_cdr_ln.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor_link")
    {
        neighbor_link = value;
        neighbor_link.value_namespace = name_space;
        neighbor_link.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::State::Mismatch::Brief::DataIdx::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "port_data_idx")
    {
        port_data_idx.yfilter = yfilter;
    }
    if(value_path == "sfe_port")
    {
        sfe_port.yfilter = yfilter;
    }
    if(value_path == "admin-state")
    {
        admin_state.yfilter = yfilter;
    }
    if(value_path == "oper_state")
    {
        oper_state.yfilter = yfilter;
    }
    if(value_path == "near_end_cdr_ln")
    {
        near_end_cdr_ln.yfilter = yfilter;
    }
    if(value_path == "near_end_cxp_ch")
    {
        near_end_cxp_ch.yfilter = yfilter;
    }
    if(value_path == "far_end_cxp_ch")
    {
        far_end_cxp_ch.yfilter = yfilter;
    }
    if(value_path == "far_end_cdr_ln")
    {
        far_end_cdr_ln.yfilter = yfilter;
    }
    if(value_path == "neighbor_link")
    {
        neighbor_link.yfilter = yfilter;
    }
}

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::State::Mismatch::Brief::DataIdx::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "history" || name == "port_data_idx" || name == "sfe_port" || name == "admin-state" || name == "oper_state" || name == "near_end_cdr_ln" || name == "near_end_cxp_ch" || name == "far_end_cxp_ch" || name == "far_end_cdr_ln" || name == "neighbor_link")
        return true;
    return false;
}

Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::State::Mismatch::Brief::DataIdx::History::History()
    :
    history_idx{YType::int32, "history_idx"},
    time_stamp{YType::str, "time_stamp"},
    admin_state{YType::str, "admin-state"},
    oper_state{YType::str, "oper_state"},
    error_state{YType::str, "error_state"}
{

    yang_name = "history"; yang_parent_name = "data_idx"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::State::Mismatch::Brief::DataIdx::History::~History()
{
}

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::State::Mismatch::Brief::DataIdx::History::has_data() const
{
    if (is_presence_container) return true;
    return history_idx.is_set
	|| time_stamp.is_set
	|| admin_state.is_set
	|| oper_state.is_set
	|| error_state.is_set;
}

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::State::Mismatch::Brief::DataIdx::History::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(history_idx.yfilter)
	|| ydk::is_set(time_stamp.yfilter)
	|| ydk::is_set(admin_state.yfilter)
	|| ydk::is_set(oper_state.yfilter)
	|| ydk::is_set(error_state.yfilter);
}

std::string Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::State::Mismatch::Brief::DataIdx::History::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "history";
    ADD_KEY_TOKEN(history_idx, "history_idx");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::State::Mismatch::Brief::DataIdx::History::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (history_idx.is_set || is_set(history_idx.yfilter)) leaf_name_data.push_back(history_idx.get_name_leafdata());
    if (time_stamp.is_set || is_set(time_stamp.yfilter)) leaf_name_data.push_back(time_stamp.get_name_leafdata());
    if (admin_state.is_set || is_set(admin_state.yfilter)) leaf_name_data.push_back(admin_state.get_name_leafdata());
    if (oper_state.is_set || is_set(oper_state.yfilter)) leaf_name_data.push_back(oper_state.get_name_leafdata());
    if (error_state.is_set || is_set(error_state.yfilter)) leaf_name_data.push_back(error_state.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::State::Mismatch::Brief::DataIdx::History::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::State::Mismatch::Brief::DataIdx::History::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::State::Mismatch::Brief::DataIdx::History::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
}

void Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::State::Mismatch::Brief::DataIdx::History::set_filter(const std::string & value_path, YFilter yfilter)
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
}

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::State::Mismatch::Brief::DataIdx::History::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "history_idx" || name == "time_stamp" || name == "admin-state" || name == "oper_state" || name == "error_state")
        return true;
    return false;
}

Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::State::Mismatch::Detail::Detail()
    :
    data_idx(this, {"port_data_idx"})
{

    yang_name = "detail"; yang_parent_name = "mismatch"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::State::Mismatch::Detail::~Detail()
{
}

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::State::Mismatch::Detail::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<data_idx.len(); index++)
    {
        if(data_idx[index]->has_data())
            return true;
    }
    return false;
}

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::State::Mismatch::Detail::has_operation() const
{
    for (std::size_t index=0; index<data_idx.len(); index++)
    {
        if(data_idx[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::State::Mismatch::Detail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "detail";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::State::Mismatch::Detail::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::State::Mismatch::Detail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "data_idx")
    {
        auto ent_ = std::make_shared<Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::State::Mismatch::Detail::DataIdx>();
        ent_->parent = this;
        data_idx.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::State::Mismatch::Detail::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : data_idx.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::State::Mismatch::Detail::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::State::Mismatch::Detail::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::State::Mismatch::Detail::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data_idx")
        return true;
    return false;
}

Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::State::Mismatch::Detail::DataIdx::DataIdx()
    :
    port_data_idx{YType::int64, "port_data_idx"},
    sfe_port{YType::str, "sfe_port"},
    admin_state{YType::str, "admin-state"},
    oper_state{YType::str, "oper_state"},
    near_end_cdr_ln{YType::str, "near_end_cdr_ln"},
    near_end_cxp_ch{YType::str, "near_end_cxp_ch"},
    far_end_cxp_ch{YType::str, "far_end_cxp_ch"},
    far_end_cdr_ln{YType::str, "far_end_cdr_ln"},
    neighbor_link{YType::str, "neighbor_link"}
        ,
    history(this, {"history_idx"})
{

    yang_name = "data_idx"; yang_parent_name = "detail"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::State::Mismatch::Detail::DataIdx::~DataIdx()
{
}

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::State::Mismatch::Detail::DataIdx::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<history.len(); index++)
    {
        if(history[index]->has_data())
            return true;
    }
    return port_data_idx.is_set
	|| sfe_port.is_set
	|| admin_state.is_set
	|| oper_state.is_set
	|| near_end_cdr_ln.is_set
	|| near_end_cxp_ch.is_set
	|| far_end_cxp_ch.is_set
	|| far_end_cdr_ln.is_set
	|| neighbor_link.is_set;
}

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::State::Mismatch::Detail::DataIdx::has_operation() const
{
    for (std::size_t index=0; index<history.len(); index++)
    {
        if(history[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(port_data_idx.yfilter)
	|| ydk::is_set(sfe_port.yfilter)
	|| ydk::is_set(admin_state.yfilter)
	|| ydk::is_set(oper_state.yfilter)
	|| ydk::is_set(near_end_cdr_ln.yfilter)
	|| ydk::is_set(near_end_cxp_ch.yfilter)
	|| ydk::is_set(far_end_cxp_ch.yfilter)
	|| ydk::is_set(far_end_cdr_ln.yfilter)
	|| ydk::is_set(neighbor_link.yfilter);
}

std::string Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::State::Mismatch::Detail::DataIdx::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "data_idx";
    ADD_KEY_TOKEN(port_data_idx, "port_data_idx");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::State::Mismatch::Detail::DataIdx::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port_data_idx.is_set || is_set(port_data_idx.yfilter)) leaf_name_data.push_back(port_data_idx.get_name_leafdata());
    if (sfe_port.is_set || is_set(sfe_port.yfilter)) leaf_name_data.push_back(sfe_port.get_name_leafdata());
    if (admin_state.is_set || is_set(admin_state.yfilter)) leaf_name_data.push_back(admin_state.get_name_leafdata());
    if (oper_state.is_set || is_set(oper_state.yfilter)) leaf_name_data.push_back(oper_state.get_name_leafdata());
    if (near_end_cdr_ln.is_set || is_set(near_end_cdr_ln.yfilter)) leaf_name_data.push_back(near_end_cdr_ln.get_name_leafdata());
    if (near_end_cxp_ch.is_set || is_set(near_end_cxp_ch.yfilter)) leaf_name_data.push_back(near_end_cxp_ch.get_name_leafdata());
    if (far_end_cxp_ch.is_set || is_set(far_end_cxp_ch.yfilter)) leaf_name_data.push_back(far_end_cxp_ch.get_name_leafdata());
    if (far_end_cdr_ln.is_set || is_set(far_end_cdr_ln.yfilter)) leaf_name_data.push_back(far_end_cdr_ln.get_name_leafdata());
    if (neighbor_link.is_set || is_set(neighbor_link.yfilter)) leaf_name_data.push_back(neighbor_link.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::State::Mismatch::Detail::DataIdx::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "history")
    {
        auto ent_ = std::make_shared<Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::State::Mismatch::Detail::DataIdx::History>();
        ent_->parent = this;
        history.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::State::Mismatch::Detail::DataIdx::get_children() const
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

void Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::State::Mismatch::Detail::DataIdx::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "port_data_idx")
    {
        port_data_idx = value;
        port_data_idx.value_namespace = name_space;
        port_data_idx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sfe_port")
    {
        sfe_port = value;
        sfe_port.value_namespace = name_space;
        sfe_port.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "near_end_cdr_ln")
    {
        near_end_cdr_ln = value;
        near_end_cdr_ln.value_namespace = name_space;
        near_end_cdr_ln.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "near_end_cxp_ch")
    {
        near_end_cxp_ch = value;
        near_end_cxp_ch.value_namespace = name_space;
        near_end_cxp_ch.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "far_end_cxp_ch")
    {
        far_end_cxp_ch = value;
        far_end_cxp_ch.value_namespace = name_space;
        far_end_cxp_ch.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "far_end_cdr_ln")
    {
        far_end_cdr_ln = value;
        far_end_cdr_ln.value_namespace = name_space;
        far_end_cdr_ln.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor_link")
    {
        neighbor_link = value;
        neighbor_link.value_namespace = name_space;
        neighbor_link.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::State::Mismatch::Detail::DataIdx::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "port_data_idx")
    {
        port_data_idx.yfilter = yfilter;
    }
    if(value_path == "sfe_port")
    {
        sfe_port.yfilter = yfilter;
    }
    if(value_path == "admin-state")
    {
        admin_state.yfilter = yfilter;
    }
    if(value_path == "oper_state")
    {
        oper_state.yfilter = yfilter;
    }
    if(value_path == "near_end_cdr_ln")
    {
        near_end_cdr_ln.yfilter = yfilter;
    }
    if(value_path == "near_end_cxp_ch")
    {
        near_end_cxp_ch.yfilter = yfilter;
    }
    if(value_path == "far_end_cxp_ch")
    {
        far_end_cxp_ch.yfilter = yfilter;
    }
    if(value_path == "far_end_cdr_ln")
    {
        far_end_cdr_ln.yfilter = yfilter;
    }
    if(value_path == "neighbor_link")
    {
        neighbor_link.yfilter = yfilter;
    }
}

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::State::Mismatch::Detail::DataIdx::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "history" || name == "port_data_idx" || name == "sfe_port" || name == "admin-state" || name == "oper_state" || name == "near_end_cdr_ln" || name == "near_end_cxp_ch" || name == "far_end_cxp_ch" || name == "far_end_cdr_ln" || name == "neighbor_link")
        return true;
    return false;
}

Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::State::Mismatch::Detail::DataIdx::History::History()
    :
    history_idx{YType::int32, "history_idx"},
    time_stamp{YType::str, "time_stamp"},
    admin_state{YType::str, "admin-state"},
    oper_state{YType::str, "oper_state"},
    error_state{YType::str, "error_state"}
{

    yang_name = "history"; yang_parent_name = "data_idx"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::State::Mismatch::Detail::DataIdx::History::~History()
{
}

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::State::Mismatch::Detail::DataIdx::History::has_data() const
{
    if (is_presence_container) return true;
    return history_idx.is_set
	|| time_stamp.is_set
	|| admin_state.is_set
	|| oper_state.is_set
	|| error_state.is_set;
}

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::State::Mismatch::Detail::DataIdx::History::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(history_idx.yfilter)
	|| ydk::is_set(time_stamp.yfilter)
	|| ydk::is_set(admin_state.yfilter)
	|| ydk::is_set(oper_state.yfilter)
	|| ydk::is_set(error_state.yfilter);
}

std::string Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::State::Mismatch::Detail::DataIdx::History::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "history";
    ADD_KEY_TOKEN(history_idx, "history_idx");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::State::Mismatch::Detail::DataIdx::History::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (history_idx.is_set || is_set(history_idx.yfilter)) leaf_name_data.push_back(history_idx.get_name_leafdata());
    if (time_stamp.is_set || is_set(time_stamp.yfilter)) leaf_name_data.push_back(time_stamp.get_name_leafdata());
    if (admin_state.is_set || is_set(admin_state.yfilter)) leaf_name_data.push_back(admin_state.get_name_leafdata());
    if (oper_state.is_set || is_set(oper_state.yfilter)) leaf_name_data.push_back(oper_state.get_name_leafdata());
    if (error_state.is_set || is_set(error_state.yfilter)) leaf_name_data.push_back(error_state.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::State::Mismatch::Detail::DataIdx::History::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::State::Mismatch::Detail::DataIdx::History::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::State::Mismatch::Detail::DataIdx::History::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
}

void Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::State::Mismatch::Detail::DataIdx::History::set_filter(const std::string & value_path, YFilter yfilter)
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
}

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::State::Mismatch::Detail::DataIdx::History::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "history_idx" || name == "time_stamp" || name == "admin-state" || name == "oper_state" || name == "error_state")
        return true;
    return false;
}

Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::Statistics::Statistics()
    :
    data_idx(this, {"port_data_idx"})
    , brief(std::make_shared<Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::Statistics::Brief>())
    , detail(std::make_shared<Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::Statistics::Detail>())
{
    brief->parent = this;
    detail->parent = this;

    yang_name = "statistics"; yang_parent_name = "rx"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::Statistics::~Statistics()
{
}

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::Statistics::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<data_idx.len(); index++)
    {
        if(data_idx[index]->has_data())
            return true;
    }
    return (brief !=  nullptr && brief->has_data())
	|| (detail !=  nullptr && detail->has_data());
}

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::Statistics::has_operation() const
{
    for (std::size_t index=0; index<data_idx.len(); index++)
    {
        if(data_idx[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (brief !=  nullptr && brief->has_operation())
	|| (detail !=  nullptr && detail->has_operation());
}

std::string Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::Statistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::Statistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::Statistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "data_idx")
    {
        auto ent_ = std::make_shared<Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::Statistics::DataIdx>();
        ent_->parent = this;
        data_idx.append(ent_);
        return ent_;
    }

    if(child_yang_name == "brief")
    {
        if(brief == nullptr)
        {
            brief = std::make_shared<Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::Statistics::Brief>();
        }
        return brief;
    }

    if(child_yang_name == "detail")
    {
        if(detail == nullptr)
        {
            detail = std::make_shared<Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::Statistics::Detail>();
        }
        return detail;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::Statistics::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : data_idx.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

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

void Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::Statistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::Statistics::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::Statistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data_idx" || name == "brief" || name == "detail")
        return true;
    return false;
}

Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::Statistics::DataIdx::DataIdx()
    :
    port_data_idx{YType::int64, "port_data_idx"},
    rack_num{YType::str, "rack_num"},
    sfe_port{YType::str, "sfe_port"},
    tx_control_cells_counter{YType::uint64, "TX_Control_cells_counter"},
    tx_data_cell_counter{YType::uint64, "TX_Data_cell_counter"},
    tx_data_byte_counter{YType::uint64, "TX_Data_byte_counter"},
    rx_crc_errors_counter{YType::uint64, "RX_CRC_errors_counter"},
    rx_lfec_fec_correctable_error{YType::uint64, "RX_LFEC_FEC_correctable_error"},
    rx_8b_10b_disparity_errors{YType::uint64, "RX_8b_10b_disparity_errors"},
    rx_control_cells_counter{YType::uint64, "RX_Control_cells_counter"},
    rx_data_cell_counter{YType::uint64, "RX_Data_cell_counter"},
    rx_data_byte_counter{YType::uint64, "RX_Data_byte_counter"},
    rx_dropped_retransmitted_control{YType::uint64, "RX_dropped_retransmitted_control"},
    tx_asyn_fifo_rate{YType::uint64, "TX_Asyn_fifo_rate"},
    rx_asyn_fifo_rate{YType::uint64, "RX_Asyn_fifo_rate"},
    rx_lfec_fec_uncorrectable_errors{YType::uint64, "RX_LFEC_FEC_uncorrectable_errors"},
    rx_8b_10b_code_errors{YType::uint64, "RX_8b_10b_code_errors"},
    is_link_error{YType::boolean, "is_link_error"},
    link_crc_error{YType::uint32, "link_crc_error"},
    link_size_error{YType::uint32, "link_size_error"},
    link_mis_align_error{YType::uint32, "link_mis_align_error"},
    link_code_group_error{YType::uint32, "link_code_group_error"},
    link_no_sig_lock_error{YType::uint32, "link_no_sig_lock_error"},
    link_no_sig_accept_error{YType::uint32, "link_no_sig_accept_error"},
    link_tokens_error{YType::uint32, "link_tokens_error"},
    error_token_count{YType::uint32, "error_token_count"}
{

    yang_name = "data_idx"; yang_parent_name = "statistics"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::Statistics::DataIdx::~DataIdx()
{
}

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::Statistics::DataIdx::has_data() const
{
    if (is_presence_container) return true;
    return port_data_idx.is_set
	|| rack_num.is_set
	|| sfe_port.is_set
	|| tx_control_cells_counter.is_set
	|| tx_data_cell_counter.is_set
	|| tx_data_byte_counter.is_set
	|| rx_crc_errors_counter.is_set
	|| rx_lfec_fec_correctable_error.is_set
	|| rx_8b_10b_disparity_errors.is_set
	|| rx_control_cells_counter.is_set
	|| rx_data_cell_counter.is_set
	|| rx_data_byte_counter.is_set
	|| rx_dropped_retransmitted_control.is_set
	|| tx_asyn_fifo_rate.is_set
	|| rx_asyn_fifo_rate.is_set
	|| rx_lfec_fec_uncorrectable_errors.is_set
	|| rx_8b_10b_code_errors.is_set
	|| is_link_error.is_set
	|| link_crc_error.is_set
	|| link_size_error.is_set
	|| link_mis_align_error.is_set
	|| link_code_group_error.is_set
	|| link_no_sig_lock_error.is_set
	|| link_no_sig_accept_error.is_set
	|| link_tokens_error.is_set
	|| error_token_count.is_set;
}

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::Statistics::DataIdx::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(port_data_idx.yfilter)
	|| ydk::is_set(rack_num.yfilter)
	|| ydk::is_set(sfe_port.yfilter)
	|| ydk::is_set(tx_control_cells_counter.yfilter)
	|| ydk::is_set(tx_data_cell_counter.yfilter)
	|| ydk::is_set(tx_data_byte_counter.yfilter)
	|| ydk::is_set(rx_crc_errors_counter.yfilter)
	|| ydk::is_set(rx_lfec_fec_correctable_error.yfilter)
	|| ydk::is_set(rx_8b_10b_disparity_errors.yfilter)
	|| ydk::is_set(rx_control_cells_counter.yfilter)
	|| ydk::is_set(rx_data_cell_counter.yfilter)
	|| ydk::is_set(rx_data_byte_counter.yfilter)
	|| ydk::is_set(rx_dropped_retransmitted_control.yfilter)
	|| ydk::is_set(tx_asyn_fifo_rate.yfilter)
	|| ydk::is_set(rx_asyn_fifo_rate.yfilter)
	|| ydk::is_set(rx_lfec_fec_uncorrectable_errors.yfilter)
	|| ydk::is_set(rx_8b_10b_code_errors.yfilter)
	|| ydk::is_set(is_link_error.yfilter)
	|| ydk::is_set(link_crc_error.yfilter)
	|| ydk::is_set(link_size_error.yfilter)
	|| ydk::is_set(link_mis_align_error.yfilter)
	|| ydk::is_set(link_code_group_error.yfilter)
	|| ydk::is_set(link_no_sig_lock_error.yfilter)
	|| ydk::is_set(link_no_sig_accept_error.yfilter)
	|| ydk::is_set(link_tokens_error.yfilter)
	|| ydk::is_set(error_token_count.yfilter);
}

std::string Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::Statistics::DataIdx::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "data_idx";
    ADD_KEY_TOKEN(port_data_idx, "port_data_idx");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::Statistics::DataIdx::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port_data_idx.is_set || is_set(port_data_idx.yfilter)) leaf_name_data.push_back(port_data_idx.get_name_leafdata());
    if (rack_num.is_set || is_set(rack_num.yfilter)) leaf_name_data.push_back(rack_num.get_name_leafdata());
    if (sfe_port.is_set || is_set(sfe_port.yfilter)) leaf_name_data.push_back(sfe_port.get_name_leafdata());
    if (tx_control_cells_counter.is_set || is_set(tx_control_cells_counter.yfilter)) leaf_name_data.push_back(tx_control_cells_counter.get_name_leafdata());
    if (tx_data_cell_counter.is_set || is_set(tx_data_cell_counter.yfilter)) leaf_name_data.push_back(tx_data_cell_counter.get_name_leafdata());
    if (tx_data_byte_counter.is_set || is_set(tx_data_byte_counter.yfilter)) leaf_name_data.push_back(tx_data_byte_counter.get_name_leafdata());
    if (rx_crc_errors_counter.is_set || is_set(rx_crc_errors_counter.yfilter)) leaf_name_data.push_back(rx_crc_errors_counter.get_name_leafdata());
    if (rx_lfec_fec_correctable_error.is_set || is_set(rx_lfec_fec_correctable_error.yfilter)) leaf_name_data.push_back(rx_lfec_fec_correctable_error.get_name_leafdata());
    if (rx_8b_10b_disparity_errors.is_set || is_set(rx_8b_10b_disparity_errors.yfilter)) leaf_name_data.push_back(rx_8b_10b_disparity_errors.get_name_leafdata());
    if (rx_control_cells_counter.is_set || is_set(rx_control_cells_counter.yfilter)) leaf_name_data.push_back(rx_control_cells_counter.get_name_leafdata());
    if (rx_data_cell_counter.is_set || is_set(rx_data_cell_counter.yfilter)) leaf_name_data.push_back(rx_data_cell_counter.get_name_leafdata());
    if (rx_data_byte_counter.is_set || is_set(rx_data_byte_counter.yfilter)) leaf_name_data.push_back(rx_data_byte_counter.get_name_leafdata());
    if (rx_dropped_retransmitted_control.is_set || is_set(rx_dropped_retransmitted_control.yfilter)) leaf_name_data.push_back(rx_dropped_retransmitted_control.get_name_leafdata());
    if (tx_asyn_fifo_rate.is_set || is_set(tx_asyn_fifo_rate.yfilter)) leaf_name_data.push_back(tx_asyn_fifo_rate.get_name_leafdata());
    if (rx_asyn_fifo_rate.is_set || is_set(rx_asyn_fifo_rate.yfilter)) leaf_name_data.push_back(rx_asyn_fifo_rate.get_name_leafdata());
    if (rx_lfec_fec_uncorrectable_errors.is_set || is_set(rx_lfec_fec_uncorrectable_errors.yfilter)) leaf_name_data.push_back(rx_lfec_fec_uncorrectable_errors.get_name_leafdata());
    if (rx_8b_10b_code_errors.is_set || is_set(rx_8b_10b_code_errors.yfilter)) leaf_name_data.push_back(rx_8b_10b_code_errors.get_name_leafdata());
    if (is_link_error.is_set || is_set(is_link_error.yfilter)) leaf_name_data.push_back(is_link_error.get_name_leafdata());
    if (link_crc_error.is_set || is_set(link_crc_error.yfilter)) leaf_name_data.push_back(link_crc_error.get_name_leafdata());
    if (link_size_error.is_set || is_set(link_size_error.yfilter)) leaf_name_data.push_back(link_size_error.get_name_leafdata());
    if (link_mis_align_error.is_set || is_set(link_mis_align_error.yfilter)) leaf_name_data.push_back(link_mis_align_error.get_name_leafdata());
    if (link_code_group_error.is_set || is_set(link_code_group_error.yfilter)) leaf_name_data.push_back(link_code_group_error.get_name_leafdata());
    if (link_no_sig_lock_error.is_set || is_set(link_no_sig_lock_error.yfilter)) leaf_name_data.push_back(link_no_sig_lock_error.get_name_leafdata());
    if (link_no_sig_accept_error.is_set || is_set(link_no_sig_accept_error.yfilter)) leaf_name_data.push_back(link_no_sig_accept_error.get_name_leafdata());
    if (link_tokens_error.is_set || is_set(link_tokens_error.yfilter)) leaf_name_data.push_back(link_tokens_error.get_name_leafdata());
    if (error_token_count.is_set || is_set(error_token_count.yfilter)) leaf_name_data.push_back(error_token_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::Statistics::DataIdx::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::Statistics::DataIdx::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::Statistics::DataIdx::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "port_data_idx")
    {
        port_data_idx = value;
        port_data_idx.value_namespace = name_space;
        port_data_idx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rack_num")
    {
        rack_num = value;
        rack_num.value_namespace = name_space;
        rack_num.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sfe_port")
    {
        sfe_port = value;
        sfe_port.value_namespace = name_space;
        sfe_port.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "RX_8b_10b_disparity_errors")
    {
        rx_8b_10b_disparity_errors = value;
        rx_8b_10b_disparity_errors.value_namespace = name_space;
        rx_8b_10b_disparity_errors.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "RX_dropped_retransmitted_control")
    {
        rx_dropped_retransmitted_control = value;
        rx_dropped_retransmitted_control.value_namespace = name_space;
        rx_dropped_retransmitted_control.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "TX_Asyn_fifo_rate")
    {
        tx_asyn_fifo_rate = value;
        tx_asyn_fifo_rate.value_namespace = name_space;
        tx_asyn_fifo_rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "RX_Asyn_fifo_rate")
    {
        rx_asyn_fifo_rate = value;
        rx_asyn_fifo_rate.value_namespace = name_space;
        rx_asyn_fifo_rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "RX_LFEC_FEC_uncorrectable_errors")
    {
        rx_lfec_fec_uncorrectable_errors = value;
        rx_lfec_fec_uncorrectable_errors.value_namespace = name_space;
        rx_lfec_fec_uncorrectable_errors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "RX_8b_10b_code_errors")
    {
        rx_8b_10b_code_errors = value;
        rx_8b_10b_code_errors.value_namespace = name_space;
        rx_8b_10b_code_errors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is_link_error")
    {
        is_link_error = value;
        is_link_error.value_namespace = name_space;
        is_link_error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link_crc_error")
    {
        link_crc_error = value;
        link_crc_error.value_namespace = name_space;
        link_crc_error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link_size_error")
    {
        link_size_error = value;
        link_size_error.value_namespace = name_space;
        link_size_error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link_mis_align_error")
    {
        link_mis_align_error = value;
        link_mis_align_error.value_namespace = name_space;
        link_mis_align_error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link_code_group_error")
    {
        link_code_group_error = value;
        link_code_group_error.value_namespace = name_space;
        link_code_group_error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link_no_sig_lock_error")
    {
        link_no_sig_lock_error = value;
        link_no_sig_lock_error.value_namespace = name_space;
        link_no_sig_lock_error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link_no_sig_accept_error")
    {
        link_no_sig_accept_error = value;
        link_no_sig_accept_error.value_namespace = name_space;
        link_no_sig_accept_error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link_tokens_error")
    {
        link_tokens_error = value;
        link_tokens_error.value_namespace = name_space;
        link_tokens_error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "error_token_count")
    {
        error_token_count = value;
        error_token_count.value_namespace = name_space;
        error_token_count.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::Statistics::DataIdx::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "port_data_idx")
    {
        port_data_idx.yfilter = yfilter;
    }
    if(value_path == "rack_num")
    {
        rack_num.yfilter = yfilter;
    }
    if(value_path == "sfe_port")
    {
        sfe_port.yfilter = yfilter;
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
    if(value_path == "RX_CRC_errors_counter")
    {
        rx_crc_errors_counter.yfilter = yfilter;
    }
    if(value_path == "RX_LFEC_FEC_correctable_error")
    {
        rx_lfec_fec_correctable_error.yfilter = yfilter;
    }
    if(value_path == "RX_8b_10b_disparity_errors")
    {
        rx_8b_10b_disparity_errors.yfilter = yfilter;
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
    if(value_path == "RX_dropped_retransmitted_control")
    {
        rx_dropped_retransmitted_control.yfilter = yfilter;
    }
    if(value_path == "TX_Asyn_fifo_rate")
    {
        tx_asyn_fifo_rate.yfilter = yfilter;
    }
    if(value_path == "RX_Asyn_fifo_rate")
    {
        rx_asyn_fifo_rate.yfilter = yfilter;
    }
    if(value_path == "RX_LFEC_FEC_uncorrectable_errors")
    {
        rx_lfec_fec_uncorrectable_errors.yfilter = yfilter;
    }
    if(value_path == "RX_8b_10b_code_errors")
    {
        rx_8b_10b_code_errors.yfilter = yfilter;
    }
    if(value_path == "is_link_error")
    {
        is_link_error.yfilter = yfilter;
    }
    if(value_path == "link_crc_error")
    {
        link_crc_error.yfilter = yfilter;
    }
    if(value_path == "link_size_error")
    {
        link_size_error.yfilter = yfilter;
    }
    if(value_path == "link_mis_align_error")
    {
        link_mis_align_error.yfilter = yfilter;
    }
    if(value_path == "link_code_group_error")
    {
        link_code_group_error.yfilter = yfilter;
    }
    if(value_path == "link_no_sig_lock_error")
    {
        link_no_sig_lock_error.yfilter = yfilter;
    }
    if(value_path == "link_no_sig_accept_error")
    {
        link_no_sig_accept_error.yfilter = yfilter;
    }
    if(value_path == "link_tokens_error")
    {
        link_tokens_error.yfilter = yfilter;
    }
    if(value_path == "error_token_count")
    {
        error_token_count.yfilter = yfilter;
    }
}

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::Statistics::DataIdx::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "port_data_idx" || name == "rack_num" || name == "sfe_port" || name == "TX_Control_cells_counter" || name == "TX_Data_cell_counter" || name == "TX_Data_byte_counter" || name == "RX_CRC_errors_counter" || name == "RX_LFEC_FEC_correctable_error" || name == "RX_8b_10b_disparity_errors" || name == "RX_Control_cells_counter" || name == "RX_Data_cell_counter" || name == "RX_Data_byte_counter" || name == "RX_dropped_retransmitted_control" || name == "TX_Asyn_fifo_rate" || name == "RX_Asyn_fifo_rate" || name == "RX_LFEC_FEC_uncorrectable_errors" || name == "RX_8b_10b_code_errors" || name == "is_link_error" || name == "link_crc_error" || name == "link_size_error" || name == "link_mis_align_error" || name == "link_code_group_error" || name == "link_no_sig_lock_error" || name == "link_no_sig_accept_error" || name == "link_tokens_error" || name == "error_token_count")
        return true;
    return false;
}

Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::Statistics::Brief::Brief()
    :
    data_idx(this, {"port_data_idx"})
{

    yang_name = "brief"; yang_parent_name = "statistics"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::Statistics::Brief::~Brief()
{
}

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::Statistics::Brief::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<data_idx.len(); index++)
    {
        if(data_idx[index]->has_data())
            return true;
    }
    return false;
}

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::Statistics::Brief::has_operation() const
{
    for (std::size_t index=0; index<data_idx.len(); index++)
    {
        if(data_idx[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::Statistics::Brief::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "brief";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::Statistics::Brief::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::Statistics::Brief::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "data_idx")
    {
        auto ent_ = std::make_shared<Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::Statistics::Brief::DataIdx>();
        ent_->parent = this;
        data_idx.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::Statistics::Brief::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : data_idx.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::Statistics::Brief::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::Statistics::Brief::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::Statistics::Brief::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data_idx")
        return true;
    return false;
}

Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::Statistics::Brief::DataIdx::DataIdx()
    :
    port_data_idx{YType::int64, "port_data_idx"},
    rack_num{YType::str, "rack_num"},
    sfe_port{YType::str, "sfe_port"},
    tx_control_cells_counter{YType::uint64, "TX_Control_cells_counter"},
    tx_data_cell_counter{YType::uint64, "TX_Data_cell_counter"},
    tx_data_byte_counter{YType::uint64, "TX_Data_byte_counter"},
    rx_crc_errors_counter{YType::uint64, "RX_CRC_errors_counter"},
    rx_lfec_fec_correctable_error{YType::uint64, "RX_LFEC_FEC_correctable_error"},
    rx_8b_10b_disparity_errors{YType::uint64, "RX_8b_10b_disparity_errors"},
    rx_control_cells_counter{YType::uint64, "RX_Control_cells_counter"},
    rx_data_cell_counter{YType::uint64, "RX_Data_cell_counter"},
    rx_data_byte_counter{YType::uint64, "RX_Data_byte_counter"},
    rx_dropped_retransmitted_control{YType::uint64, "RX_dropped_retransmitted_control"},
    tx_asyn_fifo_rate{YType::uint64, "TX_Asyn_fifo_rate"},
    rx_asyn_fifo_rate{YType::uint64, "RX_Asyn_fifo_rate"},
    rx_lfec_fec_uncorrectable_errors{YType::uint64, "RX_LFEC_FEC_uncorrectable_errors"},
    rx_8b_10b_code_errors{YType::uint64, "RX_8b_10b_code_errors"},
    is_link_error{YType::boolean, "is_link_error"},
    link_crc_error{YType::uint32, "link_crc_error"},
    link_size_error{YType::uint32, "link_size_error"},
    link_mis_align_error{YType::uint32, "link_mis_align_error"},
    link_code_group_error{YType::uint32, "link_code_group_error"},
    link_no_sig_lock_error{YType::uint32, "link_no_sig_lock_error"},
    link_no_sig_accept_error{YType::uint32, "link_no_sig_accept_error"},
    link_tokens_error{YType::uint32, "link_tokens_error"},
    error_token_count{YType::uint32, "error_token_count"}
{

    yang_name = "data_idx"; yang_parent_name = "brief"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::Statistics::Brief::DataIdx::~DataIdx()
{
}

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::Statistics::Brief::DataIdx::has_data() const
{
    if (is_presence_container) return true;
    return port_data_idx.is_set
	|| rack_num.is_set
	|| sfe_port.is_set
	|| tx_control_cells_counter.is_set
	|| tx_data_cell_counter.is_set
	|| tx_data_byte_counter.is_set
	|| rx_crc_errors_counter.is_set
	|| rx_lfec_fec_correctable_error.is_set
	|| rx_8b_10b_disparity_errors.is_set
	|| rx_control_cells_counter.is_set
	|| rx_data_cell_counter.is_set
	|| rx_data_byte_counter.is_set
	|| rx_dropped_retransmitted_control.is_set
	|| tx_asyn_fifo_rate.is_set
	|| rx_asyn_fifo_rate.is_set
	|| rx_lfec_fec_uncorrectable_errors.is_set
	|| rx_8b_10b_code_errors.is_set
	|| is_link_error.is_set
	|| link_crc_error.is_set
	|| link_size_error.is_set
	|| link_mis_align_error.is_set
	|| link_code_group_error.is_set
	|| link_no_sig_lock_error.is_set
	|| link_no_sig_accept_error.is_set
	|| link_tokens_error.is_set
	|| error_token_count.is_set;
}

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::Statistics::Brief::DataIdx::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(port_data_idx.yfilter)
	|| ydk::is_set(rack_num.yfilter)
	|| ydk::is_set(sfe_port.yfilter)
	|| ydk::is_set(tx_control_cells_counter.yfilter)
	|| ydk::is_set(tx_data_cell_counter.yfilter)
	|| ydk::is_set(tx_data_byte_counter.yfilter)
	|| ydk::is_set(rx_crc_errors_counter.yfilter)
	|| ydk::is_set(rx_lfec_fec_correctable_error.yfilter)
	|| ydk::is_set(rx_8b_10b_disparity_errors.yfilter)
	|| ydk::is_set(rx_control_cells_counter.yfilter)
	|| ydk::is_set(rx_data_cell_counter.yfilter)
	|| ydk::is_set(rx_data_byte_counter.yfilter)
	|| ydk::is_set(rx_dropped_retransmitted_control.yfilter)
	|| ydk::is_set(tx_asyn_fifo_rate.yfilter)
	|| ydk::is_set(rx_asyn_fifo_rate.yfilter)
	|| ydk::is_set(rx_lfec_fec_uncorrectable_errors.yfilter)
	|| ydk::is_set(rx_8b_10b_code_errors.yfilter)
	|| ydk::is_set(is_link_error.yfilter)
	|| ydk::is_set(link_crc_error.yfilter)
	|| ydk::is_set(link_size_error.yfilter)
	|| ydk::is_set(link_mis_align_error.yfilter)
	|| ydk::is_set(link_code_group_error.yfilter)
	|| ydk::is_set(link_no_sig_lock_error.yfilter)
	|| ydk::is_set(link_no_sig_accept_error.yfilter)
	|| ydk::is_set(link_tokens_error.yfilter)
	|| ydk::is_set(error_token_count.yfilter);
}

std::string Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::Statistics::Brief::DataIdx::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "data_idx";
    ADD_KEY_TOKEN(port_data_idx, "port_data_idx");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::Statistics::Brief::DataIdx::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port_data_idx.is_set || is_set(port_data_idx.yfilter)) leaf_name_data.push_back(port_data_idx.get_name_leafdata());
    if (rack_num.is_set || is_set(rack_num.yfilter)) leaf_name_data.push_back(rack_num.get_name_leafdata());
    if (sfe_port.is_set || is_set(sfe_port.yfilter)) leaf_name_data.push_back(sfe_port.get_name_leafdata());
    if (tx_control_cells_counter.is_set || is_set(tx_control_cells_counter.yfilter)) leaf_name_data.push_back(tx_control_cells_counter.get_name_leafdata());
    if (tx_data_cell_counter.is_set || is_set(tx_data_cell_counter.yfilter)) leaf_name_data.push_back(tx_data_cell_counter.get_name_leafdata());
    if (tx_data_byte_counter.is_set || is_set(tx_data_byte_counter.yfilter)) leaf_name_data.push_back(tx_data_byte_counter.get_name_leafdata());
    if (rx_crc_errors_counter.is_set || is_set(rx_crc_errors_counter.yfilter)) leaf_name_data.push_back(rx_crc_errors_counter.get_name_leafdata());
    if (rx_lfec_fec_correctable_error.is_set || is_set(rx_lfec_fec_correctable_error.yfilter)) leaf_name_data.push_back(rx_lfec_fec_correctable_error.get_name_leafdata());
    if (rx_8b_10b_disparity_errors.is_set || is_set(rx_8b_10b_disparity_errors.yfilter)) leaf_name_data.push_back(rx_8b_10b_disparity_errors.get_name_leafdata());
    if (rx_control_cells_counter.is_set || is_set(rx_control_cells_counter.yfilter)) leaf_name_data.push_back(rx_control_cells_counter.get_name_leafdata());
    if (rx_data_cell_counter.is_set || is_set(rx_data_cell_counter.yfilter)) leaf_name_data.push_back(rx_data_cell_counter.get_name_leafdata());
    if (rx_data_byte_counter.is_set || is_set(rx_data_byte_counter.yfilter)) leaf_name_data.push_back(rx_data_byte_counter.get_name_leafdata());
    if (rx_dropped_retransmitted_control.is_set || is_set(rx_dropped_retransmitted_control.yfilter)) leaf_name_data.push_back(rx_dropped_retransmitted_control.get_name_leafdata());
    if (tx_asyn_fifo_rate.is_set || is_set(tx_asyn_fifo_rate.yfilter)) leaf_name_data.push_back(tx_asyn_fifo_rate.get_name_leafdata());
    if (rx_asyn_fifo_rate.is_set || is_set(rx_asyn_fifo_rate.yfilter)) leaf_name_data.push_back(rx_asyn_fifo_rate.get_name_leafdata());
    if (rx_lfec_fec_uncorrectable_errors.is_set || is_set(rx_lfec_fec_uncorrectable_errors.yfilter)) leaf_name_data.push_back(rx_lfec_fec_uncorrectable_errors.get_name_leafdata());
    if (rx_8b_10b_code_errors.is_set || is_set(rx_8b_10b_code_errors.yfilter)) leaf_name_data.push_back(rx_8b_10b_code_errors.get_name_leafdata());
    if (is_link_error.is_set || is_set(is_link_error.yfilter)) leaf_name_data.push_back(is_link_error.get_name_leafdata());
    if (link_crc_error.is_set || is_set(link_crc_error.yfilter)) leaf_name_data.push_back(link_crc_error.get_name_leafdata());
    if (link_size_error.is_set || is_set(link_size_error.yfilter)) leaf_name_data.push_back(link_size_error.get_name_leafdata());
    if (link_mis_align_error.is_set || is_set(link_mis_align_error.yfilter)) leaf_name_data.push_back(link_mis_align_error.get_name_leafdata());
    if (link_code_group_error.is_set || is_set(link_code_group_error.yfilter)) leaf_name_data.push_back(link_code_group_error.get_name_leafdata());
    if (link_no_sig_lock_error.is_set || is_set(link_no_sig_lock_error.yfilter)) leaf_name_data.push_back(link_no_sig_lock_error.get_name_leafdata());
    if (link_no_sig_accept_error.is_set || is_set(link_no_sig_accept_error.yfilter)) leaf_name_data.push_back(link_no_sig_accept_error.get_name_leafdata());
    if (link_tokens_error.is_set || is_set(link_tokens_error.yfilter)) leaf_name_data.push_back(link_tokens_error.get_name_leafdata());
    if (error_token_count.is_set || is_set(error_token_count.yfilter)) leaf_name_data.push_back(error_token_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::Statistics::Brief::DataIdx::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::Statistics::Brief::DataIdx::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::Statistics::Brief::DataIdx::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "port_data_idx")
    {
        port_data_idx = value;
        port_data_idx.value_namespace = name_space;
        port_data_idx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rack_num")
    {
        rack_num = value;
        rack_num.value_namespace = name_space;
        rack_num.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sfe_port")
    {
        sfe_port = value;
        sfe_port.value_namespace = name_space;
        sfe_port.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "RX_8b_10b_disparity_errors")
    {
        rx_8b_10b_disparity_errors = value;
        rx_8b_10b_disparity_errors.value_namespace = name_space;
        rx_8b_10b_disparity_errors.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "RX_dropped_retransmitted_control")
    {
        rx_dropped_retransmitted_control = value;
        rx_dropped_retransmitted_control.value_namespace = name_space;
        rx_dropped_retransmitted_control.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "TX_Asyn_fifo_rate")
    {
        tx_asyn_fifo_rate = value;
        tx_asyn_fifo_rate.value_namespace = name_space;
        tx_asyn_fifo_rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "RX_Asyn_fifo_rate")
    {
        rx_asyn_fifo_rate = value;
        rx_asyn_fifo_rate.value_namespace = name_space;
        rx_asyn_fifo_rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "RX_LFEC_FEC_uncorrectable_errors")
    {
        rx_lfec_fec_uncorrectable_errors = value;
        rx_lfec_fec_uncorrectable_errors.value_namespace = name_space;
        rx_lfec_fec_uncorrectable_errors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "RX_8b_10b_code_errors")
    {
        rx_8b_10b_code_errors = value;
        rx_8b_10b_code_errors.value_namespace = name_space;
        rx_8b_10b_code_errors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is_link_error")
    {
        is_link_error = value;
        is_link_error.value_namespace = name_space;
        is_link_error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link_crc_error")
    {
        link_crc_error = value;
        link_crc_error.value_namespace = name_space;
        link_crc_error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link_size_error")
    {
        link_size_error = value;
        link_size_error.value_namespace = name_space;
        link_size_error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link_mis_align_error")
    {
        link_mis_align_error = value;
        link_mis_align_error.value_namespace = name_space;
        link_mis_align_error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link_code_group_error")
    {
        link_code_group_error = value;
        link_code_group_error.value_namespace = name_space;
        link_code_group_error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link_no_sig_lock_error")
    {
        link_no_sig_lock_error = value;
        link_no_sig_lock_error.value_namespace = name_space;
        link_no_sig_lock_error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link_no_sig_accept_error")
    {
        link_no_sig_accept_error = value;
        link_no_sig_accept_error.value_namespace = name_space;
        link_no_sig_accept_error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link_tokens_error")
    {
        link_tokens_error = value;
        link_tokens_error.value_namespace = name_space;
        link_tokens_error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "error_token_count")
    {
        error_token_count = value;
        error_token_count.value_namespace = name_space;
        error_token_count.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::Statistics::Brief::DataIdx::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "port_data_idx")
    {
        port_data_idx.yfilter = yfilter;
    }
    if(value_path == "rack_num")
    {
        rack_num.yfilter = yfilter;
    }
    if(value_path == "sfe_port")
    {
        sfe_port.yfilter = yfilter;
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
    if(value_path == "RX_CRC_errors_counter")
    {
        rx_crc_errors_counter.yfilter = yfilter;
    }
    if(value_path == "RX_LFEC_FEC_correctable_error")
    {
        rx_lfec_fec_correctable_error.yfilter = yfilter;
    }
    if(value_path == "RX_8b_10b_disparity_errors")
    {
        rx_8b_10b_disparity_errors.yfilter = yfilter;
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
    if(value_path == "RX_dropped_retransmitted_control")
    {
        rx_dropped_retransmitted_control.yfilter = yfilter;
    }
    if(value_path == "TX_Asyn_fifo_rate")
    {
        tx_asyn_fifo_rate.yfilter = yfilter;
    }
    if(value_path == "RX_Asyn_fifo_rate")
    {
        rx_asyn_fifo_rate.yfilter = yfilter;
    }
    if(value_path == "RX_LFEC_FEC_uncorrectable_errors")
    {
        rx_lfec_fec_uncorrectable_errors.yfilter = yfilter;
    }
    if(value_path == "RX_8b_10b_code_errors")
    {
        rx_8b_10b_code_errors.yfilter = yfilter;
    }
    if(value_path == "is_link_error")
    {
        is_link_error.yfilter = yfilter;
    }
    if(value_path == "link_crc_error")
    {
        link_crc_error.yfilter = yfilter;
    }
    if(value_path == "link_size_error")
    {
        link_size_error.yfilter = yfilter;
    }
    if(value_path == "link_mis_align_error")
    {
        link_mis_align_error.yfilter = yfilter;
    }
    if(value_path == "link_code_group_error")
    {
        link_code_group_error.yfilter = yfilter;
    }
    if(value_path == "link_no_sig_lock_error")
    {
        link_no_sig_lock_error.yfilter = yfilter;
    }
    if(value_path == "link_no_sig_accept_error")
    {
        link_no_sig_accept_error.yfilter = yfilter;
    }
    if(value_path == "link_tokens_error")
    {
        link_tokens_error.yfilter = yfilter;
    }
    if(value_path == "error_token_count")
    {
        error_token_count.yfilter = yfilter;
    }
}

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::Statistics::Brief::DataIdx::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "port_data_idx" || name == "rack_num" || name == "sfe_port" || name == "TX_Control_cells_counter" || name == "TX_Data_cell_counter" || name == "TX_Data_byte_counter" || name == "RX_CRC_errors_counter" || name == "RX_LFEC_FEC_correctable_error" || name == "RX_8b_10b_disparity_errors" || name == "RX_Control_cells_counter" || name == "RX_Data_cell_counter" || name == "RX_Data_byte_counter" || name == "RX_dropped_retransmitted_control" || name == "TX_Asyn_fifo_rate" || name == "RX_Asyn_fifo_rate" || name == "RX_LFEC_FEC_uncorrectable_errors" || name == "RX_8b_10b_code_errors" || name == "is_link_error" || name == "link_crc_error" || name == "link_size_error" || name == "link_mis_align_error" || name == "link_code_group_error" || name == "link_no_sig_lock_error" || name == "link_no_sig_accept_error" || name == "link_tokens_error" || name == "error_token_count")
        return true;
    return false;
}

Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::Statistics::Detail::Detail()
    :
    data_idx(this, {"port_data_idx"})
{

    yang_name = "detail"; yang_parent_name = "statistics"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::Statistics::Detail::~Detail()
{
}

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::Statistics::Detail::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<data_idx.len(); index++)
    {
        if(data_idx[index]->has_data())
            return true;
    }
    return false;
}

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::Statistics::Detail::has_operation() const
{
    for (std::size_t index=0; index<data_idx.len(); index++)
    {
        if(data_idx[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::Statistics::Detail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "detail";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::Statistics::Detail::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::Statistics::Detail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "data_idx")
    {
        auto ent_ = std::make_shared<Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::Statistics::Detail::DataIdx>();
        ent_->parent = this;
        data_idx.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::Statistics::Detail::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : data_idx.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::Statistics::Detail::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::Statistics::Detail::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::Statistics::Detail::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data_idx")
        return true;
    return false;
}

Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::Statistics::Detail::DataIdx::DataIdx()
    :
    port_data_idx{YType::int64, "port_data_idx"},
    rack_num{YType::str, "rack_num"},
    sfe_port{YType::str, "sfe_port"},
    tx_control_cells_counter{YType::uint64, "TX_Control_cells_counter"},
    tx_data_cell_counter{YType::uint64, "TX_Data_cell_counter"},
    tx_data_byte_counter{YType::uint64, "TX_Data_byte_counter"},
    rx_crc_errors_counter{YType::uint64, "RX_CRC_errors_counter"},
    rx_lfec_fec_correctable_error{YType::uint64, "RX_LFEC_FEC_correctable_error"},
    rx_8b_10b_disparity_errors{YType::uint64, "RX_8b_10b_disparity_errors"},
    rx_control_cells_counter{YType::uint64, "RX_Control_cells_counter"},
    rx_data_cell_counter{YType::uint64, "RX_Data_cell_counter"},
    rx_data_byte_counter{YType::uint64, "RX_Data_byte_counter"},
    rx_dropped_retransmitted_control{YType::uint64, "RX_dropped_retransmitted_control"},
    tx_asyn_fifo_rate{YType::uint64, "TX_Asyn_fifo_rate"},
    rx_asyn_fifo_rate{YType::uint64, "RX_Asyn_fifo_rate"},
    rx_lfec_fec_uncorrectable_errors{YType::uint64, "RX_LFEC_FEC_uncorrectable_errors"},
    rx_8b_10b_code_errors{YType::uint64, "RX_8b_10b_code_errors"},
    is_link_error{YType::boolean, "is_link_error"},
    link_crc_error{YType::uint32, "link_crc_error"},
    link_size_error{YType::uint32, "link_size_error"},
    link_mis_align_error{YType::uint32, "link_mis_align_error"},
    link_code_group_error{YType::uint32, "link_code_group_error"},
    link_no_sig_lock_error{YType::uint32, "link_no_sig_lock_error"},
    link_no_sig_accept_error{YType::uint32, "link_no_sig_accept_error"},
    link_tokens_error{YType::uint32, "link_tokens_error"},
    error_token_count{YType::uint32, "error_token_count"}
{

    yang_name = "data_idx"; yang_parent_name = "detail"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::Statistics::Detail::DataIdx::~DataIdx()
{
}

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::Statistics::Detail::DataIdx::has_data() const
{
    if (is_presence_container) return true;
    return port_data_idx.is_set
	|| rack_num.is_set
	|| sfe_port.is_set
	|| tx_control_cells_counter.is_set
	|| tx_data_cell_counter.is_set
	|| tx_data_byte_counter.is_set
	|| rx_crc_errors_counter.is_set
	|| rx_lfec_fec_correctable_error.is_set
	|| rx_8b_10b_disparity_errors.is_set
	|| rx_control_cells_counter.is_set
	|| rx_data_cell_counter.is_set
	|| rx_data_byte_counter.is_set
	|| rx_dropped_retransmitted_control.is_set
	|| tx_asyn_fifo_rate.is_set
	|| rx_asyn_fifo_rate.is_set
	|| rx_lfec_fec_uncorrectable_errors.is_set
	|| rx_8b_10b_code_errors.is_set
	|| is_link_error.is_set
	|| link_crc_error.is_set
	|| link_size_error.is_set
	|| link_mis_align_error.is_set
	|| link_code_group_error.is_set
	|| link_no_sig_lock_error.is_set
	|| link_no_sig_accept_error.is_set
	|| link_tokens_error.is_set
	|| error_token_count.is_set;
}

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::Statistics::Detail::DataIdx::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(port_data_idx.yfilter)
	|| ydk::is_set(rack_num.yfilter)
	|| ydk::is_set(sfe_port.yfilter)
	|| ydk::is_set(tx_control_cells_counter.yfilter)
	|| ydk::is_set(tx_data_cell_counter.yfilter)
	|| ydk::is_set(tx_data_byte_counter.yfilter)
	|| ydk::is_set(rx_crc_errors_counter.yfilter)
	|| ydk::is_set(rx_lfec_fec_correctable_error.yfilter)
	|| ydk::is_set(rx_8b_10b_disparity_errors.yfilter)
	|| ydk::is_set(rx_control_cells_counter.yfilter)
	|| ydk::is_set(rx_data_cell_counter.yfilter)
	|| ydk::is_set(rx_data_byte_counter.yfilter)
	|| ydk::is_set(rx_dropped_retransmitted_control.yfilter)
	|| ydk::is_set(tx_asyn_fifo_rate.yfilter)
	|| ydk::is_set(rx_asyn_fifo_rate.yfilter)
	|| ydk::is_set(rx_lfec_fec_uncorrectable_errors.yfilter)
	|| ydk::is_set(rx_8b_10b_code_errors.yfilter)
	|| ydk::is_set(is_link_error.yfilter)
	|| ydk::is_set(link_crc_error.yfilter)
	|| ydk::is_set(link_size_error.yfilter)
	|| ydk::is_set(link_mis_align_error.yfilter)
	|| ydk::is_set(link_code_group_error.yfilter)
	|| ydk::is_set(link_no_sig_lock_error.yfilter)
	|| ydk::is_set(link_no_sig_accept_error.yfilter)
	|| ydk::is_set(link_tokens_error.yfilter)
	|| ydk::is_set(error_token_count.yfilter);
}

std::string Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::Statistics::Detail::DataIdx::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "data_idx";
    ADD_KEY_TOKEN(port_data_idx, "port_data_idx");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::Statistics::Detail::DataIdx::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port_data_idx.is_set || is_set(port_data_idx.yfilter)) leaf_name_data.push_back(port_data_idx.get_name_leafdata());
    if (rack_num.is_set || is_set(rack_num.yfilter)) leaf_name_data.push_back(rack_num.get_name_leafdata());
    if (sfe_port.is_set || is_set(sfe_port.yfilter)) leaf_name_data.push_back(sfe_port.get_name_leafdata());
    if (tx_control_cells_counter.is_set || is_set(tx_control_cells_counter.yfilter)) leaf_name_data.push_back(tx_control_cells_counter.get_name_leafdata());
    if (tx_data_cell_counter.is_set || is_set(tx_data_cell_counter.yfilter)) leaf_name_data.push_back(tx_data_cell_counter.get_name_leafdata());
    if (tx_data_byte_counter.is_set || is_set(tx_data_byte_counter.yfilter)) leaf_name_data.push_back(tx_data_byte_counter.get_name_leafdata());
    if (rx_crc_errors_counter.is_set || is_set(rx_crc_errors_counter.yfilter)) leaf_name_data.push_back(rx_crc_errors_counter.get_name_leafdata());
    if (rx_lfec_fec_correctable_error.is_set || is_set(rx_lfec_fec_correctable_error.yfilter)) leaf_name_data.push_back(rx_lfec_fec_correctable_error.get_name_leafdata());
    if (rx_8b_10b_disparity_errors.is_set || is_set(rx_8b_10b_disparity_errors.yfilter)) leaf_name_data.push_back(rx_8b_10b_disparity_errors.get_name_leafdata());
    if (rx_control_cells_counter.is_set || is_set(rx_control_cells_counter.yfilter)) leaf_name_data.push_back(rx_control_cells_counter.get_name_leafdata());
    if (rx_data_cell_counter.is_set || is_set(rx_data_cell_counter.yfilter)) leaf_name_data.push_back(rx_data_cell_counter.get_name_leafdata());
    if (rx_data_byte_counter.is_set || is_set(rx_data_byte_counter.yfilter)) leaf_name_data.push_back(rx_data_byte_counter.get_name_leafdata());
    if (rx_dropped_retransmitted_control.is_set || is_set(rx_dropped_retransmitted_control.yfilter)) leaf_name_data.push_back(rx_dropped_retransmitted_control.get_name_leafdata());
    if (tx_asyn_fifo_rate.is_set || is_set(tx_asyn_fifo_rate.yfilter)) leaf_name_data.push_back(tx_asyn_fifo_rate.get_name_leafdata());
    if (rx_asyn_fifo_rate.is_set || is_set(rx_asyn_fifo_rate.yfilter)) leaf_name_data.push_back(rx_asyn_fifo_rate.get_name_leafdata());
    if (rx_lfec_fec_uncorrectable_errors.is_set || is_set(rx_lfec_fec_uncorrectable_errors.yfilter)) leaf_name_data.push_back(rx_lfec_fec_uncorrectable_errors.get_name_leafdata());
    if (rx_8b_10b_code_errors.is_set || is_set(rx_8b_10b_code_errors.yfilter)) leaf_name_data.push_back(rx_8b_10b_code_errors.get_name_leafdata());
    if (is_link_error.is_set || is_set(is_link_error.yfilter)) leaf_name_data.push_back(is_link_error.get_name_leafdata());
    if (link_crc_error.is_set || is_set(link_crc_error.yfilter)) leaf_name_data.push_back(link_crc_error.get_name_leafdata());
    if (link_size_error.is_set || is_set(link_size_error.yfilter)) leaf_name_data.push_back(link_size_error.get_name_leafdata());
    if (link_mis_align_error.is_set || is_set(link_mis_align_error.yfilter)) leaf_name_data.push_back(link_mis_align_error.get_name_leafdata());
    if (link_code_group_error.is_set || is_set(link_code_group_error.yfilter)) leaf_name_data.push_back(link_code_group_error.get_name_leafdata());
    if (link_no_sig_lock_error.is_set || is_set(link_no_sig_lock_error.yfilter)) leaf_name_data.push_back(link_no_sig_lock_error.get_name_leafdata());
    if (link_no_sig_accept_error.is_set || is_set(link_no_sig_accept_error.yfilter)) leaf_name_data.push_back(link_no_sig_accept_error.get_name_leafdata());
    if (link_tokens_error.is_set || is_set(link_tokens_error.yfilter)) leaf_name_data.push_back(link_tokens_error.get_name_leafdata());
    if (error_token_count.is_set || is_set(error_token_count.yfilter)) leaf_name_data.push_back(error_token_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::Statistics::Detail::DataIdx::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::Statistics::Detail::DataIdx::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::Statistics::Detail::DataIdx::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "port_data_idx")
    {
        port_data_idx = value;
        port_data_idx.value_namespace = name_space;
        port_data_idx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rack_num")
    {
        rack_num = value;
        rack_num.value_namespace = name_space;
        rack_num.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sfe_port")
    {
        sfe_port = value;
        sfe_port.value_namespace = name_space;
        sfe_port.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "RX_8b_10b_disparity_errors")
    {
        rx_8b_10b_disparity_errors = value;
        rx_8b_10b_disparity_errors.value_namespace = name_space;
        rx_8b_10b_disparity_errors.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "RX_dropped_retransmitted_control")
    {
        rx_dropped_retransmitted_control = value;
        rx_dropped_retransmitted_control.value_namespace = name_space;
        rx_dropped_retransmitted_control.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "TX_Asyn_fifo_rate")
    {
        tx_asyn_fifo_rate = value;
        tx_asyn_fifo_rate.value_namespace = name_space;
        tx_asyn_fifo_rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "RX_Asyn_fifo_rate")
    {
        rx_asyn_fifo_rate = value;
        rx_asyn_fifo_rate.value_namespace = name_space;
        rx_asyn_fifo_rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "RX_LFEC_FEC_uncorrectable_errors")
    {
        rx_lfec_fec_uncorrectable_errors = value;
        rx_lfec_fec_uncorrectable_errors.value_namespace = name_space;
        rx_lfec_fec_uncorrectable_errors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "RX_8b_10b_code_errors")
    {
        rx_8b_10b_code_errors = value;
        rx_8b_10b_code_errors.value_namespace = name_space;
        rx_8b_10b_code_errors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is_link_error")
    {
        is_link_error = value;
        is_link_error.value_namespace = name_space;
        is_link_error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link_crc_error")
    {
        link_crc_error = value;
        link_crc_error.value_namespace = name_space;
        link_crc_error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link_size_error")
    {
        link_size_error = value;
        link_size_error.value_namespace = name_space;
        link_size_error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link_mis_align_error")
    {
        link_mis_align_error = value;
        link_mis_align_error.value_namespace = name_space;
        link_mis_align_error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link_code_group_error")
    {
        link_code_group_error = value;
        link_code_group_error.value_namespace = name_space;
        link_code_group_error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link_no_sig_lock_error")
    {
        link_no_sig_lock_error = value;
        link_no_sig_lock_error.value_namespace = name_space;
        link_no_sig_lock_error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link_no_sig_accept_error")
    {
        link_no_sig_accept_error = value;
        link_no_sig_accept_error.value_namespace = name_space;
        link_no_sig_accept_error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link_tokens_error")
    {
        link_tokens_error = value;
        link_tokens_error.value_namespace = name_space;
        link_tokens_error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "error_token_count")
    {
        error_token_count = value;
        error_token_count.value_namespace = name_space;
        error_token_count.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::Statistics::Detail::DataIdx::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "port_data_idx")
    {
        port_data_idx.yfilter = yfilter;
    }
    if(value_path == "rack_num")
    {
        rack_num.yfilter = yfilter;
    }
    if(value_path == "sfe_port")
    {
        sfe_port.yfilter = yfilter;
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
    if(value_path == "RX_CRC_errors_counter")
    {
        rx_crc_errors_counter.yfilter = yfilter;
    }
    if(value_path == "RX_LFEC_FEC_correctable_error")
    {
        rx_lfec_fec_correctable_error.yfilter = yfilter;
    }
    if(value_path == "RX_8b_10b_disparity_errors")
    {
        rx_8b_10b_disparity_errors.yfilter = yfilter;
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
    if(value_path == "RX_dropped_retransmitted_control")
    {
        rx_dropped_retransmitted_control.yfilter = yfilter;
    }
    if(value_path == "TX_Asyn_fifo_rate")
    {
        tx_asyn_fifo_rate.yfilter = yfilter;
    }
    if(value_path == "RX_Asyn_fifo_rate")
    {
        rx_asyn_fifo_rate.yfilter = yfilter;
    }
    if(value_path == "RX_LFEC_FEC_uncorrectable_errors")
    {
        rx_lfec_fec_uncorrectable_errors.yfilter = yfilter;
    }
    if(value_path == "RX_8b_10b_code_errors")
    {
        rx_8b_10b_code_errors.yfilter = yfilter;
    }
    if(value_path == "is_link_error")
    {
        is_link_error.yfilter = yfilter;
    }
    if(value_path == "link_crc_error")
    {
        link_crc_error.yfilter = yfilter;
    }
    if(value_path == "link_size_error")
    {
        link_size_error.yfilter = yfilter;
    }
    if(value_path == "link_mis_align_error")
    {
        link_mis_align_error.yfilter = yfilter;
    }
    if(value_path == "link_code_group_error")
    {
        link_code_group_error.yfilter = yfilter;
    }
    if(value_path == "link_no_sig_lock_error")
    {
        link_no_sig_lock_error.yfilter = yfilter;
    }
    if(value_path == "link_no_sig_accept_error")
    {
        link_no_sig_accept_error.yfilter = yfilter;
    }
    if(value_path == "link_tokens_error")
    {
        link_tokens_error.yfilter = yfilter;
    }
    if(value_path == "error_token_count")
    {
        error_token_count.yfilter = yfilter;
    }
}

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::Statistics::Detail::DataIdx::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "port_data_idx" || name == "rack_num" || name == "sfe_port" || name == "TX_Control_cells_counter" || name == "TX_Data_cell_counter" || name == "TX_Data_byte_counter" || name == "RX_CRC_errors_counter" || name == "RX_LFEC_FEC_correctable_error" || name == "RX_8b_10b_disparity_errors" || name == "RX_Control_cells_counter" || name == "RX_Data_cell_counter" || name == "RX_Data_byte_counter" || name == "RX_dropped_retransmitted_control" || name == "TX_Asyn_fifo_rate" || name == "RX_Asyn_fifo_rate" || name == "RX_LFEC_FEC_uncorrectable_errors" || name == "RX_8b_10b_code_errors" || name == "is_link_error" || name == "link_crc_error" || name == "link_size_error" || name == "link_mis_align_error" || name == "link_code_group_error" || name == "link_no_sig_lock_error" || name == "link_no_sig_accept_error" || name == "link_tokens_error" || name == "error_token_count")
        return true;
    return false;
}

Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::Tx()
    :
    data_idx(this, {"port_data_idx"})
    , brief(std::make_shared<Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::Brief>())
    , detail(std::make_shared<Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::Detail>())
    , state(std::make_shared<Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::State>())
    , statistics(std::make_shared<Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::Statistics>())
{
    brief->parent = this;
    detail->parent = this;
    state->parent = this;
    statistics->parent = this;

    yang_name = "tx"; yang_parent_name = "port"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::~Tx()
{
}

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<data_idx.len(); index++)
    {
        if(data_idx[index]->has_data())
            return true;
    }
    return (brief !=  nullptr && brief->has_data())
	|| (detail !=  nullptr && detail->has_data())
	|| (state !=  nullptr && state->has_data())
	|| (statistics !=  nullptr && statistics->has_data());
}

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::has_operation() const
{
    for (std::size_t index=0; index<data_idx.len(); index++)
    {
        if(data_idx[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (brief !=  nullptr && brief->has_operation())
	|| (detail !=  nullptr && detail->has_operation())
	|| (state !=  nullptr && state->has_operation())
	|| (statistics !=  nullptr && statistics->has_operation());
}

std::string Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tx";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "data_idx")
    {
        auto ent_ = std::make_shared<Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::DataIdx>();
        ent_->parent = this;
        data_idx.append(ent_);
        return ent_;
    }

    if(child_yang_name == "brief")
    {
        if(brief == nullptr)
        {
            brief = std::make_shared<Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::Brief>();
        }
        return brief;
    }

    if(child_yang_name == "detail")
    {
        if(detail == nullptr)
        {
            detail = std::make_shared<Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::Detail>();
        }
        return detail;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::State>();
        }
        return state;
    }

    if(child_yang_name == "statistics")
    {
        if(statistics == nullptr)
        {
            statistics = std::make_shared<Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::Statistics>();
        }
        return statistics;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : data_idx.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    if(brief != nullptr)
    {
        _children["brief"] = brief;
    }

    if(detail != nullptr)
    {
        _children["detail"] = detail;
    }

    if(state != nullptr)
    {
        _children["state"] = state;
    }

    if(statistics != nullptr)
    {
        _children["statistics"] = statistics;
    }

    return _children;
}

void Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data_idx" || name == "brief" || name == "detail" || name == "state" || name == "statistics")
        return true;
    return false;
}

Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::DataIdx::DataIdx()
    :
    port_data_idx{YType::int64, "port_data_idx"},
    sfe_port{YType::str, "sfe_port"},
    admin_state{YType::str, "admin-state"},
    oper_state{YType::str, "oper_state"},
    near_end_cdr_ln{YType::str, "near_end_cdr_ln"},
    near_end_cxp_ch{YType::str, "near_end_cxp_ch"},
    far_end_cxp_ch{YType::str, "far_end_cxp_ch"},
    far_end_cdr_ln{YType::str, "far_end_cdr_ln"},
    neighbor_link{YType::str, "neighbor_link"}
        ,
    history(this, {"history_idx"})
{

    yang_name = "data_idx"; yang_parent_name = "tx"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::DataIdx::~DataIdx()
{
}

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::DataIdx::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<history.len(); index++)
    {
        if(history[index]->has_data())
            return true;
    }
    return port_data_idx.is_set
	|| sfe_port.is_set
	|| admin_state.is_set
	|| oper_state.is_set
	|| near_end_cdr_ln.is_set
	|| near_end_cxp_ch.is_set
	|| far_end_cxp_ch.is_set
	|| far_end_cdr_ln.is_set
	|| neighbor_link.is_set;
}

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::DataIdx::has_operation() const
{
    for (std::size_t index=0; index<history.len(); index++)
    {
        if(history[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(port_data_idx.yfilter)
	|| ydk::is_set(sfe_port.yfilter)
	|| ydk::is_set(admin_state.yfilter)
	|| ydk::is_set(oper_state.yfilter)
	|| ydk::is_set(near_end_cdr_ln.yfilter)
	|| ydk::is_set(near_end_cxp_ch.yfilter)
	|| ydk::is_set(far_end_cxp_ch.yfilter)
	|| ydk::is_set(far_end_cdr_ln.yfilter)
	|| ydk::is_set(neighbor_link.yfilter);
}

std::string Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::DataIdx::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "data_idx";
    ADD_KEY_TOKEN(port_data_idx, "port_data_idx");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::DataIdx::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port_data_idx.is_set || is_set(port_data_idx.yfilter)) leaf_name_data.push_back(port_data_idx.get_name_leafdata());
    if (sfe_port.is_set || is_set(sfe_port.yfilter)) leaf_name_data.push_back(sfe_port.get_name_leafdata());
    if (admin_state.is_set || is_set(admin_state.yfilter)) leaf_name_data.push_back(admin_state.get_name_leafdata());
    if (oper_state.is_set || is_set(oper_state.yfilter)) leaf_name_data.push_back(oper_state.get_name_leafdata());
    if (near_end_cdr_ln.is_set || is_set(near_end_cdr_ln.yfilter)) leaf_name_data.push_back(near_end_cdr_ln.get_name_leafdata());
    if (near_end_cxp_ch.is_set || is_set(near_end_cxp_ch.yfilter)) leaf_name_data.push_back(near_end_cxp_ch.get_name_leafdata());
    if (far_end_cxp_ch.is_set || is_set(far_end_cxp_ch.yfilter)) leaf_name_data.push_back(far_end_cxp_ch.get_name_leafdata());
    if (far_end_cdr_ln.is_set || is_set(far_end_cdr_ln.yfilter)) leaf_name_data.push_back(far_end_cdr_ln.get_name_leafdata());
    if (neighbor_link.is_set || is_set(neighbor_link.yfilter)) leaf_name_data.push_back(neighbor_link.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::DataIdx::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "history")
    {
        auto ent_ = std::make_shared<Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::DataIdx::History>();
        ent_->parent = this;
        history.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::DataIdx::get_children() const
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

void Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::DataIdx::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "port_data_idx")
    {
        port_data_idx = value;
        port_data_idx.value_namespace = name_space;
        port_data_idx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sfe_port")
    {
        sfe_port = value;
        sfe_port.value_namespace = name_space;
        sfe_port.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "near_end_cdr_ln")
    {
        near_end_cdr_ln = value;
        near_end_cdr_ln.value_namespace = name_space;
        near_end_cdr_ln.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "near_end_cxp_ch")
    {
        near_end_cxp_ch = value;
        near_end_cxp_ch.value_namespace = name_space;
        near_end_cxp_ch.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "far_end_cxp_ch")
    {
        far_end_cxp_ch = value;
        far_end_cxp_ch.value_namespace = name_space;
        far_end_cxp_ch.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "far_end_cdr_ln")
    {
        far_end_cdr_ln = value;
        far_end_cdr_ln.value_namespace = name_space;
        far_end_cdr_ln.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor_link")
    {
        neighbor_link = value;
        neighbor_link.value_namespace = name_space;
        neighbor_link.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::DataIdx::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "port_data_idx")
    {
        port_data_idx.yfilter = yfilter;
    }
    if(value_path == "sfe_port")
    {
        sfe_port.yfilter = yfilter;
    }
    if(value_path == "admin-state")
    {
        admin_state.yfilter = yfilter;
    }
    if(value_path == "oper_state")
    {
        oper_state.yfilter = yfilter;
    }
    if(value_path == "near_end_cdr_ln")
    {
        near_end_cdr_ln.yfilter = yfilter;
    }
    if(value_path == "near_end_cxp_ch")
    {
        near_end_cxp_ch.yfilter = yfilter;
    }
    if(value_path == "far_end_cxp_ch")
    {
        far_end_cxp_ch.yfilter = yfilter;
    }
    if(value_path == "far_end_cdr_ln")
    {
        far_end_cdr_ln.yfilter = yfilter;
    }
    if(value_path == "neighbor_link")
    {
        neighbor_link.yfilter = yfilter;
    }
}

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::DataIdx::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "history" || name == "port_data_idx" || name == "sfe_port" || name == "admin-state" || name == "oper_state" || name == "near_end_cdr_ln" || name == "near_end_cxp_ch" || name == "far_end_cxp_ch" || name == "far_end_cdr_ln" || name == "neighbor_link")
        return true;
    return false;
}

Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::DataIdx::History::History()
    :
    history_idx{YType::int32, "history_idx"},
    time_stamp{YType::str, "time_stamp"},
    admin_state{YType::str, "admin-state"},
    oper_state{YType::str, "oper_state"},
    error_state{YType::str, "error_state"}
{

    yang_name = "history"; yang_parent_name = "data_idx"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::DataIdx::History::~History()
{
}

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::DataIdx::History::has_data() const
{
    if (is_presence_container) return true;
    return history_idx.is_set
	|| time_stamp.is_set
	|| admin_state.is_set
	|| oper_state.is_set
	|| error_state.is_set;
}

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::DataIdx::History::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(history_idx.yfilter)
	|| ydk::is_set(time_stamp.yfilter)
	|| ydk::is_set(admin_state.yfilter)
	|| ydk::is_set(oper_state.yfilter)
	|| ydk::is_set(error_state.yfilter);
}

std::string Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::DataIdx::History::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "history";
    ADD_KEY_TOKEN(history_idx, "history_idx");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::DataIdx::History::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (history_idx.is_set || is_set(history_idx.yfilter)) leaf_name_data.push_back(history_idx.get_name_leafdata());
    if (time_stamp.is_set || is_set(time_stamp.yfilter)) leaf_name_data.push_back(time_stamp.get_name_leafdata());
    if (admin_state.is_set || is_set(admin_state.yfilter)) leaf_name_data.push_back(admin_state.get_name_leafdata());
    if (oper_state.is_set || is_set(oper_state.yfilter)) leaf_name_data.push_back(oper_state.get_name_leafdata());
    if (error_state.is_set || is_set(error_state.yfilter)) leaf_name_data.push_back(error_state.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::DataIdx::History::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::DataIdx::History::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::DataIdx::History::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
}

void Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::DataIdx::History::set_filter(const std::string & value_path, YFilter yfilter)
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
}

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::DataIdx::History::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "history_idx" || name == "time_stamp" || name == "admin-state" || name == "oper_state" || name == "error_state")
        return true;
    return false;
}

Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::Brief::Brief()
    :
    data_idx(this, {"port_data_idx"})
{

    yang_name = "brief"; yang_parent_name = "tx"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::Brief::~Brief()
{
}

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::Brief::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<data_idx.len(); index++)
    {
        if(data_idx[index]->has_data())
            return true;
    }
    return false;
}

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::Brief::has_operation() const
{
    for (std::size_t index=0; index<data_idx.len(); index++)
    {
        if(data_idx[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::Brief::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "brief";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::Brief::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::Brief::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "data_idx")
    {
        auto ent_ = std::make_shared<Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::Brief::DataIdx>();
        ent_->parent = this;
        data_idx.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::Brief::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : data_idx.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::Brief::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::Brief::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::Brief::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data_idx")
        return true;
    return false;
}

Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::Brief::DataIdx::DataIdx()
    :
    port_data_idx{YType::int64, "port_data_idx"},
    sfe_port{YType::str, "sfe_port"},
    admin_state{YType::str, "admin-state"},
    oper_state{YType::str, "oper_state"},
    near_end_cdr_ln{YType::str, "near_end_cdr_ln"},
    near_end_cxp_ch{YType::str, "near_end_cxp_ch"},
    far_end_cxp_ch{YType::str, "far_end_cxp_ch"},
    far_end_cdr_ln{YType::str, "far_end_cdr_ln"},
    neighbor_link{YType::str, "neighbor_link"}
        ,
    history(this, {"history_idx"})
{

    yang_name = "data_idx"; yang_parent_name = "brief"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::Brief::DataIdx::~DataIdx()
{
}

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::Brief::DataIdx::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<history.len(); index++)
    {
        if(history[index]->has_data())
            return true;
    }
    return port_data_idx.is_set
	|| sfe_port.is_set
	|| admin_state.is_set
	|| oper_state.is_set
	|| near_end_cdr_ln.is_set
	|| near_end_cxp_ch.is_set
	|| far_end_cxp_ch.is_set
	|| far_end_cdr_ln.is_set
	|| neighbor_link.is_set;
}

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::Brief::DataIdx::has_operation() const
{
    for (std::size_t index=0; index<history.len(); index++)
    {
        if(history[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(port_data_idx.yfilter)
	|| ydk::is_set(sfe_port.yfilter)
	|| ydk::is_set(admin_state.yfilter)
	|| ydk::is_set(oper_state.yfilter)
	|| ydk::is_set(near_end_cdr_ln.yfilter)
	|| ydk::is_set(near_end_cxp_ch.yfilter)
	|| ydk::is_set(far_end_cxp_ch.yfilter)
	|| ydk::is_set(far_end_cdr_ln.yfilter)
	|| ydk::is_set(neighbor_link.yfilter);
}

std::string Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::Brief::DataIdx::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "data_idx";
    ADD_KEY_TOKEN(port_data_idx, "port_data_idx");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::Brief::DataIdx::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port_data_idx.is_set || is_set(port_data_idx.yfilter)) leaf_name_data.push_back(port_data_idx.get_name_leafdata());
    if (sfe_port.is_set || is_set(sfe_port.yfilter)) leaf_name_data.push_back(sfe_port.get_name_leafdata());
    if (admin_state.is_set || is_set(admin_state.yfilter)) leaf_name_data.push_back(admin_state.get_name_leafdata());
    if (oper_state.is_set || is_set(oper_state.yfilter)) leaf_name_data.push_back(oper_state.get_name_leafdata());
    if (near_end_cdr_ln.is_set || is_set(near_end_cdr_ln.yfilter)) leaf_name_data.push_back(near_end_cdr_ln.get_name_leafdata());
    if (near_end_cxp_ch.is_set || is_set(near_end_cxp_ch.yfilter)) leaf_name_data.push_back(near_end_cxp_ch.get_name_leafdata());
    if (far_end_cxp_ch.is_set || is_set(far_end_cxp_ch.yfilter)) leaf_name_data.push_back(far_end_cxp_ch.get_name_leafdata());
    if (far_end_cdr_ln.is_set || is_set(far_end_cdr_ln.yfilter)) leaf_name_data.push_back(far_end_cdr_ln.get_name_leafdata());
    if (neighbor_link.is_set || is_set(neighbor_link.yfilter)) leaf_name_data.push_back(neighbor_link.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::Brief::DataIdx::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "history")
    {
        auto ent_ = std::make_shared<Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::Brief::DataIdx::History>();
        ent_->parent = this;
        history.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::Brief::DataIdx::get_children() const
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

void Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::Brief::DataIdx::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "port_data_idx")
    {
        port_data_idx = value;
        port_data_idx.value_namespace = name_space;
        port_data_idx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sfe_port")
    {
        sfe_port = value;
        sfe_port.value_namespace = name_space;
        sfe_port.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "near_end_cdr_ln")
    {
        near_end_cdr_ln = value;
        near_end_cdr_ln.value_namespace = name_space;
        near_end_cdr_ln.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "near_end_cxp_ch")
    {
        near_end_cxp_ch = value;
        near_end_cxp_ch.value_namespace = name_space;
        near_end_cxp_ch.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "far_end_cxp_ch")
    {
        far_end_cxp_ch = value;
        far_end_cxp_ch.value_namespace = name_space;
        far_end_cxp_ch.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "far_end_cdr_ln")
    {
        far_end_cdr_ln = value;
        far_end_cdr_ln.value_namespace = name_space;
        far_end_cdr_ln.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor_link")
    {
        neighbor_link = value;
        neighbor_link.value_namespace = name_space;
        neighbor_link.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::Brief::DataIdx::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "port_data_idx")
    {
        port_data_idx.yfilter = yfilter;
    }
    if(value_path == "sfe_port")
    {
        sfe_port.yfilter = yfilter;
    }
    if(value_path == "admin-state")
    {
        admin_state.yfilter = yfilter;
    }
    if(value_path == "oper_state")
    {
        oper_state.yfilter = yfilter;
    }
    if(value_path == "near_end_cdr_ln")
    {
        near_end_cdr_ln.yfilter = yfilter;
    }
    if(value_path == "near_end_cxp_ch")
    {
        near_end_cxp_ch.yfilter = yfilter;
    }
    if(value_path == "far_end_cxp_ch")
    {
        far_end_cxp_ch.yfilter = yfilter;
    }
    if(value_path == "far_end_cdr_ln")
    {
        far_end_cdr_ln.yfilter = yfilter;
    }
    if(value_path == "neighbor_link")
    {
        neighbor_link.yfilter = yfilter;
    }
}

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::Brief::DataIdx::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "history" || name == "port_data_idx" || name == "sfe_port" || name == "admin-state" || name == "oper_state" || name == "near_end_cdr_ln" || name == "near_end_cxp_ch" || name == "far_end_cxp_ch" || name == "far_end_cdr_ln" || name == "neighbor_link")
        return true;
    return false;
}

Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::Brief::DataIdx::History::History()
    :
    history_idx{YType::int32, "history_idx"},
    time_stamp{YType::str, "time_stamp"},
    admin_state{YType::str, "admin-state"},
    oper_state{YType::str, "oper_state"},
    error_state{YType::str, "error_state"}
{

    yang_name = "history"; yang_parent_name = "data_idx"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::Brief::DataIdx::History::~History()
{
}

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::Brief::DataIdx::History::has_data() const
{
    if (is_presence_container) return true;
    return history_idx.is_set
	|| time_stamp.is_set
	|| admin_state.is_set
	|| oper_state.is_set
	|| error_state.is_set;
}

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::Brief::DataIdx::History::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(history_idx.yfilter)
	|| ydk::is_set(time_stamp.yfilter)
	|| ydk::is_set(admin_state.yfilter)
	|| ydk::is_set(oper_state.yfilter)
	|| ydk::is_set(error_state.yfilter);
}

std::string Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::Brief::DataIdx::History::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "history";
    ADD_KEY_TOKEN(history_idx, "history_idx");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::Brief::DataIdx::History::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (history_idx.is_set || is_set(history_idx.yfilter)) leaf_name_data.push_back(history_idx.get_name_leafdata());
    if (time_stamp.is_set || is_set(time_stamp.yfilter)) leaf_name_data.push_back(time_stamp.get_name_leafdata());
    if (admin_state.is_set || is_set(admin_state.yfilter)) leaf_name_data.push_back(admin_state.get_name_leafdata());
    if (oper_state.is_set || is_set(oper_state.yfilter)) leaf_name_data.push_back(oper_state.get_name_leafdata());
    if (error_state.is_set || is_set(error_state.yfilter)) leaf_name_data.push_back(error_state.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::Brief::DataIdx::History::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::Brief::DataIdx::History::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::Brief::DataIdx::History::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
}

void Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::Brief::DataIdx::History::set_filter(const std::string & value_path, YFilter yfilter)
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
}

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::Brief::DataIdx::History::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "history_idx" || name == "time_stamp" || name == "admin-state" || name == "oper_state" || name == "error_state")
        return true;
    return false;
}

Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::Detail::Detail()
    :
    data_idx(this, {"port_data_idx"})
{

    yang_name = "detail"; yang_parent_name = "tx"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::Detail::~Detail()
{
}

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::Detail::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<data_idx.len(); index++)
    {
        if(data_idx[index]->has_data())
            return true;
    }
    return false;
}

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::Detail::has_operation() const
{
    for (std::size_t index=0; index<data_idx.len(); index++)
    {
        if(data_idx[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::Detail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "detail";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::Detail::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::Detail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "data_idx")
    {
        auto ent_ = std::make_shared<Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::Detail::DataIdx>();
        ent_->parent = this;
        data_idx.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::Detail::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : data_idx.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::Detail::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::Detail::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::Detail::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data_idx")
        return true;
    return false;
}

Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::Detail::DataIdx::DataIdx()
    :
    port_data_idx{YType::int64, "port_data_idx"},
    sfe_port{YType::str, "sfe_port"},
    admin_state{YType::str, "admin-state"},
    oper_state{YType::str, "oper_state"},
    near_end_cdr_ln{YType::str, "near_end_cdr_ln"},
    near_end_cxp_ch{YType::str, "near_end_cxp_ch"},
    far_end_cxp_ch{YType::str, "far_end_cxp_ch"},
    far_end_cdr_ln{YType::str, "far_end_cdr_ln"},
    neighbor_link{YType::str, "neighbor_link"}
        ,
    history(this, {"history_idx"})
{

    yang_name = "data_idx"; yang_parent_name = "detail"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::Detail::DataIdx::~DataIdx()
{
}

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::Detail::DataIdx::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<history.len(); index++)
    {
        if(history[index]->has_data())
            return true;
    }
    return port_data_idx.is_set
	|| sfe_port.is_set
	|| admin_state.is_set
	|| oper_state.is_set
	|| near_end_cdr_ln.is_set
	|| near_end_cxp_ch.is_set
	|| far_end_cxp_ch.is_set
	|| far_end_cdr_ln.is_set
	|| neighbor_link.is_set;
}

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::Detail::DataIdx::has_operation() const
{
    for (std::size_t index=0; index<history.len(); index++)
    {
        if(history[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(port_data_idx.yfilter)
	|| ydk::is_set(sfe_port.yfilter)
	|| ydk::is_set(admin_state.yfilter)
	|| ydk::is_set(oper_state.yfilter)
	|| ydk::is_set(near_end_cdr_ln.yfilter)
	|| ydk::is_set(near_end_cxp_ch.yfilter)
	|| ydk::is_set(far_end_cxp_ch.yfilter)
	|| ydk::is_set(far_end_cdr_ln.yfilter)
	|| ydk::is_set(neighbor_link.yfilter);
}

std::string Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::Detail::DataIdx::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "data_idx";
    ADD_KEY_TOKEN(port_data_idx, "port_data_idx");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::Detail::DataIdx::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port_data_idx.is_set || is_set(port_data_idx.yfilter)) leaf_name_data.push_back(port_data_idx.get_name_leafdata());
    if (sfe_port.is_set || is_set(sfe_port.yfilter)) leaf_name_data.push_back(sfe_port.get_name_leafdata());
    if (admin_state.is_set || is_set(admin_state.yfilter)) leaf_name_data.push_back(admin_state.get_name_leafdata());
    if (oper_state.is_set || is_set(oper_state.yfilter)) leaf_name_data.push_back(oper_state.get_name_leafdata());
    if (near_end_cdr_ln.is_set || is_set(near_end_cdr_ln.yfilter)) leaf_name_data.push_back(near_end_cdr_ln.get_name_leafdata());
    if (near_end_cxp_ch.is_set || is_set(near_end_cxp_ch.yfilter)) leaf_name_data.push_back(near_end_cxp_ch.get_name_leafdata());
    if (far_end_cxp_ch.is_set || is_set(far_end_cxp_ch.yfilter)) leaf_name_data.push_back(far_end_cxp_ch.get_name_leafdata());
    if (far_end_cdr_ln.is_set || is_set(far_end_cdr_ln.yfilter)) leaf_name_data.push_back(far_end_cdr_ln.get_name_leafdata());
    if (neighbor_link.is_set || is_set(neighbor_link.yfilter)) leaf_name_data.push_back(neighbor_link.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::Detail::DataIdx::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "history")
    {
        auto ent_ = std::make_shared<Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::Detail::DataIdx::History>();
        ent_->parent = this;
        history.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::Detail::DataIdx::get_children() const
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

void Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::Detail::DataIdx::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "port_data_idx")
    {
        port_data_idx = value;
        port_data_idx.value_namespace = name_space;
        port_data_idx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sfe_port")
    {
        sfe_port = value;
        sfe_port.value_namespace = name_space;
        sfe_port.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "near_end_cdr_ln")
    {
        near_end_cdr_ln = value;
        near_end_cdr_ln.value_namespace = name_space;
        near_end_cdr_ln.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "near_end_cxp_ch")
    {
        near_end_cxp_ch = value;
        near_end_cxp_ch.value_namespace = name_space;
        near_end_cxp_ch.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "far_end_cxp_ch")
    {
        far_end_cxp_ch = value;
        far_end_cxp_ch.value_namespace = name_space;
        far_end_cxp_ch.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "far_end_cdr_ln")
    {
        far_end_cdr_ln = value;
        far_end_cdr_ln.value_namespace = name_space;
        far_end_cdr_ln.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor_link")
    {
        neighbor_link = value;
        neighbor_link.value_namespace = name_space;
        neighbor_link.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::Detail::DataIdx::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "port_data_idx")
    {
        port_data_idx.yfilter = yfilter;
    }
    if(value_path == "sfe_port")
    {
        sfe_port.yfilter = yfilter;
    }
    if(value_path == "admin-state")
    {
        admin_state.yfilter = yfilter;
    }
    if(value_path == "oper_state")
    {
        oper_state.yfilter = yfilter;
    }
    if(value_path == "near_end_cdr_ln")
    {
        near_end_cdr_ln.yfilter = yfilter;
    }
    if(value_path == "near_end_cxp_ch")
    {
        near_end_cxp_ch.yfilter = yfilter;
    }
    if(value_path == "far_end_cxp_ch")
    {
        far_end_cxp_ch.yfilter = yfilter;
    }
    if(value_path == "far_end_cdr_ln")
    {
        far_end_cdr_ln.yfilter = yfilter;
    }
    if(value_path == "neighbor_link")
    {
        neighbor_link.yfilter = yfilter;
    }
}

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::Detail::DataIdx::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "history" || name == "port_data_idx" || name == "sfe_port" || name == "admin-state" || name == "oper_state" || name == "near_end_cdr_ln" || name == "near_end_cxp_ch" || name == "far_end_cxp_ch" || name == "far_end_cdr_ln" || name == "neighbor_link")
        return true;
    return false;
}

Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::Detail::DataIdx::History::History()
    :
    history_idx{YType::int32, "history_idx"},
    time_stamp{YType::str, "time_stamp"},
    admin_state{YType::str, "admin-state"},
    oper_state{YType::str, "oper_state"},
    error_state{YType::str, "error_state"}
{

    yang_name = "history"; yang_parent_name = "data_idx"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::Detail::DataIdx::History::~History()
{
}

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::Detail::DataIdx::History::has_data() const
{
    if (is_presence_container) return true;
    return history_idx.is_set
	|| time_stamp.is_set
	|| admin_state.is_set
	|| oper_state.is_set
	|| error_state.is_set;
}

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::Detail::DataIdx::History::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(history_idx.yfilter)
	|| ydk::is_set(time_stamp.yfilter)
	|| ydk::is_set(admin_state.yfilter)
	|| ydk::is_set(oper_state.yfilter)
	|| ydk::is_set(error_state.yfilter);
}

std::string Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::Detail::DataIdx::History::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "history";
    ADD_KEY_TOKEN(history_idx, "history_idx");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::Detail::DataIdx::History::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (history_idx.is_set || is_set(history_idx.yfilter)) leaf_name_data.push_back(history_idx.get_name_leafdata());
    if (time_stamp.is_set || is_set(time_stamp.yfilter)) leaf_name_data.push_back(time_stamp.get_name_leafdata());
    if (admin_state.is_set || is_set(admin_state.yfilter)) leaf_name_data.push_back(admin_state.get_name_leafdata());
    if (oper_state.is_set || is_set(oper_state.yfilter)) leaf_name_data.push_back(oper_state.get_name_leafdata());
    if (error_state.is_set || is_set(error_state.yfilter)) leaf_name_data.push_back(error_state.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::Detail::DataIdx::History::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::Detail::DataIdx::History::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::Detail::DataIdx::History::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
}

void Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::Detail::DataIdx::History::set_filter(const std::string & value_path, YFilter yfilter)
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
}

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::Detail::DataIdx::History::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "history_idx" || name == "time_stamp" || name == "admin-state" || name == "oper_state" || name == "error_state")
        return true;
    return false;
}

Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::State::State()
    :
    up(std::make_shared<Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::State::Up>())
    , down(std::make_shared<Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::State::Down>())
    , mismatch(std::make_shared<Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::State::Mismatch>())
{
    up->parent = this;
    down->parent = this;
    mismatch->parent = this;

    yang_name = "state"; yang_parent_name = "tx"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::State::~State()
{
}

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::State::has_data() const
{
    if (is_presence_container) return true;
    return (up !=  nullptr && up->has_data())
	|| (down !=  nullptr && down->has_data())
	|| (mismatch !=  nullptr && mismatch->has_data());
}

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::State::has_operation() const
{
    return is_set(yfilter)
	|| (up !=  nullptr && up->has_operation())
	|| (down !=  nullptr && down->has_operation())
	|| (mismatch !=  nullptr && mismatch->has_operation());
}

std::string Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "up")
    {
        if(up == nullptr)
        {
            up = std::make_shared<Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::State::Up>();
        }
        return up;
    }

    if(child_yang_name == "down")
    {
        if(down == nullptr)
        {
            down = std::make_shared<Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::State::Down>();
        }
        return down;
    }

    if(child_yang_name == "mismatch")
    {
        if(mismatch == nullptr)
        {
            mismatch = std::make_shared<Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::State::Mismatch>();
        }
        return mismatch;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::State::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(up != nullptr)
    {
        _children["up"] = up;
    }

    if(down != nullptr)
    {
        _children["down"] = down;
    }

    if(mismatch != nullptr)
    {
        _children["mismatch"] = mismatch;
    }

    return _children;
}

void Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::State::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "up" || name == "down" || name == "mismatch")
        return true;
    return false;
}

Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::State::Up::Up()
    :
    data_idx(this, {"port_data_idx"})
    , brief(std::make_shared<Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::State::Up::Brief>())
    , detail(std::make_shared<Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::State::Up::Detail>())
{
    brief->parent = this;
    detail->parent = this;

    yang_name = "up"; yang_parent_name = "state"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::State::Up::~Up()
{
}

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::State::Up::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<data_idx.len(); index++)
    {
        if(data_idx[index]->has_data())
            return true;
    }
    return (brief !=  nullptr && brief->has_data())
	|| (detail !=  nullptr && detail->has_data());
}

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::State::Up::has_operation() const
{
    for (std::size_t index=0; index<data_idx.len(); index++)
    {
        if(data_idx[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (brief !=  nullptr && brief->has_operation())
	|| (detail !=  nullptr && detail->has_operation());
}

std::string Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::State::Up::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "up";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::State::Up::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::State::Up::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "data_idx")
    {
        auto ent_ = std::make_shared<Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::State::Up::DataIdx>();
        ent_->parent = this;
        data_idx.append(ent_);
        return ent_;
    }

    if(child_yang_name == "brief")
    {
        if(brief == nullptr)
        {
            brief = std::make_shared<Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::State::Up::Brief>();
        }
        return brief;
    }

    if(child_yang_name == "detail")
    {
        if(detail == nullptr)
        {
            detail = std::make_shared<Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::State::Up::Detail>();
        }
        return detail;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::State::Up::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : data_idx.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

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

void Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::State::Up::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::State::Up::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::State::Up::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data_idx" || name == "brief" || name == "detail")
        return true;
    return false;
}

Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::State::Up::DataIdx::DataIdx()
    :
    port_data_idx{YType::int64, "port_data_idx"},
    sfe_port{YType::str, "sfe_port"},
    admin_state{YType::str, "admin-state"},
    oper_state{YType::str, "oper_state"},
    near_end_cdr_ln{YType::str, "near_end_cdr_ln"},
    near_end_cxp_ch{YType::str, "near_end_cxp_ch"},
    far_end_cxp_ch{YType::str, "far_end_cxp_ch"},
    far_end_cdr_ln{YType::str, "far_end_cdr_ln"},
    neighbor_link{YType::str, "neighbor_link"}
        ,
    history(this, {"history_idx"})
{

    yang_name = "data_idx"; yang_parent_name = "up"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::State::Up::DataIdx::~DataIdx()
{
}

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::State::Up::DataIdx::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<history.len(); index++)
    {
        if(history[index]->has_data())
            return true;
    }
    return port_data_idx.is_set
	|| sfe_port.is_set
	|| admin_state.is_set
	|| oper_state.is_set
	|| near_end_cdr_ln.is_set
	|| near_end_cxp_ch.is_set
	|| far_end_cxp_ch.is_set
	|| far_end_cdr_ln.is_set
	|| neighbor_link.is_set;
}

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::State::Up::DataIdx::has_operation() const
{
    for (std::size_t index=0; index<history.len(); index++)
    {
        if(history[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(port_data_idx.yfilter)
	|| ydk::is_set(sfe_port.yfilter)
	|| ydk::is_set(admin_state.yfilter)
	|| ydk::is_set(oper_state.yfilter)
	|| ydk::is_set(near_end_cdr_ln.yfilter)
	|| ydk::is_set(near_end_cxp_ch.yfilter)
	|| ydk::is_set(far_end_cxp_ch.yfilter)
	|| ydk::is_set(far_end_cdr_ln.yfilter)
	|| ydk::is_set(neighbor_link.yfilter);
}

std::string Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::State::Up::DataIdx::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "data_idx";
    ADD_KEY_TOKEN(port_data_idx, "port_data_idx");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::State::Up::DataIdx::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port_data_idx.is_set || is_set(port_data_idx.yfilter)) leaf_name_data.push_back(port_data_idx.get_name_leafdata());
    if (sfe_port.is_set || is_set(sfe_port.yfilter)) leaf_name_data.push_back(sfe_port.get_name_leafdata());
    if (admin_state.is_set || is_set(admin_state.yfilter)) leaf_name_data.push_back(admin_state.get_name_leafdata());
    if (oper_state.is_set || is_set(oper_state.yfilter)) leaf_name_data.push_back(oper_state.get_name_leafdata());
    if (near_end_cdr_ln.is_set || is_set(near_end_cdr_ln.yfilter)) leaf_name_data.push_back(near_end_cdr_ln.get_name_leafdata());
    if (near_end_cxp_ch.is_set || is_set(near_end_cxp_ch.yfilter)) leaf_name_data.push_back(near_end_cxp_ch.get_name_leafdata());
    if (far_end_cxp_ch.is_set || is_set(far_end_cxp_ch.yfilter)) leaf_name_data.push_back(far_end_cxp_ch.get_name_leafdata());
    if (far_end_cdr_ln.is_set || is_set(far_end_cdr_ln.yfilter)) leaf_name_data.push_back(far_end_cdr_ln.get_name_leafdata());
    if (neighbor_link.is_set || is_set(neighbor_link.yfilter)) leaf_name_data.push_back(neighbor_link.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::State::Up::DataIdx::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "history")
    {
        auto ent_ = std::make_shared<Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::State::Up::DataIdx::History>();
        ent_->parent = this;
        history.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::State::Up::DataIdx::get_children() const
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

void Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::State::Up::DataIdx::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "port_data_idx")
    {
        port_data_idx = value;
        port_data_idx.value_namespace = name_space;
        port_data_idx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sfe_port")
    {
        sfe_port = value;
        sfe_port.value_namespace = name_space;
        sfe_port.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "near_end_cdr_ln")
    {
        near_end_cdr_ln = value;
        near_end_cdr_ln.value_namespace = name_space;
        near_end_cdr_ln.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "near_end_cxp_ch")
    {
        near_end_cxp_ch = value;
        near_end_cxp_ch.value_namespace = name_space;
        near_end_cxp_ch.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "far_end_cxp_ch")
    {
        far_end_cxp_ch = value;
        far_end_cxp_ch.value_namespace = name_space;
        far_end_cxp_ch.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "far_end_cdr_ln")
    {
        far_end_cdr_ln = value;
        far_end_cdr_ln.value_namespace = name_space;
        far_end_cdr_ln.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor_link")
    {
        neighbor_link = value;
        neighbor_link.value_namespace = name_space;
        neighbor_link.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::State::Up::DataIdx::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "port_data_idx")
    {
        port_data_idx.yfilter = yfilter;
    }
    if(value_path == "sfe_port")
    {
        sfe_port.yfilter = yfilter;
    }
    if(value_path == "admin-state")
    {
        admin_state.yfilter = yfilter;
    }
    if(value_path == "oper_state")
    {
        oper_state.yfilter = yfilter;
    }
    if(value_path == "near_end_cdr_ln")
    {
        near_end_cdr_ln.yfilter = yfilter;
    }
    if(value_path == "near_end_cxp_ch")
    {
        near_end_cxp_ch.yfilter = yfilter;
    }
    if(value_path == "far_end_cxp_ch")
    {
        far_end_cxp_ch.yfilter = yfilter;
    }
    if(value_path == "far_end_cdr_ln")
    {
        far_end_cdr_ln.yfilter = yfilter;
    }
    if(value_path == "neighbor_link")
    {
        neighbor_link.yfilter = yfilter;
    }
}

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::State::Up::DataIdx::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "history" || name == "port_data_idx" || name == "sfe_port" || name == "admin-state" || name == "oper_state" || name == "near_end_cdr_ln" || name == "near_end_cxp_ch" || name == "far_end_cxp_ch" || name == "far_end_cdr_ln" || name == "neighbor_link")
        return true;
    return false;
}

Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::State::Up::DataIdx::History::History()
    :
    history_idx{YType::int32, "history_idx"},
    time_stamp{YType::str, "time_stamp"},
    admin_state{YType::str, "admin-state"},
    oper_state{YType::str, "oper_state"},
    error_state{YType::str, "error_state"}
{

    yang_name = "history"; yang_parent_name = "data_idx"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::State::Up::DataIdx::History::~History()
{
}

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::State::Up::DataIdx::History::has_data() const
{
    if (is_presence_container) return true;
    return history_idx.is_set
	|| time_stamp.is_set
	|| admin_state.is_set
	|| oper_state.is_set
	|| error_state.is_set;
}

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::State::Up::DataIdx::History::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(history_idx.yfilter)
	|| ydk::is_set(time_stamp.yfilter)
	|| ydk::is_set(admin_state.yfilter)
	|| ydk::is_set(oper_state.yfilter)
	|| ydk::is_set(error_state.yfilter);
}

std::string Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::State::Up::DataIdx::History::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "history";
    ADD_KEY_TOKEN(history_idx, "history_idx");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::State::Up::DataIdx::History::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (history_idx.is_set || is_set(history_idx.yfilter)) leaf_name_data.push_back(history_idx.get_name_leafdata());
    if (time_stamp.is_set || is_set(time_stamp.yfilter)) leaf_name_data.push_back(time_stamp.get_name_leafdata());
    if (admin_state.is_set || is_set(admin_state.yfilter)) leaf_name_data.push_back(admin_state.get_name_leafdata());
    if (oper_state.is_set || is_set(oper_state.yfilter)) leaf_name_data.push_back(oper_state.get_name_leafdata());
    if (error_state.is_set || is_set(error_state.yfilter)) leaf_name_data.push_back(error_state.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::State::Up::DataIdx::History::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::State::Up::DataIdx::History::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::State::Up::DataIdx::History::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
}

void Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::State::Up::DataIdx::History::set_filter(const std::string & value_path, YFilter yfilter)
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
}

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::State::Up::DataIdx::History::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "history_idx" || name == "time_stamp" || name == "admin-state" || name == "oper_state" || name == "error_state")
        return true;
    return false;
}

Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::State::Up::Brief::Brief()
    :
    data_idx(this, {"port_data_idx"})
{

    yang_name = "brief"; yang_parent_name = "up"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::State::Up::Brief::~Brief()
{
}

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::State::Up::Brief::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<data_idx.len(); index++)
    {
        if(data_idx[index]->has_data())
            return true;
    }
    return false;
}

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::State::Up::Brief::has_operation() const
{
    for (std::size_t index=0; index<data_idx.len(); index++)
    {
        if(data_idx[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::State::Up::Brief::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "brief";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::State::Up::Brief::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::State::Up::Brief::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "data_idx")
    {
        auto ent_ = std::make_shared<Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::State::Up::Brief::DataIdx>();
        ent_->parent = this;
        data_idx.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::State::Up::Brief::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : data_idx.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::State::Up::Brief::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::State::Up::Brief::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::State::Up::Brief::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data_idx")
        return true;
    return false;
}

Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::State::Up::Brief::DataIdx::DataIdx()
    :
    port_data_idx{YType::int64, "port_data_idx"},
    sfe_port{YType::str, "sfe_port"},
    admin_state{YType::str, "admin-state"},
    oper_state{YType::str, "oper_state"},
    near_end_cdr_ln{YType::str, "near_end_cdr_ln"},
    near_end_cxp_ch{YType::str, "near_end_cxp_ch"},
    far_end_cxp_ch{YType::str, "far_end_cxp_ch"},
    far_end_cdr_ln{YType::str, "far_end_cdr_ln"},
    neighbor_link{YType::str, "neighbor_link"}
        ,
    history(this, {"history_idx"})
{

    yang_name = "data_idx"; yang_parent_name = "brief"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::State::Up::Brief::DataIdx::~DataIdx()
{
}

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::State::Up::Brief::DataIdx::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<history.len(); index++)
    {
        if(history[index]->has_data())
            return true;
    }
    return port_data_idx.is_set
	|| sfe_port.is_set
	|| admin_state.is_set
	|| oper_state.is_set
	|| near_end_cdr_ln.is_set
	|| near_end_cxp_ch.is_set
	|| far_end_cxp_ch.is_set
	|| far_end_cdr_ln.is_set
	|| neighbor_link.is_set;
}

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::State::Up::Brief::DataIdx::has_operation() const
{
    for (std::size_t index=0; index<history.len(); index++)
    {
        if(history[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(port_data_idx.yfilter)
	|| ydk::is_set(sfe_port.yfilter)
	|| ydk::is_set(admin_state.yfilter)
	|| ydk::is_set(oper_state.yfilter)
	|| ydk::is_set(near_end_cdr_ln.yfilter)
	|| ydk::is_set(near_end_cxp_ch.yfilter)
	|| ydk::is_set(far_end_cxp_ch.yfilter)
	|| ydk::is_set(far_end_cdr_ln.yfilter)
	|| ydk::is_set(neighbor_link.yfilter);
}

std::string Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::State::Up::Brief::DataIdx::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "data_idx";
    ADD_KEY_TOKEN(port_data_idx, "port_data_idx");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::State::Up::Brief::DataIdx::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port_data_idx.is_set || is_set(port_data_idx.yfilter)) leaf_name_data.push_back(port_data_idx.get_name_leafdata());
    if (sfe_port.is_set || is_set(sfe_port.yfilter)) leaf_name_data.push_back(sfe_port.get_name_leafdata());
    if (admin_state.is_set || is_set(admin_state.yfilter)) leaf_name_data.push_back(admin_state.get_name_leafdata());
    if (oper_state.is_set || is_set(oper_state.yfilter)) leaf_name_data.push_back(oper_state.get_name_leafdata());
    if (near_end_cdr_ln.is_set || is_set(near_end_cdr_ln.yfilter)) leaf_name_data.push_back(near_end_cdr_ln.get_name_leafdata());
    if (near_end_cxp_ch.is_set || is_set(near_end_cxp_ch.yfilter)) leaf_name_data.push_back(near_end_cxp_ch.get_name_leafdata());
    if (far_end_cxp_ch.is_set || is_set(far_end_cxp_ch.yfilter)) leaf_name_data.push_back(far_end_cxp_ch.get_name_leafdata());
    if (far_end_cdr_ln.is_set || is_set(far_end_cdr_ln.yfilter)) leaf_name_data.push_back(far_end_cdr_ln.get_name_leafdata());
    if (neighbor_link.is_set || is_set(neighbor_link.yfilter)) leaf_name_data.push_back(neighbor_link.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::State::Up::Brief::DataIdx::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "history")
    {
        auto ent_ = std::make_shared<Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::State::Up::Brief::DataIdx::History>();
        ent_->parent = this;
        history.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::State::Up::Brief::DataIdx::get_children() const
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

void Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::State::Up::Brief::DataIdx::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "port_data_idx")
    {
        port_data_idx = value;
        port_data_idx.value_namespace = name_space;
        port_data_idx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sfe_port")
    {
        sfe_port = value;
        sfe_port.value_namespace = name_space;
        sfe_port.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "near_end_cdr_ln")
    {
        near_end_cdr_ln = value;
        near_end_cdr_ln.value_namespace = name_space;
        near_end_cdr_ln.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "near_end_cxp_ch")
    {
        near_end_cxp_ch = value;
        near_end_cxp_ch.value_namespace = name_space;
        near_end_cxp_ch.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "far_end_cxp_ch")
    {
        far_end_cxp_ch = value;
        far_end_cxp_ch.value_namespace = name_space;
        far_end_cxp_ch.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "far_end_cdr_ln")
    {
        far_end_cdr_ln = value;
        far_end_cdr_ln.value_namespace = name_space;
        far_end_cdr_ln.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor_link")
    {
        neighbor_link = value;
        neighbor_link.value_namespace = name_space;
        neighbor_link.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::State::Up::Brief::DataIdx::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "port_data_idx")
    {
        port_data_idx.yfilter = yfilter;
    }
    if(value_path == "sfe_port")
    {
        sfe_port.yfilter = yfilter;
    }
    if(value_path == "admin-state")
    {
        admin_state.yfilter = yfilter;
    }
    if(value_path == "oper_state")
    {
        oper_state.yfilter = yfilter;
    }
    if(value_path == "near_end_cdr_ln")
    {
        near_end_cdr_ln.yfilter = yfilter;
    }
    if(value_path == "near_end_cxp_ch")
    {
        near_end_cxp_ch.yfilter = yfilter;
    }
    if(value_path == "far_end_cxp_ch")
    {
        far_end_cxp_ch.yfilter = yfilter;
    }
    if(value_path == "far_end_cdr_ln")
    {
        far_end_cdr_ln.yfilter = yfilter;
    }
    if(value_path == "neighbor_link")
    {
        neighbor_link.yfilter = yfilter;
    }
}

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::State::Up::Brief::DataIdx::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "history" || name == "port_data_idx" || name == "sfe_port" || name == "admin-state" || name == "oper_state" || name == "near_end_cdr_ln" || name == "near_end_cxp_ch" || name == "far_end_cxp_ch" || name == "far_end_cdr_ln" || name == "neighbor_link")
        return true;
    return false;
}

Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::State::Up::Brief::DataIdx::History::History()
    :
    history_idx{YType::int32, "history_idx"},
    time_stamp{YType::str, "time_stamp"},
    admin_state{YType::str, "admin-state"},
    oper_state{YType::str, "oper_state"},
    error_state{YType::str, "error_state"}
{

    yang_name = "history"; yang_parent_name = "data_idx"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::State::Up::Brief::DataIdx::History::~History()
{
}

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::State::Up::Brief::DataIdx::History::has_data() const
{
    if (is_presence_container) return true;
    return history_idx.is_set
	|| time_stamp.is_set
	|| admin_state.is_set
	|| oper_state.is_set
	|| error_state.is_set;
}

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::State::Up::Brief::DataIdx::History::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(history_idx.yfilter)
	|| ydk::is_set(time_stamp.yfilter)
	|| ydk::is_set(admin_state.yfilter)
	|| ydk::is_set(oper_state.yfilter)
	|| ydk::is_set(error_state.yfilter);
}

std::string Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::State::Up::Brief::DataIdx::History::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "history";
    ADD_KEY_TOKEN(history_idx, "history_idx");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::State::Up::Brief::DataIdx::History::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (history_idx.is_set || is_set(history_idx.yfilter)) leaf_name_data.push_back(history_idx.get_name_leafdata());
    if (time_stamp.is_set || is_set(time_stamp.yfilter)) leaf_name_data.push_back(time_stamp.get_name_leafdata());
    if (admin_state.is_set || is_set(admin_state.yfilter)) leaf_name_data.push_back(admin_state.get_name_leafdata());
    if (oper_state.is_set || is_set(oper_state.yfilter)) leaf_name_data.push_back(oper_state.get_name_leafdata());
    if (error_state.is_set || is_set(error_state.yfilter)) leaf_name_data.push_back(error_state.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::State::Up::Brief::DataIdx::History::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::State::Up::Brief::DataIdx::History::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::State::Up::Brief::DataIdx::History::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
}

void Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::State::Up::Brief::DataIdx::History::set_filter(const std::string & value_path, YFilter yfilter)
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
}

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::State::Up::Brief::DataIdx::History::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "history_idx" || name == "time_stamp" || name == "admin-state" || name == "oper_state" || name == "error_state")
        return true;
    return false;
}

Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::State::Up::Detail::Detail()
    :
    data_idx(this, {"port_data_idx"})
{

    yang_name = "detail"; yang_parent_name = "up"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::State::Up::Detail::~Detail()
{
}

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::State::Up::Detail::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<data_idx.len(); index++)
    {
        if(data_idx[index]->has_data())
            return true;
    }
    return false;
}

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::State::Up::Detail::has_operation() const
{
    for (std::size_t index=0; index<data_idx.len(); index++)
    {
        if(data_idx[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::State::Up::Detail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "detail";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::State::Up::Detail::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::State::Up::Detail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "data_idx")
    {
        auto ent_ = std::make_shared<Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::State::Up::Detail::DataIdx>();
        ent_->parent = this;
        data_idx.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::State::Up::Detail::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : data_idx.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::State::Up::Detail::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::State::Up::Detail::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::State::Up::Detail::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data_idx")
        return true;
    return false;
}

Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::State::Up::Detail::DataIdx::DataIdx()
    :
    port_data_idx{YType::int64, "port_data_idx"},
    sfe_port{YType::str, "sfe_port"},
    admin_state{YType::str, "admin-state"},
    oper_state{YType::str, "oper_state"},
    near_end_cdr_ln{YType::str, "near_end_cdr_ln"},
    near_end_cxp_ch{YType::str, "near_end_cxp_ch"},
    far_end_cxp_ch{YType::str, "far_end_cxp_ch"},
    far_end_cdr_ln{YType::str, "far_end_cdr_ln"},
    neighbor_link{YType::str, "neighbor_link"}
        ,
    history(this, {"history_idx"})
{

    yang_name = "data_idx"; yang_parent_name = "detail"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::State::Up::Detail::DataIdx::~DataIdx()
{
}

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::State::Up::Detail::DataIdx::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<history.len(); index++)
    {
        if(history[index]->has_data())
            return true;
    }
    return port_data_idx.is_set
	|| sfe_port.is_set
	|| admin_state.is_set
	|| oper_state.is_set
	|| near_end_cdr_ln.is_set
	|| near_end_cxp_ch.is_set
	|| far_end_cxp_ch.is_set
	|| far_end_cdr_ln.is_set
	|| neighbor_link.is_set;
}

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::State::Up::Detail::DataIdx::has_operation() const
{
    for (std::size_t index=0; index<history.len(); index++)
    {
        if(history[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(port_data_idx.yfilter)
	|| ydk::is_set(sfe_port.yfilter)
	|| ydk::is_set(admin_state.yfilter)
	|| ydk::is_set(oper_state.yfilter)
	|| ydk::is_set(near_end_cdr_ln.yfilter)
	|| ydk::is_set(near_end_cxp_ch.yfilter)
	|| ydk::is_set(far_end_cxp_ch.yfilter)
	|| ydk::is_set(far_end_cdr_ln.yfilter)
	|| ydk::is_set(neighbor_link.yfilter);
}

std::string Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::State::Up::Detail::DataIdx::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "data_idx";
    ADD_KEY_TOKEN(port_data_idx, "port_data_idx");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::State::Up::Detail::DataIdx::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port_data_idx.is_set || is_set(port_data_idx.yfilter)) leaf_name_data.push_back(port_data_idx.get_name_leafdata());
    if (sfe_port.is_set || is_set(sfe_port.yfilter)) leaf_name_data.push_back(sfe_port.get_name_leafdata());
    if (admin_state.is_set || is_set(admin_state.yfilter)) leaf_name_data.push_back(admin_state.get_name_leafdata());
    if (oper_state.is_set || is_set(oper_state.yfilter)) leaf_name_data.push_back(oper_state.get_name_leafdata());
    if (near_end_cdr_ln.is_set || is_set(near_end_cdr_ln.yfilter)) leaf_name_data.push_back(near_end_cdr_ln.get_name_leafdata());
    if (near_end_cxp_ch.is_set || is_set(near_end_cxp_ch.yfilter)) leaf_name_data.push_back(near_end_cxp_ch.get_name_leafdata());
    if (far_end_cxp_ch.is_set || is_set(far_end_cxp_ch.yfilter)) leaf_name_data.push_back(far_end_cxp_ch.get_name_leafdata());
    if (far_end_cdr_ln.is_set || is_set(far_end_cdr_ln.yfilter)) leaf_name_data.push_back(far_end_cdr_ln.get_name_leafdata());
    if (neighbor_link.is_set || is_set(neighbor_link.yfilter)) leaf_name_data.push_back(neighbor_link.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::State::Up::Detail::DataIdx::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "history")
    {
        auto ent_ = std::make_shared<Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::State::Up::Detail::DataIdx::History>();
        ent_->parent = this;
        history.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::State::Up::Detail::DataIdx::get_children() const
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

void Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::State::Up::Detail::DataIdx::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "port_data_idx")
    {
        port_data_idx = value;
        port_data_idx.value_namespace = name_space;
        port_data_idx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sfe_port")
    {
        sfe_port = value;
        sfe_port.value_namespace = name_space;
        sfe_port.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "near_end_cdr_ln")
    {
        near_end_cdr_ln = value;
        near_end_cdr_ln.value_namespace = name_space;
        near_end_cdr_ln.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "near_end_cxp_ch")
    {
        near_end_cxp_ch = value;
        near_end_cxp_ch.value_namespace = name_space;
        near_end_cxp_ch.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "far_end_cxp_ch")
    {
        far_end_cxp_ch = value;
        far_end_cxp_ch.value_namespace = name_space;
        far_end_cxp_ch.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "far_end_cdr_ln")
    {
        far_end_cdr_ln = value;
        far_end_cdr_ln.value_namespace = name_space;
        far_end_cdr_ln.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor_link")
    {
        neighbor_link = value;
        neighbor_link.value_namespace = name_space;
        neighbor_link.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::State::Up::Detail::DataIdx::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "port_data_idx")
    {
        port_data_idx.yfilter = yfilter;
    }
    if(value_path == "sfe_port")
    {
        sfe_port.yfilter = yfilter;
    }
    if(value_path == "admin-state")
    {
        admin_state.yfilter = yfilter;
    }
    if(value_path == "oper_state")
    {
        oper_state.yfilter = yfilter;
    }
    if(value_path == "near_end_cdr_ln")
    {
        near_end_cdr_ln.yfilter = yfilter;
    }
    if(value_path == "near_end_cxp_ch")
    {
        near_end_cxp_ch.yfilter = yfilter;
    }
    if(value_path == "far_end_cxp_ch")
    {
        far_end_cxp_ch.yfilter = yfilter;
    }
    if(value_path == "far_end_cdr_ln")
    {
        far_end_cdr_ln.yfilter = yfilter;
    }
    if(value_path == "neighbor_link")
    {
        neighbor_link.yfilter = yfilter;
    }
}

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::State::Up::Detail::DataIdx::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "history" || name == "port_data_idx" || name == "sfe_port" || name == "admin-state" || name == "oper_state" || name == "near_end_cdr_ln" || name == "near_end_cxp_ch" || name == "far_end_cxp_ch" || name == "far_end_cdr_ln" || name == "neighbor_link")
        return true;
    return false;
}

Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::State::Up::Detail::DataIdx::History::History()
    :
    history_idx{YType::int32, "history_idx"},
    time_stamp{YType::str, "time_stamp"},
    admin_state{YType::str, "admin-state"},
    oper_state{YType::str, "oper_state"},
    error_state{YType::str, "error_state"}
{

    yang_name = "history"; yang_parent_name = "data_idx"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::State::Up::Detail::DataIdx::History::~History()
{
}

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::State::Up::Detail::DataIdx::History::has_data() const
{
    if (is_presence_container) return true;
    return history_idx.is_set
	|| time_stamp.is_set
	|| admin_state.is_set
	|| oper_state.is_set
	|| error_state.is_set;
}

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::State::Up::Detail::DataIdx::History::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(history_idx.yfilter)
	|| ydk::is_set(time_stamp.yfilter)
	|| ydk::is_set(admin_state.yfilter)
	|| ydk::is_set(oper_state.yfilter)
	|| ydk::is_set(error_state.yfilter);
}

std::string Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::State::Up::Detail::DataIdx::History::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "history";
    ADD_KEY_TOKEN(history_idx, "history_idx");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::State::Up::Detail::DataIdx::History::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (history_idx.is_set || is_set(history_idx.yfilter)) leaf_name_data.push_back(history_idx.get_name_leafdata());
    if (time_stamp.is_set || is_set(time_stamp.yfilter)) leaf_name_data.push_back(time_stamp.get_name_leafdata());
    if (admin_state.is_set || is_set(admin_state.yfilter)) leaf_name_data.push_back(admin_state.get_name_leafdata());
    if (oper_state.is_set || is_set(oper_state.yfilter)) leaf_name_data.push_back(oper_state.get_name_leafdata());
    if (error_state.is_set || is_set(error_state.yfilter)) leaf_name_data.push_back(error_state.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::State::Up::Detail::DataIdx::History::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::State::Up::Detail::DataIdx::History::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::State::Up::Detail::DataIdx::History::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
}

void Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::State::Up::Detail::DataIdx::History::set_filter(const std::string & value_path, YFilter yfilter)
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
}

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::State::Up::Detail::DataIdx::History::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "history_idx" || name == "time_stamp" || name == "admin-state" || name == "oper_state" || name == "error_state")
        return true;
    return false;
}

Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::State::Down::Down()
    :
    data_idx(this, {"port_data_idx"})
    , brief(std::make_shared<Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::State::Down::Brief>())
    , detail(std::make_shared<Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::State::Down::Detail>())
{
    brief->parent = this;
    detail->parent = this;

    yang_name = "down"; yang_parent_name = "state"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::State::Down::~Down()
{
}

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::State::Down::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<data_idx.len(); index++)
    {
        if(data_idx[index]->has_data())
            return true;
    }
    return (brief !=  nullptr && brief->has_data())
	|| (detail !=  nullptr && detail->has_data());
}

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::State::Down::has_operation() const
{
    for (std::size_t index=0; index<data_idx.len(); index++)
    {
        if(data_idx[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (brief !=  nullptr && brief->has_operation())
	|| (detail !=  nullptr && detail->has_operation());
}

std::string Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::State::Down::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "down";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::State::Down::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::State::Down::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "data_idx")
    {
        auto ent_ = std::make_shared<Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::State::Down::DataIdx>();
        ent_->parent = this;
        data_idx.append(ent_);
        return ent_;
    }

    if(child_yang_name == "brief")
    {
        if(brief == nullptr)
        {
            brief = std::make_shared<Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::State::Down::Brief>();
        }
        return brief;
    }

    if(child_yang_name == "detail")
    {
        if(detail == nullptr)
        {
            detail = std::make_shared<Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::State::Down::Detail>();
        }
        return detail;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::State::Down::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : data_idx.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

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

void Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::State::Down::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::State::Down::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::State::Down::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data_idx" || name == "brief" || name == "detail")
        return true;
    return false;
}

Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::State::Down::DataIdx::DataIdx()
    :
    port_data_idx{YType::int64, "port_data_idx"},
    sfe_port{YType::str, "sfe_port"},
    admin_state{YType::str, "admin-state"},
    oper_state{YType::str, "oper_state"},
    near_end_cdr_ln{YType::str, "near_end_cdr_ln"},
    near_end_cxp_ch{YType::str, "near_end_cxp_ch"},
    far_end_cxp_ch{YType::str, "far_end_cxp_ch"},
    far_end_cdr_ln{YType::str, "far_end_cdr_ln"},
    neighbor_link{YType::str, "neighbor_link"}
        ,
    history(this, {"history_idx"})
{

    yang_name = "data_idx"; yang_parent_name = "down"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::State::Down::DataIdx::~DataIdx()
{
}

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::State::Down::DataIdx::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<history.len(); index++)
    {
        if(history[index]->has_data())
            return true;
    }
    return port_data_idx.is_set
	|| sfe_port.is_set
	|| admin_state.is_set
	|| oper_state.is_set
	|| near_end_cdr_ln.is_set
	|| near_end_cxp_ch.is_set
	|| far_end_cxp_ch.is_set
	|| far_end_cdr_ln.is_set
	|| neighbor_link.is_set;
}

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::State::Down::DataIdx::has_operation() const
{
    for (std::size_t index=0; index<history.len(); index++)
    {
        if(history[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(port_data_idx.yfilter)
	|| ydk::is_set(sfe_port.yfilter)
	|| ydk::is_set(admin_state.yfilter)
	|| ydk::is_set(oper_state.yfilter)
	|| ydk::is_set(near_end_cdr_ln.yfilter)
	|| ydk::is_set(near_end_cxp_ch.yfilter)
	|| ydk::is_set(far_end_cxp_ch.yfilter)
	|| ydk::is_set(far_end_cdr_ln.yfilter)
	|| ydk::is_set(neighbor_link.yfilter);
}

std::string Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::State::Down::DataIdx::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "data_idx";
    ADD_KEY_TOKEN(port_data_idx, "port_data_idx");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::State::Down::DataIdx::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port_data_idx.is_set || is_set(port_data_idx.yfilter)) leaf_name_data.push_back(port_data_idx.get_name_leafdata());
    if (sfe_port.is_set || is_set(sfe_port.yfilter)) leaf_name_data.push_back(sfe_port.get_name_leafdata());
    if (admin_state.is_set || is_set(admin_state.yfilter)) leaf_name_data.push_back(admin_state.get_name_leafdata());
    if (oper_state.is_set || is_set(oper_state.yfilter)) leaf_name_data.push_back(oper_state.get_name_leafdata());
    if (near_end_cdr_ln.is_set || is_set(near_end_cdr_ln.yfilter)) leaf_name_data.push_back(near_end_cdr_ln.get_name_leafdata());
    if (near_end_cxp_ch.is_set || is_set(near_end_cxp_ch.yfilter)) leaf_name_data.push_back(near_end_cxp_ch.get_name_leafdata());
    if (far_end_cxp_ch.is_set || is_set(far_end_cxp_ch.yfilter)) leaf_name_data.push_back(far_end_cxp_ch.get_name_leafdata());
    if (far_end_cdr_ln.is_set || is_set(far_end_cdr_ln.yfilter)) leaf_name_data.push_back(far_end_cdr_ln.get_name_leafdata());
    if (neighbor_link.is_set || is_set(neighbor_link.yfilter)) leaf_name_data.push_back(neighbor_link.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::State::Down::DataIdx::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "history")
    {
        auto ent_ = std::make_shared<Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::State::Down::DataIdx::History>();
        ent_->parent = this;
        history.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::State::Down::DataIdx::get_children() const
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

void Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::State::Down::DataIdx::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "port_data_idx")
    {
        port_data_idx = value;
        port_data_idx.value_namespace = name_space;
        port_data_idx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sfe_port")
    {
        sfe_port = value;
        sfe_port.value_namespace = name_space;
        sfe_port.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "near_end_cdr_ln")
    {
        near_end_cdr_ln = value;
        near_end_cdr_ln.value_namespace = name_space;
        near_end_cdr_ln.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "near_end_cxp_ch")
    {
        near_end_cxp_ch = value;
        near_end_cxp_ch.value_namespace = name_space;
        near_end_cxp_ch.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "far_end_cxp_ch")
    {
        far_end_cxp_ch = value;
        far_end_cxp_ch.value_namespace = name_space;
        far_end_cxp_ch.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "far_end_cdr_ln")
    {
        far_end_cdr_ln = value;
        far_end_cdr_ln.value_namespace = name_space;
        far_end_cdr_ln.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor_link")
    {
        neighbor_link = value;
        neighbor_link.value_namespace = name_space;
        neighbor_link.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::State::Down::DataIdx::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "port_data_idx")
    {
        port_data_idx.yfilter = yfilter;
    }
    if(value_path == "sfe_port")
    {
        sfe_port.yfilter = yfilter;
    }
    if(value_path == "admin-state")
    {
        admin_state.yfilter = yfilter;
    }
    if(value_path == "oper_state")
    {
        oper_state.yfilter = yfilter;
    }
    if(value_path == "near_end_cdr_ln")
    {
        near_end_cdr_ln.yfilter = yfilter;
    }
    if(value_path == "near_end_cxp_ch")
    {
        near_end_cxp_ch.yfilter = yfilter;
    }
    if(value_path == "far_end_cxp_ch")
    {
        far_end_cxp_ch.yfilter = yfilter;
    }
    if(value_path == "far_end_cdr_ln")
    {
        far_end_cdr_ln.yfilter = yfilter;
    }
    if(value_path == "neighbor_link")
    {
        neighbor_link.yfilter = yfilter;
    }
}

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::State::Down::DataIdx::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "history" || name == "port_data_idx" || name == "sfe_port" || name == "admin-state" || name == "oper_state" || name == "near_end_cdr_ln" || name == "near_end_cxp_ch" || name == "far_end_cxp_ch" || name == "far_end_cdr_ln" || name == "neighbor_link")
        return true;
    return false;
}

Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::State::Down::DataIdx::History::History()
    :
    history_idx{YType::int32, "history_idx"},
    time_stamp{YType::str, "time_stamp"},
    admin_state{YType::str, "admin-state"},
    oper_state{YType::str, "oper_state"},
    error_state{YType::str, "error_state"}
{

    yang_name = "history"; yang_parent_name = "data_idx"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::State::Down::DataIdx::History::~History()
{
}

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::State::Down::DataIdx::History::has_data() const
{
    if (is_presence_container) return true;
    return history_idx.is_set
	|| time_stamp.is_set
	|| admin_state.is_set
	|| oper_state.is_set
	|| error_state.is_set;
}

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::State::Down::DataIdx::History::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(history_idx.yfilter)
	|| ydk::is_set(time_stamp.yfilter)
	|| ydk::is_set(admin_state.yfilter)
	|| ydk::is_set(oper_state.yfilter)
	|| ydk::is_set(error_state.yfilter);
}

std::string Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::State::Down::DataIdx::History::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "history";
    ADD_KEY_TOKEN(history_idx, "history_idx");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::State::Down::DataIdx::History::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (history_idx.is_set || is_set(history_idx.yfilter)) leaf_name_data.push_back(history_idx.get_name_leafdata());
    if (time_stamp.is_set || is_set(time_stamp.yfilter)) leaf_name_data.push_back(time_stamp.get_name_leafdata());
    if (admin_state.is_set || is_set(admin_state.yfilter)) leaf_name_data.push_back(admin_state.get_name_leafdata());
    if (oper_state.is_set || is_set(oper_state.yfilter)) leaf_name_data.push_back(oper_state.get_name_leafdata());
    if (error_state.is_set || is_set(error_state.yfilter)) leaf_name_data.push_back(error_state.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::State::Down::DataIdx::History::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::State::Down::DataIdx::History::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::State::Down::DataIdx::History::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
}

void Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::State::Down::DataIdx::History::set_filter(const std::string & value_path, YFilter yfilter)
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
}

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::State::Down::DataIdx::History::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "history_idx" || name == "time_stamp" || name == "admin-state" || name == "oper_state" || name == "error_state")
        return true;
    return false;
}

Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::State::Down::Brief::Brief()
    :
    data_idx(this, {"port_data_idx"})
{

    yang_name = "brief"; yang_parent_name = "down"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::State::Down::Brief::~Brief()
{
}

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::State::Down::Brief::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<data_idx.len(); index++)
    {
        if(data_idx[index]->has_data())
            return true;
    }
    return false;
}

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::State::Down::Brief::has_operation() const
{
    for (std::size_t index=0; index<data_idx.len(); index++)
    {
        if(data_idx[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::State::Down::Brief::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "brief";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::State::Down::Brief::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::State::Down::Brief::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "data_idx")
    {
        auto ent_ = std::make_shared<Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::State::Down::Brief::DataIdx>();
        ent_->parent = this;
        data_idx.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::State::Down::Brief::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : data_idx.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::State::Down::Brief::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::State::Down::Brief::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::State::Down::Brief::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data_idx")
        return true;
    return false;
}

Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::State::Down::Brief::DataIdx::DataIdx()
    :
    port_data_idx{YType::int64, "port_data_idx"},
    sfe_port{YType::str, "sfe_port"},
    admin_state{YType::str, "admin-state"},
    oper_state{YType::str, "oper_state"},
    near_end_cdr_ln{YType::str, "near_end_cdr_ln"},
    near_end_cxp_ch{YType::str, "near_end_cxp_ch"},
    far_end_cxp_ch{YType::str, "far_end_cxp_ch"},
    far_end_cdr_ln{YType::str, "far_end_cdr_ln"},
    neighbor_link{YType::str, "neighbor_link"}
        ,
    history(this, {"history_idx"})
{

    yang_name = "data_idx"; yang_parent_name = "brief"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::State::Down::Brief::DataIdx::~DataIdx()
{
}

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::State::Down::Brief::DataIdx::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<history.len(); index++)
    {
        if(history[index]->has_data())
            return true;
    }
    return port_data_idx.is_set
	|| sfe_port.is_set
	|| admin_state.is_set
	|| oper_state.is_set
	|| near_end_cdr_ln.is_set
	|| near_end_cxp_ch.is_set
	|| far_end_cxp_ch.is_set
	|| far_end_cdr_ln.is_set
	|| neighbor_link.is_set;
}

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::State::Down::Brief::DataIdx::has_operation() const
{
    for (std::size_t index=0; index<history.len(); index++)
    {
        if(history[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(port_data_idx.yfilter)
	|| ydk::is_set(sfe_port.yfilter)
	|| ydk::is_set(admin_state.yfilter)
	|| ydk::is_set(oper_state.yfilter)
	|| ydk::is_set(near_end_cdr_ln.yfilter)
	|| ydk::is_set(near_end_cxp_ch.yfilter)
	|| ydk::is_set(far_end_cxp_ch.yfilter)
	|| ydk::is_set(far_end_cdr_ln.yfilter)
	|| ydk::is_set(neighbor_link.yfilter);
}

std::string Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::State::Down::Brief::DataIdx::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "data_idx";
    ADD_KEY_TOKEN(port_data_idx, "port_data_idx");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::State::Down::Brief::DataIdx::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port_data_idx.is_set || is_set(port_data_idx.yfilter)) leaf_name_data.push_back(port_data_idx.get_name_leafdata());
    if (sfe_port.is_set || is_set(sfe_port.yfilter)) leaf_name_data.push_back(sfe_port.get_name_leafdata());
    if (admin_state.is_set || is_set(admin_state.yfilter)) leaf_name_data.push_back(admin_state.get_name_leafdata());
    if (oper_state.is_set || is_set(oper_state.yfilter)) leaf_name_data.push_back(oper_state.get_name_leafdata());
    if (near_end_cdr_ln.is_set || is_set(near_end_cdr_ln.yfilter)) leaf_name_data.push_back(near_end_cdr_ln.get_name_leafdata());
    if (near_end_cxp_ch.is_set || is_set(near_end_cxp_ch.yfilter)) leaf_name_data.push_back(near_end_cxp_ch.get_name_leafdata());
    if (far_end_cxp_ch.is_set || is_set(far_end_cxp_ch.yfilter)) leaf_name_data.push_back(far_end_cxp_ch.get_name_leafdata());
    if (far_end_cdr_ln.is_set || is_set(far_end_cdr_ln.yfilter)) leaf_name_data.push_back(far_end_cdr_ln.get_name_leafdata());
    if (neighbor_link.is_set || is_set(neighbor_link.yfilter)) leaf_name_data.push_back(neighbor_link.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::State::Down::Brief::DataIdx::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "history")
    {
        auto ent_ = std::make_shared<Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::State::Down::Brief::DataIdx::History>();
        ent_->parent = this;
        history.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::State::Down::Brief::DataIdx::get_children() const
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

void Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::State::Down::Brief::DataIdx::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "port_data_idx")
    {
        port_data_idx = value;
        port_data_idx.value_namespace = name_space;
        port_data_idx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sfe_port")
    {
        sfe_port = value;
        sfe_port.value_namespace = name_space;
        sfe_port.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "near_end_cdr_ln")
    {
        near_end_cdr_ln = value;
        near_end_cdr_ln.value_namespace = name_space;
        near_end_cdr_ln.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "near_end_cxp_ch")
    {
        near_end_cxp_ch = value;
        near_end_cxp_ch.value_namespace = name_space;
        near_end_cxp_ch.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "far_end_cxp_ch")
    {
        far_end_cxp_ch = value;
        far_end_cxp_ch.value_namespace = name_space;
        far_end_cxp_ch.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "far_end_cdr_ln")
    {
        far_end_cdr_ln = value;
        far_end_cdr_ln.value_namespace = name_space;
        far_end_cdr_ln.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor_link")
    {
        neighbor_link = value;
        neighbor_link.value_namespace = name_space;
        neighbor_link.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::State::Down::Brief::DataIdx::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "port_data_idx")
    {
        port_data_idx.yfilter = yfilter;
    }
    if(value_path == "sfe_port")
    {
        sfe_port.yfilter = yfilter;
    }
    if(value_path == "admin-state")
    {
        admin_state.yfilter = yfilter;
    }
    if(value_path == "oper_state")
    {
        oper_state.yfilter = yfilter;
    }
    if(value_path == "near_end_cdr_ln")
    {
        near_end_cdr_ln.yfilter = yfilter;
    }
    if(value_path == "near_end_cxp_ch")
    {
        near_end_cxp_ch.yfilter = yfilter;
    }
    if(value_path == "far_end_cxp_ch")
    {
        far_end_cxp_ch.yfilter = yfilter;
    }
    if(value_path == "far_end_cdr_ln")
    {
        far_end_cdr_ln.yfilter = yfilter;
    }
    if(value_path == "neighbor_link")
    {
        neighbor_link.yfilter = yfilter;
    }
}

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::State::Down::Brief::DataIdx::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "history" || name == "port_data_idx" || name == "sfe_port" || name == "admin-state" || name == "oper_state" || name == "near_end_cdr_ln" || name == "near_end_cxp_ch" || name == "far_end_cxp_ch" || name == "far_end_cdr_ln" || name == "neighbor_link")
        return true;
    return false;
}

Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::State::Down::Brief::DataIdx::History::History()
    :
    history_idx{YType::int32, "history_idx"},
    time_stamp{YType::str, "time_stamp"},
    admin_state{YType::str, "admin-state"},
    oper_state{YType::str, "oper_state"},
    error_state{YType::str, "error_state"}
{

    yang_name = "history"; yang_parent_name = "data_idx"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::State::Down::Brief::DataIdx::History::~History()
{
}

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::State::Down::Brief::DataIdx::History::has_data() const
{
    if (is_presence_container) return true;
    return history_idx.is_set
	|| time_stamp.is_set
	|| admin_state.is_set
	|| oper_state.is_set
	|| error_state.is_set;
}

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::State::Down::Brief::DataIdx::History::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(history_idx.yfilter)
	|| ydk::is_set(time_stamp.yfilter)
	|| ydk::is_set(admin_state.yfilter)
	|| ydk::is_set(oper_state.yfilter)
	|| ydk::is_set(error_state.yfilter);
}

std::string Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::State::Down::Brief::DataIdx::History::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "history";
    ADD_KEY_TOKEN(history_idx, "history_idx");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::State::Down::Brief::DataIdx::History::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (history_idx.is_set || is_set(history_idx.yfilter)) leaf_name_data.push_back(history_idx.get_name_leafdata());
    if (time_stamp.is_set || is_set(time_stamp.yfilter)) leaf_name_data.push_back(time_stamp.get_name_leafdata());
    if (admin_state.is_set || is_set(admin_state.yfilter)) leaf_name_data.push_back(admin_state.get_name_leafdata());
    if (oper_state.is_set || is_set(oper_state.yfilter)) leaf_name_data.push_back(oper_state.get_name_leafdata());
    if (error_state.is_set || is_set(error_state.yfilter)) leaf_name_data.push_back(error_state.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::State::Down::Brief::DataIdx::History::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::State::Down::Brief::DataIdx::History::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::State::Down::Brief::DataIdx::History::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
}

void Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::State::Down::Brief::DataIdx::History::set_filter(const std::string & value_path, YFilter yfilter)
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
}

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::State::Down::Brief::DataIdx::History::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "history_idx" || name == "time_stamp" || name == "admin-state" || name == "oper_state" || name == "error_state")
        return true;
    return false;
}

Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::State::Down::Detail::Detail()
    :
    data_idx(this, {"port_data_idx"})
{

    yang_name = "detail"; yang_parent_name = "down"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::State::Down::Detail::~Detail()
{
}

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::State::Down::Detail::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<data_idx.len(); index++)
    {
        if(data_idx[index]->has_data())
            return true;
    }
    return false;
}

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::State::Down::Detail::has_operation() const
{
    for (std::size_t index=0; index<data_idx.len(); index++)
    {
        if(data_idx[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::State::Down::Detail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "detail";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::State::Down::Detail::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::State::Down::Detail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "data_idx")
    {
        auto ent_ = std::make_shared<Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::State::Down::Detail::DataIdx>();
        ent_->parent = this;
        data_idx.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::State::Down::Detail::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : data_idx.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::State::Down::Detail::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::State::Down::Detail::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::State::Down::Detail::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data_idx")
        return true;
    return false;
}

Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::State::Down::Detail::DataIdx::DataIdx()
    :
    port_data_idx{YType::int64, "port_data_idx"},
    sfe_port{YType::str, "sfe_port"},
    admin_state{YType::str, "admin-state"},
    oper_state{YType::str, "oper_state"},
    near_end_cdr_ln{YType::str, "near_end_cdr_ln"},
    near_end_cxp_ch{YType::str, "near_end_cxp_ch"},
    far_end_cxp_ch{YType::str, "far_end_cxp_ch"},
    far_end_cdr_ln{YType::str, "far_end_cdr_ln"},
    neighbor_link{YType::str, "neighbor_link"}
        ,
    history(this, {"history_idx"})
{

    yang_name = "data_idx"; yang_parent_name = "detail"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::State::Down::Detail::DataIdx::~DataIdx()
{
}

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::State::Down::Detail::DataIdx::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<history.len(); index++)
    {
        if(history[index]->has_data())
            return true;
    }
    return port_data_idx.is_set
	|| sfe_port.is_set
	|| admin_state.is_set
	|| oper_state.is_set
	|| near_end_cdr_ln.is_set
	|| near_end_cxp_ch.is_set
	|| far_end_cxp_ch.is_set
	|| far_end_cdr_ln.is_set
	|| neighbor_link.is_set;
}

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::State::Down::Detail::DataIdx::has_operation() const
{
    for (std::size_t index=0; index<history.len(); index++)
    {
        if(history[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(port_data_idx.yfilter)
	|| ydk::is_set(sfe_port.yfilter)
	|| ydk::is_set(admin_state.yfilter)
	|| ydk::is_set(oper_state.yfilter)
	|| ydk::is_set(near_end_cdr_ln.yfilter)
	|| ydk::is_set(near_end_cxp_ch.yfilter)
	|| ydk::is_set(far_end_cxp_ch.yfilter)
	|| ydk::is_set(far_end_cdr_ln.yfilter)
	|| ydk::is_set(neighbor_link.yfilter);
}

std::string Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::State::Down::Detail::DataIdx::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "data_idx";
    ADD_KEY_TOKEN(port_data_idx, "port_data_idx");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::State::Down::Detail::DataIdx::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port_data_idx.is_set || is_set(port_data_idx.yfilter)) leaf_name_data.push_back(port_data_idx.get_name_leafdata());
    if (sfe_port.is_set || is_set(sfe_port.yfilter)) leaf_name_data.push_back(sfe_port.get_name_leafdata());
    if (admin_state.is_set || is_set(admin_state.yfilter)) leaf_name_data.push_back(admin_state.get_name_leafdata());
    if (oper_state.is_set || is_set(oper_state.yfilter)) leaf_name_data.push_back(oper_state.get_name_leafdata());
    if (near_end_cdr_ln.is_set || is_set(near_end_cdr_ln.yfilter)) leaf_name_data.push_back(near_end_cdr_ln.get_name_leafdata());
    if (near_end_cxp_ch.is_set || is_set(near_end_cxp_ch.yfilter)) leaf_name_data.push_back(near_end_cxp_ch.get_name_leafdata());
    if (far_end_cxp_ch.is_set || is_set(far_end_cxp_ch.yfilter)) leaf_name_data.push_back(far_end_cxp_ch.get_name_leafdata());
    if (far_end_cdr_ln.is_set || is_set(far_end_cdr_ln.yfilter)) leaf_name_data.push_back(far_end_cdr_ln.get_name_leafdata());
    if (neighbor_link.is_set || is_set(neighbor_link.yfilter)) leaf_name_data.push_back(neighbor_link.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::State::Down::Detail::DataIdx::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "history")
    {
        auto ent_ = std::make_shared<Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::State::Down::Detail::DataIdx::History>();
        ent_->parent = this;
        history.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::State::Down::Detail::DataIdx::get_children() const
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

void Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::State::Down::Detail::DataIdx::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "port_data_idx")
    {
        port_data_idx = value;
        port_data_idx.value_namespace = name_space;
        port_data_idx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sfe_port")
    {
        sfe_port = value;
        sfe_port.value_namespace = name_space;
        sfe_port.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "near_end_cdr_ln")
    {
        near_end_cdr_ln = value;
        near_end_cdr_ln.value_namespace = name_space;
        near_end_cdr_ln.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "near_end_cxp_ch")
    {
        near_end_cxp_ch = value;
        near_end_cxp_ch.value_namespace = name_space;
        near_end_cxp_ch.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "far_end_cxp_ch")
    {
        far_end_cxp_ch = value;
        far_end_cxp_ch.value_namespace = name_space;
        far_end_cxp_ch.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "far_end_cdr_ln")
    {
        far_end_cdr_ln = value;
        far_end_cdr_ln.value_namespace = name_space;
        far_end_cdr_ln.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor_link")
    {
        neighbor_link = value;
        neighbor_link.value_namespace = name_space;
        neighbor_link.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::State::Down::Detail::DataIdx::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "port_data_idx")
    {
        port_data_idx.yfilter = yfilter;
    }
    if(value_path == "sfe_port")
    {
        sfe_port.yfilter = yfilter;
    }
    if(value_path == "admin-state")
    {
        admin_state.yfilter = yfilter;
    }
    if(value_path == "oper_state")
    {
        oper_state.yfilter = yfilter;
    }
    if(value_path == "near_end_cdr_ln")
    {
        near_end_cdr_ln.yfilter = yfilter;
    }
    if(value_path == "near_end_cxp_ch")
    {
        near_end_cxp_ch.yfilter = yfilter;
    }
    if(value_path == "far_end_cxp_ch")
    {
        far_end_cxp_ch.yfilter = yfilter;
    }
    if(value_path == "far_end_cdr_ln")
    {
        far_end_cdr_ln.yfilter = yfilter;
    }
    if(value_path == "neighbor_link")
    {
        neighbor_link.yfilter = yfilter;
    }
}

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::State::Down::Detail::DataIdx::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "history" || name == "port_data_idx" || name == "sfe_port" || name == "admin-state" || name == "oper_state" || name == "near_end_cdr_ln" || name == "near_end_cxp_ch" || name == "far_end_cxp_ch" || name == "far_end_cdr_ln" || name == "neighbor_link")
        return true;
    return false;
}

Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::State::Down::Detail::DataIdx::History::History()
    :
    history_idx{YType::int32, "history_idx"},
    time_stamp{YType::str, "time_stamp"},
    admin_state{YType::str, "admin-state"},
    oper_state{YType::str, "oper_state"},
    error_state{YType::str, "error_state"}
{

    yang_name = "history"; yang_parent_name = "data_idx"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::State::Down::Detail::DataIdx::History::~History()
{
}

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::State::Down::Detail::DataIdx::History::has_data() const
{
    if (is_presence_container) return true;
    return history_idx.is_set
	|| time_stamp.is_set
	|| admin_state.is_set
	|| oper_state.is_set
	|| error_state.is_set;
}

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::State::Down::Detail::DataIdx::History::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(history_idx.yfilter)
	|| ydk::is_set(time_stamp.yfilter)
	|| ydk::is_set(admin_state.yfilter)
	|| ydk::is_set(oper_state.yfilter)
	|| ydk::is_set(error_state.yfilter);
}

std::string Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::State::Down::Detail::DataIdx::History::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "history";
    ADD_KEY_TOKEN(history_idx, "history_idx");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::State::Down::Detail::DataIdx::History::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (history_idx.is_set || is_set(history_idx.yfilter)) leaf_name_data.push_back(history_idx.get_name_leafdata());
    if (time_stamp.is_set || is_set(time_stamp.yfilter)) leaf_name_data.push_back(time_stamp.get_name_leafdata());
    if (admin_state.is_set || is_set(admin_state.yfilter)) leaf_name_data.push_back(admin_state.get_name_leafdata());
    if (oper_state.is_set || is_set(oper_state.yfilter)) leaf_name_data.push_back(oper_state.get_name_leafdata());
    if (error_state.is_set || is_set(error_state.yfilter)) leaf_name_data.push_back(error_state.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::State::Down::Detail::DataIdx::History::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::State::Down::Detail::DataIdx::History::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::State::Down::Detail::DataIdx::History::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
}

void Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::State::Down::Detail::DataIdx::History::set_filter(const std::string & value_path, YFilter yfilter)
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
}

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::State::Down::Detail::DataIdx::History::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "history_idx" || name == "time_stamp" || name == "admin-state" || name == "oper_state" || name == "error_state")
        return true;
    return false;
}

Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::State::Mismatch::Mismatch()
    :
    data_idx(this, {"port_data_idx"})
    , brief(std::make_shared<Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::State::Mismatch::Brief>())
    , detail(std::make_shared<Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::State::Mismatch::Detail>())
{
    brief->parent = this;
    detail->parent = this;

    yang_name = "mismatch"; yang_parent_name = "state"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::State::Mismatch::~Mismatch()
{
}

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::State::Mismatch::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<data_idx.len(); index++)
    {
        if(data_idx[index]->has_data())
            return true;
    }
    return (brief !=  nullptr && brief->has_data())
	|| (detail !=  nullptr && detail->has_data());
}

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::State::Mismatch::has_operation() const
{
    for (std::size_t index=0; index<data_idx.len(); index++)
    {
        if(data_idx[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (brief !=  nullptr && brief->has_operation())
	|| (detail !=  nullptr && detail->has_operation());
}

std::string Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::State::Mismatch::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mismatch";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::State::Mismatch::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::State::Mismatch::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "data_idx")
    {
        auto ent_ = std::make_shared<Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::State::Mismatch::DataIdx>();
        ent_->parent = this;
        data_idx.append(ent_);
        return ent_;
    }

    if(child_yang_name == "brief")
    {
        if(brief == nullptr)
        {
            brief = std::make_shared<Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::State::Mismatch::Brief>();
        }
        return brief;
    }

    if(child_yang_name == "detail")
    {
        if(detail == nullptr)
        {
            detail = std::make_shared<Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::State::Mismatch::Detail>();
        }
        return detail;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::State::Mismatch::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : data_idx.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

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

void Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::State::Mismatch::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::State::Mismatch::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::State::Mismatch::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data_idx" || name == "brief" || name == "detail")
        return true;
    return false;
}

Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::State::Mismatch::DataIdx::DataIdx()
    :
    port_data_idx{YType::int64, "port_data_idx"},
    sfe_port{YType::str, "sfe_port"},
    admin_state{YType::str, "admin-state"},
    oper_state{YType::str, "oper_state"},
    near_end_cdr_ln{YType::str, "near_end_cdr_ln"},
    near_end_cxp_ch{YType::str, "near_end_cxp_ch"},
    far_end_cxp_ch{YType::str, "far_end_cxp_ch"},
    far_end_cdr_ln{YType::str, "far_end_cdr_ln"},
    neighbor_link{YType::str, "neighbor_link"}
        ,
    history(this, {"history_idx"})
{

    yang_name = "data_idx"; yang_parent_name = "mismatch"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::State::Mismatch::DataIdx::~DataIdx()
{
}

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::State::Mismatch::DataIdx::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<history.len(); index++)
    {
        if(history[index]->has_data())
            return true;
    }
    return port_data_idx.is_set
	|| sfe_port.is_set
	|| admin_state.is_set
	|| oper_state.is_set
	|| near_end_cdr_ln.is_set
	|| near_end_cxp_ch.is_set
	|| far_end_cxp_ch.is_set
	|| far_end_cdr_ln.is_set
	|| neighbor_link.is_set;
}

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::State::Mismatch::DataIdx::has_operation() const
{
    for (std::size_t index=0; index<history.len(); index++)
    {
        if(history[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(port_data_idx.yfilter)
	|| ydk::is_set(sfe_port.yfilter)
	|| ydk::is_set(admin_state.yfilter)
	|| ydk::is_set(oper_state.yfilter)
	|| ydk::is_set(near_end_cdr_ln.yfilter)
	|| ydk::is_set(near_end_cxp_ch.yfilter)
	|| ydk::is_set(far_end_cxp_ch.yfilter)
	|| ydk::is_set(far_end_cdr_ln.yfilter)
	|| ydk::is_set(neighbor_link.yfilter);
}

std::string Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::State::Mismatch::DataIdx::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "data_idx";
    ADD_KEY_TOKEN(port_data_idx, "port_data_idx");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::State::Mismatch::DataIdx::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port_data_idx.is_set || is_set(port_data_idx.yfilter)) leaf_name_data.push_back(port_data_idx.get_name_leafdata());
    if (sfe_port.is_set || is_set(sfe_port.yfilter)) leaf_name_data.push_back(sfe_port.get_name_leafdata());
    if (admin_state.is_set || is_set(admin_state.yfilter)) leaf_name_data.push_back(admin_state.get_name_leafdata());
    if (oper_state.is_set || is_set(oper_state.yfilter)) leaf_name_data.push_back(oper_state.get_name_leafdata());
    if (near_end_cdr_ln.is_set || is_set(near_end_cdr_ln.yfilter)) leaf_name_data.push_back(near_end_cdr_ln.get_name_leafdata());
    if (near_end_cxp_ch.is_set || is_set(near_end_cxp_ch.yfilter)) leaf_name_data.push_back(near_end_cxp_ch.get_name_leafdata());
    if (far_end_cxp_ch.is_set || is_set(far_end_cxp_ch.yfilter)) leaf_name_data.push_back(far_end_cxp_ch.get_name_leafdata());
    if (far_end_cdr_ln.is_set || is_set(far_end_cdr_ln.yfilter)) leaf_name_data.push_back(far_end_cdr_ln.get_name_leafdata());
    if (neighbor_link.is_set || is_set(neighbor_link.yfilter)) leaf_name_data.push_back(neighbor_link.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::State::Mismatch::DataIdx::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "history")
    {
        auto ent_ = std::make_shared<Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::State::Mismatch::DataIdx::History>();
        ent_->parent = this;
        history.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::State::Mismatch::DataIdx::get_children() const
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

void Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::State::Mismatch::DataIdx::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "port_data_idx")
    {
        port_data_idx = value;
        port_data_idx.value_namespace = name_space;
        port_data_idx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sfe_port")
    {
        sfe_port = value;
        sfe_port.value_namespace = name_space;
        sfe_port.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "near_end_cdr_ln")
    {
        near_end_cdr_ln = value;
        near_end_cdr_ln.value_namespace = name_space;
        near_end_cdr_ln.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "near_end_cxp_ch")
    {
        near_end_cxp_ch = value;
        near_end_cxp_ch.value_namespace = name_space;
        near_end_cxp_ch.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "far_end_cxp_ch")
    {
        far_end_cxp_ch = value;
        far_end_cxp_ch.value_namespace = name_space;
        far_end_cxp_ch.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "far_end_cdr_ln")
    {
        far_end_cdr_ln = value;
        far_end_cdr_ln.value_namespace = name_space;
        far_end_cdr_ln.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor_link")
    {
        neighbor_link = value;
        neighbor_link.value_namespace = name_space;
        neighbor_link.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::State::Mismatch::DataIdx::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "port_data_idx")
    {
        port_data_idx.yfilter = yfilter;
    }
    if(value_path == "sfe_port")
    {
        sfe_port.yfilter = yfilter;
    }
    if(value_path == "admin-state")
    {
        admin_state.yfilter = yfilter;
    }
    if(value_path == "oper_state")
    {
        oper_state.yfilter = yfilter;
    }
    if(value_path == "near_end_cdr_ln")
    {
        near_end_cdr_ln.yfilter = yfilter;
    }
    if(value_path == "near_end_cxp_ch")
    {
        near_end_cxp_ch.yfilter = yfilter;
    }
    if(value_path == "far_end_cxp_ch")
    {
        far_end_cxp_ch.yfilter = yfilter;
    }
    if(value_path == "far_end_cdr_ln")
    {
        far_end_cdr_ln.yfilter = yfilter;
    }
    if(value_path == "neighbor_link")
    {
        neighbor_link.yfilter = yfilter;
    }
}

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::State::Mismatch::DataIdx::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "history" || name == "port_data_idx" || name == "sfe_port" || name == "admin-state" || name == "oper_state" || name == "near_end_cdr_ln" || name == "near_end_cxp_ch" || name == "far_end_cxp_ch" || name == "far_end_cdr_ln" || name == "neighbor_link")
        return true;
    return false;
}

Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::State::Mismatch::DataIdx::History::History()
    :
    history_idx{YType::int32, "history_idx"},
    time_stamp{YType::str, "time_stamp"},
    admin_state{YType::str, "admin-state"},
    oper_state{YType::str, "oper_state"},
    error_state{YType::str, "error_state"}
{

    yang_name = "history"; yang_parent_name = "data_idx"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::State::Mismatch::DataIdx::History::~History()
{
}

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::State::Mismatch::DataIdx::History::has_data() const
{
    if (is_presence_container) return true;
    return history_idx.is_set
	|| time_stamp.is_set
	|| admin_state.is_set
	|| oper_state.is_set
	|| error_state.is_set;
}

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::State::Mismatch::DataIdx::History::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(history_idx.yfilter)
	|| ydk::is_set(time_stamp.yfilter)
	|| ydk::is_set(admin_state.yfilter)
	|| ydk::is_set(oper_state.yfilter)
	|| ydk::is_set(error_state.yfilter);
}

std::string Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::State::Mismatch::DataIdx::History::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "history";
    ADD_KEY_TOKEN(history_idx, "history_idx");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::State::Mismatch::DataIdx::History::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (history_idx.is_set || is_set(history_idx.yfilter)) leaf_name_data.push_back(history_idx.get_name_leafdata());
    if (time_stamp.is_set || is_set(time_stamp.yfilter)) leaf_name_data.push_back(time_stamp.get_name_leafdata());
    if (admin_state.is_set || is_set(admin_state.yfilter)) leaf_name_data.push_back(admin_state.get_name_leafdata());
    if (oper_state.is_set || is_set(oper_state.yfilter)) leaf_name_data.push_back(oper_state.get_name_leafdata());
    if (error_state.is_set || is_set(error_state.yfilter)) leaf_name_data.push_back(error_state.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::State::Mismatch::DataIdx::History::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::State::Mismatch::DataIdx::History::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::State::Mismatch::DataIdx::History::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
}

void Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::State::Mismatch::DataIdx::History::set_filter(const std::string & value_path, YFilter yfilter)
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
}

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::State::Mismatch::DataIdx::History::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "history_idx" || name == "time_stamp" || name == "admin-state" || name == "oper_state" || name == "error_state")
        return true;
    return false;
}

Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::State::Mismatch::Brief::Brief()
    :
    data_idx(this, {"port_data_idx"})
{

    yang_name = "brief"; yang_parent_name = "mismatch"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::State::Mismatch::Brief::~Brief()
{
}

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::State::Mismatch::Brief::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<data_idx.len(); index++)
    {
        if(data_idx[index]->has_data())
            return true;
    }
    return false;
}

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::State::Mismatch::Brief::has_operation() const
{
    for (std::size_t index=0; index<data_idx.len(); index++)
    {
        if(data_idx[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::State::Mismatch::Brief::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "brief";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::State::Mismatch::Brief::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::State::Mismatch::Brief::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "data_idx")
    {
        auto ent_ = std::make_shared<Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::State::Mismatch::Brief::DataIdx>();
        ent_->parent = this;
        data_idx.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::State::Mismatch::Brief::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : data_idx.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::State::Mismatch::Brief::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::State::Mismatch::Brief::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::State::Mismatch::Brief::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data_idx")
        return true;
    return false;
}

Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::State::Mismatch::Brief::DataIdx::DataIdx()
    :
    port_data_idx{YType::int64, "port_data_idx"},
    sfe_port{YType::str, "sfe_port"},
    admin_state{YType::str, "admin-state"},
    oper_state{YType::str, "oper_state"},
    near_end_cdr_ln{YType::str, "near_end_cdr_ln"},
    near_end_cxp_ch{YType::str, "near_end_cxp_ch"},
    far_end_cxp_ch{YType::str, "far_end_cxp_ch"},
    far_end_cdr_ln{YType::str, "far_end_cdr_ln"},
    neighbor_link{YType::str, "neighbor_link"}
        ,
    history(this, {"history_idx"})
{

    yang_name = "data_idx"; yang_parent_name = "brief"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::State::Mismatch::Brief::DataIdx::~DataIdx()
{
}

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::State::Mismatch::Brief::DataIdx::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<history.len(); index++)
    {
        if(history[index]->has_data())
            return true;
    }
    return port_data_idx.is_set
	|| sfe_port.is_set
	|| admin_state.is_set
	|| oper_state.is_set
	|| near_end_cdr_ln.is_set
	|| near_end_cxp_ch.is_set
	|| far_end_cxp_ch.is_set
	|| far_end_cdr_ln.is_set
	|| neighbor_link.is_set;
}

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::State::Mismatch::Brief::DataIdx::has_operation() const
{
    for (std::size_t index=0; index<history.len(); index++)
    {
        if(history[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(port_data_idx.yfilter)
	|| ydk::is_set(sfe_port.yfilter)
	|| ydk::is_set(admin_state.yfilter)
	|| ydk::is_set(oper_state.yfilter)
	|| ydk::is_set(near_end_cdr_ln.yfilter)
	|| ydk::is_set(near_end_cxp_ch.yfilter)
	|| ydk::is_set(far_end_cxp_ch.yfilter)
	|| ydk::is_set(far_end_cdr_ln.yfilter)
	|| ydk::is_set(neighbor_link.yfilter);
}

std::string Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::State::Mismatch::Brief::DataIdx::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "data_idx";
    ADD_KEY_TOKEN(port_data_idx, "port_data_idx");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::State::Mismatch::Brief::DataIdx::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port_data_idx.is_set || is_set(port_data_idx.yfilter)) leaf_name_data.push_back(port_data_idx.get_name_leafdata());
    if (sfe_port.is_set || is_set(sfe_port.yfilter)) leaf_name_data.push_back(sfe_port.get_name_leafdata());
    if (admin_state.is_set || is_set(admin_state.yfilter)) leaf_name_data.push_back(admin_state.get_name_leafdata());
    if (oper_state.is_set || is_set(oper_state.yfilter)) leaf_name_data.push_back(oper_state.get_name_leafdata());
    if (near_end_cdr_ln.is_set || is_set(near_end_cdr_ln.yfilter)) leaf_name_data.push_back(near_end_cdr_ln.get_name_leafdata());
    if (near_end_cxp_ch.is_set || is_set(near_end_cxp_ch.yfilter)) leaf_name_data.push_back(near_end_cxp_ch.get_name_leafdata());
    if (far_end_cxp_ch.is_set || is_set(far_end_cxp_ch.yfilter)) leaf_name_data.push_back(far_end_cxp_ch.get_name_leafdata());
    if (far_end_cdr_ln.is_set || is_set(far_end_cdr_ln.yfilter)) leaf_name_data.push_back(far_end_cdr_ln.get_name_leafdata());
    if (neighbor_link.is_set || is_set(neighbor_link.yfilter)) leaf_name_data.push_back(neighbor_link.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::State::Mismatch::Brief::DataIdx::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "history")
    {
        auto ent_ = std::make_shared<Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::State::Mismatch::Brief::DataIdx::History>();
        ent_->parent = this;
        history.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::State::Mismatch::Brief::DataIdx::get_children() const
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

void Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::State::Mismatch::Brief::DataIdx::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "port_data_idx")
    {
        port_data_idx = value;
        port_data_idx.value_namespace = name_space;
        port_data_idx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sfe_port")
    {
        sfe_port = value;
        sfe_port.value_namespace = name_space;
        sfe_port.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "near_end_cdr_ln")
    {
        near_end_cdr_ln = value;
        near_end_cdr_ln.value_namespace = name_space;
        near_end_cdr_ln.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "near_end_cxp_ch")
    {
        near_end_cxp_ch = value;
        near_end_cxp_ch.value_namespace = name_space;
        near_end_cxp_ch.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "far_end_cxp_ch")
    {
        far_end_cxp_ch = value;
        far_end_cxp_ch.value_namespace = name_space;
        far_end_cxp_ch.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "far_end_cdr_ln")
    {
        far_end_cdr_ln = value;
        far_end_cdr_ln.value_namespace = name_space;
        far_end_cdr_ln.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor_link")
    {
        neighbor_link = value;
        neighbor_link.value_namespace = name_space;
        neighbor_link.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::State::Mismatch::Brief::DataIdx::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "port_data_idx")
    {
        port_data_idx.yfilter = yfilter;
    }
    if(value_path == "sfe_port")
    {
        sfe_port.yfilter = yfilter;
    }
    if(value_path == "admin-state")
    {
        admin_state.yfilter = yfilter;
    }
    if(value_path == "oper_state")
    {
        oper_state.yfilter = yfilter;
    }
    if(value_path == "near_end_cdr_ln")
    {
        near_end_cdr_ln.yfilter = yfilter;
    }
    if(value_path == "near_end_cxp_ch")
    {
        near_end_cxp_ch.yfilter = yfilter;
    }
    if(value_path == "far_end_cxp_ch")
    {
        far_end_cxp_ch.yfilter = yfilter;
    }
    if(value_path == "far_end_cdr_ln")
    {
        far_end_cdr_ln.yfilter = yfilter;
    }
    if(value_path == "neighbor_link")
    {
        neighbor_link.yfilter = yfilter;
    }
}

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::State::Mismatch::Brief::DataIdx::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "history" || name == "port_data_idx" || name == "sfe_port" || name == "admin-state" || name == "oper_state" || name == "near_end_cdr_ln" || name == "near_end_cxp_ch" || name == "far_end_cxp_ch" || name == "far_end_cdr_ln" || name == "neighbor_link")
        return true;
    return false;
}

Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::State::Mismatch::Brief::DataIdx::History::History()
    :
    history_idx{YType::int32, "history_idx"},
    time_stamp{YType::str, "time_stamp"},
    admin_state{YType::str, "admin-state"},
    oper_state{YType::str, "oper_state"},
    error_state{YType::str, "error_state"}
{

    yang_name = "history"; yang_parent_name = "data_idx"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::State::Mismatch::Brief::DataIdx::History::~History()
{
}

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::State::Mismatch::Brief::DataIdx::History::has_data() const
{
    if (is_presence_container) return true;
    return history_idx.is_set
	|| time_stamp.is_set
	|| admin_state.is_set
	|| oper_state.is_set
	|| error_state.is_set;
}

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::State::Mismatch::Brief::DataIdx::History::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(history_idx.yfilter)
	|| ydk::is_set(time_stamp.yfilter)
	|| ydk::is_set(admin_state.yfilter)
	|| ydk::is_set(oper_state.yfilter)
	|| ydk::is_set(error_state.yfilter);
}

std::string Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::State::Mismatch::Brief::DataIdx::History::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "history";
    ADD_KEY_TOKEN(history_idx, "history_idx");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::State::Mismatch::Brief::DataIdx::History::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (history_idx.is_set || is_set(history_idx.yfilter)) leaf_name_data.push_back(history_idx.get_name_leafdata());
    if (time_stamp.is_set || is_set(time_stamp.yfilter)) leaf_name_data.push_back(time_stamp.get_name_leafdata());
    if (admin_state.is_set || is_set(admin_state.yfilter)) leaf_name_data.push_back(admin_state.get_name_leafdata());
    if (oper_state.is_set || is_set(oper_state.yfilter)) leaf_name_data.push_back(oper_state.get_name_leafdata());
    if (error_state.is_set || is_set(error_state.yfilter)) leaf_name_data.push_back(error_state.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::State::Mismatch::Brief::DataIdx::History::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::State::Mismatch::Brief::DataIdx::History::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::State::Mismatch::Brief::DataIdx::History::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
}

void Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::State::Mismatch::Brief::DataIdx::History::set_filter(const std::string & value_path, YFilter yfilter)
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
}

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::State::Mismatch::Brief::DataIdx::History::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "history_idx" || name == "time_stamp" || name == "admin-state" || name == "oper_state" || name == "error_state")
        return true;
    return false;
}

Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::State::Mismatch::Detail::Detail()
    :
    data_idx(this, {"port_data_idx"})
{

    yang_name = "detail"; yang_parent_name = "mismatch"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::State::Mismatch::Detail::~Detail()
{
}

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::State::Mismatch::Detail::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<data_idx.len(); index++)
    {
        if(data_idx[index]->has_data())
            return true;
    }
    return false;
}

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::State::Mismatch::Detail::has_operation() const
{
    for (std::size_t index=0; index<data_idx.len(); index++)
    {
        if(data_idx[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::State::Mismatch::Detail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "detail";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::State::Mismatch::Detail::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::State::Mismatch::Detail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "data_idx")
    {
        auto ent_ = std::make_shared<Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::State::Mismatch::Detail::DataIdx>();
        ent_->parent = this;
        data_idx.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::State::Mismatch::Detail::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : data_idx.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::State::Mismatch::Detail::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::State::Mismatch::Detail::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::State::Mismatch::Detail::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data_idx")
        return true;
    return false;
}

Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::State::Mismatch::Detail::DataIdx::DataIdx()
    :
    port_data_idx{YType::int64, "port_data_idx"},
    sfe_port{YType::str, "sfe_port"},
    admin_state{YType::str, "admin-state"},
    oper_state{YType::str, "oper_state"},
    near_end_cdr_ln{YType::str, "near_end_cdr_ln"},
    near_end_cxp_ch{YType::str, "near_end_cxp_ch"},
    far_end_cxp_ch{YType::str, "far_end_cxp_ch"},
    far_end_cdr_ln{YType::str, "far_end_cdr_ln"},
    neighbor_link{YType::str, "neighbor_link"}
        ,
    history(this, {"history_idx"})
{

    yang_name = "data_idx"; yang_parent_name = "detail"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::State::Mismatch::Detail::DataIdx::~DataIdx()
{
}

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::State::Mismatch::Detail::DataIdx::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<history.len(); index++)
    {
        if(history[index]->has_data())
            return true;
    }
    return port_data_idx.is_set
	|| sfe_port.is_set
	|| admin_state.is_set
	|| oper_state.is_set
	|| near_end_cdr_ln.is_set
	|| near_end_cxp_ch.is_set
	|| far_end_cxp_ch.is_set
	|| far_end_cdr_ln.is_set
	|| neighbor_link.is_set;
}

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::State::Mismatch::Detail::DataIdx::has_operation() const
{
    for (std::size_t index=0; index<history.len(); index++)
    {
        if(history[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(port_data_idx.yfilter)
	|| ydk::is_set(sfe_port.yfilter)
	|| ydk::is_set(admin_state.yfilter)
	|| ydk::is_set(oper_state.yfilter)
	|| ydk::is_set(near_end_cdr_ln.yfilter)
	|| ydk::is_set(near_end_cxp_ch.yfilter)
	|| ydk::is_set(far_end_cxp_ch.yfilter)
	|| ydk::is_set(far_end_cdr_ln.yfilter)
	|| ydk::is_set(neighbor_link.yfilter);
}

std::string Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::State::Mismatch::Detail::DataIdx::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "data_idx";
    ADD_KEY_TOKEN(port_data_idx, "port_data_idx");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::State::Mismatch::Detail::DataIdx::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port_data_idx.is_set || is_set(port_data_idx.yfilter)) leaf_name_data.push_back(port_data_idx.get_name_leafdata());
    if (sfe_port.is_set || is_set(sfe_port.yfilter)) leaf_name_data.push_back(sfe_port.get_name_leafdata());
    if (admin_state.is_set || is_set(admin_state.yfilter)) leaf_name_data.push_back(admin_state.get_name_leafdata());
    if (oper_state.is_set || is_set(oper_state.yfilter)) leaf_name_data.push_back(oper_state.get_name_leafdata());
    if (near_end_cdr_ln.is_set || is_set(near_end_cdr_ln.yfilter)) leaf_name_data.push_back(near_end_cdr_ln.get_name_leafdata());
    if (near_end_cxp_ch.is_set || is_set(near_end_cxp_ch.yfilter)) leaf_name_data.push_back(near_end_cxp_ch.get_name_leafdata());
    if (far_end_cxp_ch.is_set || is_set(far_end_cxp_ch.yfilter)) leaf_name_data.push_back(far_end_cxp_ch.get_name_leafdata());
    if (far_end_cdr_ln.is_set || is_set(far_end_cdr_ln.yfilter)) leaf_name_data.push_back(far_end_cdr_ln.get_name_leafdata());
    if (neighbor_link.is_set || is_set(neighbor_link.yfilter)) leaf_name_data.push_back(neighbor_link.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::State::Mismatch::Detail::DataIdx::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "history")
    {
        auto ent_ = std::make_shared<Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::State::Mismatch::Detail::DataIdx::History>();
        ent_->parent = this;
        history.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::State::Mismatch::Detail::DataIdx::get_children() const
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

void Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::State::Mismatch::Detail::DataIdx::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "port_data_idx")
    {
        port_data_idx = value;
        port_data_idx.value_namespace = name_space;
        port_data_idx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sfe_port")
    {
        sfe_port = value;
        sfe_port.value_namespace = name_space;
        sfe_port.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "near_end_cdr_ln")
    {
        near_end_cdr_ln = value;
        near_end_cdr_ln.value_namespace = name_space;
        near_end_cdr_ln.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "near_end_cxp_ch")
    {
        near_end_cxp_ch = value;
        near_end_cxp_ch.value_namespace = name_space;
        near_end_cxp_ch.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "far_end_cxp_ch")
    {
        far_end_cxp_ch = value;
        far_end_cxp_ch.value_namespace = name_space;
        far_end_cxp_ch.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "far_end_cdr_ln")
    {
        far_end_cdr_ln = value;
        far_end_cdr_ln.value_namespace = name_space;
        far_end_cdr_ln.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor_link")
    {
        neighbor_link = value;
        neighbor_link.value_namespace = name_space;
        neighbor_link.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::State::Mismatch::Detail::DataIdx::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "port_data_idx")
    {
        port_data_idx.yfilter = yfilter;
    }
    if(value_path == "sfe_port")
    {
        sfe_port.yfilter = yfilter;
    }
    if(value_path == "admin-state")
    {
        admin_state.yfilter = yfilter;
    }
    if(value_path == "oper_state")
    {
        oper_state.yfilter = yfilter;
    }
    if(value_path == "near_end_cdr_ln")
    {
        near_end_cdr_ln.yfilter = yfilter;
    }
    if(value_path == "near_end_cxp_ch")
    {
        near_end_cxp_ch.yfilter = yfilter;
    }
    if(value_path == "far_end_cxp_ch")
    {
        far_end_cxp_ch.yfilter = yfilter;
    }
    if(value_path == "far_end_cdr_ln")
    {
        far_end_cdr_ln.yfilter = yfilter;
    }
    if(value_path == "neighbor_link")
    {
        neighbor_link.yfilter = yfilter;
    }
}

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::State::Mismatch::Detail::DataIdx::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "history" || name == "port_data_idx" || name == "sfe_port" || name == "admin-state" || name == "oper_state" || name == "near_end_cdr_ln" || name == "near_end_cxp_ch" || name == "far_end_cxp_ch" || name == "far_end_cdr_ln" || name == "neighbor_link")
        return true;
    return false;
}

Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::State::Mismatch::Detail::DataIdx::History::History()
    :
    history_idx{YType::int32, "history_idx"},
    time_stamp{YType::str, "time_stamp"},
    admin_state{YType::str, "admin-state"},
    oper_state{YType::str, "oper_state"},
    error_state{YType::str, "error_state"}
{

    yang_name = "history"; yang_parent_name = "data_idx"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::State::Mismatch::Detail::DataIdx::History::~History()
{
}

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::State::Mismatch::Detail::DataIdx::History::has_data() const
{
    if (is_presence_container) return true;
    return history_idx.is_set
	|| time_stamp.is_set
	|| admin_state.is_set
	|| oper_state.is_set
	|| error_state.is_set;
}

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::State::Mismatch::Detail::DataIdx::History::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(history_idx.yfilter)
	|| ydk::is_set(time_stamp.yfilter)
	|| ydk::is_set(admin_state.yfilter)
	|| ydk::is_set(oper_state.yfilter)
	|| ydk::is_set(error_state.yfilter);
}

std::string Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::State::Mismatch::Detail::DataIdx::History::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "history";
    ADD_KEY_TOKEN(history_idx, "history_idx");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::State::Mismatch::Detail::DataIdx::History::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (history_idx.is_set || is_set(history_idx.yfilter)) leaf_name_data.push_back(history_idx.get_name_leafdata());
    if (time_stamp.is_set || is_set(time_stamp.yfilter)) leaf_name_data.push_back(time_stamp.get_name_leafdata());
    if (admin_state.is_set || is_set(admin_state.yfilter)) leaf_name_data.push_back(admin_state.get_name_leafdata());
    if (oper_state.is_set || is_set(oper_state.yfilter)) leaf_name_data.push_back(oper_state.get_name_leafdata());
    if (error_state.is_set || is_set(error_state.yfilter)) leaf_name_data.push_back(error_state.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::State::Mismatch::Detail::DataIdx::History::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::State::Mismatch::Detail::DataIdx::History::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::State::Mismatch::Detail::DataIdx::History::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
}

void Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::State::Mismatch::Detail::DataIdx::History::set_filter(const std::string & value_path, YFilter yfilter)
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
}

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::State::Mismatch::Detail::DataIdx::History::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "history_idx" || name == "time_stamp" || name == "admin-state" || name == "oper_state" || name == "error_state")
        return true;
    return false;
}

Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::Statistics::Statistics()
    :
    data_idx(this, {"port_data_idx"})
    , brief(std::make_shared<Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::Statistics::Brief>())
    , detail(std::make_shared<Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::Statistics::Detail>())
{
    brief->parent = this;
    detail->parent = this;

    yang_name = "statistics"; yang_parent_name = "tx"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::Statistics::~Statistics()
{
}

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::Statistics::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<data_idx.len(); index++)
    {
        if(data_idx[index]->has_data())
            return true;
    }
    return (brief !=  nullptr && brief->has_data())
	|| (detail !=  nullptr && detail->has_data());
}

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::Statistics::has_operation() const
{
    for (std::size_t index=0; index<data_idx.len(); index++)
    {
        if(data_idx[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (brief !=  nullptr && brief->has_operation())
	|| (detail !=  nullptr && detail->has_operation());
}

std::string Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::Statistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::Statistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::Statistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "data_idx")
    {
        auto ent_ = std::make_shared<Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::Statistics::DataIdx>();
        ent_->parent = this;
        data_idx.append(ent_);
        return ent_;
    }

    if(child_yang_name == "brief")
    {
        if(brief == nullptr)
        {
            brief = std::make_shared<Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::Statistics::Brief>();
        }
        return brief;
    }

    if(child_yang_name == "detail")
    {
        if(detail == nullptr)
        {
            detail = std::make_shared<Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::Statistics::Detail>();
        }
        return detail;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::Statistics::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : data_idx.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

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

void Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::Statistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::Statistics::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::Statistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data_idx" || name == "brief" || name == "detail")
        return true;
    return false;
}

Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::Statistics::DataIdx::DataIdx()
    :
    port_data_idx{YType::int64, "port_data_idx"},
    rack_num{YType::str, "rack_num"},
    sfe_port{YType::str, "sfe_port"},
    tx_control_cells_counter{YType::uint64, "TX_Control_cells_counter"},
    tx_data_cell_counter{YType::uint64, "TX_Data_cell_counter"},
    tx_data_byte_counter{YType::uint64, "TX_Data_byte_counter"},
    rx_crc_errors_counter{YType::uint64, "RX_CRC_errors_counter"},
    rx_lfec_fec_correctable_error{YType::uint64, "RX_LFEC_FEC_correctable_error"},
    rx_8b_10b_disparity_errors{YType::uint64, "RX_8b_10b_disparity_errors"},
    rx_control_cells_counter{YType::uint64, "RX_Control_cells_counter"},
    rx_data_cell_counter{YType::uint64, "RX_Data_cell_counter"},
    rx_data_byte_counter{YType::uint64, "RX_Data_byte_counter"},
    rx_dropped_retransmitted_control{YType::uint64, "RX_dropped_retransmitted_control"},
    tx_asyn_fifo_rate{YType::uint64, "TX_Asyn_fifo_rate"},
    rx_asyn_fifo_rate{YType::uint64, "RX_Asyn_fifo_rate"},
    rx_lfec_fec_uncorrectable_errors{YType::uint64, "RX_LFEC_FEC_uncorrectable_errors"},
    rx_8b_10b_code_errors{YType::uint64, "RX_8b_10b_code_errors"},
    is_link_error{YType::boolean, "is_link_error"},
    link_crc_error{YType::uint32, "link_crc_error"},
    link_size_error{YType::uint32, "link_size_error"},
    link_mis_align_error{YType::uint32, "link_mis_align_error"},
    link_code_group_error{YType::uint32, "link_code_group_error"},
    link_no_sig_lock_error{YType::uint32, "link_no_sig_lock_error"},
    link_no_sig_accept_error{YType::uint32, "link_no_sig_accept_error"},
    link_tokens_error{YType::uint32, "link_tokens_error"},
    error_token_count{YType::uint32, "error_token_count"}
{

    yang_name = "data_idx"; yang_parent_name = "statistics"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::Statistics::DataIdx::~DataIdx()
{
}

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::Statistics::DataIdx::has_data() const
{
    if (is_presence_container) return true;
    return port_data_idx.is_set
	|| rack_num.is_set
	|| sfe_port.is_set
	|| tx_control_cells_counter.is_set
	|| tx_data_cell_counter.is_set
	|| tx_data_byte_counter.is_set
	|| rx_crc_errors_counter.is_set
	|| rx_lfec_fec_correctable_error.is_set
	|| rx_8b_10b_disparity_errors.is_set
	|| rx_control_cells_counter.is_set
	|| rx_data_cell_counter.is_set
	|| rx_data_byte_counter.is_set
	|| rx_dropped_retransmitted_control.is_set
	|| tx_asyn_fifo_rate.is_set
	|| rx_asyn_fifo_rate.is_set
	|| rx_lfec_fec_uncorrectable_errors.is_set
	|| rx_8b_10b_code_errors.is_set
	|| is_link_error.is_set
	|| link_crc_error.is_set
	|| link_size_error.is_set
	|| link_mis_align_error.is_set
	|| link_code_group_error.is_set
	|| link_no_sig_lock_error.is_set
	|| link_no_sig_accept_error.is_set
	|| link_tokens_error.is_set
	|| error_token_count.is_set;
}

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::Statistics::DataIdx::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(port_data_idx.yfilter)
	|| ydk::is_set(rack_num.yfilter)
	|| ydk::is_set(sfe_port.yfilter)
	|| ydk::is_set(tx_control_cells_counter.yfilter)
	|| ydk::is_set(tx_data_cell_counter.yfilter)
	|| ydk::is_set(tx_data_byte_counter.yfilter)
	|| ydk::is_set(rx_crc_errors_counter.yfilter)
	|| ydk::is_set(rx_lfec_fec_correctable_error.yfilter)
	|| ydk::is_set(rx_8b_10b_disparity_errors.yfilter)
	|| ydk::is_set(rx_control_cells_counter.yfilter)
	|| ydk::is_set(rx_data_cell_counter.yfilter)
	|| ydk::is_set(rx_data_byte_counter.yfilter)
	|| ydk::is_set(rx_dropped_retransmitted_control.yfilter)
	|| ydk::is_set(tx_asyn_fifo_rate.yfilter)
	|| ydk::is_set(rx_asyn_fifo_rate.yfilter)
	|| ydk::is_set(rx_lfec_fec_uncorrectable_errors.yfilter)
	|| ydk::is_set(rx_8b_10b_code_errors.yfilter)
	|| ydk::is_set(is_link_error.yfilter)
	|| ydk::is_set(link_crc_error.yfilter)
	|| ydk::is_set(link_size_error.yfilter)
	|| ydk::is_set(link_mis_align_error.yfilter)
	|| ydk::is_set(link_code_group_error.yfilter)
	|| ydk::is_set(link_no_sig_lock_error.yfilter)
	|| ydk::is_set(link_no_sig_accept_error.yfilter)
	|| ydk::is_set(link_tokens_error.yfilter)
	|| ydk::is_set(error_token_count.yfilter);
}

std::string Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::Statistics::DataIdx::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "data_idx";
    ADD_KEY_TOKEN(port_data_idx, "port_data_idx");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::Statistics::DataIdx::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port_data_idx.is_set || is_set(port_data_idx.yfilter)) leaf_name_data.push_back(port_data_idx.get_name_leafdata());
    if (rack_num.is_set || is_set(rack_num.yfilter)) leaf_name_data.push_back(rack_num.get_name_leafdata());
    if (sfe_port.is_set || is_set(sfe_port.yfilter)) leaf_name_data.push_back(sfe_port.get_name_leafdata());
    if (tx_control_cells_counter.is_set || is_set(tx_control_cells_counter.yfilter)) leaf_name_data.push_back(tx_control_cells_counter.get_name_leafdata());
    if (tx_data_cell_counter.is_set || is_set(tx_data_cell_counter.yfilter)) leaf_name_data.push_back(tx_data_cell_counter.get_name_leafdata());
    if (tx_data_byte_counter.is_set || is_set(tx_data_byte_counter.yfilter)) leaf_name_data.push_back(tx_data_byte_counter.get_name_leafdata());
    if (rx_crc_errors_counter.is_set || is_set(rx_crc_errors_counter.yfilter)) leaf_name_data.push_back(rx_crc_errors_counter.get_name_leafdata());
    if (rx_lfec_fec_correctable_error.is_set || is_set(rx_lfec_fec_correctable_error.yfilter)) leaf_name_data.push_back(rx_lfec_fec_correctable_error.get_name_leafdata());
    if (rx_8b_10b_disparity_errors.is_set || is_set(rx_8b_10b_disparity_errors.yfilter)) leaf_name_data.push_back(rx_8b_10b_disparity_errors.get_name_leafdata());
    if (rx_control_cells_counter.is_set || is_set(rx_control_cells_counter.yfilter)) leaf_name_data.push_back(rx_control_cells_counter.get_name_leafdata());
    if (rx_data_cell_counter.is_set || is_set(rx_data_cell_counter.yfilter)) leaf_name_data.push_back(rx_data_cell_counter.get_name_leafdata());
    if (rx_data_byte_counter.is_set || is_set(rx_data_byte_counter.yfilter)) leaf_name_data.push_back(rx_data_byte_counter.get_name_leafdata());
    if (rx_dropped_retransmitted_control.is_set || is_set(rx_dropped_retransmitted_control.yfilter)) leaf_name_data.push_back(rx_dropped_retransmitted_control.get_name_leafdata());
    if (tx_asyn_fifo_rate.is_set || is_set(tx_asyn_fifo_rate.yfilter)) leaf_name_data.push_back(tx_asyn_fifo_rate.get_name_leafdata());
    if (rx_asyn_fifo_rate.is_set || is_set(rx_asyn_fifo_rate.yfilter)) leaf_name_data.push_back(rx_asyn_fifo_rate.get_name_leafdata());
    if (rx_lfec_fec_uncorrectable_errors.is_set || is_set(rx_lfec_fec_uncorrectable_errors.yfilter)) leaf_name_data.push_back(rx_lfec_fec_uncorrectable_errors.get_name_leafdata());
    if (rx_8b_10b_code_errors.is_set || is_set(rx_8b_10b_code_errors.yfilter)) leaf_name_data.push_back(rx_8b_10b_code_errors.get_name_leafdata());
    if (is_link_error.is_set || is_set(is_link_error.yfilter)) leaf_name_data.push_back(is_link_error.get_name_leafdata());
    if (link_crc_error.is_set || is_set(link_crc_error.yfilter)) leaf_name_data.push_back(link_crc_error.get_name_leafdata());
    if (link_size_error.is_set || is_set(link_size_error.yfilter)) leaf_name_data.push_back(link_size_error.get_name_leafdata());
    if (link_mis_align_error.is_set || is_set(link_mis_align_error.yfilter)) leaf_name_data.push_back(link_mis_align_error.get_name_leafdata());
    if (link_code_group_error.is_set || is_set(link_code_group_error.yfilter)) leaf_name_data.push_back(link_code_group_error.get_name_leafdata());
    if (link_no_sig_lock_error.is_set || is_set(link_no_sig_lock_error.yfilter)) leaf_name_data.push_back(link_no_sig_lock_error.get_name_leafdata());
    if (link_no_sig_accept_error.is_set || is_set(link_no_sig_accept_error.yfilter)) leaf_name_data.push_back(link_no_sig_accept_error.get_name_leafdata());
    if (link_tokens_error.is_set || is_set(link_tokens_error.yfilter)) leaf_name_data.push_back(link_tokens_error.get_name_leafdata());
    if (error_token_count.is_set || is_set(error_token_count.yfilter)) leaf_name_data.push_back(error_token_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::Statistics::DataIdx::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::Statistics::DataIdx::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::Statistics::DataIdx::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "port_data_idx")
    {
        port_data_idx = value;
        port_data_idx.value_namespace = name_space;
        port_data_idx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rack_num")
    {
        rack_num = value;
        rack_num.value_namespace = name_space;
        rack_num.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sfe_port")
    {
        sfe_port = value;
        sfe_port.value_namespace = name_space;
        sfe_port.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "RX_8b_10b_disparity_errors")
    {
        rx_8b_10b_disparity_errors = value;
        rx_8b_10b_disparity_errors.value_namespace = name_space;
        rx_8b_10b_disparity_errors.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "RX_dropped_retransmitted_control")
    {
        rx_dropped_retransmitted_control = value;
        rx_dropped_retransmitted_control.value_namespace = name_space;
        rx_dropped_retransmitted_control.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "TX_Asyn_fifo_rate")
    {
        tx_asyn_fifo_rate = value;
        tx_asyn_fifo_rate.value_namespace = name_space;
        tx_asyn_fifo_rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "RX_Asyn_fifo_rate")
    {
        rx_asyn_fifo_rate = value;
        rx_asyn_fifo_rate.value_namespace = name_space;
        rx_asyn_fifo_rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "RX_LFEC_FEC_uncorrectable_errors")
    {
        rx_lfec_fec_uncorrectable_errors = value;
        rx_lfec_fec_uncorrectable_errors.value_namespace = name_space;
        rx_lfec_fec_uncorrectable_errors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "RX_8b_10b_code_errors")
    {
        rx_8b_10b_code_errors = value;
        rx_8b_10b_code_errors.value_namespace = name_space;
        rx_8b_10b_code_errors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is_link_error")
    {
        is_link_error = value;
        is_link_error.value_namespace = name_space;
        is_link_error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link_crc_error")
    {
        link_crc_error = value;
        link_crc_error.value_namespace = name_space;
        link_crc_error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link_size_error")
    {
        link_size_error = value;
        link_size_error.value_namespace = name_space;
        link_size_error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link_mis_align_error")
    {
        link_mis_align_error = value;
        link_mis_align_error.value_namespace = name_space;
        link_mis_align_error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link_code_group_error")
    {
        link_code_group_error = value;
        link_code_group_error.value_namespace = name_space;
        link_code_group_error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link_no_sig_lock_error")
    {
        link_no_sig_lock_error = value;
        link_no_sig_lock_error.value_namespace = name_space;
        link_no_sig_lock_error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link_no_sig_accept_error")
    {
        link_no_sig_accept_error = value;
        link_no_sig_accept_error.value_namespace = name_space;
        link_no_sig_accept_error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link_tokens_error")
    {
        link_tokens_error = value;
        link_tokens_error.value_namespace = name_space;
        link_tokens_error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "error_token_count")
    {
        error_token_count = value;
        error_token_count.value_namespace = name_space;
        error_token_count.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::Statistics::DataIdx::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "port_data_idx")
    {
        port_data_idx.yfilter = yfilter;
    }
    if(value_path == "rack_num")
    {
        rack_num.yfilter = yfilter;
    }
    if(value_path == "sfe_port")
    {
        sfe_port.yfilter = yfilter;
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
    if(value_path == "RX_CRC_errors_counter")
    {
        rx_crc_errors_counter.yfilter = yfilter;
    }
    if(value_path == "RX_LFEC_FEC_correctable_error")
    {
        rx_lfec_fec_correctable_error.yfilter = yfilter;
    }
    if(value_path == "RX_8b_10b_disparity_errors")
    {
        rx_8b_10b_disparity_errors.yfilter = yfilter;
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
    if(value_path == "RX_dropped_retransmitted_control")
    {
        rx_dropped_retransmitted_control.yfilter = yfilter;
    }
    if(value_path == "TX_Asyn_fifo_rate")
    {
        tx_asyn_fifo_rate.yfilter = yfilter;
    }
    if(value_path == "RX_Asyn_fifo_rate")
    {
        rx_asyn_fifo_rate.yfilter = yfilter;
    }
    if(value_path == "RX_LFEC_FEC_uncorrectable_errors")
    {
        rx_lfec_fec_uncorrectable_errors.yfilter = yfilter;
    }
    if(value_path == "RX_8b_10b_code_errors")
    {
        rx_8b_10b_code_errors.yfilter = yfilter;
    }
    if(value_path == "is_link_error")
    {
        is_link_error.yfilter = yfilter;
    }
    if(value_path == "link_crc_error")
    {
        link_crc_error.yfilter = yfilter;
    }
    if(value_path == "link_size_error")
    {
        link_size_error.yfilter = yfilter;
    }
    if(value_path == "link_mis_align_error")
    {
        link_mis_align_error.yfilter = yfilter;
    }
    if(value_path == "link_code_group_error")
    {
        link_code_group_error.yfilter = yfilter;
    }
    if(value_path == "link_no_sig_lock_error")
    {
        link_no_sig_lock_error.yfilter = yfilter;
    }
    if(value_path == "link_no_sig_accept_error")
    {
        link_no_sig_accept_error.yfilter = yfilter;
    }
    if(value_path == "link_tokens_error")
    {
        link_tokens_error.yfilter = yfilter;
    }
    if(value_path == "error_token_count")
    {
        error_token_count.yfilter = yfilter;
    }
}

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::Statistics::DataIdx::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "port_data_idx" || name == "rack_num" || name == "sfe_port" || name == "TX_Control_cells_counter" || name == "TX_Data_cell_counter" || name == "TX_Data_byte_counter" || name == "RX_CRC_errors_counter" || name == "RX_LFEC_FEC_correctable_error" || name == "RX_8b_10b_disparity_errors" || name == "RX_Control_cells_counter" || name == "RX_Data_cell_counter" || name == "RX_Data_byte_counter" || name == "RX_dropped_retransmitted_control" || name == "TX_Asyn_fifo_rate" || name == "RX_Asyn_fifo_rate" || name == "RX_LFEC_FEC_uncorrectable_errors" || name == "RX_8b_10b_code_errors" || name == "is_link_error" || name == "link_crc_error" || name == "link_size_error" || name == "link_mis_align_error" || name == "link_code_group_error" || name == "link_no_sig_lock_error" || name == "link_no_sig_accept_error" || name == "link_tokens_error" || name == "error_token_count")
        return true;
    return false;
}

Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::Statistics::Brief::Brief()
    :
    data_idx(this, {"port_data_idx"})
{

    yang_name = "brief"; yang_parent_name = "statistics"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::Statistics::Brief::~Brief()
{
}

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::Statistics::Brief::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<data_idx.len(); index++)
    {
        if(data_idx[index]->has_data())
            return true;
    }
    return false;
}

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::Statistics::Brief::has_operation() const
{
    for (std::size_t index=0; index<data_idx.len(); index++)
    {
        if(data_idx[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::Statistics::Brief::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "brief";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::Statistics::Brief::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::Statistics::Brief::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "data_idx")
    {
        auto ent_ = std::make_shared<Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::Statistics::Brief::DataIdx>();
        ent_->parent = this;
        data_idx.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::Statistics::Brief::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : data_idx.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::Statistics::Brief::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::Statistics::Brief::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::Statistics::Brief::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data_idx")
        return true;
    return false;
}

Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::Statistics::Brief::DataIdx::DataIdx()
    :
    port_data_idx{YType::int64, "port_data_idx"},
    rack_num{YType::str, "rack_num"},
    sfe_port{YType::str, "sfe_port"},
    tx_control_cells_counter{YType::uint64, "TX_Control_cells_counter"},
    tx_data_cell_counter{YType::uint64, "TX_Data_cell_counter"},
    tx_data_byte_counter{YType::uint64, "TX_Data_byte_counter"},
    rx_crc_errors_counter{YType::uint64, "RX_CRC_errors_counter"},
    rx_lfec_fec_correctable_error{YType::uint64, "RX_LFEC_FEC_correctable_error"},
    rx_8b_10b_disparity_errors{YType::uint64, "RX_8b_10b_disparity_errors"},
    rx_control_cells_counter{YType::uint64, "RX_Control_cells_counter"},
    rx_data_cell_counter{YType::uint64, "RX_Data_cell_counter"},
    rx_data_byte_counter{YType::uint64, "RX_Data_byte_counter"},
    rx_dropped_retransmitted_control{YType::uint64, "RX_dropped_retransmitted_control"},
    tx_asyn_fifo_rate{YType::uint64, "TX_Asyn_fifo_rate"},
    rx_asyn_fifo_rate{YType::uint64, "RX_Asyn_fifo_rate"},
    rx_lfec_fec_uncorrectable_errors{YType::uint64, "RX_LFEC_FEC_uncorrectable_errors"},
    rx_8b_10b_code_errors{YType::uint64, "RX_8b_10b_code_errors"},
    is_link_error{YType::boolean, "is_link_error"},
    link_crc_error{YType::uint32, "link_crc_error"},
    link_size_error{YType::uint32, "link_size_error"},
    link_mis_align_error{YType::uint32, "link_mis_align_error"},
    link_code_group_error{YType::uint32, "link_code_group_error"},
    link_no_sig_lock_error{YType::uint32, "link_no_sig_lock_error"},
    link_no_sig_accept_error{YType::uint32, "link_no_sig_accept_error"},
    link_tokens_error{YType::uint32, "link_tokens_error"},
    error_token_count{YType::uint32, "error_token_count"}
{

    yang_name = "data_idx"; yang_parent_name = "brief"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::Statistics::Brief::DataIdx::~DataIdx()
{
}

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::Statistics::Brief::DataIdx::has_data() const
{
    if (is_presence_container) return true;
    return port_data_idx.is_set
	|| rack_num.is_set
	|| sfe_port.is_set
	|| tx_control_cells_counter.is_set
	|| tx_data_cell_counter.is_set
	|| tx_data_byte_counter.is_set
	|| rx_crc_errors_counter.is_set
	|| rx_lfec_fec_correctable_error.is_set
	|| rx_8b_10b_disparity_errors.is_set
	|| rx_control_cells_counter.is_set
	|| rx_data_cell_counter.is_set
	|| rx_data_byte_counter.is_set
	|| rx_dropped_retransmitted_control.is_set
	|| tx_asyn_fifo_rate.is_set
	|| rx_asyn_fifo_rate.is_set
	|| rx_lfec_fec_uncorrectable_errors.is_set
	|| rx_8b_10b_code_errors.is_set
	|| is_link_error.is_set
	|| link_crc_error.is_set
	|| link_size_error.is_set
	|| link_mis_align_error.is_set
	|| link_code_group_error.is_set
	|| link_no_sig_lock_error.is_set
	|| link_no_sig_accept_error.is_set
	|| link_tokens_error.is_set
	|| error_token_count.is_set;
}

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::Statistics::Brief::DataIdx::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(port_data_idx.yfilter)
	|| ydk::is_set(rack_num.yfilter)
	|| ydk::is_set(sfe_port.yfilter)
	|| ydk::is_set(tx_control_cells_counter.yfilter)
	|| ydk::is_set(tx_data_cell_counter.yfilter)
	|| ydk::is_set(tx_data_byte_counter.yfilter)
	|| ydk::is_set(rx_crc_errors_counter.yfilter)
	|| ydk::is_set(rx_lfec_fec_correctable_error.yfilter)
	|| ydk::is_set(rx_8b_10b_disparity_errors.yfilter)
	|| ydk::is_set(rx_control_cells_counter.yfilter)
	|| ydk::is_set(rx_data_cell_counter.yfilter)
	|| ydk::is_set(rx_data_byte_counter.yfilter)
	|| ydk::is_set(rx_dropped_retransmitted_control.yfilter)
	|| ydk::is_set(tx_asyn_fifo_rate.yfilter)
	|| ydk::is_set(rx_asyn_fifo_rate.yfilter)
	|| ydk::is_set(rx_lfec_fec_uncorrectable_errors.yfilter)
	|| ydk::is_set(rx_8b_10b_code_errors.yfilter)
	|| ydk::is_set(is_link_error.yfilter)
	|| ydk::is_set(link_crc_error.yfilter)
	|| ydk::is_set(link_size_error.yfilter)
	|| ydk::is_set(link_mis_align_error.yfilter)
	|| ydk::is_set(link_code_group_error.yfilter)
	|| ydk::is_set(link_no_sig_lock_error.yfilter)
	|| ydk::is_set(link_no_sig_accept_error.yfilter)
	|| ydk::is_set(link_tokens_error.yfilter)
	|| ydk::is_set(error_token_count.yfilter);
}

std::string Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::Statistics::Brief::DataIdx::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "data_idx";
    ADD_KEY_TOKEN(port_data_idx, "port_data_idx");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::Statistics::Brief::DataIdx::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port_data_idx.is_set || is_set(port_data_idx.yfilter)) leaf_name_data.push_back(port_data_idx.get_name_leafdata());
    if (rack_num.is_set || is_set(rack_num.yfilter)) leaf_name_data.push_back(rack_num.get_name_leafdata());
    if (sfe_port.is_set || is_set(sfe_port.yfilter)) leaf_name_data.push_back(sfe_port.get_name_leafdata());
    if (tx_control_cells_counter.is_set || is_set(tx_control_cells_counter.yfilter)) leaf_name_data.push_back(tx_control_cells_counter.get_name_leafdata());
    if (tx_data_cell_counter.is_set || is_set(tx_data_cell_counter.yfilter)) leaf_name_data.push_back(tx_data_cell_counter.get_name_leafdata());
    if (tx_data_byte_counter.is_set || is_set(tx_data_byte_counter.yfilter)) leaf_name_data.push_back(tx_data_byte_counter.get_name_leafdata());
    if (rx_crc_errors_counter.is_set || is_set(rx_crc_errors_counter.yfilter)) leaf_name_data.push_back(rx_crc_errors_counter.get_name_leafdata());
    if (rx_lfec_fec_correctable_error.is_set || is_set(rx_lfec_fec_correctable_error.yfilter)) leaf_name_data.push_back(rx_lfec_fec_correctable_error.get_name_leafdata());
    if (rx_8b_10b_disparity_errors.is_set || is_set(rx_8b_10b_disparity_errors.yfilter)) leaf_name_data.push_back(rx_8b_10b_disparity_errors.get_name_leafdata());
    if (rx_control_cells_counter.is_set || is_set(rx_control_cells_counter.yfilter)) leaf_name_data.push_back(rx_control_cells_counter.get_name_leafdata());
    if (rx_data_cell_counter.is_set || is_set(rx_data_cell_counter.yfilter)) leaf_name_data.push_back(rx_data_cell_counter.get_name_leafdata());
    if (rx_data_byte_counter.is_set || is_set(rx_data_byte_counter.yfilter)) leaf_name_data.push_back(rx_data_byte_counter.get_name_leafdata());
    if (rx_dropped_retransmitted_control.is_set || is_set(rx_dropped_retransmitted_control.yfilter)) leaf_name_data.push_back(rx_dropped_retransmitted_control.get_name_leafdata());
    if (tx_asyn_fifo_rate.is_set || is_set(tx_asyn_fifo_rate.yfilter)) leaf_name_data.push_back(tx_asyn_fifo_rate.get_name_leafdata());
    if (rx_asyn_fifo_rate.is_set || is_set(rx_asyn_fifo_rate.yfilter)) leaf_name_data.push_back(rx_asyn_fifo_rate.get_name_leafdata());
    if (rx_lfec_fec_uncorrectable_errors.is_set || is_set(rx_lfec_fec_uncorrectable_errors.yfilter)) leaf_name_data.push_back(rx_lfec_fec_uncorrectable_errors.get_name_leafdata());
    if (rx_8b_10b_code_errors.is_set || is_set(rx_8b_10b_code_errors.yfilter)) leaf_name_data.push_back(rx_8b_10b_code_errors.get_name_leafdata());
    if (is_link_error.is_set || is_set(is_link_error.yfilter)) leaf_name_data.push_back(is_link_error.get_name_leafdata());
    if (link_crc_error.is_set || is_set(link_crc_error.yfilter)) leaf_name_data.push_back(link_crc_error.get_name_leafdata());
    if (link_size_error.is_set || is_set(link_size_error.yfilter)) leaf_name_data.push_back(link_size_error.get_name_leafdata());
    if (link_mis_align_error.is_set || is_set(link_mis_align_error.yfilter)) leaf_name_data.push_back(link_mis_align_error.get_name_leafdata());
    if (link_code_group_error.is_set || is_set(link_code_group_error.yfilter)) leaf_name_data.push_back(link_code_group_error.get_name_leafdata());
    if (link_no_sig_lock_error.is_set || is_set(link_no_sig_lock_error.yfilter)) leaf_name_data.push_back(link_no_sig_lock_error.get_name_leafdata());
    if (link_no_sig_accept_error.is_set || is_set(link_no_sig_accept_error.yfilter)) leaf_name_data.push_back(link_no_sig_accept_error.get_name_leafdata());
    if (link_tokens_error.is_set || is_set(link_tokens_error.yfilter)) leaf_name_data.push_back(link_tokens_error.get_name_leafdata());
    if (error_token_count.is_set || is_set(error_token_count.yfilter)) leaf_name_data.push_back(error_token_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::Statistics::Brief::DataIdx::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::Statistics::Brief::DataIdx::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::Statistics::Brief::DataIdx::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "port_data_idx")
    {
        port_data_idx = value;
        port_data_idx.value_namespace = name_space;
        port_data_idx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rack_num")
    {
        rack_num = value;
        rack_num.value_namespace = name_space;
        rack_num.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sfe_port")
    {
        sfe_port = value;
        sfe_port.value_namespace = name_space;
        sfe_port.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "RX_8b_10b_disparity_errors")
    {
        rx_8b_10b_disparity_errors = value;
        rx_8b_10b_disparity_errors.value_namespace = name_space;
        rx_8b_10b_disparity_errors.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "RX_dropped_retransmitted_control")
    {
        rx_dropped_retransmitted_control = value;
        rx_dropped_retransmitted_control.value_namespace = name_space;
        rx_dropped_retransmitted_control.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "TX_Asyn_fifo_rate")
    {
        tx_asyn_fifo_rate = value;
        tx_asyn_fifo_rate.value_namespace = name_space;
        tx_asyn_fifo_rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "RX_Asyn_fifo_rate")
    {
        rx_asyn_fifo_rate = value;
        rx_asyn_fifo_rate.value_namespace = name_space;
        rx_asyn_fifo_rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "RX_LFEC_FEC_uncorrectable_errors")
    {
        rx_lfec_fec_uncorrectable_errors = value;
        rx_lfec_fec_uncorrectable_errors.value_namespace = name_space;
        rx_lfec_fec_uncorrectable_errors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "RX_8b_10b_code_errors")
    {
        rx_8b_10b_code_errors = value;
        rx_8b_10b_code_errors.value_namespace = name_space;
        rx_8b_10b_code_errors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is_link_error")
    {
        is_link_error = value;
        is_link_error.value_namespace = name_space;
        is_link_error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link_crc_error")
    {
        link_crc_error = value;
        link_crc_error.value_namespace = name_space;
        link_crc_error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link_size_error")
    {
        link_size_error = value;
        link_size_error.value_namespace = name_space;
        link_size_error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link_mis_align_error")
    {
        link_mis_align_error = value;
        link_mis_align_error.value_namespace = name_space;
        link_mis_align_error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link_code_group_error")
    {
        link_code_group_error = value;
        link_code_group_error.value_namespace = name_space;
        link_code_group_error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link_no_sig_lock_error")
    {
        link_no_sig_lock_error = value;
        link_no_sig_lock_error.value_namespace = name_space;
        link_no_sig_lock_error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link_no_sig_accept_error")
    {
        link_no_sig_accept_error = value;
        link_no_sig_accept_error.value_namespace = name_space;
        link_no_sig_accept_error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link_tokens_error")
    {
        link_tokens_error = value;
        link_tokens_error.value_namespace = name_space;
        link_tokens_error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "error_token_count")
    {
        error_token_count = value;
        error_token_count.value_namespace = name_space;
        error_token_count.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::Statistics::Brief::DataIdx::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "port_data_idx")
    {
        port_data_idx.yfilter = yfilter;
    }
    if(value_path == "rack_num")
    {
        rack_num.yfilter = yfilter;
    }
    if(value_path == "sfe_port")
    {
        sfe_port.yfilter = yfilter;
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
    if(value_path == "RX_CRC_errors_counter")
    {
        rx_crc_errors_counter.yfilter = yfilter;
    }
    if(value_path == "RX_LFEC_FEC_correctable_error")
    {
        rx_lfec_fec_correctable_error.yfilter = yfilter;
    }
    if(value_path == "RX_8b_10b_disparity_errors")
    {
        rx_8b_10b_disparity_errors.yfilter = yfilter;
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
    if(value_path == "RX_dropped_retransmitted_control")
    {
        rx_dropped_retransmitted_control.yfilter = yfilter;
    }
    if(value_path == "TX_Asyn_fifo_rate")
    {
        tx_asyn_fifo_rate.yfilter = yfilter;
    }
    if(value_path == "RX_Asyn_fifo_rate")
    {
        rx_asyn_fifo_rate.yfilter = yfilter;
    }
    if(value_path == "RX_LFEC_FEC_uncorrectable_errors")
    {
        rx_lfec_fec_uncorrectable_errors.yfilter = yfilter;
    }
    if(value_path == "RX_8b_10b_code_errors")
    {
        rx_8b_10b_code_errors.yfilter = yfilter;
    }
    if(value_path == "is_link_error")
    {
        is_link_error.yfilter = yfilter;
    }
    if(value_path == "link_crc_error")
    {
        link_crc_error.yfilter = yfilter;
    }
    if(value_path == "link_size_error")
    {
        link_size_error.yfilter = yfilter;
    }
    if(value_path == "link_mis_align_error")
    {
        link_mis_align_error.yfilter = yfilter;
    }
    if(value_path == "link_code_group_error")
    {
        link_code_group_error.yfilter = yfilter;
    }
    if(value_path == "link_no_sig_lock_error")
    {
        link_no_sig_lock_error.yfilter = yfilter;
    }
    if(value_path == "link_no_sig_accept_error")
    {
        link_no_sig_accept_error.yfilter = yfilter;
    }
    if(value_path == "link_tokens_error")
    {
        link_tokens_error.yfilter = yfilter;
    }
    if(value_path == "error_token_count")
    {
        error_token_count.yfilter = yfilter;
    }
}

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::Statistics::Brief::DataIdx::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "port_data_idx" || name == "rack_num" || name == "sfe_port" || name == "TX_Control_cells_counter" || name == "TX_Data_cell_counter" || name == "TX_Data_byte_counter" || name == "RX_CRC_errors_counter" || name == "RX_LFEC_FEC_correctable_error" || name == "RX_8b_10b_disparity_errors" || name == "RX_Control_cells_counter" || name == "RX_Data_cell_counter" || name == "RX_Data_byte_counter" || name == "RX_dropped_retransmitted_control" || name == "TX_Asyn_fifo_rate" || name == "RX_Asyn_fifo_rate" || name == "RX_LFEC_FEC_uncorrectable_errors" || name == "RX_8b_10b_code_errors" || name == "is_link_error" || name == "link_crc_error" || name == "link_size_error" || name == "link_mis_align_error" || name == "link_code_group_error" || name == "link_no_sig_lock_error" || name == "link_no_sig_accept_error" || name == "link_tokens_error" || name == "error_token_count")
        return true;
    return false;
}

Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::Statistics::Detail::Detail()
    :
    data_idx(this, {"port_data_idx"})
{

    yang_name = "detail"; yang_parent_name = "statistics"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::Statistics::Detail::~Detail()
{
}

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::Statistics::Detail::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<data_idx.len(); index++)
    {
        if(data_idx[index]->has_data())
            return true;
    }
    return false;
}

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::Statistics::Detail::has_operation() const
{
    for (std::size_t index=0; index<data_idx.len(); index++)
    {
        if(data_idx[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::Statistics::Detail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "detail";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::Statistics::Detail::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::Statistics::Detail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "data_idx")
    {
        auto ent_ = std::make_shared<Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::Statistics::Detail::DataIdx>();
        ent_->parent = this;
        data_idx.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::Statistics::Detail::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : data_idx.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::Statistics::Detail::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::Statistics::Detail::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::Statistics::Detail::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data_idx")
        return true;
    return false;
}

Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::Statistics::Detail::DataIdx::DataIdx()
    :
    port_data_idx{YType::int64, "port_data_idx"},
    rack_num{YType::str, "rack_num"},
    sfe_port{YType::str, "sfe_port"},
    tx_control_cells_counter{YType::uint64, "TX_Control_cells_counter"},
    tx_data_cell_counter{YType::uint64, "TX_Data_cell_counter"},
    tx_data_byte_counter{YType::uint64, "TX_Data_byte_counter"},
    rx_crc_errors_counter{YType::uint64, "RX_CRC_errors_counter"},
    rx_lfec_fec_correctable_error{YType::uint64, "RX_LFEC_FEC_correctable_error"},
    rx_8b_10b_disparity_errors{YType::uint64, "RX_8b_10b_disparity_errors"},
    rx_control_cells_counter{YType::uint64, "RX_Control_cells_counter"},
    rx_data_cell_counter{YType::uint64, "RX_Data_cell_counter"},
    rx_data_byte_counter{YType::uint64, "RX_Data_byte_counter"},
    rx_dropped_retransmitted_control{YType::uint64, "RX_dropped_retransmitted_control"},
    tx_asyn_fifo_rate{YType::uint64, "TX_Asyn_fifo_rate"},
    rx_asyn_fifo_rate{YType::uint64, "RX_Asyn_fifo_rate"},
    rx_lfec_fec_uncorrectable_errors{YType::uint64, "RX_LFEC_FEC_uncorrectable_errors"},
    rx_8b_10b_code_errors{YType::uint64, "RX_8b_10b_code_errors"},
    is_link_error{YType::boolean, "is_link_error"},
    link_crc_error{YType::uint32, "link_crc_error"},
    link_size_error{YType::uint32, "link_size_error"},
    link_mis_align_error{YType::uint32, "link_mis_align_error"},
    link_code_group_error{YType::uint32, "link_code_group_error"},
    link_no_sig_lock_error{YType::uint32, "link_no_sig_lock_error"},
    link_no_sig_accept_error{YType::uint32, "link_no_sig_accept_error"},
    link_tokens_error{YType::uint32, "link_tokens_error"},
    error_token_count{YType::uint32, "error_token_count"}
{

    yang_name = "data_idx"; yang_parent_name = "detail"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::Statistics::Detail::DataIdx::~DataIdx()
{
}

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::Statistics::Detail::DataIdx::has_data() const
{
    if (is_presence_container) return true;
    return port_data_idx.is_set
	|| rack_num.is_set
	|| sfe_port.is_set
	|| tx_control_cells_counter.is_set
	|| tx_data_cell_counter.is_set
	|| tx_data_byte_counter.is_set
	|| rx_crc_errors_counter.is_set
	|| rx_lfec_fec_correctable_error.is_set
	|| rx_8b_10b_disparity_errors.is_set
	|| rx_control_cells_counter.is_set
	|| rx_data_cell_counter.is_set
	|| rx_data_byte_counter.is_set
	|| rx_dropped_retransmitted_control.is_set
	|| tx_asyn_fifo_rate.is_set
	|| rx_asyn_fifo_rate.is_set
	|| rx_lfec_fec_uncorrectable_errors.is_set
	|| rx_8b_10b_code_errors.is_set
	|| is_link_error.is_set
	|| link_crc_error.is_set
	|| link_size_error.is_set
	|| link_mis_align_error.is_set
	|| link_code_group_error.is_set
	|| link_no_sig_lock_error.is_set
	|| link_no_sig_accept_error.is_set
	|| link_tokens_error.is_set
	|| error_token_count.is_set;
}

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::Statistics::Detail::DataIdx::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(port_data_idx.yfilter)
	|| ydk::is_set(rack_num.yfilter)
	|| ydk::is_set(sfe_port.yfilter)
	|| ydk::is_set(tx_control_cells_counter.yfilter)
	|| ydk::is_set(tx_data_cell_counter.yfilter)
	|| ydk::is_set(tx_data_byte_counter.yfilter)
	|| ydk::is_set(rx_crc_errors_counter.yfilter)
	|| ydk::is_set(rx_lfec_fec_correctable_error.yfilter)
	|| ydk::is_set(rx_8b_10b_disparity_errors.yfilter)
	|| ydk::is_set(rx_control_cells_counter.yfilter)
	|| ydk::is_set(rx_data_cell_counter.yfilter)
	|| ydk::is_set(rx_data_byte_counter.yfilter)
	|| ydk::is_set(rx_dropped_retransmitted_control.yfilter)
	|| ydk::is_set(tx_asyn_fifo_rate.yfilter)
	|| ydk::is_set(rx_asyn_fifo_rate.yfilter)
	|| ydk::is_set(rx_lfec_fec_uncorrectable_errors.yfilter)
	|| ydk::is_set(rx_8b_10b_code_errors.yfilter)
	|| ydk::is_set(is_link_error.yfilter)
	|| ydk::is_set(link_crc_error.yfilter)
	|| ydk::is_set(link_size_error.yfilter)
	|| ydk::is_set(link_mis_align_error.yfilter)
	|| ydk::is_set(link_code_group_error.yfilter)
	|| ydk::is_set(link_no_sig_lock_error.yfilter)
	|| ydk::is_set(link_no_sig_accept_error.yfilter)
	|| ydk::is_set(link_tokens_error.yfilter)
	|| ydk::is_set(error_token_count.yfilter);
}

std::string Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::Statistics::Detail::DataIdx::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "data_idx";
    ADD_KEY_TOKEN(port_data_idx, "port_data_idx");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::Statistics::Detail::DataIdx::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port_data_idx.is_set || is_set(port_data_idx.yfilter)) leaf_name_data.push_back(port_data_idx.get_name_leafdata());
    if (rack_num.is_set || is_set(rack_num.yfilter)) leaf_name_data.push_back(rack_num.get_name_leafdata());
    if (sfe_port.is_set || is_set(sfe_port.yfilter)) leaf_name_data.push_back(sfe_port.get_name_leafdata());
    if (tx_control_cells_counter.is_set || is_set(tx_control_cells_counter.yfilter)) leaf_name_data.push_back(tx_control_cells_counter.get_name_leafdata());
    if (tx_data_cell_counter.is_set || is_set(tx_data_cell_counter.yfilter)) leaf_name_data.push_back(tx_data_cell_counter.get_name_leafdata());
    if (tx_data_byte_counter.is_set || is_set(tx_data_byte_counter.yfilter)) leaf_name_data.push_back(tx_data_byte_counter.get_name_leafdata());
    if (rx_crc_errors_counter.is_set || is_set(rx_crc_errors_counter.yfilter)) leaf_name_data.push_back(rx_crc_errors_counter.get_name_leafdata());
    if (rx_lfec_fec_correctable_error.is_set || is_set(rx_lfec_fec_correctable_error.yfilter)) leaf_name_data.push_back(rx_lfec_fec_correctable_error.get_name_leafdata());
    if (rx_8b_10b_disparity_errors.is_set || is_set(rx_8b_10b_disparity_errors.yfilter)) leaf_name_data.push_back(rx_8b_10b_disparity_errors.get_name_leafdata());
    if (rx_control_cells_counter.is_set || is_set(rx_control_cells_counter.yfilter)) leaf_name_data.push_back(rx_control_cells_counter.get_name_leafdata());
    if (rx_data_cell_counter.is_set || is_set(rx_data_cell_counter.yfilter)) leaf_name_data.push_back(rx_data_cell_counter.get_name_leafdata());
    if (rx_data_byte_counter.is_set || is_set(rx_data_byte_counter.yfilter)) leaf_name_data.push_back(rx_data_byte_counter.get_name_leafdata());
    if (rx_dropped_retransmitted_control.is_set || is_set(rx_dropped_retransmitted_control.yfilter)) leaf_name_data.push_back(rx_dropped_retransmitted_control.get_name_leafdata());
    if (tx_asyn_fifo_rate.is_set || is_set(tx_asyn_fifo_rate.yfilter)) leaf_name_data.push_back(tx_asyn_fifo_rate.get_name_leafdata());
    if (rx_asyn_fifo_rate.is_set || is_set(rx_asyn_fifo_rate.yfilter)) leaf_name_data.push_back(rx_asyn_fifo_rate.get_name_leafdata());
    if (rx_lfec_fec_uncorrectable_errors.is_set || is_set(rx_lfec_fec_uncorrectable_errors.yfilter)) leaf_name_data.push_back(rx_lfec_fec_uncorrectable_errors.get_name_leafdata());
    if (rx_8b_10b_code_errors.is_set || is_set(rx_8b_10b_code_errors.yfilter)) leaf_name_data.push_back(rx_8b_10b_code_errors.get_name_leafdata());
    if (is_link_error.is_set || is_set(is_link_error.yfilter)) leaf_name_data.push_back(is_link_error.get_name_leafdata());
    if (link_crc_error.is_set || is_set(link_crc_error.yfilter)) leaf_name_data.push_back(link_crc_error.get_name_leafdata());
    if (link_size_error.is_set || is_set(link_size_error.yfilter)) leaf_name_data.push_back(link_size_error.get_name_leafdata());
    if (link_mis_align_error.is_set || is_set(link_mis_align_error.yfilter)) leaf_name_data.push_back(link_mis_align_error.get_name_leafdata());
    if (link_code_group_error.is_set || is_set(link_code_group_error.yfilter)) leaf_name_data.push_back(link_code_group_error.get_name_leafdata());
    if (link_no_sig_lock_error.is_set || is_set(link_no_sig_lock_error.yfilter)) leaf_name_data.push_back(link_no_sig_lock_error.get_name_leafdata());
    if (link_no_sig_accept_error.is_set || is_set(link_no_sig_accept_error.yfilter)) leaf_name_data.push_back(link_no_sig_accept_error.get_name_leafdata());
    if (link_tokens_error.is_set || is_set(link_tokens_error.yfilter)) leaf_name_data.push_back(link_tokens_error.get_name_leafdata());
    if (error_token_count.is_set || is_set(error_token_count.yfilter)) leaf_name_data.push_back(error_token_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::Statistics::Detail::DataIdx::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::Statistics::Detail::DataIdx::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::Statistics::Detail::DataIdx::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "port_data_idx")
    {
        port_data_idx = value;
        port_data_idx.value_namespace = name_space;
        port_data_idx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rack_num")
    {
        rack_num = value;
        rack_num.value_namespace = name_space;
        rack_num.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sfe_port")
    {
        sfe_port = value;
        sfe_port.value_namespace = name_space;
        sfe_port.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "RX_8b_10b_disparity_errors")
    {
        rx_8b_10b_disparity_errors = value;
        rx_8b_10b_disparity_errors.value_namespace = name_space;
        rx_8b_10b_disparity_errors.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "RX_dropped_retransmitted_control")
    {
        rx_dropped_retransmitted_control = value;
        rx_dropped_retransmitted_control.value_namespace = name_space;
        rx_dropped_retransmitted_control.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "TX_Asyn_fifo_rate")
    {
        tx_asyn_fifo_rate = value;
        tx_asyn_fifo_rate.value_namespace = name_space;
        tx_asyn_fifo_rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "RX_Asyn_fifo_rate")
    {
        rx_asyn_fifo_rate = value;
        rx_asyn_fifo_rate.value_namespace = name_space;
        rx_asyn_fifo_rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "RX_LFEC_FEC_uncorrectable_errors")
    {
        rx_lfec_fec_uncorrectable_errors = value;
        rx_lfec_fec_uncorrectable_errors.value_namespace = name_space;
        rx_lfec_fec_uncorrectable_errors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "RX_8b_10b_code_errors")
    {
        rx_8b_10b_code_errors = value;
        rx_8b_10b_code_errors.value_namespace = name_space;
        rx_8b_10b_code_errors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is_link_error")
    {
        is_link_error = value;
        is_link_error.value_namespace = name_space;
        is_link_error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link_crc_error")
    {
        link_crc_error = value;
        link_crc_error.value_namespace = name_space;
        link_crc_error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link_size_error")
    {
        link_size_error = value;
        link_size_error.value_namespace = name_space;
        link_size_error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link_mis_align_error")
    {
        link_mis_align_error = value;
        link_mis_align_error.value_namespace = name_space;
        link_mis_align_error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link_code_group_error")
    {
        link_code_group_error = value;
        link_code_group_error.value_namespace = name_space;
        link_code_group_error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link_no_sig_lock_error")
    {
        link_no_sig_lock_error = value;
        link_no_sig_lock_error.value_namespace = name_space;
        link_no_sig_lock_error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link_no_sig_accept_error")
    {
        link_no_sig_accept_error = value;
        link_no_sig_accept_error.value_namespace = name_space;
        link_no_sig_accept_error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link_tokens_error")
    {
        link_tokens_error = value;
        link_tokens_error.value_namespace = name_space;
        link_tokens_error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "error_token_count")
    {
        error_token_count = value;
        error_token_count.value_namespace = name_space;
        error_token_count.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::Statistics::Detail::DataIdx::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "port_data_idx")
    {
        port_data_idx.yfilter = yfilter;
    }
    if(value_path == "rack_num")
    {
        rack_num.yfilter = yfilter;
    }
    if(value_path == "sfe_port")
    {
        sfe_port.yfilter = yfilter;
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
    if(value_path == "RX_CRC_errors_counter")
    {
        rx_crc_errors_counter.yfilter = yfilter;
    }
    if(value_path == "RX_LFEC_FEC_correctable_error")
    {
        rx_lfec_fec_correctable_error.yfilter = yfilter;
    }
    if(value_path == "RX_8b_10b_disparity_errors")
    {
        rx_8b_10b_disparity_errors.yfilter = yfilter;
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
    if(value_path == "RX_dropped_retransmitted_control")
    {
        rx_dropped_retransmitted_control.yfilter = yfilter;
    }
    if(value_path == "TX_Asyn_fifo_rate")
    {
        tx_asyn_fifo_rate.yfilter = yfilter;
    }
    if(value_path == "RX_Asyn_fifo_rate")
    {
        rx_asyn_fifo_rate.yfilter = yfilter;
    }
    if(value_path == "RX_LFEC_FEC_uncorrectable_errors")
    {
        rx_lfec_fec_uncorrectable_errors.yfilter = yfilter;
    }
    if(value_path == "RX_8b_10b_code_errors")
    {
        rx_8b_10b_code_errors.yfilter = yfilter;
    }
    if(value_path == "is_link_error")
    {
        is_link_error.yfilter = yfilter;
    }
    if(value_path == "link_crc_error")
    {
        link_crc_error.yfilter = yfilter;
    }
    if(value_path == "link_size_error")
    {
        link_size_error.yfilter = yfilter;
    }
    if(value_path == "link_mis_align_error")
    {
        link_mis_align_error.yfilter = yfilter;
    }
    if(value_path == "link_code_group_error")
    {
        link_code_group_error.yfilter = yfilter;
    }
    if(value_path == "link_no_sig_lock_error")
    {
        link_no_sig_lock_error.yfilter = yfilter;
    }
    if(value_path == "link_no_sig_accept_error")
    {
        link_no_sig_accept_error.yfilter = yfilter;
    }
    if(value_path == "link_tokens_error")
    {
        link_tokens_error.yfilter = yfilter;
    }
    if(value_path == "error_token_count")
    {
        error_token_count.yfilter = yfilter;
    }
}

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Tx::Statistics::Detail::DataIdx::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "port_data_idx" || name == "rack_num" || name == "sfe_port" || name == "TX_Control_cells_counter" || name == "TX_Data_cell_counter" || name == "TX_Data_byte_counter" || name == "RX_CRC_errors_counter" || name == "RX_LFEC_FEC_correctable_error" || name == "RX_8b_10b_disparity_errors" || name == "RX_Control_cells_counter" || name == "RX_Data_cell_counter" || name == "RX_Data_byte_counter" || name == "RX_dropped_retransmitted_control" || name == "TX_Asyn_fifo_rate" || name == "RX_Asyn_fifo_rate" || name == "RX_LFEC_FEC_uncorrectable_errors" || name == "RX_8b_10b_code_errors" || name == "is_link_error" || name == "link_crc_error" || name == "link_size_error" || name == "link_mis_align_error" || name == "link_code_group_error" || name == "link_no_sig_lock_error" || name == "link_no_sig_accept_error" || name == "link_tokens_error" || name == "error_token_count")
        return true;
    return false;
}

Controller::Fabric::Oper::Sfe::Sfe()
    :
    rack(this, {"rack_number"})
{

    yang_name = "sfe"; yang_parent_name = "oper"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::Fabric::Oper::Sfe::~Sfe()
{
}

bool Controller::Fabric::Oper::Sfe::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rack.len(); index++)
    {
        if(rack[index]->has_data())
            return true;
    }
    return false;
}

bool Controller::Fabric::Oper::Sfe::has_operation() const
{
    for (std::size_t index=0; index<rack.len(); index++)
    {
        if(rack[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Controller::Fabric::Oper::Sfe::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers-ncs55A1:controller/fabric/oper/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::Fabric::Oper::Sfe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sfe";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Sfe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::Fabric::Oper::Sfe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rack")
    {
        auto ent_ = std::make_shared<Controller::Fabric::Oper::Sfe::Rack>();
        ent_->parent = this;
        rack.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Fabric::Oper::Sfe::get_children() const
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

void Controller::Fabric::Oper::Sfe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::Fabric::Oper::Sfe::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::Fabric::Oper::Sfe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rack")
        return true;
    return false;
}

Controller::Fabric::Oper::Sfe::Rack::Rack()
    :
    rack_number{YType::int32, "rack_number"}
        ,
    asic_stages(this, {"asic_stage_name"})
{

    yang_name = "rack"; yang_parent_name = "sfe"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::Fabric::Oper::Sfe::Rack::~Rack()
{
}

bool Controller::Fabric::Oper::Sfe::Rack::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<asic_stages.len(); index++)
    {
        if(asic_stages[index]->has_data())
            return true;
    }
    return rack_number.is_set;
}

bool Controller::Fabric::Oper::Sfe::Rack::has_operation() const
{
    for (std::size_t index=0; index<asic_stages.len(); index++)
    {
        if(asic_stages[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(rack_number.yfilter);
}

std::string Controller::Fabric::Oper::Sfe::Rack::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers-ncs55A1:controller/fabric/oper/sfe/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::Fabric::Oper::Sfe::Rack::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rack";
    ADD_KEY_TOKEN(rack_number, "rack_number");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Sfe::Rack::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rack_number.is_set || is_set(rack_number.yfilter)) leaf_name_data.push_back(rack_number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::Fabric::Oper::Sfe::Rack::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "asic_stages")
    {
        auto ent_ = std::make_shared<Controller::Fabric::Oper::Sfe::Rack::AsicStages>();
        ent_->parent = this;
        asic_stages.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Fabric::Oper::Sfe::Rack::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : asic_stages.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Controller::Fabric::Oper::Sfe::Rack::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rack_number")
    {
        rack_number = value;
        rack_number.value_namespace = name_space;
        rack_number.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Fabric::Oper::Sfe::Rack::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rack_number")
    {
        rack_number.yfilter = yfilter;
    }
}

bool Controller::Fabric::Oper::Sfe::Rack::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "asic_stages" || name == "rack_number")
        return true;
    return false;
}

Controller::Fabric::Oper::Sfe::Rack::AsicStages::AsicStages()
    :
    asic_stage_name{YType::str, "asic_stage_name"}
        ,
    location(this, {"loc_str"})
    , asic_list(this, {"asic_idx"})
    , brief(std::make_shared<Controller::Fabric::Oper::Sfe::Rack::AsicStages::Brief>())
    , detail(std::make_shared<Controller::Fabric::Oper::Sfe::Rack::AsicStages::Detail>())
{
    brief->parent = this;
    detail->parent = this;

    yang_name = "asic_stages"; yang_parent_name = "rack"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::Fabric::Oper::Sfe::Rack::AsicStages::~AsicStages()
{
}

bool Controller::Fabric::Oper::Sfe::Rack::AsicStages::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<asic_list.len(); index++)
    {
        if(asic_list[index]->has_data())
            return true;
    }
    return asic_stage_name.is_set
	|| (brief !=  nullptr && brief->has_data())
	|| (detail !=  nullptr && detail->has_data());
}

bool Controller::Fabric::Oper::Sfe::Rack::AsicStages::has_operation() const
{
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<asic_list.len(); index++)
    {
        if(asic_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(asic_stage_name.yfilter)
	|| (brief !=  nullptr && brief->has_operation())
	|| (detail !=  nullptr && detail->has_operation());
}

std::string Controller::Fabric::Oper::Sfe::Rack::AsicStages::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "asic_stages";
    ADD_KEY_TOKEN(asic_stage_name, "asic_stage_name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Sfe::Rack::AsicStages::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (asic_stage_name.is_set || is_set(asic_stage_name.yfilter)) leaf_name_data.push_back(asic_stage_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::Fabric::Oper::Sfe::Rack::AsicStages::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "location")
    {
        auto ent_ = std::make_shared<Controller::Fabric::Oper::Sfe::Rack::AsicStages::Location>();
        ent_->parent = this;
        location.append(ent_);
        return ent_;
    }

    if(child_yang_name == "asic_list")
    {
        auto ent_ = std::make_shared<Controller::Fabric::Oper::Sfe::Rack::AsicStages::AsicList>();
        ent_->parent = this;
        asic_list.append(ent_);
        return ent_;
    }

    if(child_yang_name == "brief")
    {
        if(brief == nullptr)
        {
            brief = std::make_shared<Controller::Fabric::Oper::Sfe::Rack::AsicStages::Brief>();
        }
        return brief;
    }

    if(child_yang_name == "detail")
    {
        if(detail == nullptr)
        {
            detail = std::make_shared<Controller::Fabric::Oper::Sfe::Rack::AsicStages::Detail>();
        }
        return detail;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Fabric::Oper::Sfe::Rack::AsicStages::get_children() const
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

    count_ = 0;
    for (auto ent_ : asic_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

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

void Controller::Fabric::Oper::Sfe::Rack::AsicStages::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "asic_stage_name")
    {
        asic_stage_name = value;
        asic_stage_name.value_namespace = name_space;
        asic_stage_name.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Fabric::Oper::Sfe::Rack::AsicStages::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "asic_stage_name")
    {
        asic_stage_name.yfilter = yfilter;
    }
}

bool Controller::Fabric::Oper::Sfe::Rack::AsicStages::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location" || name == "asic_list" || name == "brief" || name == "detail" || name == "asic_stage_name")
        return true;
    return false;
}

Controller::Fabric::Oper::Sfe::Rack::AsicStages::Location::Location()
    :
    loc_str{YType::str, "loc_str"}
        ,
    asic_list(this, {"asic_idx"})
    , brief(std::make_shared<Controller::Fabric::Oper::Sfe::Rack::AsicStages::Location::Brief>())
    , detail(std::make_shared<Controller::Fabric::Oper::Sfe::Rack::AsicStages::Location::Detail>())
{
    brief->parent = this;
    detail->parent = this;

    yang_name = "location"; yang_parent_name = "asic_stages"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::Fabric::Oper::Sfe::Rack::AsicStages::Location::~Location()
{
}

bool Controller::Fabric::Oper::Sfe::Rack::AsicStages::Location::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<asic_list.len(); index++)
    {
        if(asic_list[index]->has_data())
            return true;
    }
    return loc_str.is_set
	|| (brief !=  nullptr && brief->has_data())
	|| (detail !=  nullptr && detail->has_data());
}

bool Controller::Fabric::Oper::Sfe::Rack::AsicStages::Location::has_operation() const
{
    for (std::size_t index=0; index<asic_list.len(); index++)
    {
        if(asic_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(loc_str.yfilter)
	|| (brief !=  nullptr && brief->has_operation())
	|| (detail !=  nullptr && detail->has_operation());
}

std::string Controller::Fabric::Oper::Sfe::Rack::AsicStages::Location::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "location";
    ADD_KEY_TOKEN(loc_str, "loc_str");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Sfe::Rack::AsicStages::Location::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (loc_str.is_set || is_set(loc_str.yfilter)) leaf_name_data.push_back(loc_str.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::Fabric::Oper::Sfe::Rack::AsicStages::Location::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "asic_list")
    {
        auto ent_ = std::make_shared<Controller::Fabric::Oper::Sfe::Rack::AsicStages::Location::AsicList>();
        ent_->parent = this;
        asic_list.append(ent_);
        return ent_;
    }

    if(child_yang_name == "brief")
    {
        if(brief == nullptr)
        {
            brief = std::make_shared<Controller::Fabric::Oper::Sfe::Rack::AsicStages::Location::Brief>();
        }
        return brief;
    }

    if(child_yang_name == "detail")
    {
        if(detail == nullptr)
        {
            detail = std::make_shared<Controller::Fabric::Oper::Sfe::Rack::AsicStages::Location::Detail>();
        }
        return detail;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Fabric::Oper::Sfe::Rack::AsicStages::Location::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : asic_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

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

void Controller::Fabric::Oper::Sfe::Rack::AsicStages::Location::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "loc_str")
    {
        loc_str = value;
        loc_str.value_namespace = name_space;
        loc_str.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Fabric::Oper::Sfe::Rack::AsicStages::Location::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "loc_str")
    {
        loc_str.yfilter = yfilter;
    }
}

bool Controller::Fabric::Oper::Sfe::Rack::AsicStages::Location::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "asic_list" || name == "brief" || name == "detail" || name == "loc_str")
        return true;
    return false;
}

Controller::Fabric::Oper::Sfe::Rack::AsicStages::Location::AsicList::AsicList()
    :
    asic_idx{YType::int64, "asic_idx"},
    asic_loc_str{YType::str, "asic_loc_str"},
    admin_state{YType::str, "admin-state"},
    oper_state{YType::str, "oper_state"},
    down_flags{YType::str, "down_flags"},
    fab_group{YType::str, "fab_group"}
        ,
    history(this, {"history_idx"})
{

    yang_name = "asic_list"; yang_parent_name = "location"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::Fabric::Oper::Sfe::Rack::AsicStages::Location::AsicList::~AsicList()
{
}

bool Controller::Fabric::Oper::Sfe::Rack::AsicStages::Location::AsicList::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<history.len(); index++)
    {
        if(history[index]->has_data())
            return true;
    }
    return asic_idx.is_set
	|| asic_loc_str.is_set
	|| admin_state.is_set
	|| oper_state.is_set
	|| down_flags.is_set
	|| fab_group.is_set;
}

bool Controller::Fabric::Oper::Sfe::Rack::AsicStages::Location::AsicList::has_operation() const
{
    for (std::size_t index=0; index<history.len(); index++)
    {
        if(history[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(asic_idx.yfilter)
	|| ydk::is_set(asic_loc_str.yfilter)
	|| ydk::is_set(admin_state.yfilter)
	|| ydk::is_set(oper_state.yfilter)
	|| ydk::is_set(down_flags.yfilter)
	|| ydk::is_set(fab_group.yfilter);
}

std::string Controller::Fabric::Oper::Sfe::Rack::AsicStages::Location::AsicList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "asic_list";
    ADD_KEY_TOKEN(asic_idx, "asic_idx");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Sfe::Rack::AsicStages::Location::AsicList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (asic_idx.is_set || is_set(asic_idx.yfilter)) leaf_name_data.push_back(asic_idx.get_name_leafdata());
    if (asic_loc_str.is_set || is_set(asic_loc_str.yfilter)) leaf_name_data.push_back(asic_loc_str.get_name_leafdata());
    if (admin_state.is_set || is_set(admin_state.yfilter)) leaf_name_data.push_back(admin_state.get_name_leafdata());
    if (oper_state.is_set || is_set(oper_state.yfilter)) leaf_name_data.push_back(oper_state.get_name_leafdata());
    if (down_flags.is_set || is_set(down_flags.yfilter)) leaf_name_data.push_back(down_flags.get_name_leafdata());
    if (fab_group.is_set || is_set(fab_group.yfilter)) leaf_name_data.push_back(fab_group.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::Fabric::Oper::Sfe::Rack::AsicStages::Location::AsicList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "history")
    {
        auto ent_ = std::make_shared<Controller::Fabric::Oper::Sfe::Rack::AsicStages::Location::AsicList::History>();
        ent_->parent = this;
        history.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Fabric::Oper::Sfe::Rack::AsicStages::Location::AsicList::get_children() const
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

void Controller::Fabric::Oper::Sfe::Rack::AsicStages::Location::AsicList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "asic_idx")
    {
        asic_idx = value;
        asic_idx.value_namespace = name_space;
        asic_idx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "asic_loc_str")
    {
        asic_loc_str = value;
        asic_loc_str.value_namespace = name_space;
        asic_loc_str.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "down_flags")
    {
        down_flags = value;
        down_flags.value_namespace = name_space;
        down_flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fab_group")
    {
        fab_group = value;
        fab_group.value_namespace = name_space;
        fab_group.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Fabric::Oper::Sfe::Rack::AsicStages::Location::AsicList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "asic_idx")
    {
        asic_idx.yfilter = yfilter;
    }
    if(value_path == "asic_loc_str")
    {
        asic_loc_str.yfilter = yfilter;
    }
    if(value_path == "admin-state")
    {
        admin_state.yfilter = yfilter;
    }
    if(value_path == "oper_state")
    {
        oper_state.yfilter = yfilter;
    }
    if(value_path == "down_flags")
    {
        down_flags.yfilter = yfilter;
    }
    if(value_path == "fab_group")
    {
        fab_group.yfilter = yfilter;
    }
}

bool Controller::Fabric::Oper::Sfe::Rack::AsicStages::Location::AsicList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "history" || name == "asic_idx" || name == "asic_loc_str" || name == "admin-state" || name == "oper_state" || name == "down_flags" || name == "fab_group")
        return true;
    return false;
}

Controller::Fabric::Oper::Sfe::Rack::AsicStages::Location::AsicList::History::History()
    :
    history_idx{YType::int32, "history_idx"},
    time_stamp{YType::str, "time_stamp"},
    admin_state{YType::str, "admin-state"},
    oper_state{YType::str, "oper_state"},
    error_state{YType::str, "error_state"}
{

    yang_name = "history"; yang_parent_name = "asic_list"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::Fabric::Oper::Sfe::Rack::AsicStages::Location::AsicList::History::~History()
{
}

bool Controller::Fabric::Oper::Sfe::Rack::AsicStages::Location::AsicList::History::has_data() const
{
    if (is_presence_container) return true;
    return history_idx.is_set
	|| time_stamp.is_set
	|| admin_state.is_set
	|| oper_state.is_set
	|| error_state.is_set;
}

bool Controller::Fabric::Oper::Sfe::Rack::AsicStages::Location::AsicList::History::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(history_idx.yfilter)
	|| ydk::is_set(time_stamp.yfilter)
	|| ydk::is_set(admin_state.yfilter)
	|| ydk::is_set(oper_state.yfilter)
	|| ydk::is_set(error_state.yfilter);
}

std::string Controller::Fabric::Oper::Sfe::Rack::AsicStages::Location::AsicList::History::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "history";
    ADD_KEY_TOKEN(history_idx, "history_idx");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Sfe::Rack::AsicStages::Location::AsicList::History::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (history_idx.is_set || is_set(history_idx.yfilter)) leaf_name_data.push_back(history_idx.get_name_leafdata());
    if (time_stamp.is_set || is_set(time_stamp.yfilter)) leaf_name_data.push_back(time_stamp.get_name_leafdata());
    if (admin_state.is_set || is_set(admin_state.yfilter)) leaf_name_data.push_back(admin_state.get_name_leafdata());
    if (oper_state.is_set || is_set(oper_state.yfilter)) leaf_name_data.push_back(oper_state.get_name_leafdata());
    if (error_state.is_set || is_set(error_state.yfilter)) leaf_name_data.push_back(error_state.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::Fabric::Oper::Sfe::Rack::AsicStages::Location::AsicList::History::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Fabric::Oper::Sfe::Rack::AsicStages::Location::AsicList::History::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Controller::Fabric::Oper::Sfe::Rack::AsicStages::Location::AsicList::History::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
}

void Controller::Fabric::Oper::Sfe::Rack::AsicStages::Location::AsicList::History::set_filter(const std::string & value_path, YFilter yfilter)
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
}

bool Controller::Fabric::Oper::Sfe::Rack::AsicStages::Location::AsicList::History::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "history_idx" || name == "time_stamp" || name == "admin-state" || name == "oper_state" || name == "error_state")
        return true;
    return false;
}

Controller::Fabric::Oper::Sfe::Rack::AsicStages::Location::Brief::Brief()
    :
    asic_list(this, {"asic_idx"})
{

    yang_name = "brief"; yang_parent_name = "location"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::Fabric::Oper::Sfe::Rack::AsicStages::Location::Brief::~Brief()
{
}

bool Controller::Fabric::Oper::Sfe::Rack::AsicStages::Location::Brief::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<asic_list.len(); index++)
    {
        if(asic_list[index]->has_data())
            return true;
    }
    return false;
}

bool Controller::Fabric::Oper::Sfe::Rack::AsicStages::Location::Brief::has_operation() const
{
    for (std::size_t index=0; index<asic_list.len(); index++)
    {
        if(asic_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Controller::Fabric::Oper::Sfe::Rack::AsicStages::Location::Brief::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "brief";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Sfe::Rack::AsicStages::Location::Brief::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::Fabric::Oper::Sfe::Rack::AsicStages::Location::Brief::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "asic_list")
    {
        auto ent_ = std::make_shared<Controller::Fabric::Oper::Sfe::Rack::AsicStages::Location::Brief::AsicList>();
        ent_->parent = this;
        asic_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Fabric::Oper::Sfe::Rack::AsicStages::Location::Brief::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : asic_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Controller::Fabric::Oper::Sfe::Rack::AsicStages::Location::Brief::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::Fabric::Oper::Sfe::Rack::AsicStages::Location::Brief::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::Fabric::Oper::Sfe::Rack::AsicStages::Location::Brief::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "asic_list")
        return true;
    return false;
}

Controller::Fabric::Oper::Sfe::Rack::AsicStages::Location::Brief::AsicList::AsicList()
    :
    asic_idx{YType::int64, "asic_idx"},
    asic_loc_str{YType::str, "asic_loc_str"},
    admin_state{YType::str, "admin-state"},
    oper_state{YType::str, "oper_state"},
    down_flags{YType::str, "down_flags"},
    fab_group{YType::str, "fab_group"}
        ,
    history(this, {"history_idx"})
{

    yang_name = "asic_list"; yang_parent_name = "brief"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::Fabric::Oper::Sfe::Rack::AsicStages::Location::Brief::AsicList::~AsicList()
{
}

bool Controller::Fabric::Oper::Sfe::Rack::AsicStages::Location::Brief::AsicList::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<history.len(); index++)
    {
        if(history[index]->has_data())
            return true;
    }
    return asic_idx.is_set
	|| asic_loc_str.is_set
	|| admin_state.is_set
	|| oper_state.is_set
	|| down_flags.is_set
	|| fab_group.is_set;
}

bool Controller::Fabric::Oper::Sfe::Rack::AsicStages::Location::Brief::AsicList::has_operation() const
{
    for (std::size_t index=0; index<history.len(); index++)
    {
        if(history[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(asic_idx.yfilter)
	|| ydk::is_set(asic_loc_str.yfilter)
	|| ydk::is_set(admin_state.yfilter)
	|| ydk::is_set(oper_state.yfilter)
	|| ydk::is_set(down_flags.yfilter)
	|| ydk::is_set(fab_group.yfilter);
}

std::string Controller::Fabric::Oper::Sfe::Rack::AsicStages::Location::Brief::AsicList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "asic_list";
    ADD_KEY_TOKEN(asic_idx, "asic_idx");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Sfe::Rack::AsicStages::Location::Brief::AsicList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (asic_idx.is_set || is_set(asic_idx.yfilter)) leaf_name_data.push_back(asic_idx.get_name_leafdata());
    if (asic_loc_str.is_set || is_set(asic_loc_str.yfilter)) leaf_name_data.push_back(asic_loc_str.get_name_leafdata());
    if (admin_state.is_set || is_set(admin_state.yfilter)) leaf_name_data.push_back(admin_state.get_name_leafdata());
    if (oper_state.is_set || is_set(oper_state.yfilter)) leaf_name_data.push_back(oper_state.get_name_leafdata());
    if (down_flags.is_set || is_set(down_flags.yfilter)) leaf_name_data.push_back(down_flags.get_name_leafdata());
    if (fab_group.is_set || is_set(fab_group.yfilter)) leaf_name_data.push_back(fab_group.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::Fabric::Oper::Sfe::Rack::AsicStages::Location::Brief::AsicList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "history")
    {
        auto ent_ = std::make_shared<Controller::Fabric::Oper::Sfe::Rack::AsicStages::Location::Brief::AsicList::History>();
        ent_->parent = this;
        history.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Fabric::Oper::Sfe::Rack::AsicStages::Location::Brief::AsicList::get_children() const
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

void Controller::Fabric::Oper::Sfe::Rack::AsicStages::Location::Brief::AsicList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "asic_idx")
    {
        asic_idx = value;
        asic_idx.value_namespace = name_space;
        asic_idx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "asic_loc_str")
    {
        asic_loc_str = value;
        asic_loc_str.value_namespace = name_space;
        asic_loc_str.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "down_flags")
    {
        down_flags = value;
        down_flags.value_namespace = name_space;
        down_flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fab_group")
    {
        fab_group = value;
        fab_group.value_namespace = name_space;
        fab_group.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Fabric::Oper::Sfe::Rack::AsicStages::Location::Brief::AsicList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "asic_idx")
    {
        asic_idx.yfilter = yfilter;
    }
    if(value_path == "asic_loc_str")
    {
        asic_loc_str.yfilter = yfilter;
    }
    if(value_path == "admin-state")
    {
        admin_state.yfilter = yfilter;
    }
    if(value_path == "oper_state")
    {
        oper_state.yfilter = yfilter;
    }
    if(value_path == "down_flags")
    {
        down_flags.yfilter = yfilter;
    }
    if(value_path == "fab_group")
    {
        fab_group.yfilter = yfilter;
    }
}

bool Controller::Fabric::Oper::Sfe::Rack::AsicStages::Location::Brief::AsicList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "history" || name == "asic_idx" || name == "asic_loc_str" || name == "admin-state" || name == "oper_state" || name == "down_flags" || name == "fab_group")
        return true;
    return false;
}

Controller::Fabric::Oper::Sfe::Rack::AsicStages::Location::Brief::AsicList::History::History()
    :
    history_idx{YType::int32, "history_idx"},
    time_stamp{YType::str, "time_stamp"},
    admin_state{YType::str, "admin-state"},
    oper_state{YType::str, "oper_state"},
    error_state{YType::str, "error_state"}
{

    yang_name = "history"; yang_parent_name = "asic_list"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::Fabric::Oper::Sfe::Rack::AsicStages::Location::Brief::AsicList::History::~History()
{
}

bool Controller::Fabric::Oper::Sfe::Rack::AsicStages::Location::Brief::AsicList::History::has_data() const
{
    if (is_presence_container) return true;
    return history_idx.is_set
	|| time_stamp.is_set
	|| admin_state.is_set
	|| oper_state.is_set
	|| error_state.is_set;
}

bool Controller::Fabric::Oper::Sfe::Rack::AsicStages::Location::Brief::AsicList::History::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(history_idx.yfilter)
	|| ydk::is_set(time_stamp.yfilter)
	|| ydk::is_set(admin_state.yfilter)
	|| ydk::is_set(oper_state.yfilter)
	|| ydk::is_set(error_state.yfilter);
}

std::string Controller::Fabric::Oper::Sfe::Rack::AsicStages::Location::Brief::AsicList::History::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "history";
    ADD_KEY_TOKEN(history_idx, "history_idx");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Sfe::Rack::AsicStages::Location::Brief::AsicList::History::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (history_idx.is_set || is_set(history_idx.yfilter)) leaf_name_data.push_back(history_idx.get_name_leafdata());
    if (time_stamp.is_set || is_set(time_stamp.yfilter)) leaf_name_data.push_back(time_stamp.get_name_leafdata());
    if (admin_state.is_set || is_set(admin_state.yfilter)) leaf_name_data.push_back(admin_state.get_name_leafdata());
    if (oper_state.is_set || is_set(oper_state.yfilter)) leaf_name_data.push_back(oper_state.get_name_leafdata());
    if (error_state.is_set || is_set(error_state.yfilter)) leaf_name_data.push_back(error_state.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::Fabric::Oper::Sfe::Rack::AsicStages::Location::Brief::AsicList::History::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Fabric::Oper::Sfe::Rack::AsicStages::Location::Brief::AsicList::History::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Controller::Fabric::Oper::Sfe::Rack::AsicStages::Location::Brief::AsicList::History::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
}

void Controller::Fabric::Oper::Sfe::Rack::AsicStages::Location::Brief::AsicList::History::set_filter(const std::string & value_path, YFilter yfilter)
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
}

bool Controller::Fabric::Oper::Sfe::Rack::AsicStages::Location::Brief::AsicList::History::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "history_idx" || name == "time_stamp" || name == "admin-state" || name == "oper_state" || name == "error_state")
        return true;
    return false;
}

Controller::Fabric::Oper::Sfe::Rack::AsicStages::Location::Detail::Detail()
    :
    asic_list(this, {"asic_idx"})
{

    yang_name = "detail"; yang_parent_name = "location"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::Fabric::Oper::Sfe::Rack::AsicStages::Location::Detail::~Detail()
{
}

bool Controller::Fabric::Oper::Sfe::Rack::AsicStages::Location::Detail::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<asic_list.len(); index++)
    {
        if(asic_list[index]->has_data())
            return true;
    }
    return false;
}

bool Controller::Fabric::Oper::Sfe::Rack::AsicStages::Location::Detail::has_operation() const
{
    for (std::size_t index=0; index<asic_list.len(); index++)
    {
        if(asic_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Controller::Fabric::Oper::Sfe::Rack::AsicStages::Location::Detail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "detail";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Sfe::Rack::AsicStages::Location::Detail::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::Fabric::Oper::Sfe::Rack::AsicStages::Location::Detail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "asic_list")
    {
        auto ent_ = std::make_shared<Controller::Fabric::Oper::Sfe::Rack::AsicStages::Location::Detail::AsicList>();
        ent_->parent = this;
        asic_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Fabric::Oper::Sfe::Rack::AsicStages::Location::Detail::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : asic_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Controller::Fabric::Oper::Sfe::Rack::AsicStages::Location::Detail::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::Fabric::Oper::Sfe::Rack::AsicStages::Location::Detail::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::Fabric::Oper::Sfe::Rack::AsicStages::Location::Detail::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "asic_list")
        return true;
    return false;
}

Controller::Fabric::Oper::Sfe::Rack::AsicStages::Location::Detail::AsicList::AsicList()
    :
    asic_idx{YType::int64, "asic_idx"},
    asic_loc_str{YType::str, "asic_loc_str"},
    admin_state{YType::str, "admin-state"},
    oper_state{YType::str, "oper_state"},
    down_flags{YType::str, "down_flags"},
    fab_group{YType::str, "fab_group"}
        ,
    history(this, {"history_idx"})
{

    yang_name = "asic_list"; yang_parent_name = "detail"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::Fabric::Oper::Sfe::Rack::AsicStages::Location::Detail::AsicList::~AsicList()
{
}

bool Controller::Fabric::Oper::Sfe::Rack::AsicStages::Location::Detail::AsicList::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<history.len(); index++)
    {
        if(history[index]->has_data())
            return true;
    }
    return asic_idx.is_set
	|| asic_loc_str.is_set
	|| admin_state.is_set
	|| oper_state.is_set
	|| down_flags.is_set
	|| fab_group.is_set;
}

bool Controller::Fabric::Oper::Sfe::Rack::AsicStages::Location::Detail::AsicList::has_operation() const
{
    for (std::size_t index=0; index<history.len(); index++)
    {
        if(history[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(asic_idx.yfilter)
	|| ydk::is_set(asic_loc_str.yfilter)
	|| ydk::is_set(admin_state.yfilter)
	|| ydk::is_set(oper_state.yfilter)
	|| ydk::is_set(down_flags.yfilter)
	|| ydk::is_set(fab_group.yfilter);
}

std::string Controller::Fabric::Oper::Sfe::Rack::AsicStages::Location::Detail::AsicList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "asic_list";
    ADD_KEY_TOKEN(asic_idx, "asic_idx");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Sfe::Rack::AsicStages::Location::Detail::AsicList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (asic_idx.is_set || is_set(asic_idx.yfilter)) leaf_name_data.push_back(asic_idx.get_name_leafdata());
    if (asic_loc_str.is_set || is_set(asic_loc_str.yfilter)) leaf_name_data.push_back(asic_loc_str.get_name_leafdata());
    if (admin_state.is_set || is_set(admin_state.yfilter)) leaf_name_data.push_back(admin_state.get_name_leafdata());
    if (oper_state.is_set || is_set(oper_state.yfilter)) leaf_name_data.push_back(oper_state.get_name_leafdata());
    if (down_flags.is_set || is_set(down_flags.yfilter)) leaf_name_data.push_back(down_flags.get_name_leafdata());
    if (fab_group.is_set || is_set(fab_group.yfilter)) leaf_name_data.push_back(fab_group.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::Fabric::Oper::Sfe::Rack::AsicStages::Location::Detail::AsicList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "history")
    {
        auto ent_ = std::make_shared<Controller::Fabric::Oper::Sfe::Rack::AsicStages::Location::Detail::AsicList::History>();
        ent_->parent = this;
        history.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Fabric::Oper::Sfe::Rack::AsicStages::Location::Detail::AsicList::get_children() const
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

void Controller::Fabric::Oper::Sfe::Rack::AsicStages::Location::Detail::AsicList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "asic_idx")
    {
        asic_idx = value;
        asic_idx.value_namespace = name_space;
        asic_idx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "asic_loc_str")
    {
        asic_loc_str = value;
        asic_loc_str.value_namespace = name_space;
        asic_loc_str.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "down_flags")
    {
        down_flags = value;
        down_flags.value_namespace = name_space;
        down_flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fab_group")
    {
        fab_group = value;
        fab_group.value_namespace = name_space;
        fab_group.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Fabric::Oper::Sfe::Rack::AsicStages::Location::Detail::AsicList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "asic_idx")
    {
        asic_idx.yfilter = yfilter;
    }
    if(value_path == "asic_loc_str")
    {
        asic_loc_str.yfilter = yfilter;
    }
    if(value_path == "admin-state")
    {
        admin_state.yfilter = yfilter;
    }
    if(value_path == "oper_state")
    {
        oper_state.yfilter = yfilter;
    }
    if(value_path == "down_flags")
    {
        down_flags.yfilter = yfilter;
    }
    if(value_path == "fab_group")
    {
        fab_group.yfilter = yfilter;
    }
}

bool Controller::Fabric::Oper::Sfe::Rack::AsicStages::Location::Detail::AsicList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "history" || name == "asic_idx" || name == "asic_loc_str" || name == "admin-state" || name == "oper_state" || name == "down_flags" || name == "fab_group")
        return true;
    return false;
}

Controller::Fabric::Oper::Sfe::Rack::AsicStages::Location::Detail::AsicList::History::History()
    :
    history_idx{YType::int32, "history_idx"},
    time_stamp{YType::str, "time_stamp"},
    admin_state{YType::str, "admin-state"},
    oper_state{YType::str, "oper_state"},
    error_state{YType::str, "error_state"}
{

    yang_name = "history"; yang_parent_name = "asic_list"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::Fabric::Oper::Sfe::Rack::AsicStages::Location::Detail::AsicList::History::~History()
{
}

bool Controller::Fabric::Oper::Sfe::Rack::AsicStages::Location::Detail::AsicList::History::has_data() const
{
    if (is_presence_container) return true;
    return history_idx.is_set
	|| time_stamp.is_set
	|| admin_state.is_set
	|| oper_state.is_set
	|| error_state.is_set;
}

bool Controller::Fabric::Oper::Sfe::Rack::AsicStages::Location::Detail::AsicList::History::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(history_idx.yfilter)
	|| ydk::is_set(time_stamp.yfilter)
	|| ydk::is_set(admin_state.yfilter)
	|| ydk::is_set(oper_state.yfilter)
	|| ydk::is_set(error_state.yfilter);
}

std::string Controller::Fabric::Oper::Sfe::Rack::AsicStages::Location::Detail::AsicList::History::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "history";
    ADD_KEY_TOKEN(history_idx, "history_idx");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Sfe::Rack::AsicStages::Location::Detail::AsicList::History::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (history_idx.is_set || is_set(history_idx.yfilter)) leaf_name_data.push_back(history_idx.get_name_leafdata());
    if (time_stamp.is_set || is_set(time_stamp.yfilter)) leaf_name_data.push_back(time_stamp.get_name_leafdata());
    if (admin_state.is_set || is_set(admin_state.yfilter)) leaf_name_data.push_back(admin_state.get_name_leafdata());
    if (oper_state.is_set || is_set(oper_state.yfilter)) leaf_name_data.push_back(oper_state.get_name_leafdata());
    if (error_state.is_set || is_set(error_state.yfilter)) leaf_name_data.push_back(error_state.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::Fabric::Oper::Sfe::Rack::AsicStages::Location::Detail::AsicList::History::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Fabric::Oper::Sfe::Rack::AsicStages::Location::Detail::AsicList::History::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Controller::Fabric::Oper::Sfe::Rack::AsicStages::Location::Detail::AsicList::History::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
}

void Controller::Fabric::Oper::Sfe::Rack::AsicStages::Location::Detail::AsicList::History::set_filter(const std::string & value_path, YFilter yfilter)
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
}

bool Controller::Fabric::Oper::Sfe::Rack::AsicStages::Location::Detail::AsicList::History::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "history_idx" || name == "time_stamp" || name == "admin-state" || name == "oper_state" || name == "error_state")
        return true;
    return false;
}

Controller::Fabric::Oper::Sfe::Rack::AsicStages::AsicList::AsicList()
    :
    asic_idx{YType::int64, "asic_idx"},
    asic_loc_str{YType::str, "asic_loc_str"},
    admin_state{YType::str, "admin-state"},
    oper_state{YType::str, "oper_state"},
    down_flags{YType::str, "down_flags"},
    fab_group{YType::str, "fab_group"}
        ,
    history(this, {"history_idx"})
{

    yang_name = "asic_list"; yang_parent_name = "asic_stages"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::Fabric::Oper::Sfe::Rack::AsicStages::AsicList::~AsicList()
{
}

bool Controller::Fabric::Oper::Sfe::Rack::AsicStages::AsicList::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<history.len(); index++)
    {
        if(history[index]->has_data())
            return true;
    }
    return asic_idx.is_set
	|| asic_loc_str.is_set
	|| admin_state.is_set
	|| oper_state.is_set
	|| down_flags.is_set
	|| fab_group.is_set;
}

bool Controller::Fabric::Oper::Sfe::Rack::AsicStages::AsicList::has_operation() const
{
    for (std::size_t index=0; index<history.len(); index++)
    {
        if(history[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(asic_idx.yfilter)
	|| ydk::is_set(asic_loc_str.yfilter)
	|| ydk::is_set(admin_state.yfilter)
	|| ydk::is_set(oper_state.yfilter)
	|| ydk::is_set(down_flags.yfilter)
	|| ydk::is_set(fab_group.yfilter);
}

std::string Controller::Fabric::Oper::Sfe::Rack::AsicStages::AsicList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "asic_list";
    ADD_KEY_TOKEN(asic_idx, "asic_idx");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Sfe::Rack::AsicStages::AsicList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (asic_idx.is_set || is_set(asic_idx.yfilter)) leaf_name_data.push_back(asic_idx.get_name_leafdata());
    if (asic_loc_str.is_set || is_set(asic_loc_str.yfilter)) leaf_name_data.push_back(asic_loc_str.get_name_leafdata());
    if (admin_state.is_set || is_set(admin_state.yfilter)) leaf_name_data.push_back(admin_state.get_name_leafdata());
    if (oper_state.is_set || is_set(oper_state.yfilter)) leaf_name_data.push_back(oper_state.get_name_leafdata());
    if (down_flags.is_set || is_set(down_flags.yfilter)) leaf_name_data.push_back(down_flags.get_name_leafdata());
    if (fab_group.is_set || is_set(fab_group.yfilter)) leaf_name_data.push_back(fab_group.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::Fabric::Oper::Sfe::Rack::AsicStages::AsicList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "history")
    {
        auto ent_ = std::make_shared<Controller::Fabric::Oper::Sfe::Rack::AsicStages::AsicList::History>();
        ent_->parent = this;
        history.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Fabric::Oper::Sfe::Rack::AsicStages::AsicList::get_children() const
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

void Controller::Fabric::Oper::Sfe::Rack::AsicStages::AsicList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "asic_idx")
    {
        asic_idx = value;
        asic_idx.value_namespace = name_space;
        asic_idx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "asic_loc_str")
    {
        asic_loc_str = value;
        asic_loc_str.value_namespace = name_space;
        asic_loc_str.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "down_flags")
    {
        down_flags = value;
        down_flags.value_namespace = name_space;
        down_flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fab_group")
    {
        fab_group = value;
        fab_group.value_namespace = name_space;
        fab_group.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Fabric::Oper::Sfe::Rack::AsicStages::AsicList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "asic_idx")
    {
        asic_idx.yfilter = yfilter;
    }
    if(value_path == "asic_loc_str")
    {
        asic_loc_str.yfilter = yfilter;
    }
    if(value_path == "admin-state")
    {
        admin_state.yfilter = yfilter;
    }
    if(value_path == "oper_state")
    {
        oper_state.yfilter = yfilter;
    }
    if(value_path == "down_flags")
    {
        down_flags.yfilter = yfilter;
    }
    if(value_path == "fab_group")
    {
        fab_group.yfilter = yfilter;
    }
}

bool Controller::Fabric::Oper::Sfe::Rack::AsicStages::AsicList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "history" || name == "asic_idx" || name == "asic_loc_str" || name == "admin-state" || name == "oper_state" || name == "down_flags" || name == "fab_group")
        return true;
    return false;
}

Controller::Fabric::Oper::Sfe::Rack::AsicStages::AsicList::History::History()
    :
    history_idx{YType::int32, "history_idx"},
    time_stamp{YType::str, "time_stamp"},
    admin_state{YType::str, "admin-state"},
    oper_state{YType::str, "oper_state"},
    error_state{YType::str, "error_state"}
{

    yang_name = "history"; yang_parent_name = "asic_list"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::Fabric::Oper::Sfe::Rack::AsicStages::AsicList::History::~History()
{
}

bool Controller::Fabric::Oper::Sfe::Rack::AsicStages::AsicList::History::has_data() const
{
    if (is_presence_container) return true;
    return history_idx.is_set
	|| time_stamp.is_set
	|| admin_state.is_set
	|| oper_state.is_set
	|| error_state.is_set;
}

bool Controller::Fabric::Oper::Sfe::Rack::AsicStages::AsicList::History::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(history_idx.yfilter)
	|| ydk::is_set(time_stamp.yfilter)
	|| ydk::is_set(admin_state.yfilter)
	|| ydk::is_set(oper_state.yfilter)
	|| ydk::is_set(error_state.yfilter);
}

std::string Controller::Fabric::Oper::Sfe::Rack::AsicStages::AsicList::History::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "history";
    ADD_KEY_TOKEN(history_idx, "history_idx");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Sfe::Rack::AsicStages::AsicList::History::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (history_idx.is_set || is_set(history_idx.yfilter)) leaf_name_data.push_back(history_idx.get_name_leafdata());
    if (time_stamp.is_set || is_set(time_stamp.yfilter)) leaf_name_data.push_back(time_stamp.get_name_leafdata());
    if (admin_state.is_set || is_set(admin_state.yfilter)) leaf_name_data.push_back(admin_state.get_name_leafdata());
    if (oper_state.is_set || is_set(oper_state.yfilter)) leaf_name_data.push_back(oper_state.get_name_leafdata());
    if (error_state.is_set || is_set(error_state.yfilter)) leaf_name_data.push_back(error_state.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::Fabric::Oper::Sfe::Rack::AsicStages::AsicList::History::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Fabric::Oper::Sfe::Rack::AsicStages::AsicList::History::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Controller::Fabric::Oper::Sfe::Rack::AsicStages::AsicList::History::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
}

void Controller::Fabric::Oper::Sfe::Rack::AsicStages::AsicList::History::set_filter(const std::string & value_path, YFilter yfilter)
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
}

bool Controller::Fabric::Oper::Sfe::Rack::AsicStages::AsicList::History::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "history_idx" || name == "time_stamp" || name == "admin-state" || name == "oper_state" || name == "error_state")
        return true;
    return false;
}

Controller::Fabric::Oper::Sfe::Rack::AsicStages::Brief::Brief()
    :
    asic_list(this, {"asic_idx"})
{

    yang_name = "brief"; yang_parent_name = "asic_stages"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::Fabric::Oper::Sfe::Rack::AsicStages::Brief::~Brief()
{
}

bool Controller::Fabric::Oper::Sfe::Rack::AsicStages::Brief::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<asic_list.len(); index++)
    {
        if(asic_list[index]->has_data())
            return true;
    }
    return false;
}

bool Controller::Fabric::Oper::Sfe::Rack::AsicStages::Brief::has_operation() const
{
    for (std::size_t index=0; index<asic_list.len(); index++)
    {
        if(asic_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Controller::Fabric::Oper::Sfe::Rack::AsicStages::Brief::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "brief";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Sfe::Rack::AsicStages::Brief::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::Fabric::Oper::Sfe::Rack::AsicStages::Brief::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "asic_list")
    {
        auto ent_ = std::make_shared<Controller::Fabric::Oper::Sfe::Rack::AsicStages::Brief::AsicList>();
        ent_->parent = this;
        asic_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Fabric::Oper::Sfe::Rack::AsicStages::Brief::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : asic_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Controller::Fabric::Oper::Sfe::Rack::AsicStages::Brief::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::Fabric::Oper::Sfe::Rack::AsicStages::Brief::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::Fabric::Oper::Sfe::Rack::AsicStages::Brief::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "asic_list")
        return true;
    return false;
}

Controller::Fabric::Oper::Sfe::Rack::AsicStages::Brief::AsicList::AsicList()
    :
    asic_idx{YType::int64, "asic_idx"},
    asic_loc_str{YType::str, "asic_loc_str"},
    admin_state{YType::str, "admin-state"},
    oper_state{YType::str, "oper_state"},
    down_flags{YType::str, "down_flags"},
    fab_group{YType::str, "fab_group"}
        ,
    history(this, {"history_idx"})
{

    yang_name = "asic_list"; yang_parent_name = "brief"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::Fabric::Oper::Sfe::Rack::AsicStages::Brief::AsicList::~AsicList()
{
}

bool Controller::Fabric::Oper::Sfe::Rack::AsicStages::Brief::AsicList::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<history.len(); index++)
    {
        if(history[index]->has_data())
            return true;
    }
    return asic_idx.is_set
	|| asic_loc_str.is_set
	|| admin_state.is_set
	|| oper_state.is_set
	|| down_flags.is_set
	|| fab_group.is_set;
}

bool Controller::Fabric::Oper::Sfe::Rack::AsicStages::Brief::AsicList::has_operation() const
{
    for (std::size_t index=0; index<history.len(); index++)
    {
        if(history[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(asic_idx.yfilter)
	|| ydk::is_set(asic_loc_str.yfilter)
	|| ydk::is_set(admin_state.yfilter)
	|| ydk::is_set(oper_state.yfilter)
	|| ydk::is_set(down_flags.yfilter)
	|| ydk::is_set(fab_group.yfilter);
}

std::string Controller::Fabric::Oper::Sfe::Rack::AsicStages::Brief::AsicList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "asic_list";
    ADD_KEY_TOKEN(asic_idx, "asic_idx");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Sfe::Rack::AsicStages::Brief::AsicList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (asic_idx.is_set || is_set(asic_idx.yfilter)) leaf_name_data.push_back(asic_idx.get_name_leafdata());
    if (asic_loc_str.is_set || is_set(asic_loc_str.yfilter)) leaf_name_data.push_back(asic_loc_str.get_name_leafdata());
    if (admin_state.is_set || is_set(admin_state.yfilter)) leaf_name_data.push_back(admin_state.get_name_leafdata());
    if (oper_state.is_set || is_set(oper_state.yfilter)) leaf_name_data.push_back(oper_state.get_name_leafdata());
    if (down_flags.is_set || is_set(down_flags.yfilter)) leaf_name_data.push_back(down_flags.get_name_leafdata());
    if (fab_group.is_set || is_set(fab_group.yfilter)) leaf_name_data.push_back(fab_group.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::Fabric::Oper::Sfe::Rack::AsicStages::Brief::AsicList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "history")
    {
        auto ent_ = std::make_shared<Controller::Fabric::Oper::Sfe::Rack::AsicStages::Brief::AsicList::History>();
        ent_->parent = this;
        history.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Fabric::Oper::Sfe::Rack::AsicStages::Brief::AsicList::get_children() const
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

void Controller::Fabric::Oper::Sfe::Rack::AsicStages::Brief::AsicList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "asic_idx")
    {
        asic_idx = value;
        asic_idx.value_namespace = name_space;
        asic_idx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "asic_loc_str")
    {
        asic_loc_str = value;
        asic_loc_str.value_namespace = name_space;
        asic_loc_str.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "down_flags")
    {
        down_flags = value;
        down_flags.value_namespace = name_space;
        down_flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fab_group")
    {
        fab_group = value;
        fab_group.value_namespace = name_space;
        fab_group.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Fabric::Oper::Sfe::Rack::AsicStages::Brief::AsicList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "asic_idx")
    {
        asic_idx.yfilter = yfilter;
    }
    if(value_path == "asic_loc_str")
    {
        asic_loc_str.yfilter = yfilter;
    }
    if(value_path == "admin-state")
    {
        admin_state.yfilter = yfilter;
    }
    if(value_path == "oper_state")
    {
        oper_state.yfilter = yfilter;
    }
    if(value_path == "down_flags")
    {
        down_flags.yfilter = yfilter;
    }
    if(value_path == "fab_group")
    {
        fab_group.yfilter = yfilter;
    }
}

bool Controller::Fabric::Oper::Sfe::Rack::AsicStages::Brief::AsicList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "history" || name == "asic_idx" || name == "asic_loc_str" || name == "admin-state" || name == "oper_state" || name == "down_flags" || name == "fab_group")
        return true;
    return false;
}

Controller::Fabric::Oper::Sfe::Rack::AsicStages::Brief::AsicList::History::History()
    :
    history_idx{YType::int32, "history_idx"},
    time_stamp{YType::str, "time_stamp"},
    admin_state{YType::str, "admin-state"},
    oper_state{YType::str, "oper_state"},
    error_state{YType::str, "error_state"}
{

    yang_name = "history"; yang_parent_name = "asic_list"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::Fabric::Oper::Sfe::Rack::AsicStages::Brief::AsicList::History::~History()
{
}

bool Controller::Fabric::Oper::Sfe::Rack::AsicStages::Brief::AsicList::History::has_data() const
{
    if (is_presence_container) return true;
    return history_idx.is_set
	|| time_stamp.is_set
	|| admin_state.is_set
	|| oper_state.is_set
	|| error_state.is_set;
}

bool Controller::Fabric::Oper::Sfe::Rack::AsicStages::Brief::AsicList::History::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(history_idx.yfilter)
	|| ydk::is_set(time_stamp.yfilter)
	|| ydk::is_set(admin_state.yfilter)
	|| ydk::is_set(oper_state.yfilter)
	|| ydk::is_set(error_state.yfilter);
}

std::string Controller::Fabric::Oper::Sfe::Rack::AsicStages::Brief::AsicList::History::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "history";
    ADD_KEY_TOKEN(history_idx, "history_idx");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Sfe::Rack::AsicStages::Brief::AsicList::History::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (history_idx.is_set || is_set(history_idx.yfilter)) leaf_name_data.push_back(history_idx.get_name_leafdata());
    if (time_stamp.is_set || is_set(time_stamp.yfilter)) leaf_name_data.push_back(time_stamp.get_name_leafdata());
    if (admin_state.is_set || is_set(admin_state.yfilter)) leaf_name_data.push_back(admin_state.get_name_leafdata());
    if (oper_state.is_set || is_set(oper_state.yfilter)) leaf_name_data.push_back(oper_state.get_name_leafdata());
    if (error_state.is_set || is_set(error_state.yfilter)) leaf_name_data.push_back(error_state.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::Fabric::Oper::Sfe::Rack::AsicStages::Brief::AsicList::History::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Fabric::Oper::Sfe::Rack::AsicStages::Brief::AsicList::History::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Controller::Fabric::Oper::Sfe::Rack::AsicStages::Brief::AsicList::History::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
}

void Controller::Fabric::Oper::Sfe::Rack::AsicStages::Brief::AsicList::History::set_filter(const std::string & value_path, YFilter yfilter)
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
}

bool Controller::Fabric::Oper::Sfe::Rack::AsicStages::Brief::AsicList::History::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "history_idx" || name == "time_stamp" || name == "admin-state" || name == "oper_state" || name == "error_state")
        return true;
    return false;
}

Controller::Fabric::Oper::Sfe::Rack::AsicStages::Detail::Detail()
    :
    asic_list(this, {"asic_idx"})
{

    yang_name = "detail"; yang_parent_name = "asic_stages"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::Fabric::Oper::Sfe::Rack::AsicStages::Detail::~Detail()
{
}

bool Controller::Fabric::Oper::Sfe::Rack::AsicStages::Detail::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<asic_list.len(); index++)
    {
        if(asic_list[index]->has_data())
            return true;
    }
    return false;
}

bool Controller::Fabric::Oper::Sfe::Rack::AsicStages::Detail::has_operation() const
{
    for (std::size_t index=0; index<asic_list.len(); index++)
    {
        if(asic_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Controller::Fabric::Oper::Sfe::Rack::AsicStages::Detail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "detail";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Sfe::Rack::AsicStages::Detail::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::Fabric::Oper::Sfe::Rack::AsicStages::Detail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "asic_list")
    {
        auto ent_ = std::make_shared<Controller::Fabric::Oper::Sfe::Rack::AsicStages::Detail::AsicList>();
        ent_->parent = this;
        asic_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Fabric::Oper::Sfe::Rack::AsicStages::Detail::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : asic_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Controller::Fabric::Oper::Sfe::Rack::AsicStages::Detail::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::Fabric::Oper::Sfe::Rack::AsicStages::Detail::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::Fabric::Oper::Sfe::Rack::AsicStages::Detail::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "asic_list")
        return true;
    return false;
}

Controller::Fabric::Oper::Sfe::Rack::AsicStages::Detail::AsicList::AsicList()
    :
    asic_idx{YType::int64, "asic_idx"},
    asic_loc_str{YType::str, "asic_loc_str"},
    admin_state{YType::str, "admin-state"},
    oper_state{YType::str, "oper_state"},
    down_flags{YType::str, "down_flags"},
    fab_group{YType::str, "fab_group"}
        ,
    history(this, {"history_idx"})
{

    yang_name = "asic_list"; yang_parent_name = "detail"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::Fabric::Oper::Sfe::Rack::AsicStages::Detail::AsicList::~AsicList()
{
}

bool Controller::Fabric::Oper::Sfe::Rack::AsicStages::Detail::AsicList::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<history.len(); index++)
    {
        if(history[index]->has_data())
            return true;
    }
    return asic_idx.is_set
	|| asic_loc_str.is_set
	|| admin_state.is_set
	|| oper_state.is_set
	|| down_flags.is_set
	|| fab_group.is_set;
}

bool Controller::Fabric::Oper::Sfe::Rack::AsicStages::Detail::AsicList::has_operation() const
{
    for (std::size_t index=0; index<history.len(); index++)
    {
        if(history[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(asic_idx.yfilter)
	|| ydk::is_set(asic_loc_str.yfilter)
	|| ydk::is_set(admin_state.yfilter)
	|| ydk::is_set(oper_state.yfilter)
	|| ydk::is_set(down_flags.yfilter)
	|| ydk::is_set(fab_group.yfilter);
}

std::string Controller::Fabric::Oper::Sfe::Rack::AsicStages::Detail::AsicList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "asic_list";
    ADD_KEY_TOKEN(asic_idx, "asic_idx");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Sfe::Rack::AsicStages::Detail::AsicList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (asic_idx.is_set || is_set(asic_idx.yfilter)) leaf_name_data.push_back(asic_idx.get_name_leafdata());
    if (asic_loc_str.is_set || is_set(asic_loc_str.yfilter)) leaf_name_data.push_back(asic_loc_str.get_name_leafdata());
    if (admin_state.is_set || is_set(admin_state.yfilter)) leaf_name_data.push_back(admin_state.get_name_leafdata());
    if (oper_state.is_set || is_set(oper_state.yfilter)) leaf_name_data.push_back(oper_state.get_name_leafdata());
    if (down_flags.is_set || is_set(down_flags.yfilter)) leaf_name_data.push_back(down_flags.get_name_leafdata());
    if (fab_group.is_set || is_set(fab_group.yfilter)) leaf_name_data.push_back(fab_group.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::Fabric::Oper::Sfe::Rack::AsicStages::Detail::AsicList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "history")
    {
        auto ent_ = std::make_shared<Controller::Fabric::Oper::Sfe::Rack::AsicStages::Detail::AsicList::History>();
        ent_->parent = this;
        history.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Fabric::Oper::Sfe::Rack::AsicStages::Detail::AsicList::get_children() const
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

void Controller::Fabric::Oper::Sfe::Rack::AsicStages::Detail::AsicList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "asic_idx")
    {
        asic_idx = value;
        asic_idx.value_namespace = name_space;
        asic_idx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "asic_loc_str")
    {
        asic_loc_str = value;
        asic_loc_str.value_namespace = name_space;
        asic_loc_str.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "down_flags")
    {
        down_flags = value;
        down_flags.value_namespace = name_space;
        down_flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fab_group")
    {
        fab_group = value;
        fab_group.value_namespace = name_space;
        fab_group.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Fabric::Oper::Sfe::Rack::AsicStages::Detail::AsicList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "asic_idx")
    {
        asic_idx.yfilter = yfilter;
    }
    if(value_path == "asic_loc_str")
    {
        asic_loc_str.yfilter = yfilter;
    }
    if(value_path == "admin-state")
    {
        admin_state.yfilter = yfilter;
    }
    if(value_path == "oper_state")
    {
        oper_state.yfilter = yfilter;
    }
    if(value_path == "down_flags")
    {
        down_flags.yfilter = yfilter;
    }
    if(value_path == "fab_group")
    {
        fab_group.yfilter = yfilter;
    }
}

bool Controller::Fabric::Oper::Sfe::Rack::AsicStages::Detail::AsicList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "history" || name == "asic_idx" || name == "asic_loc_str" || name == "admin-state" || name == "oper_state" || name == "down_flags" || name == "fab_group")
        return true;
    return false;
}

Controller::Fabric::Oper::Sfe::Rack::AsicStages::Detail::AsicList::History::History()
    :
    history_idx{YType::int32, "history_idx"},
    time_stamp{YType::str, "time_stamp"},
    admin_state{YType::str, "admin-state"},
    oper_state{YType::str, "oper_state"},
    error_state{YType::str, "error_state"}
{

    yang_name = "history"; yang_parent_name = "asic_list"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::Fabric::Oper::Sfe::Rack::AsicStages::Detail::AsicList::History::~History()
{
}

bool Controller::Fabric::Oper::Sfe::Rack::AsicStages::Detail::AsicList::History::has_data() const
{
    if (is_presence_container) return true;
    return history_idx.is_set
	|| time_stamp.is_set
	|| admin_state.is_set
	|| oper_state.is_set
	|| error_state.is_set;
}

bool Controller::Fabric::Oper::Sfe::Rack::AsicStages::Detail::AsicList::History::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(history_idx.yfilter)
	|| ydk::is_set(time_stamp.yfilter)
	|| ydk::is_set(admin_state.yfilter)
	|| ydk::is_set(oper_state.yfilter)
	|| ydk::is_set(error_state.yfilter);
}

std::string Controller::Fabric::Oper::Sfe::Rack::AsicStages::Detail::AsicList::History::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "history";
    ADD_KEY_TOKEN(history_idx, "history_idx");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Sfe::Rack::AsicStages::Detail::AsicList::History::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (history_idx.is_set || is_set(history_idx.yfilter)) leaf_name_data.push_back(history_idx.get_name_leafdata());
    if (time_stamp.is_set || is_set(time_stamp.yfilter)) leaf_name_data.push_back(time_stamp.get_name_leafdata());
    if (admin_state.is_set || is_set(admin_state.yfilter)) leaf_name_data.push_back(admin_state.get_name_leafdata());
    if (oper_state.is_set || is_set(oper_state.yfilter)) leaf_name_data.push_back(oper_state.get_name_leafdata());
    if (error_state.is_set || is_set(error_state.yfilter)) leaf_name_data.push_back(error_state.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::Fabric::Oper::Sfe::Rack::AsicStages::Detail::AsicList::History::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Fabric::Oper::Sfe::Rack::AsicStages::Detail::AsicList::History::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Controller::Fabric::Oper::Sfe::Rack::AsicStages::Detail::AsicList::History::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
}

void Controller::Fabric::Oper::Sfe::Rack::AsicStages::Detail::AsicList::History::set_filter(const std::string & value_path, YFilter yfilter)
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
}

bool Controller::Fabric::Oper::Sfe::Rack::AsicStages::Detail::AsicList::History::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "history_idx" || name == "time_stamp" || name == "admin-state" || name == "oper_state" || name == "error_state")
        return true;
    return false;
}

Controller::Fabric::Oper::FsdbPla::FsdbPla()
    :
    rack(this, {"rack_number"})
{

    yang_name = "fsdb_pla"; yang_parent_name = "oper"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::Fabric::Oper::FsdbPla::~FsdbPla()
{
}

bool Controller::Fabric::Oper::FsdbPla::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rack.len(); index++)
    {
        if(rack[index]->has_data())
            return true;
    }
    return false;
}

bool Controller::Fabric::Oper::FsdbPla::has_operation() const
{
    for (std::size_t index=0; index<rack.len(); index++)
    {
        if(rack[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Controller::Fabric::Oper::FsdbPla::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers-ncs55A1:controller/fabric/oper/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::Fabric::Oper::FsdbPla::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fsdb_pla";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::FsdbPla::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::Fabric::Oper::FsdbPla::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rack")
    {
        auto ent_ = std::make_shared<Controller::Fabric::Oper::FsdbPla::Rack>();
        ent_->parent = this;
        rack.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Fabric::Oper::FsdbPla::get_children() const
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

void Controller::Fabric::Oper::FsdbPla::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::Fabric::Oper::FsdbPla::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::Fabric::Oper::FsdbPla::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rack")
        return true;
    return false;
}

Controller::Fabric::Oper::FsdbPla::Rack::Rack()
    :
    rack_number{YType::int32, "rack_number"}
        ,
    asic_stages(this, {"asic_stage_idx"})
{

    yang_name = "rack"; yang_parent_name = "fsdb_pla"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::Fabric::Oper::FsdbPla::Rack::~Rack()
{
}

bool Controller::Fabric::Oper::FsdbPla::Rack::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<asic_stages.len(); index++)
    {
        if(asic_stages[index]->has_data())
            return true;
    }
    return rack_number.is_set;
}

bool Controller::Fabric::Oper::FsdbPla::Rack::has_operation() const
{
    for (std::size_t index=0; index<asic_stages.len(); index++)
    {
        if(asic_stages[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(rack_number.yfilter);
}

std::string Controller::Fabric::Oper::FsdbPla::Rack::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers-ncs55A1:controller/fabric/oper/fsdb_pla/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::Fabric::Oper::FsdbPla::Rack::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rack";
    ADD_KEY_TOKEN(rack_number, "rack_number");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::FsdbPla::Rack::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rack_number.is_set || is_set(rack_number.yfilter)) leaf_name_data.push_back(rack_number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::Fabric::Oper::FsdbPla::Rack::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "asic_stages")
    {
        auto ent_ = std::make_shared<Controller::Fabric::Oper::FsdbPla::Rack::AsicStages>();
        ent_->parent = this;
        asic_stages.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Fabric::Oper::FsdbPla::Rack::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : asic_stages.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Controller::Fabric::Oper::FsdbPla::Rack::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rack_number")
    {
        rack_number = value;
        rack_number.value_namespace = name_space;
        rack_number.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Fabric::Oper::FsdbPla::Rack::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rack_number")
    {
        rack_number.yfilter = yfilter;
    }
}

bool Controller::Fabric::Oper::FsdbPla::Rack::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "asic_stages" || name == "rack_number")
        return true;
    return false;
}

Controller::Fabric::Oper::FsdbPla::Rack::AsicStages::AsicStages()
    :
    asic_stage_idx{YType::str, "asic_stage_idx"},
    asic_stage_name{YType::str, "asic_stage_name"},
    rack_number{YType::str, "rack_number"},
    plane_number{YType::int32, "plane_number"}
        ,
    fabids(this, {"idx"})
    , down_fabids(this, {"idx"})
    , destination(this, {"amba_id"})
{

    yang_name = "asic_stages"; yang_parent_name = "rack"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::Fabric::Oper::FsdbPla::Rack::AsicStages::~AsicStages()
{
}

bool Controller::Fabric::Oper::FsdbPla::Rack::AsicStages::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<fabids.len(); index++)
    {
        if(fabids[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<down_fabids.len(); index++)
    {
        if(down_fabids[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<destination.len(); index++)
    {
        if(destination[index]->has_data())
            return true;
    }
    return asic_stage_idx.is_set
	|| asic_stage_name.is_set
	|| rack_number.is_set
	|| plane_number.is_set;
}

bool Controller::Fabric::Oper::FsdbPla::Rack::AsicStages::has_operation() const
{
    for (std::size_t index=0; index<fabids.len(); index++)
    {
        if(fabids[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<down_fabids.len(); index++)
    {
        if(down_fabids[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<destination.len(); index++)
    {
        if(destination[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(asic_stage_idx.yfilter)
	|| ydk::is_set(asic_stage_name.yfilter)
	|| ydk::is_set(rack_number.yfilter)
	|| ydk::is_set(plane_number.yfilter);
}

std::string Controller::Fabric::Oper::FsdbPla::Rack::AsicStages::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "asic_stages";
    ADD_KEY_TOKEN(asic_stage_idx, "asic_stage_idx");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::FsdbPla::Rack::AsicStages::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (asic_stage_idx.is_set || is_set(asic_stage_idx.yfilter)) leaf_name_data.push_back(asic_stage_idx.get_name_leafdata());
    if (asic_stage_name.is_set || is_set(asic_stage_name.yfilter)) leaf_name_data.push_back(asic_stage_name.get_name_leafdata());
    if (rack_number.is_set || is_set(rack_number.yfilter)) leaf_name_data.push_back(rack_number.get_name_leafdata());
    if (plane_number.is_set || is_set(plane_number.yfilter)) leaf_name_data.push_back(plane_number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::Fabric::Oper::FsdbPla::Rack::AsicStages::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "fabids")
    {
        auto ent_ = std::make_shared<Controller::Fabric::Oper::FsdbPla::Rack::AsicStages::Fabids>();
        ent_->parent = this;
        fabids.append(ent_);
        return ent_;
    }

    if(child_yang_name == "down_fabids")
    {
        auto ent_ = std::make_shared<Controller::Fabric::Oper::FsdbPla::Rack::AsicStages::DownFabids>();
        ent_->parent = this;
        down_fabids.append(ent_);
        return ent_;
    }

    if(child_yang_name == "destination")
    {
        auto ent_ = std::make_shared<Controller::Fabric::Oper::FsdbPla::Rack::AsicStages::Destination>();
        ent_->parent = this;
        destination.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Fabric::Oper::FsdbPla::Rack::AsicStages::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : fabids.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : down_fabids.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : destination.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Controller::Fabric::Oper::FsdbPla::Rack::AsicStages::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "asic_stage_idx")
    {
        asic_stage_idx = value;
        asic_stage_idx.value_namespace = name_space;
        asic_stage_idx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "asic_stage_name")
    {
        asic_stage_name = value;
        asic_stage_name.value_namespace = name_space;
        asic_stage_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rack_number")
    {
        rack_number = value;
        rack_number.value_namespace = name_space;
        rack_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "plane_number")
    {
        plane_number = value;
        plane_number.value_namespace = name_space;
        plane_number.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Fabric::Oper::FsdbPla::Rack::AsicStages::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "asic_stage_idx")
    {
        asic_stage_idx.yfilter = yfilter;
    }
    if(value_path == "asic_stage_name")
    {
        asic_stage_name.yfilter = yfilter;
    }
    if(value_path == "rack_number")
    {
        rack_number.yfilter = yfilter;
    }
    if(value_path == "plane_number")
    {
        plane_number.yfilter = yfilter;
    }
}

bool Controller::Fabric::Oper::FsdbPla::Rack::AsicStages::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fabids" || name == "down_fabids" || name == "destination" || name == "asic_stage_idx" || name == "asic_stage_name" || name == "rack_number" || name == "plane_number")
        return true;
    return false;
}

Controller::Fabric::Oper::FsdbPla::Rack::AsicStages::Fabids::Fabids()
    :
    idx{YType::int32, "idx"},
    fabid_address{YType::str, "fabid_address"},
    plane_num{YType::int32, "plane_num"},
    plane_0_mask{YType::str, "plane_0_mask"},
    plane_1_mask{YType::str, "plane_1_mask"},
    plane_2_mask{YType::str, "plane_2_mask"},
    plane_3_mask{YType::str, "plane_3_mask"},
    plane_4_mask{YType::str, "plane_4_mask"},
    plane_5_mask{YType::str, "plane_5_mask"},
    min_links_per_asic{YType::int32, "min_links_per_asic"},
    max_links_per_asic{YType::int32, "max_links_per_asic"},
    total_links{YType::int32, "total_links"},
    min_up_links_per_asic{YType::int32, "min_up_links_per_asic"},
    max_up_links_per_asic{YType::int32, "max_up_links_per_asic"},
    total_up_links{YType::int32, "total_up_links"}
{

    yang_name = "fabids"; yang_parent_name = "asic_stages"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::Fabric::Oper::FsdbPla::Rack::AsicStages::Fabids::~Fabids()
{
}

bool Controller::Fabric::Oper::FsdbPla::Rack::AsicStages::Fabids::has_data() const
{
    if (is_presence_container) return true;
    return idx.is_set
	|| fabid_address.is_set
	|| plane_num.is_set
	|| plane_0_mask.is_set
	|| plane_1_mask.is_set
	|| plane_2_mask.is_set
	|| plane_3_mask.is_set
	|| plane_4_mask.is_set
	|| plane_5_mask.is_set
	|| min_links_per_asic.is_set
	|| max_links_per_asic.is_set
	|| total_links.is_set
	|| min_up_links_per_asic.is_set
	|| max_up_links_per_asic.is_set
	|| total_up_links.is_set;
}

bool Controller::Fabric::Oper::FsdbPla::Rack::AsicStages::Fabids::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(idx.yfilter)
	|| ydk::is_set(fabid_address.yfilter)
	|| ydk::is_set(plane_num.yfilter)
	|| ydk::is_set(plane_0_mask.yfilter)
	|| ydk::is_set(plane_1_mask.yfilter)
	|| ydk::is_set(plane_2_mask.yfilter)
	|| ydk::is_set(plane_3_mask.yfilter)
	|| ydk::is_set(plane_4_mask.yfilter)
	|| ydk::is_set(plane_5_mask.yfilter)
	|| ydk::is_set(min_links_per_asic.yfilter)
	|| ydk::is_set(max_links_per_asic.yfilter)
	|| ydk::is_set(total_links.yfilter)
	|| ydk::is_set(min_up_links_per_asic.yfilter)
	|| ydk::is_set(max_up_links_per_asic.yfilter)
	|| ydk::is_set(total_up_links.yfilter);
}

std::string Controller::Fabric::Oper::FsdbPla::Rack::AsicStages::Fabids::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fabids";
    ADD_KEY_TOKEN(idx, "idx");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::FsdbPla::Rack::AsicStages::Fabids::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (idx.is_set || is_set(idx.yfilter)) leaf_name_data.push_back(idx.get_name_leafdata());
    if (fabid_address.is_set || is_set(fabid_address.yfilter)) leaf_name_data.push_back(fabid_address.get_name_leafdata());
    if (plane_num.is_set || is_set(plane_num.yfilter)) leaf_name_data.push_back(plane_num.get_name_leafdata());
    if (plane_0_mask.is_set || is_set(plane_0_mask.yfilter)) leaf_name_data.push_back(plane_0_mask.get_name_leafdata());
    if (plane_1_mask.is_set || is_set(plane_1_mask.yfilter)) leaf_name_data.push_back(plane_1_mask.get_name_leafdata());
    if (plane_2_mask.is_set || is_set(plane_2_mask.yfilter)) leaf_name_data.push_back(plane_2_mask.get_name_leafdata());
    if (plane_3_mask.is_set || is_set(plane_3_mask.yfilter)) leaf_name_data.push_back(plane_3_mask.get_name_leafdata());
    if (plane_4_mask.is_set || is_set(plane_4_mask.yfilter)) leaf_name_data.push_back(plane_4_mask.get_name_leafdata());
    if (plane_5_mask.is_set || is_set(plane_5_mask.yfilter)) leaf_name_data.push_back(plane_5_mask.get_name_leafdata());
    if (min_links_per_asic.is_set || is_set(min_links_per_asic.yfilter)) leaf_name_data.push_back(min_links_per_asic.get_name_leafdata());
    if (max_links_per_asic.is_set || is_set(max_links_per_asic.yfilter)) leaf_name_data.push_back(max_links_per_asic.get_name_leafdata());
    if (total_links.is_set || is_set(total_links.yfilter)) leaf_name_data.push_back(total_links.get_name_leafdata());
    if (min_up_links_per_asic.is_set || is_set(min_up_links_per_asic.yfilter)) leaf_name_data.push_back(min_up_links_per_asic.get_name_leafdata());
    if (max_up_links_per_asic.is_set || is_set(max_up_links_per_asic.yfilter)) leaf_name_data.push_back(max_up_links_per_asic.get_name_leafdata());
    if (total_up_links.is_set || is_set(total_up_links.yfilter)) leaf_name_data.push_back(total_up_links.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::Fabric::Oper::FsdbPla::Rack::AsicStages::Fabids::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Fabric::Oper::FsdbPla::Rack::AsicStages::Fabids::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Controller::Fabric::Oper::FsdbPla::Rack::AsicStages::Fabids::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "idx")
    {
        idx = value;
        idx.value_namespace = name_space;
        idx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fabid_address")
    {
        fabid_address = value;
        fabid_address.value_namespace = name_space;
        fabid_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "plane_num")
    {
        plane_num = value;
        plane_num.value_namespace = name_space;
        plane_num.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "plane_0_mask")
    {
        plane_0_mask = value;
        plane_0_mask.value_namespace = name_space;
        plane_0_mask.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "plane_1_mask")
    {
        plane_1_mask = value;
        plane_1_mask.value_namespace = name_space;
        plane_1_mask.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "plane_2_mask")
    {
        plane_2_mask = value;
        plane_2_mask.value_namespace = name_space;
        plane_2_mask.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "plane_3_mask")
    {
        plane_3_mask = value;
        plane_3_mask.value_namespace = name_space;
        plane_3_mask.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "plane_4_mask")
    {
        plane_4_mask = value;
        plane_4_mask.value_namespace = name_space;
        plane_4_mask.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "plane_5_mask")
    {
        plane_5_mask = value;
        plane_5_mask.value_namespace = name_space;
        plane_5_mask.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "min_links_per_asic")
    {
        min_links_per_asic = value;
        min_links_per_asic.value_namespace = name_space;
        min_links_per_asic.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max_links_per_asic")
    {
        max_links_per_asic = value;
        max_links_per_asic.value_namespace = name_space;
        max_links_per_asic.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total_links")
    {
        total_links = value;
        total_links.value_namespace = name_space;
        total_links.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "min_up_links_per_asic")
    {
        min_up_links_per_asic = value;
        min_up_links_per_asic.value_namespace = name_space;
        min_up_links_per_asic.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max_up_links_per_asic")
    {
        max_up_links_per_asic = value;
        max_up_links_per_asic.value_namespace = name_space;
        max_up_links_per_asic.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total_up_links")
    {
        total_up_links = value;
        total_up_links.value_namespace = name_space;
        total_up_links.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Fabric::Oper::FsdbPla::Rack::AsicStages::Fabids::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "idx")
    {
        idx.yfilter = yfilter;
    }
    if(value_path == "fabid_address")
    {
        fabid_address.yfilter = yfilter;
    }
    if(value_path == "plane_num")
    {
        plane_num.yfilter = yfilter;
    }
    if(value_path == "plane_0_mask")
    {
        plane_0_mask.yfilter = yfilter;
    }
    if(value_path == "plane_1_mask")
    {
        plane_1_mask.yfilter = yfilter;
    }
    if(value_path == "plane_2_mask")
    {
        plane_2_mask.yfilter = yfilter;
    }
    if(value_path == "plane_3_mask")
    {
        plane_3_mask.yfilter = yfilter;
    }
    if(value_path == "plane_4_mask")
    {
        plane_4_mask.yfilter = yfilter;
    }
    if(value_path == "plane_5_mask")
    {
        plane_5_mask.yfilter = yfilter;
    }
    if(value_path == "min_links_per_asic")
    {
        min_links_per_asic.yfilter = yfilter;
    }
    if(value_path == "max_links_per_asic")
    {
        max_links_per_asic.yfilter = yfilter;
    }
    if(value_path == "total_links")
    {
        total_links.yfilter = yfilter;
    }
    if(value_path == "min_up_links_per_asic")
    {
        min_up_links_per_asic.yfilter = yfilter;
    }
    if(value_path == "max_up_links_per_asic")
    {
        max_up_links_per_asic.yfilter = yfilter;
    }
    if(value_path == "total_up_links")
    {
        total_up_links.yfilter = yfilter;
    }
}

bool Controller::Fabric::Oper::FsdbPla::Rack::AsicStages::Fabids::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "idx" || name == "fabid_address" || name == "plane_num" || name == "plane_0_mask" || name == "plane_1_mask" || name == "plane_2_mask" || name == "plane_3_mask" || name == "plane_4_mask" || name == "plane_5_mask" || name == "min_links_per_asic" || name == "max_links_per_asic" || name == "total_links" || name == "min_up_links_per_asic" || name == "max_up_links_per_asic" || name == "total_up_links")
        return true;
    return false;
}

Controller::Fabric::Oper::FsdbPla::Rack::AsicStages::DownFabids::DownFabids()
    :
    idx{YType::int32, "idx"},
    fabid_address{YType::str, "fabid_address"},
    fabid_status{YType::str, "fabid_status"}
{

    yang_name = "down_fabids"; yang_parent_name = "asic_stages"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::Fabric::Oper::FsdbPla::Rack::AsicStages::DownFabids::~DownFabids()
{
}

bool Controller::Fabric::Oper::FsdbPla::Rack::AsicStages::DownFabids::has_data() const
{
    if (is_presence_container) return true;
    return idx.is_set
	|| fabid_address.is_set
	|| fabid_status.is_set;
}

bool Controller::Fabric::Oper::FsdbPla::Rack::AsicStages::DownFabids::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(idx.yfilter)
	|| ydk::is_set(fabid_address.yfilter)
	|| ydk::is_set(fabid_status.yfilter);
}

std::string Controller::Fabric::Oper::FsdbPla::Rack::AsicStages::DownFabids::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "down_fabids";
    ADD_KEY_TOKEN(idx, "idx");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::FsdbPla::Rack::AsicStages::DownFabids::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (idx.is_set || is_set(idx.yfilter)) leaf_name_data.push_back(idx.get_name_leafdata());
    if (fabid_address.is_set || is_set(fabid_address.yfilter)) leaf_name_data.push_back(fabid_address.get_name_leafdata());
    if (fabid_status.is_set || is_set(fabid_status.yfilter)) leaf_name_data.push_back(fabid_status.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::Fabric::Oper::FsdbPla::Rack::AsicStages::DownFabids::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Fabric::Oper::FsdbPla::Rack::AsicStages::DownFabids::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Controller::Fabric::Oper::FsdbPla::Rack::AsicStages::DownFabids::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "idx")
    {
        idx = value;
        idx.value_namespace = name_space;
        idx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fabid_address")
    {
        fabid_address = value;
        fabid_address.value_namespace = name_space;
        fabid_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fabid_status")
    {
        fabid_status = value;
        fabid_status.value_namespace = name_space;
        fabid_status.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Fabric::Oper::FsdbPla::Rack::AsicStages::DownFabids::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "idx")
    {
        idx.yfilter = yfilter;
    }
    if(value_path == "fabid_address")
    {
        fabid_address.yfilter = yfilter;
    }
    if(value_path == "fabid_status")
    {
        fabid_status.yfilter = yfilter;
    }
}

bool Controller::Fabric::Oper::FsdbPla::Rack::AsicStages::DownFabids::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "idx" || name == "fabid_address" || name == "fabid_status")
        return true;
    return false;
}

Controller::Fabric::Oper::FsdbPla::Rack::AsicStages::Destination::Destination()
    :
    amba_id{YType::str, "amba_id"}
        ,
    planes(this, {"plane_idx"})
{

    yang_name = "destination"; yang_parent_name = "asic_stages"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::Fabric::Oper::FsdbPla::Rack::AsicStages::Destination::~Destination()
{
}

bool Controller::Fabric::Oper::FsdbPla::Rack::AsicStages::Destination::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<planes.len(); index++)
    {
        if(planes[index]->has_data())
            return true;
    }
    return amba_id.is_set;
}

bool Controller::Fabric::Oper::FsdbPla::Rack::AsicStages::Destination::has_operation() const
{
    for (std::size_t index=0; index<planes.len(); index++)
    {
        if(planes[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(amba_id.yfilter);
}

std::string Controller::Fabric::Oper::FsdbPla::Rack::AsicStages::Destination::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "destination";
    ADD_KEY_TOKEN(amba_id, "amba_id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::FsdbPla::Rack::AsicStages::Destination::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (amba_id.is_set || is_set(amba_id.yfilter)) leaf_name_data.push_back(amba_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::Fabric::Oper::FsdbPla::Rack::AsicStages::Destination::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "planes")
    {
        auto ent_ = std::make_shared<Controller::Fabric::Oper::FsdbPla::Rack::AsicStages::Destination::Planes>();
        ent_->parent = this;
        planes.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Fabric::Oper::FsdbPla::Rack::AsicStages::Destination::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : planes.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Controller::Fabric::Oper::FsdbPla::Rack::AsicStages::Destination::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "amba_id")
    {
        amba_id = value;
        amba_id.value_namespace = name_space;
        amba_id.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Fabric::Oper::FsdbPla::Rack::AsicStages::Destination::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "amba_id")
    {
        amba_id.yfilter = yfilter;
    }
}

bool Controller::Fabric::Oper::FsdbPla::Rack::AsicStages::Destination::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "planes" || name == "amba_id")
        return true;
    return false;
}

Controller::Fabric::Oper::FsdbPla::Rack::AsicStages::Destination::Planes::Planes()
    :
    plane_idx{YType::int32, "plane_idx"},
    plane_num{YType::int32, "plane_num"},
    fabid_name{YType::str, "fabid_name"},
    show_fabid{YType::boolean, "show_fabid"},
    asic_stage{YType::str, "asic_stage"}
        ,
    cards(this, {"card_idx"})
{

    yang_name = "planes"; yang_parent_name = "destination"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::Fabric::Oper::FsdbPla::Rack::AsicStages::Destination::Planes::~Planes()
{
}

bool Controller::Fabric::Oper::FsdbPla::Rack::AsicStages::Destination::Planes::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<cards.len(); index++)
    {
        if(cards[index]->has_data())
            return true;
    }
    return plane_idx.is_set
	|| plane_num.is_set
	|| fabid_name.is_set
	|| show_fabid.is_set
	|| asic_stage.is_set;
}

bool Controller::Fabric::Oper::FsdbPla::Rack::AsicStages::Destination::Planes::has_operation() const
{
    for (std::size_t index=0; index<cards.len(); index++)
    {
        if(cards[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(plane_idx.yfilter)
	|| ydk::is_set(plane_num.yfilter)
	|| ydk::is_set(fabid_name.yfilter)
	|| ydk::is_set(show_fabid.yfilter)
	|| ydk::is_set(asic_stage.yfilter);
}

std::string Controller::Fabric::Oper::FsdbPla::Rack::AsicStages::Destination::Planes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "planes";
    ADD_KEY_TOKEN(plane_idx, "plane_idx");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::FsdbPla::Rack::AsicStages::Destination::Planes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (plane_idx.is_set || is_set(plane_idx.yfilter)) leaf_name_data.push_back(plane_idx.get_name_leafdata());
    if (plane_num.is_set || is_set(plane_num.yfilter)) leaf_name_data.push_back(plane_num.get_name_leafdata());
    if (fabid_name.is_set || is_set(fabid_name.yfilter)) leaf_name_data.push_back(fabid_name.get_name_leafdata());
    if (show_fabid.is_set || is_set(show_fabid.yfilter)) leaf_name_data.push_back(show_fabid.get_name_leafdata());
    if (asic_stage.is_set || is_set(asic_stage.yfilter)) leaf_name_data.push_back(asic_stage.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::Fabric::Oper::FsdbPla::Rack::AsicStages::Destination::Planes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cards")
    {
        auto ent_ = std::make_shared<Controller::Fabric::Oper::FsdbPla::Rack::AsicStages::Destination::Planes::Cards>();
        ent_->parent = this;
        cards.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Fabric::Oper::FsdbPla::Rack::AsicStages::Destination::Planes::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : cards.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Controller::Fabric::Oper::FsdbPla::Rack::AsicStages::Destination::Planes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "plane_idx")
    {
        plane_idx = value;
        plane_idx.value_namespace = name_space;
        plane_idx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "plane_num")
    {
        plane_num = value;
        plane_num.value_namespace = name_space;
        plane_num.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fabid_name")
    {
        fabid_name = value;
        fabid_name.value_namespace = name_space;
        fabid_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "show_fabid")
    {
        show_fabid = value;
        show_fabid.value_namespace = name_space;
        show_fabid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "asic_stage")
    {
        asic_stage = value;
        asic_stage.value_namespace = name_space;
        asic_stage.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Fabric::Oper::FsdbPla::Rack::AsicStages::Destination::Planes::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "plane_idx")
    {
        plane_idx.yfilter = yfilter;
    }
    if(value_path == "plane_num")
    {
        plane_num.yfilter = yfilter;
    }
    if(value_path == "fabid_name")
    {
        fabid_name.yfilter = yfilter;
    }
    if(value_path == "show_fabid")
    {
        show_fabid.yfilter = yfilter;
    }
    if(value_path == "asic_stage")
    {
        asic_stage.yfilter = yfilter;
    }
}

bool Controller::Fabric::Oper::FsdbPla::Rack::AsicStages::Destination::Planes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cards" || name == "plane_idx" || name == "plane_num" || name == "fabid_name" || name == "show_fabid" || name == "asic_stage")
        return true;
    return false;
}

Controller::Fabric::Oper::FsdbPla::Rack::AsicStages::Destination::Planes::Cards::Cards()
    :
    card_idx{YType::int32, "card_idx"}
        ,
    asics(this, {"asic_idx"})
{

    yang_name = "cards"; yang_parent_name = "planes"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::Fabric::Oper::FsdbPla::Rack::AsicStages::Destination::Planes::Cards::~Cards()
{
}

bool Controller::Fabric::Oper::FsdbPla::Rack::AsicStages::Destination::Planes::Cards::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<asics.len(); index++)
    {
        if(asics[index]->has_data())
            return true;
    }
    return card_idx.is_set;
}

bool Controller::Fabric::Oper::FsdbPla::Rack::AsicStages::Destination::Planes::Cards::has_operation() const
{
    for (std::size_t index=0; index<asics.len(); index++)
    {
        if(asics[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(card_idx.yfilter);
}

std::string Controller::Fabric::Oper::FsdbPla::Rack::AsicStages::Destination::Planes::Cards::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cards";
    ADD_KEY_TOKEN(card_idx, "card_idx");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::FsdbPla::Rack::AsicStages::Destination::Planes::Cards::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (card_idx.is_set || is_set(card_idx.yfilter)) leaf_name_data.push_back(card_idx.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::Fabric::Oper::FsdbPla::Rack::AsicStages::Destination::Planes::Cards::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "asics")
    {
        auto ent_ = std::make_shared<Controller::Fabric::Oper::FsdbPla::Rack::AsicStages::Destination::Planes::Cards::Asics>();
        ent_->parent = this;
        asics.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Fabric::Oper::FsdbPla::Rack::AsicStages::Destination::Planes::Cards::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : asics.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Controller::Fabric::Oper::FsdbPla::Rack::AsicStages::Destination::Planes::Cards::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "card_idx")
    {
        card_idx = value;
        card_idx.value_namespace = name_space;
        card_idx.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Fabric::Oper::FsdbPla::Rack::AsicStages::Destination::Planes::Cards::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "card_idx")
    {
        card_idx.yfilter = yfilter;
    }
}

bool Controller::Fabric::Oper::FsdbPla::Rack::AsicStages::Destination::Planes::Cards::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "asics" || name == "card_idx")
        return true;
    return false;
}

Controller::Fabric::Oper::FsdbPla::Rack::AsicStages::Destination::Planes::Cards::Asics::Asics()
    :
    asic_idx{YType::int32, "asic_idx"},
    asic_rsa{YType::str, "asic_RSA"},
    reachability_mask{YType::str, "reachability_mask"},
    linkup_mask{YType::str, "linkup_mask"},
    all_reach_mask{YType::str, "all_reach_mask"},
    total_links{YType::int32, "total_links"},
    total_up_links{YType::int32, "total_up_links"},
    total_all_reach_links{YType::int32, "total_all_reach_links"},
    asic_stage_name{YType::str, "asic_stage_name"}
{

    yang_name = "asics"; yang_parent_name = "cards"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::Fabric::Oper::FsdbPla::Rack::AsicStages::Destination::Planes::Cards::Asics::~Asics()
{
}

bool Controller::Fabric::Oper::FsdbPla::Rack::AsicStages::Destination::Planes::Cards::Asics::has_data() const
{
    if (is_presence_container) return true;
    return asic_idx.is_set
	|| asic_rsa.is_set
	|| reachability_mask.is_set
	|| linkup_mask.is_set
	|| all_reach_mask.is_set
	|| total_links.is_set
	|| total_up_links.is_set
	|| total_all_reach_links.is_set
	|| asic_stage_name.is_set;
}

bool Controller::Fabric::Oper::FsdbPla::Rack::AsicStages::Destination::Planes::Cards::Asics::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(asic_idx.yfilter)
	|| ydk::is_set(asic_rsa.yfilter)
	|| ydk::is_set(reachability_mask.yfilter)
	|| ydk::is_set(linkup_mask.yfilter)
	|| ydk::is_set(all_reach_mask.yfilter)
	|| ydk::is_set(total_links.yfilter)
	|| ydk::is_set(total_up_links.yfilter)
	|| ydk::is_set(total_all_reach_links.yfilter)
	|| ydk::is_set(asic_stage_name.yfilter);
}

std::string Controller::Fabric::Oper::FsdbPla::Rack::AsicStages::Destination::Planes::Cards::Asics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "asics";
    ADD_KEY_TOKEN(asic_idx, "asic_idx");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::FsdbPla::Rack::AsicStages::Destination::Planes::Cards::Asics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (asic_idx.is_set || is_set(asic_idx.yfilter)) leaf_name_data.push_back(asic_idx.get_name_leafdata());
    if (asic_rsa.is_set || is_set(asic_rsa.yfilter)) leaf_name_data.push_back(asic_rsa.get_name_leafdata());
    if (reachability_mask.is_set || is_set(reachability_mask.yfilter)) leaf_name_data.push_back(reachability_mask.get_name_leafdata());
    if (linkup_mask.is_set || is_set(linkup_mask.yfilter)) leaf_name_data.push_back(linkup_mask.get_name_leafdata());
    if (all_reach_mask.is_set || is_set(all_reach_mask.yfilter)) leaf_name_data.push_back(all_reach_mask.get_name_leafdata());
    if (total_links.is_set || is_set(total_links.yfilter)) leaf_name_data.push_back(total_links.get_name_leafdata());
    if (total_up_links.is_set || is_set(total_up_links.yfilter)) leaf_name_data.push_back(total_up_links.get_name_leafdata());
    if (total_all_reach_links.is_set || is_set(total_all_reach_links.yfilter)) leaf_name_data.push_back(total_all_reach_links.get_name_leafdata());
    if (asic_stage_name.is_set || is_set(asic_stage_name.yfilter)) leaf_name_data.push_back(asic_stage_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::Fabric::Oper::FsdbPla::Rack::AsicStages::Destination::Planes::Cards::Asics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Fabric::Oper::FsdbPla::Rack::AsicStages::Destination::Planes::Cards::Asics::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Controller::Fabric::Oper::FsdbPla::Rack::AsicStages::Destination::Planes::Cards::Asics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "asic_idx")
    {
        asic_idx = value;
        asic_idx.value_namespace = name_space;
        asic_idx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "asic_RSA")
    {
        asic_rsa = value;
        asic_rsa.value_namespace = name_space;
        asic_rsa.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reachability_mask")
    {
        reachability_mask = value;
        reachability_mask.value_namespace = name_space;
        reachability_mask.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "linkup_mask")
    {
        linkup_mask = value;
        linkup_mask.value_namespace = name_space;
        linkup_mask.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "all_reach_mask")
    {
        all_reach_mask = value;
        all_reach_mask.value_namespace = name_space;
        all_reach_mask.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total_links")
    {
        total_links = value;
        total_links.value_namespace = name_space;
        total_links.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total_up_links")
    {
        total_up_links = value;
        total_up_links.value_namespace = name_space;
        total_up_links.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total_all_reach_links")
    {
        total_all_reach_links = value;
        total_all_reach_links.value_namespace = name_space;
        total_all_reach_links.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "asic_stage_name")
    {
        asic_stage_name = value;
        asic_stage_name.value_namespace = name_space;
        asic_stage_name.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Fabric::Oper::FsdbPla::Rack::AsicStages::Destination::Planes::Cards::Asics::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "asic_idx")
    {
        asic_idx.yfilter = yfilter;
    }
    if(value_path == "asic_RSA")
    {
        asic_rsa.yfilter = yfilter;
    }
    if(value_path == "reachability_mask")
    {
        reachability_mask.yfilter = yfilter;
    }
    if(value_path == "linkup_mask")
    {
        linkup_mask.yfilter = yfilter;
    }
    if(value_path == "all_reach_mask")
    {
        all_reach_mask.yfilter = yfilter;
    }
    if(value_path == "total_links")
    {
        total_links.yfilter = yfilter;
    }
    if(value_path == "total_up_links")
    {
        total_up_links.yfilter = yfilter;
    }
    if(value_path == "total_all_reach_links")
    {
        total_all_reach_links.yfilter = yfilter;
    }
    if(value_path == "asic_stage_name")
    {
        asic_stage_name.yfilter = yfilter;
    }
}

bool Controller::Fabric::Oper::FsdbPla::Rack::AsicStages::Destination::Planes::Cards::Asics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "asic_idx" || name == "asic_RSA" || name == "reachability_mask" || name == "linkup_mask" || name == "all_reach_mask" || name == "total_links" || name == "total_up_links" || name == "total_all_reach_links" || name == "asic_stage_name")
        return true;
    return false;
}

Controller::Fabric::Oper::FsdbSrvr::FsdbSrvr()
    :
    fsdb_server(std::make_shared<Controller::Fabric::Oper::FsdbSrvr::FsdbServer>())
{
    fsdb_server->parent = this;

    yang_name = "fsdb_srvr"; yang_parent_name = "oper"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::Fabric::Oper::FsdbSrvr::~FsdbSrvr()
{
}

bool Controller::Fabric::Oper::FsdbSrvr::has_data() const
{
    if (is_presence_container) return true;
    return (fsdb_server !=  nullptr && fsdb_server->has_data());
}

bool Controller::Fabric::Oper::FsdbSrvr::has_operation() const
{
    return is_set(yfilter)
	|| (fsdb_server !=  nullptr && fsdb_server->has_operation());
}

std::string Controller::Fabric::Oper::FsdbSrvr::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers-ncs55A1:controller/fabric/oper/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::Fabric::Oper::FsdbSrvr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fsdb_srvr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::FsdbSrvr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::Fabric::Oper::FsdbSrvr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "fsdb_server")
    {
        if(fsdb_server == nullptr)
        {
            fsdb_server = std::make_shared<Controller::Fabric::Oper::FsdbSrvr::FsdbServer>();
        }
        return fsdb_server;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Fabric::Oper::FsdbSrvr::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(fsdb_server != nullptr)
    {
        _children["fsdb_server"] = fsdb_server;
    }

    return _children;
}

void Controller::Fabric::Oper::FsdbSrvr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::Fabric::Oper::FsdbSrvr::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::Fabric::Oper::FsdbSrvr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fsdb_server")
        return true;
    return false;
}

Controller::Fabric::Oper::FsdbSrvr::FsdbServer::FsdbServer()
    :
    trace(this, {"buffer"})
{

    yang_name = "fsdb_server"; yang_parent_name = "fsdb_srvr"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::Fabric::Oper::FsdbSrvr::FsdbServer::~FsdbServer()
{
}

bool Controller::Fabric::Oper::FsdbSrvr::FsdbServer::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<trace.len(); index++)
    {
        if(trace[index]->has_data())
            return true;
    }
    return false;
}

bool Controller::Fabric::Oper::FsdbSrvr::FsdbServer::has_operation() const
{
    for (std::size_t index=0; index<trace.len(); index++)
    {
        if(trace[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Controller::Fabric::Oper::FsdbSrvr::FsdbServer::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers-ncs55A1:controller/fabric/oper/fsdb_srvr/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::Fabric::Oper::FsdbSrvr::FsdbServer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fsdb_server";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::FsdbSrvr::FsdbServer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::Fabric::Oper::FsdbSrvr::FsdbServer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "trace")
    {
        auto ent_ = std::make_shared<Controller::Fabric::Oper::FsdbSrvr::FsdbServer::Trace>();
        ent_->parent = this;
        trace.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Fabric::Oper::FsdbSrvr::FsdbServer::get_children() const
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

void Controller::Fabric::Oper::FsdbSrvr::FsdbServer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::Fabric::Oper::FsdbSrvr::FsdbServer::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::Fabric::Oper::FsdbSrvr::FsdbServer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "trace")
        return true;
    return false;
}

Controller::Fabric::Oper::FsdbSrvr::FsdbServer::Trace::Trace()
    :
    buffer{YType::str, "buffer"}
        ,
    location(this, {"location_name"})
{

    yang_name = "trace"; yang_parent_name = "fsdb_server"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::Fabric::Oper::FsdbSrvr::FsdbServer::Trace::~Trace()
{
}

bool Controller::Fabric::Oper::FsdbSrvr::FsdbServer::Trace::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_data())
            return true;
    }
    return buffer.is_set;
}

bool Controller::Fabric::Oper::FsdbSrvr::FsdbServer::Trace::has_operation() const
{
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(buffer.yfilter);
}

std::string Controller::Fabric::Oper::FsdbSrvr::FsdbServer::Trace::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers-ncs55A1:controller/fabric/oper/fsdb_srvr/fsdb_server/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::Fabric::Oper::FsdbSrvr::FsdbServer::Trace::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "trace";
    ADD_KEY_TOKEN(buffer, "buffer");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::FsdbSrvr::FsdbServer::Trace::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (buffer.is_set || is_set(buffer.yfilter)) leaf_name_data.push_back(buffer.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::Fabric::Oper::FsdbSrvr::FsdbServer::Trace::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "location")
    {
        auto ent_ = std::make_shared<Controller::Fabric::Oper::FsdbSrvr::FsdbServer::Trace::Location>();
        ent_->parent = this;
        location.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Fabric::Oper::FsdbSrvr::FsdbServer::Trace::get_children() const
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

void Controller::Fabric::Oper::FsdbSrvr::FsdbServer::Trace::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "buffer")
    {
        buffer = value;
        buffer.value_namespace = name_space;
        buffer.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Fabric::Oper::FsdbSrvr::FsdbServer::Trace::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "buffer")
    {
        buffer.yfilter = yfilter;
    }
}

bool Controller::Fabric::Oper::FsdbSrvr::FsdbServer::Trace::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location" || name == "buffer")
        return true;
    return false;
}

Controller::Fabric::Oper::FsdbSrvr::FsdbServer::Trace::Location::Location()
    :
    location_name{YType::str, "location_name"}
        ,
    all_options(this, {"option"})
{

    yang_name = "location"; yang_parent_name = "trace"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::Fabric::Oper::FsdbSrvr::FsdbServer::Trace::Location::~Location()
{
}

bool Controller::Fabric::Oper::FsdbSrvr::FsdbServer::Trace::Location::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<all_options.len(); index++)
    {
        if(all_options[index]->has_data())
            return true;
    }
    return location_name.is_set;
}

bool Controller::Fabric::Oper::FsdbSrvr::FsdbServer::Trace::Location::has_operation() const
{
    for (std::size_t index=0; index<all_options.len(); index++)
    {
        if(all_options[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(location_name.yfilter);
}

std::string Controller::Fabric::Oper::FsdbSrvr::FsdbServer::Trace::Location::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "location";
    ADD_KEY_TOKEN(location_name, "location_name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::FsdbSrvr::FsdbServer::Trace::Location::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (location_name.is_set || is_set(location_name.yfilter)) leaf_name_data.push_back(location_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::Fabric::Oper::FsdbSrvr::FsdbServer::Trace::Location::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "all-options")
    {
        auto ent_ = std::make_shared<Controller::Fabric::Oper::FsdbSrvr::FsdbServer::Trace::Location::AllOptions>();
        ent_->parent = this;
        all_options.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Fabric::Oper::FsdbSrvr::FsdbServer::Trace::Location::get_children() const
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

void Controller::Fabric::Oper::FsdbSrvr::FsdbServer::Trace::Location::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "location_name")
    {
        location_name = value;
        location_name.value_namespace = name_space;
        location_name.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Fabric::Oper::FsdbSrvr::FsdbServer::Trace::Location::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "location_name")
    {
        location_name.yfilter = yfilter;
    }
}

bool Controller::Fabric::Oper::FsdbSrvr::FsdbServer::Trace::Location::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "all-options" || name == "location_name")
        return true;
    return false;
}

Controller::Fabric::Oper::FsdbSrvr::FsdbServer::Trace::Location::AllOptions::AllOptions()
    :
    option{YType::str, "option"}
        ,
    trace_blocks(this, {})
{

    yang_name = "all-options"; yang_parent_name = "location"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::Fabric::Oper::FsdbSrvr::FsdbServer::Trace::Location::AllOptions::~AllOptions()
{
}

bool Controller::Fabric::Oper::FsdbSrvr::FsdbServer::Trace::Location::AllOptions::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<trace_blocks.len(); index++)
    {
        if(trace_blocks[index]->has_data())
            return true;
    }
    return option.is_set;
}

bool Controller::Fabric::Oper::FsdbSrvr::FsdbServer::Trace::Location::AllOptions::has_operation() const
{
    for (std::size_t index=0; index<trace_blocks.len(); index++)
    {
        if(trace_blocks[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(option.yfilter);
}

std::string Controller::Fabric::Oper::FsdbSrvr::FsdbServer::Trace::Location::AllOptions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "all-options";
    ADD_KEY_TOKEN(option, "option");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::FsdbSrvr::FsdbServer::Trace::Location::AllOptions::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (option.is_set || is_set(option.yfilter)) leaf_name_data.push_back(option.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::Fabric::Oper::FsdbSrvr::FsdbServer::Trace::Location::AllOptions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "trace-blocks")
    {
        auto ent_ = std::make_shared<Controller::Fabric::Oper::FsdbSrvr::FsdbServer::Trace::Location::AllOptions::TraceBlocks>();
        ent_->parent = this;
        trace_blocks.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Fabric::Oper::FsdbSrvr::FsdbServer::Trace::Location::AllOptions::get_children() const
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

void Controller::Fabric::Oper::FsdbSrvr::FsdbServer::Trace::Location::AllOptions::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "option")
    {
        option = value;
        option.value_namespace = name_space;
        option.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Fabric::Oper::FsdbSrvr::FsdbServer::Trace::Location::AllOptions::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "option")
    {
        option.yfilter = yfilter;
    }
}

bool Controller::Fabric::Oper::FsdbSrvr::FsdbServer::Trace::Location::AllOptions::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "trace-blocks" || name == "option")
        return true;
    return false;
}

Controller::Fabric::Oper::FsdbSrvr::FsdbServer::Trace::Location::AllOptions::TraceBlocks::TraceBlocks()
    :
    data{YType::str, "data"}
{

    yang_name = "trace-blocks"; yang_parent_name = "all-options"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::Fabric::Oper::FsdbSrvr::FsdbServer::Trace::Location::AllOptions::TraceBlocks::~TraceBlocks()
{
}

bool Controller::Fabric::Oper::FsdbSrvr::FsdbServer::Trace::Location::AllOptions::TraceBlocks::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set;
}

bool Controller::Fabric::Oper::FsdbSrvr::FsdbServer::Trace::Location::AllOptions::TraceBlocks::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter);
}

std::string Controller::Fabric::Oper::FsdbSrvr::FsdbServer::Trace::Location::AllOptions::TraceBlocks::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "trace-blocks";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::FsdbSrvr::FsdbServer::Trace::Location::AllOptions::TraceBlocks::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::Fabric::Oper::FsdbSrvr::FsdbServer::Trace::Location::AllOptions::TraceBlocks::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Fabric::Oper::FsdbSrvr::FsdbServer::Trace::Location::AllOptions::TraceBlocks::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Controller::Fabric::Oper::FsdbSrvr::FsdbServer::Trace::Location::AllOptions::TraceBlocks::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Fabric::Oper::FsdbSrvr::FsdbServer::Trace::Location::AllOptions::TraceBlocks::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
}

bool Controller::Fabric::Oper::FsdbSrvr::FsdbServer::Trace::Location::AllOptions::TraceBlocks::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data")
        return true;
    return false;
}

Controller::SfeOper::SfeOper()
    :
    sfe(std::make_shared<Controller::SfeOper::Sfe>())
    , sfe_trace(std::make_shared<Controller::SfeOper::SfeTrace>())
{
    sfe->parent = this;
    sfe_trace->parent = this;

    yang_name = "sfe_oper"; yang_parent_name = "controller"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::SfeOper::~SfeOper()
{
}

bool Controller::SfeOper::has_data() const
{
    if (is_presence_container) return true;
    return (sfe !=  nullptr && sfe->has_data())
	|| (sfe_trace !=  nullptr && sfe_trace->has_data());
}

bool Controller::SfeOper::has_operation() const
{
    return is_set(yfilter)
	|| (sfe !=  nullptr && sfe->has_operation())
	|| (sfe_trace !=  nullptr && sfe_trace->has_operation());
}

std::string Controller::SfeOper::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers-ncs55A1:controller/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::SfeOper::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sfe_oper";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::SfeOper::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::SfeOper::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sfe")
    {
        if(sfe == nullptr)
        {
            sfe = std::make_shared<Controller::SfeOper::Sfe>();
        }
        return sfe;
    }

    if(child_yang_name == "sfe_trace")
    {
        if(sfe_trace == nullptr)
        {
            sfe_trace = std::make_shared<Controller::SfeOper::SfeTrace>();
        }
        return sfe_trace;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::SfeOper::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(sfe != nullptr)
    {
        _children["sfe"] = sfe;
    }

    if(sfe_trace != nullptr)
    {
        _children["sfe_trace"] = sfe_trace;
    }

    return _children;
}

void Controller::SfeOper::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::SfeOper::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::SfeOper::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sfe" || name == "sfe_trace")
        return true;
    return false;
}

Controller::SfeOper::Sfe::Sfe()
    :
    driver(std::make_shared<Controller::SfeOper::Sfe::Driver>())
    , statistics(std::make_shared<Controller::SfeOper::Sfe::Statistics>())
    , link_info(std::make_shared<Controller::SfeOper::Sfe::LinkInfo>())
    , diagshell(std::make_shared<Controller::SfeOper::Sfe::Diagshell>())
    , register_(std::make_shared<Controller::SfeOper::Sfe::Register>())
    , dump_file(std::make_shared<Controller::SfeOper::Sfe::DumpFile>())
    , parse(std::make_shared<Controller::SfeOper::Sfe::Parse>())
{
    driver->parent = this;
    statistics->parent = this;
    link_info->parent = this;
    diagshell->parent = this;
    register_->parent = this;
    dump_file->parent = this;
    parse->parent = this;

    yang_name = "sfe"; yang_parent_name = "sfe_oper"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::SfeOper::Sfe::~Sfe()
{
}

bool Controller::SfeOper::Sfe::has_data() const
{
    if (is_presence_container) return true;
    return (driver !=  nullptr && driver->has_data())
	|| (statistics !=  nullptr && statistics->has_data())
	|| (link_info !=  nullptr && link_info->has_data())
	|| (diagshell !=  nullptr && diagshell->has_data())
	|| (register_ !=  nullptr && register_->has_data())
	|| (dump_file !=  nullptr && dump_file->has_data())
	|| (parse !=  nullptr && parse->has_data());
}

bool Controller::SfeOper::Sfe::has_operation() const
{
    return is_set(yfilter)
	|| (driver !=  nullptr && driver->has_operation())
	|| (statistics !=  nullptr && statistics->has_operation())
	|| (link_info !=  nullptr && link_info->has_operation())
	|| (diagshell !=  nullptr && diagshell->has_operation())
	|| (register_ !=  nullptr && register_->has_operation())
	|| (dump_file !=  nullptr && dump_file->has_operation())
	|| (parse !=  nullptr && parse->has_operation());
}

std::string Controller::SfeOper::Sfe::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers-ncs55A1:controller/sfe_oper/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::SfeOper::Sfe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sfe";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::SfeOper::Sfe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::SfeOper::Sfe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "driver")
    {
        if(driver == nullptr)
        {
            driver = std::make_shared<Controller::SfeOper::Sfe::Driver>();
        }
        return driver;
    }

    if(child_yang_name == "statistics")
    {
        if(statistics == nullptr)
        {
            statistics = std::make_shared<Controller::SfeOper::Sfe::Statistics>();
        }
        return statistics;
    }

    if(child_yang_name == "link-info")
    {
        if(link_info == nullptr)
        {
            link_info = std::make_shared<Controller::SfeOper::Sfe::LinkInfo>();
        }
        return link_info;
    }

    if(child_yang_name == "diagshell")
    {
        if(diagshell == nullptr)
        {
            diagshell = std::make_shared<Controller::SfeOper::Sfe::Diagshell>();
        }
        return diagshell;
    }

    if(child_yang_name == "register")
    {
        if(register_ == nullptr)
        {
            register_ = std::make_shared<Controller::SfeOper::Sfe::Register>();
        }
        return register_;
    }

    if(child_yang_name == "dump-file")
    {
        if(dump_file == nullptr)
        {
            dump_file = std::make_shared<Controller::SfeOper::Sfe::DumpFile>();
        }
        return dump_file;
    }

    if(child_yang_name == "parse")
    {
        if(parse == nullptr)
        {
            parse = std::make_shared<Controller::SfeOper::Sfe::Parse>();
        }
        return parse;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::SfeOper::Sfe::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(driver != nullptr)
    {
        _children["driver"] = driver;
    }

    if(statistics != nullptr)
    {
        _children["statistics"] = statistics;
    }

    if(link_info != nullptr)
    {
        _children["link-info"] = link_info;
    }

    if(diagshell != nullptr)
    {
        _children["diagshell"] = diagshell;
    }

    if(register_ != nullptr)
    {
        _children["register"] = register_;
    }

    if(dump_file != nullptr)
    {
        _children["dump-file"] = dump_file;
    }

    if(parse != nullptr)
    {
        _children["parse"] = parse;
    }

    return _children;
}

void Controller::SfeOper::Sfe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::SfeOper::Sfe::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::SfeOper::Sfe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "driver" || name == "statistics" || name == "link-info" || name == "diagshell" || name == "register" || name == "dump-file" || name == "parse")
        return true;
    return false;
}

Controller::SfeOper::Sfe::Driver::Driver()
    :
    location(this, {"loc_str"})
{

    yang_name = "driver"; yang_parent_name = "sfe"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::SfeOper::Sfe::Driver::~Driver()
{
}

bool Controller::SfeOper::Sfe::Driver::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_data())
            return true;
    }
    return false;
}

bool Controller::SfeOper::Sfe::Driver::has_operation() const
{
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Controller::SfeOper::Sfe::Driver::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers-ncs55A1:controller/sfe_oper/sfe/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::SfeOper::Sfe::Driver::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "driver";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::SfeOper::Sfe::Driver::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::SfeOper::Sfe::Driver::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "location")
    {
        auto ent_ = std::make_shared<Controller::SfeOper::Sfe::Driver::Location>();
        ent_->parent = this;
        location.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::SfeOper::Sfe::Driver::get_children() const
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

void Controller::SfeOper::Sfe::Driver::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::SfeOper::Sfe::Driver::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::SfeOper::Sfe::Driver::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location")
        return true;
    return false;
}

Controller::SfeOper::Sfe::Driver::Location::Location()
    :
    loc_str{YType::str, "loc_str"},
    description{YType::str, "description"}
        ,
    drvr_info(this, {"idx"})
{

    yang_name = "location"; yang_parent_name = "driver"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::SfeOper::Sfe::Driver::Location::~Location()
{
}

bool Controller::SfeOper::Sfe::Driver::Location::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<drvr_info.len(); index++)
    {
        if(drvr_info[index]->has_data())
            return true;
    }
    return loc_str.is_set
	|| description.is_set;
}

bool Controller::SfeOper::Sfe::Driver::Location::has_operation() const
{
    for (std::size_t index=0; index<drvr_info.len(); index++)
    {
        if(drvr_info[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(loc_str.yfilter)
	|| ydk::is_set(description.yfilter);
}

std::string Controller::SfeOper::Sfe::Driver::Location::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers-ncs55A1:controller/sfe_oper/sfe/driver/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::SfeOper::Sfe::Driver::Location::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "location";
    ADD_KEY_TOKEN(loc_str, "loc_str");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::SfeOper::Sfe::Driver::Location::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (loc_str.is_set || is_set(loc_str.yfilter)) leaf_name_data.push_back(loc_str.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::SfeOper::Sfe::Driver::Location::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "drvr_info")
    {
        auto ent_ = std::make_shared<Controller::SfeOper::Sfe::Driver::Location::DrvrInfo>();
        ent_->parent = this;
        drvr_info.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::SfeOper::Sfe::Driver::Location::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : drvr_info.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Controller::SfeOper::Sfe::Driver::Location::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Controller::SfeOper::Sfe::Driver::Location::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Controller::SfeOper::Sfe::Driver::Location::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "drvr_info" || name == "loc_str" || name == "description")
        return true;
    return false;
}

Controller::SfeOper::Sfe::Driver::Location::DrvrInfo::DrvrInfo()
    :
    idx{YType::int32, "idx"},
    drv_version{YType::uint32, "drv_version"},
    coeff_major_rev{YType::uint32, "coeff_major_rev"},
    coeff_minor_rev{YType::uint32, "coeff_minor_rev"},
    func_role{YType::str, "func_role"},
    issu_role{YType::str, "issu_role"},
    rack_name{YType::str, "rack_name"},
    rack_type{YType::str, "rack_type"},
    rack_num{YType::str, "rack_num"},
    ip_address{YType::str, "ip_address"},
    card_avail_mask{YType::uint32, "card_avail_mask"},
    asic_avail_mask{YType::uint64, "asic_avail_mask"},
    exp_asic_avail_mask{YType::uint64, "exp_asic_avail_mask"},
    ucmc_ratio{YType::uint32, "ucmc_ratio"},
    pm_conn_active{YType::boolean, "pm_conn_active"},
    platform_local_conn_active{YType::boolean, "platform_local_conn_active"},
    fsdb_conn_active{YType::boolean, "fsdb_conn_active"},
    fgid_conn_active{YType::boolean, "fgid_conn_active"},
    cm_conn_active{YType::boolean, "cm_conn_active"},
    ccc_conn_active{YType::boolean, "ccc_conn_active"},
    issu_mgr_conn_active{YType::boolean, "issu_mgr_conn_active"},
    peer_sfe_conn_active{YType::boolean, "peer_sfe_conn_active"},
    cxp_conn_active{YType::boolean, "cxp_conn_active"},
    pm_reg_active{YType::boolean, "pm_reg_active"},
    platform_local_reg_active{YType::boolean, "platform_local_reg_active"},
    fsdb_reg_active{YType::boolean, "fsdb_reg_active"},
    fgid_reg_active{YType::boolean, "fgid_reg_active"},
    cm_reg_active{YType::boolean, "cm_reg_active"},
    issu_mgr_reg_active{YType::boolean, "issu_mgr_reg_active"},
    peer_sfe_reg_active{YType::boolean, "peer_sfe_reg_active"},
    cxp_reg_active{YType::boolean, "cxp_reg_active"},
    num_pm_conn_reqs{YType::uint8, "num_pm_conn_reqs"},
    num_platform_local_conn_reqs{YType::uint8, "num_platform_local_conn_reqs"},
    num_fsdb_conn_reqs{YType::uint8, "num_fsdb_conn_reqs"},
    num_fgid_conn_reqs{YType::uint8, "num_fgid_conn_reqs"},
    num_fstats_conn_reqs{YType::uint8, "num_fstats_conn_reqs"},
    num_cm_conn_reqs{YType::uint8, "num_cm_conn_reqs"},
    num_ccc_conn_reqs{YType::uint8, "num_ccc_conn_reqs"},
    num_issu_mgr_conn_reqs{YType::uint8, "num_issu_mgr_conn_reqs"},
    num_peer_sfe_conn_reqs{YType::uint8, "num_peer_sfe_conn_reqs"},
    num_cxp_conn_reqs{YType::uint8, "num_cxp_conn_reqs"},
    is_gaspp_registered{YType::boolean, "is_gaspp_registered"},
    is_cih_registered{YType::boolean, "is_cih_registered"},
    startup_time{YType::str, "startup_time"}
        ,
    asic_list(this, {"asic_idx"})
{

    yang_name = "drvr_info"; yang_parent_name = "location"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::SfeOper::Sfe::Driver::Location::DrvrInfo::~DrvrInfo()
{
}

bool Controller::SfeOper::Sfe::Driver::Location::DrvrInfo::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<asic_list.len(); index++)
    {
        if(asic_list[index]->has_data())
            return true;
    }
    return idx.is_set
	|| drv_version.is_set
	|| coeff_major_rev.is_set
	|| coeff_minor_rev.is_set
	|| func_role.is_set
	|| issu_role.is_set
	|| rack_name.is_set
	|| rack_type.is_set
	|| rack_num.is_set
	|| ip_address.is_set
	|| card_avail_mask.is_set
	|| asic_avail_mask.is_set
	|| exp_asic_avail_mask.is_set
	|| ucmc_ratio.is_set
	|| pm_conn_active.is_set
	|| platform_local_conn_active.is_set
	|| fsdb_conn_active.is_set
	|| fgid_conn_active.is_set
	|| cm_conn_active.is_set
	|| ccc_conn_active.is_set
	|| issu_mgr_conn_active.is_set
	|| peer_sfe_conn_active.is_set
	|| cxp_conn_active.is_set
	|| pm_reg_active.is_set
	|| platform_local_reg_active.is_set
	|| fsdb_reg_active.is_set
	|| fgid_reg_active.is_set
	|| cm_reg_active.is_set
	|| issu_mgr_reg_active.is_set
	|| peer_sfe_reg_active.is_set
	|| cxp_reg_active.is_set
	|| num_pm_conn_reqs.is_set
	|| num_platform_local_conn_reqs.is_set
	|| num_fsdb_conn_reqs.is_set
	|| num_fgid_conn_reqs.is_set
	|| num_fstats_conn_reqs.is_set
	|| num_cm_conn_reqs.is_set
	|| num_ccc_conn_reqs.is_set
	|| num_issu_mgr_conn_reqs.is_set
	|| num_peer_sfe_conn_reqs.is_set
	|| num_cxp_conn_reqs.is_set
	|| is_gaspp_registered.is_set
	|| is_cih_registered.is_set
	|| startup_time.is_set;
}

bool Controller::SfeOper::Sfe::Driver::Location::DrvrInfo::has_operation() const
{
    for (std::size_t index=0; index<asic_list.len(); index++)
    {
        if(asic_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(idx.yfilter)
	|| ydk::is_set(drv_version.yfilter)
	|| ydk::is_set(coeff_major_rev.yfilter)
	|| ydk::is_set(coeff_minor_rev.yfilter)
	|| ydk::is_set(func_role.yfilter)
	|| ydk::is_set(issu_role.yfilter)
	|| ydk::is_set(rack_name.yfilter)
	|| ydk::is_set(rack_type.yfilter)
	|| ydk::is_set(rack_num.yfilter)
	|| ydk::is_set(ip_address.yfilter)
	|| ydk::is_set(card_avail_mask.yfilter)
	|| ydk::is_set(asic_avail_mask.yfilter)
	|| ydk::is_set(exp_asic_avail_mask.yfilter)
	|| ydk::is_set(ucmc_ratio.yfilter)
	|| ydk::is_set(pm_conn_active.yfilter)
	|| ydk::is_set(platform_local_conn_active.yfilter)
	|| ydk::is_set(fsdb_conn_active.yfilter)
	|| ydk::is_set(fgid_conn_active.yfilter)
	|| ydk::is_set(cm_conn_active.yfilter)
	|| ydk::is_set(ccc_conn_active.yfilter)
	|| ydk::is_set(issu_mgr_conn_active.yfilter)
	|| ydk::is_set(peer_sfe_conn_active.yfilter)
	|| ydk::is_set(cxp_conn_active.yfilter)
	|| ydk::is_set(pm_reg_active.yfilter)
	|| ydk::is_set(platform_local_reg_active.yfilter)
	|| ydk::is_set(fsdb_reg_active.yfilter)
	|| ydk::is_set(fgid_reg_active.yfilter)
	|| ydk::is_set(cm_reg_active.yfilter)
	|| ydk::is_set(issu_mgr_reg_active.yfilter)
	|| ydk::is_set(peer_sfe_reg_active.yfilter)
	|| ydk::is_set(cxp_reg_active.yfilter)
	|| ydk::is_set(num_pm_conn_reqs.yfilter)
	|| ydk::is_set(num_platform_local_conn_reqs.yfilter)
	|| ydk::is_set(num_fsdb_conn_reqs.yfilter)
	|| ydk::is_set(num_fgid_conn_reqs.yfilter)
	|| ydk::is_set(num_fstats_conn_reqs.yfilter)
	|| ydk::is_set(num_cm_conn_reqs.yfilter)
	|| ydk::is_set(num_ccc_conn_reqs.yfilter)
	|| ydk::is_set(num_issu_mgr_conn_reqs.yfilter)
	|| ydk::is_set(num_peer_sfe_conn_reqs.yfilter)
	|| ydk::is_set(num_cxp_conn_reqs.yfilter)
	|| ydk::is_set(is_gaspp_registered.yfilter)
	|| ydk::is_set(is_cih_registered.yfilter)
	|| ydk::is_set(startup_time.yfilter);
}

std::string Controller::SfeOper::Sfe::Driver::Location::DrvrInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "drvr_info";
    ADD_KEY_TOKEN(idx, "idx");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::SfeOper::Sfe::Driver::Location::DrvrInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (idx.is_set || is_set(idx.yfilter)) leaf_name_data.push_back(idx.get_name_leafdata());
    if (drv_version.is_set || is_set(drv_version.yfilter)) leaf_name_data.push_back(drv_version.get_name_leafdata());
    if (coeff_major_rev.is_set || is_set(coeff_major_rev.yfilter)) leaf_name_data.push_back(coeff_major_rev.get_name_leafdata());
    if (coeff_minor_rev.is_set || is_set(coeff_minor_rev.yfilter)) leaf_name_data.push_back(coeff_minor_rev.get_name_leafdata());
    if (func_role.is_set || is_set(func_role.yfilter)) leaf_name_data.push_back(func_role.get_name_leafdata());
    if (issu_role.is_set || is_set(issu_role.yfilter)) leaf_name_data.push_back(issu_role.get_name_leafdata());
    if (rack_name.is_set || is_set(rack_name.yfilter)) leaf_name_data.push_back(rack_name.get_name_leafdata());
    if (rack_type.is_set || is_set(rack_type.yfilter)) leaf_name_data.push_back(rack_type.get_name_leafdata());
    if (rack_num.is_set || is_set(rack_num.yfilter)) leaf_name_data.push_back(rack_num.get_name_leafdata());
    if (ip_address.is_set || is_set(ip_address.yfilter)) leaf_name_data.push_back(ip_address.get_name_leafdata());
    if (card_avail_mask.is_set || is_set(card_avail_mask.yfilter)) leaf_name_data.push_back(card_avail_mask.get_name_leafdata());
    if (asic_avail_mask.is_set || is_set(asic_avail_mask.yfilter)) leaf_name_data.push_back(asic_avail_mask.get_name_leafdata());
    if (exp_asic_avail_mask.is_set || is_set(exp_asic_avail_mask.yfilter)) leaf_name_data.push_back(exp_asic_avail_mask.get_name_leafdata());
    if (ucmc_ratio.is_set || is_set(ucmc_ratio.yfilter)) leaf_name_data.push_back(ucmc_ratio.get_name_leafdata());
    if (pm_conn_active.is_set || is_set(pm_conn_active.yfilter)) leaf_name_data.push_back(pm_conn_active.get_name_leafdata());
    if (platform_local_conn_active.is_set || is_set(platform_local_conn_active.yfilter)) leaf_name_data.push_back(platform_local_conn_active.get_name_leafdata());
    if (fsdb_conn_active.is_set || is_set(fsdb_conn_active.yfilter)) leaf_name_data.push_back(fsdb_conn_active.get_name_leafdata());
    if (fgid_conn_active.is_set || is_set(fgid_conn_active.yfilter)) leaf_name_data.push_back(fgid_conn_active.get_name_leafdata());
    if (cm_conn_active.is_set || is_set(cm_conn_active.yfilter)) leaf_name_data.push_back(cm_conn_active.get_name_leafdata());
    if (ccc_conn_active.is_set || is_set(ccc_conn_active.yfilter)) leaf_name_data.push_back(ccc_conn_active.get_name_leafdata());
    if (issu_mgr_conn_active.is_set || is_set(issu_mgr_conn_active.yfilter)) leaf_name_data.push_back(issu_mgr_conn_active.get_name_leafdata());
    if (peer_sfe_conn_active.is_set || is_set(peer_sfe_conn_active.yfilter)) leaf_name_data.push_back(peer_sfe_conn_active.get_name_leafdata());
    if (cxp_conn_active.is_set || is_set(cxp_conn_active.yfilter)) leaf_name_data.push_back(cxp_conn_active.get_name_leafdata());
    if (pm_reg_active.is_set || is_set(pm_reg_active.yfilter)) leaf_name_data.push_back(pm_reg_active.get_name_leafdata());
    if (platform_local_reg_active.is_set || is_set(platform_local_reg_active.yfilter)) leaf_name_data.push_back(platform_local_reg_active.get_name_leafdata());
    if (fsdb_reg_active.is_set || is_set(fsdb_reg_active.yfilter)) leaf_name_data.push_back(fsdb_reg_active.get_name_leafdata());
    if (fgid_reg_active.is_set || is_set(fgid_reg_active.yfilter)) leaf_name_data.push_back(fgid_reg_active.get_name_leafdata());
    if (cm_reg_active.is_set || is_set(cm_reg_active.yfilter)) leaf_name_data.push_back(cm_reg_active.get_name_leafdata());
    if (issu_mgr_reg_active.is_set || is_set(issu_mgr_reg_active.yfilter)) leaf_name_data.push_back(issu_mgr_reg_active.get_name_leafdata());
    if (peer_sfe_reg_active.is_set || is_set(peer_sfe_reg_active.yfilter)) leaf_name_data.push_back(peer_sfe_reg_active.get_name_leafdata());
    if (cxp_reg_active.is_set || is_set(cxp_reg_active.yfilter)) leaf_name_data.push_back(cxp_reg_active.get_name_leafdata());
    if (num_pm_conn_reqs.is_set || is_set(num_pm_conn_reqs.yfilter)) leaf_name_data.push_back(num_pm_conn_reqs.get_name_leafdata());
    if (num_platform_local_conn_reqs.is_set || is_set(num_platform_local_conn_reqs.yfilter)) leaf_name_data.push_back(num_platform_local_conn_reqs.get_name_leafdata());
    if (num_fsdb_conn_reqs.is_set || is_set(num_fsdb_conn_reqs.yfilter)) leaf_name_data.push_back(num_fsdb_conn_reqs.get_name_leafdata());
    if (num_fgid_conn_reqs.is_set || is_set(num_fgid_conn_reqs.yfilter)) leaf_name_data.push_back(num_fgid_conn_reqs.get_name_leafdata());
    if (num_fstats_conn_reqs.is_set || is_set(num_fstats_conn_reqs.yfilter)) leaf_name_data.push_back(num_fstats_conn_reqs.get_name_leafdata());
    if (num_cm_conn_reqs.is_set || is_set(num_cm_conn_reqs.yfilter)) leaf_name_data.push_back(num_cm_conn_reqs.get_name_leafdata());
    if (num_ccc_conn_reqs.is_set || is_set(num_ccc_conn_reqs.yfilter)) leaf_name_data.push_back(num_ccc_conn_reqs.get_name_leafdata());
    if (num_issu_mgr_conn_reqs.is_set || is_set(num_issu_mgr_conn_reqs.yfilter)) leaf_name_data.push_back(num_issu_mgr_conn_reqs.get_name_leafdata());
    if (num_peer_sfe_conn_reqs.is_set || is_set(num_peer_sfe_conn_reqs.yfilter)) leaf_name_data.push_back(num_peer_sfe_conn_reqs.get_name_leafdata());
    if (num_cxp_conn_reqs.is_set || is_set(num_cxp_conn_reqs.yfilter)) leaf_name_data.push_back(num_cxp_conn_reqs.get_name_leafdata());
    if (is_gaspp_registered.is_set || is_set(is_gaspp_registered.yfilter)) leaf_name_data.push_back(is_gaspp_registered.get_name_leafdata());
    if (is_cih_registered.is_set || is_set(is_cih_registered.yfilter)) leaf_name_data.push_back(is_cih_registered.get_name_leafdata());
    if (startup_time.is_set || is_set(startup_time.yfilter)) leaf_name_data.push_back(startup_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::SfeOper::Sfe::Driver::Location::DrvrInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "asic_list")
    {
        auto ent_ = std::make_shared<Controller::SfeOper::Sfe::Driver::Location::DrvrInfo::AsicList>();
        ent_->parent = this;
        asic_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::SfeOper::Sfe::Driver::Location::DrvrInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : asic_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Controller::SfeOper::Sfe::Driver::Location::DrvrInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "idx")
    {
        idx = value;
        idx.value_namespace = name_space;
        idx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "drv_version")
    {
        drv_version = value;
        drv_version.value_namespace = name_space;
        drv_version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "coeff_major_rev")
    {
        coeff_major_rev = value;
        coeff_major_rev.value_namespace = name_space;
        coeff_major_rev.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "coeff_minor_rev")
    {
        coeff_minor_rev = value;
        coeff_minor_rev.value_namespace = name_space;
        coeff_minor_rev.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "func_role")
    {
        func_role = value;
        func_role.value_namespace = name_space;
        func_role.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "issu_role")
    {
        issu_role = value;
        issu_role.value_namespace = name_space;
        issu_role.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rack_name")
    {
        rack_name = value;
        rack_name.value_namespace = name_space;
        rack_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rack_type")
    {
        rack_type = value;
        rack_type.value_namespace = name_space;
        rack_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rack_num")
    {
        rack_num = value;
        rack_num.value_namespace = name_space;
        rack_num.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ip_address")
    {
        ip_address = value;
        ip_address.value_namespace = name_space;
        ip_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "card_avail_mask")
    {
        card_avail_mask = value;
        card_avail_mask.value_namespace = name_space;
        card_avail_mask.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "asic_avail_mask")
    {
        asic_avail_mask = value;
        asic_avail_mask.value_namespace = name_space;
        asic_avail_mask.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "exp_asic_avail_mask")
    {
        exp_asic_avail_mask = value;
        exp_asic_avail_mask.value_namespace = name_space;
        exp_asic_avail_mask.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ucmc_ratio")
    {
        ucmc_ratio = value;
        ucmc_ratio.value_namespace = name_space;
        ucmc_ratio.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pm_conn_active")
    {
        pm_conn_active = value;
        pm_conn_active.value_namespace = name_space;
        pm_conn_active.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "platform_local_conn_active")
    {
        platform_local_conn_active = value;
        platform_local_conn_active.value_namespace = name_space;
        platform_local_conn_active.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fsdb_conn_active")
    {
        fsdb_conn_active = value;
        fsdb_conn_active.value_namespace = name_space;
        fsdb_conn_active.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fgid_conn_active")
    {
        fgid_conn_active = value;
        fgid_conn_active.value_namespace = name_space;
        fgid_conn_active.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cm_conn_active")
    {
        cm_conn_active = value;
        cm_conn_active.value_namespace = name_space;
        cm_conn_active.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ccc_conn_active")
    {
        ccc_conn_active = value;
        ccc_conn_active.value_namespace = name_space;
        ccc_conn_active.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "issu_mgr_conn_active")
    {
        issu_mgr_conn_active = value;
        issu_mgr_conn_active.value_namespace = name_space;
        issu_mgr_conn_active.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peer_sfe_conn_active")
    {
        peer_sfe_conn_active = value;
        peer_sfe_conn_active.value_namespace = name_space;
        peer_sfe_conn_active.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cxp_conn_active")
    {
        cxp_conn_active = value;
        cxp_conn_active.value_namespace = name_space;
        cxp_conn_active.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pm_reg_active")
    {
        pm_reg_active = value;
        pm_reg_active.value_namespace = name_space;
        pm_reg_active.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "platform_local_reg_active")
    {
        platform_local_reg_active = value;
        platform_local_reg_active.value_namespace = name_space;
        platform_local_reg_active.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fsdb_reg_active")
    {
        fsdb_reg_active = value;
        fsdb_reg_active.value_namespace = name_space;
        fsdb_reg_active.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fgid_reg_active")
    {
        fgid_reg_active = value;
        fgid_reg_active.value_namespace = name_space;
        fgid_reg_active.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cm_reg_active")
    {
        cm_reg_active = value;
        cm_reg_active.value_namespace = name_space;
        cm_reg_active.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "issu_mgr_reg_active")
    {
        issu_mgr_reg_active = value;
        issu_mgr_reg_active.value_namespace = name_space;
        issu_mgr_reg_active.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peer_sfe_reg_active")
    {
        peer_sfe_reg_active = value;
        peer_sfe_reg_active.value_namespace = name_space;
        peer_sfe_reg_active.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cxp_reg_active")
    {
        cxp_reg_active = value;
        cxp_reg_active.value_namespace = name_space;
        cxp_reg_active.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num_pm_conn_reqs")
    {
        num_pm_conn_reqs = value;
        num_pm_conn_reqs.value_namespace = name_space;
        num_pm_conn_reqs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num_platform_local_conn_reqs")
    {
        num_platform_local_conn_reqs = value;
        num_platform_local_conn_reqs.value_namespace = name_space;
        num_platform_local_conn_reqs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num_fsdb_conn_reqs")
    {
        num_fsdb_conn_reqs = value;
        num_fsdb_conn_reqs.value_namespace = name_space;
        num_fsdb_conn_reqs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num_fgid_conn_reqs")
    {
        num_fgid_conn_reqs = value;
        num_fgid_conn_reqs.value_namespace = name_space;
        num_fgid_conn_reqs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num_fstats_conn_reqs")
    {
        num_fstats_conn_reqs = value;
        num_fstats_conn_reqs.value_namespace = name_space;
        num_fstats_conn_reqs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num_cm_conn_reqs")
    {
        num_cm_conn_reqs = value;
        num_cm_conn_reqs.value_namespace = name_space;
        num_cm_conn_reqs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num_ccc_conn_reqs")
    {
        num_ccc_conn_reqs = value;
        num_ccc_conn_reqs.value_namespace = name_space;
        num_ccc_conn_reqs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num_issu_mgr_conn_reqs")
    {
        num_issu_mgr_conn_reqs = value;
        num_issu_mgr_conn_reqs.value_namespace = name_space;
        num_issu_mgr_conn_reqs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num_peer_sfe_conn_reqs")
    {
        num_peer_sfe_conn_reqs = value;
        num_peer_sfe_conn_reqs.value_namespace = name_space;
        num_peer_sfe_conn_reqs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num_cxp_conn_reqs")
    {
        num_cxp_conn_reqs = value;
        num_cxp_conn_reqs.value_namespace = name_space;
        num_cxp_conn_reqs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is_gaspp_registered")
    {
        is_gaspp_registered = value;
        is_gaspp_registered.value_namespace = name_space;
        is_gaspp_registered.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is_cih_registered")
    {
        is_cih_registered = value;
        is_cih_registered.value_namespace = name_space;
        is_cih_registered.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "startup_time")
    {
        startup_time = value;
        startup_time.value_namespace = name_space;
        startup_time.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::SfeOper::Sfe::Driver::Location::DrvrInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "idx")
    {
        idx.yfilter = yfilter;
    }
    if(value_path == "drv_version")
    {
        drv_version.yfilter = yfilter;
    }
    if(value_path == "coeff_major_rev")
    {
        coeff_major_rev.yfilter = yfilter;
    }
    if(value_path == "coeff_minor_rev")
    {
        coeff_minor_rev.yfilter = yfilter;
    }
    if(value_path == "func_role")
    {
        func_role.yfilter = yfilter;
    }
    if(value_path == "issu_role")
    {
        issu_role.yfilter = yfilter;
    }
    if(value_path == "rack_name")
    {
        rack_name.yfilter = yfilter;
    }
    if(value_path == "rack_type")
    {
        rack_type.yfilter = yfilter;
    }
    if(value_path == "rack_num")
    {
        rack_num.yfilter = yfilter;
    }
    if(value_path == "ip_address")
    {
        ip_address.yfilter = yfilter;
    }
    if(value_path == "card_avail_mask")
    {
        card_avail_mask.yfilter = yfilter;
    }
    if(value_path == "asic_avail_mask")
    {
        asic_avail_mask.yfilter = yfilter;
    }
    if(value_path == "exp_asic_avail_mask")
    {
        exp_asic_avail_mask.yfilter = yfilter;
    }
    if(value_path == "ucmc_ratio")
    {
        ucmc_ratio.yfilter = yfilter;
    }
    if(value_path == "pm_conn_active")
    {
        pm_conn_active.yfilter = yfilter;
    }
    if(value_path == "platform_local_conn_active")
    {
        platform_local_conn_active.yfilter = yfilter;
    }
    if(value_path == "fsdb_conn_active")
    {
        fsdb_conn_active.yfilter = yfilter;
    }
    if(value_path == "fgid_conn_active")
    {
        fgid_conn_active.yfilter = yfilter;
    }
    if(value_path == "cm_conn_active")
    {
        cm_conn_active.yfilter = yfilter;
    }
    if(value_path == "ccc_conn_active")
    {
        ccc_conn_active.yfilter = yfilter;
    }
    if(value_path == "issu_mgr_conn_active")
    {
        issu_mgr_conn_active.yfilter = yfilter;
    }
    if(value_path == "peer_sfe_conn_active")
    {
        peer_sfe_conn_active.yfilter = yfilter;
    }
    if(value_path == "cxp_conn_active")
    {
        cxp_conn_active.yfilter = yfilter;
    }
    if(value_path == "pm_reg_active")
    {
        pm_reg_active.yfilter = yfilter;
    }
    if(value_path == "platform_local_reg_active")
    {
        platform_local_reg_active.yfilter = yfilter;
    }
    if(value_path == "fsdb_reg_active")
    {
        fsdb_reg_active.yfilter = yfilter;
    }
    if(value_path == "fgid_reg_active")
    {
        fgid_reg_active.yfilter = yfilter;
    }
    if(value_path == "cm_reg_active")
    {
        cm_reg_active.yfilter = yfilter;
    }
    if(value_path == "issu_mgr_reg_active")
    {
        issu_mgr_reg_active.yfilter = yfilter;
    }
    if(value_path == "peer_sfe_reg_active")
    {
        peer_sfe_reg_active.yfilter = yfilter;
    }
    if(value_path == "cxp_reg_active")
    {
        cxp_reg_active.yfilter = yfilter;
    }
    if(value_path == "num_pm_conn_reqs")
    {
        num_pm_conn_reqs.yfilter = yfilter;
    }
    if(value_path == "num_platform_local_conn_reqs")
    {
        num_platform_local_conn_reqs.yfilter = yfilter;
    }
    if(value_path == "num_fsdb_conn_reqs")
    {
        num_fsdb_conn_reqs.yfilter = yfilter;
    }
    if(value_path == "num_fgid_conn_reqs")
    {
        num_fgid_conn_reqs.yfilter = yfilter;
    }
    if(value_path == "num_fstats_conn_reqs")
    {
        num_fstats_conn_reqs.yfilter = yfilter;
    }
    if(value_path == "num_cm_conn_reqs")
    {
        num_cm_conn_reqs.yfilter = yfilter;
    }
    if(value_path == "num_ccc_conn_reqs")
    {
        num_ccc_conn_reqs.yfilter = yfilter;
    }
    if(value_path == "num_issu_mgr_conn_reqs")
    {
        num_issu_mgr_conn_reqs.yfilter = yfilter;
    }
    if(value_path == "num_peer_sfe_conn_reqs")
    {
        num_peer_sfe_conn_reqs.yfilter = yfilter;
    }
    if(value_path == "num_cxp_conn_reqs")
    {
        num_cxp_conn_reqs.yfilter = yfilter;
    }
    if(value_path == "is_gaspp_registered")
    {
        is_gaspp_registered.yfilter = yfilter;
    }
    if(value_path == "is_cih_registered")
    {
        is_cih_registered.yfilter = yfilter;
    }
    if(value_path == "startup_time")
    {
        startup_time.yfilter = yfilter;
    }
}

bool Controller::SfeOper::Sfe::Driver::Location::DrvrInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "asic_list" || name == "idx" || name == "drv_version" || name == "coeff_major_rev" || name == "coeff_minor_rev" || name == "func_role" || name == "issu_role" || name == "rack_name" || name == "rack_type" || name == "rack_num" || name == "ip_address" || name == "card_avail_mask" || name == "asic_avail_mask" || name == "exp_asic_avail_mask" || name == "ucmc_ratio" || name == "pm_conn_active" || name == "platform_local_conn_active" || name == "fsdb_conn_active" || name == "fgid_conn_active" || name == "cm_conn_active" || name == "ccc_conn_active" || name == "issu_mgr_conn_active" || name == "peer_sfe_conn_active" || name == "cxp_conn_active" || name == "pm_reg_active" || name == "platform_local_reg_active" || name == "fsdb_reg_active" || name == "fgid_reg_active" || name == "cm_reg_active" || name == "issu_mgr_reg_active" || name == "peer_sfe_reg_active" || name == "cxp_reg_active" || name == "num_pm_conn_reqs" || name == "num_platform_local_conn_reqs" || name == "num_fsdb_conn_reqs" || name == "num_fgid_conn_reqs" || name == "num_fstats_conn_reqs" || name == "num_cm_conn_reqs" || name == "num_ccc_conn_reqs" || name == "num_issu_mgr_conn_reqs" || name == "num_peer_sfe_conn_reqs" || name == "num_cxp_conn_reqs" || name == "is_gaspp_registered" || name == "is_cih_registered" || name == "startup_time")
        return true;
    return false;
}

Controller::SfeOper::Sfe::Driver::Location::DrvrInfo::AsicList::AsicList()
    :
    asic_idx{YType::uint32, "asic_idx"},
    asic_instance{YType::str, "asic_instance"},
    card_present{YType::str, "card_present"},
    card_powered{YType::str, "card_powered"},
    hotplug_event{YType::uint32, "hotplug_event"},
    asic_type{YType::str, "asic_type"},
    asic_cardname{YType::str, "asic_cardname"},
    admin_state{YType::str, "admin-state"},
    oper_state{YType::str, "oper_state"},
    fab_plane{YType::str, "fab_plane"},
    fab_group{YType::str, "fab_group"},
    fgid_download{YType::str, "fgid_download"},
    asic_state{YType::str, "asic_state"},
    asic_disconnect_signal{YType::str, "asic_disconnect_signal"},
    last_init_cause{YType::str, "last_init_cause"},
    num_pon_resets{YType::uint32, "num_pon_resets"},
    num_hard_resets{YType::uint32, "num_hard_resets"}
{

    yang_name = "asic_list"; yang_parent_name = "drvr_info"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::SfeOper::Sfe::Driver::Location::DrvrInfo::AsicList::~AsicList()
{
}

bool Controller::SfeOper::Sfe::Driver::Location::DrvrInfo::AsicList::has_data() const
{
    if (is_presence_container) return true;
    return asic_idx.is_set
	|| asic_instance.is_set
	|| card_present.is_set
	|| card_powered.is_set
	|| hotplug_event.is_set
	|| asic_type.is_set
	|| asic_cardname.is_set
	|| admin_state.is_set
	|| oper_state.is_set
	|| fab_plane.is_set
	|| fab_group.is_set
	|| fgid_download.is_set
	|| asic_state.is_set
	|| asic_disconnect_signal.is_set
	|| last_init_cause.is_set
	|| num_pon_resets.is_set
	|| num_hard_resets.is_set;
}

bool Controller::SfeOper::Sfe::Driver::Location::DrvrInfo::AsicList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(asic_idx.yfilter)
	|| ydk::is_set(asic_instance.yfilter)
	|| ydk::is_set(card_present.yfilter)
	|| ydk::is_set(card_powered.yfilter)
	|| ydk::is_set(hotplug_event.yfilter)
	|| ydk::is_set(asic_type.yfilter)
	|| ydk::is_set(asic_cardname.yfilter)
	|| ydk::is_set(admin_state.yfilter)
	|| ydk::is_set(oper_state.yfilter)
	|| ydk::is_set(fab_plane.yfilter)
	|| ydk::is_set(fab_group.yfilter)
	|| ydk::is_set(fgid_download.yfilter)
	|| ydk::is_set(asic_state.yfilter)
	|| ydk::is_set(asic_disconnect_signal.yfilter)
	|| ydk::is_set(last_init_cause.yfilter)
	|| ydk::is_set(num_pon_resets.yfilter)
	|| ydk::is_set(num_hard_resets.yfilter);
}

std::string Controller::SfeOper::Sfe::Driver::Location::DrvrInfo::AsicList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "asic_list";
    ADD_KEY_TOKEN(asic_idx, "asic_idx");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::SfeOper::Sfe::Driver::Location::DrvrInfo::AsicList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (asic_idx.is_set || is_set(asic_idx.yfilter)) leaf_name_data.push_back(asic_idx.get_name_leafdata());
    if (asic_instance.is_set || is_set(asic_instance.yfilter)) leaf_name_data.push_back(asic_instance.get_name_leafdata());
    if (card_present.is_set || is_set(card_present.yfilter)) leaf_name_data.push_back(card_present.get_name_leafdata());
    if (card_powered.is_set || is_set(card_powered.yfilter)) leaf_name_data.push_back(card_powered.get_name_leafdata());
    if (hotplug_event.is_set || is_set(hotplug_event.yfilter)) leaf_name_data.push_back(hotplug_event.get_name_leafdata());
    if (asic_type.is_set || is_set(asic_type.yfilter)) leaf_name_data.push_back(asic_type.get_name_leafdata());
    if (asic_cardname.is_set || is_set(asic_cardname.yfilter)) leaf_name_data.push_back(asic_cardname.get_name_leafdata());
    if (admin_state.is_set || is_set(admin_state.yfilter)) leaf_name_data.push_back(admin_state.get_name_leafdata());
    if (oper_state.is_set || is_set(oper_state.yfilter)) leaf_name_data.push_back(oper_state.get_name_leafdata());
    if (fab_plane.is_set || is_set(fab_plane.yfilter)) leaf_name_data.push_back(fab_plane.get_name_leafdata());
    if (fab_group.is_set || is_set(fab_group.yfilter)) leaf_name_data.push_back(fab_group.get_name_leafdata());
    if (fgid_download.is_set || is_set(fgid_download.yfilter)) leaf_name_data.push_back(fgid_download.get_name_leafdata());
    if (asic_state.is_set || is_set(asic_state.yfilter)) leaf_name_data.push_back(asic_state.get_name_leafdata());
    if (asic_disconnect_signal.is_set || is_set(asic_disconnect_signal.yfilter)) leaf_name_data.push_back(asic_disconnect_signal.get_name_leafdata());
    if (last_init_cause.is_set || is_set(last_init_cause.yfilter)) leaf_name_data.push_back(last_init_cause.get_name_leafdata());
    if (num_pon_resets.is_set || is_set(num_pon_resets.yfilter)) leaf_name_data.push_back(num_pon_resets.get_name_leafdata());
    if (num_hard_resets.is_set || is_set(num_hard_resets.yfilter)) leaf_name_data.push_back(num_hard_resets.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::SfeOper::Sfe::Driver::Location::DrvrInfo::AsicList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::SfeOper::Sfe::Driver::Location::DrvrInfo::AsicList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Controller::SfeOper::Sfe::Driver::Location::DrvrInfo::AsicList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "asic_idx")
    {
        asic_idx = value;
        asic_idx.value_namespace = name_space;
        asic_idx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "asic_instance")
    {
        asic_instance = value;
        asic_instance.value_namespace = name_space;
        asic_instance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "card_present")
    {
        card_present = value;
        card_present.value_namespace = name_space;
        card_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "card_powered")
    {
        card_powered = value;
        card_powered.value_namespace = name_space;
        card_powered.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hotplug_event")
    {
        hotplug_event = value;
        hotplug_event.value_namespace = name_space;
        hotplug_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "asic_type")
    {
        asic_type = value;
        asic_type.value_namespace = name_space;
        asic_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "asic_cardname")
    {
        asic_cardname = value;
        asic_cardname.value_namespace = name_space;
        asic_cardname.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "fgid_download")
    {
        fgid_download = value;
        fgid_download.value_namespace = name_space;
        fgid_download.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "asic_state")
    {
        asic_state = value;
        asic_state.value_namespace = name_space;
        asic_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "asic_disconnect_signal")
    {
        asic_disconnect_signal = value;
        asic_disconnect_signal.value_namespace = name_space;
        asic_disconnect_signal.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last_init_cause")
    {
        last_init_cause = value;
        last_init_cause.value_namespace = name_space;
        last_init_cause.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num_pon_resets")
    {
        num_pon_resets = value;
        num_pon_resets.value_namespace = name_space;
        num_pon_resets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num_hard_resets")
    {
        num_hard_resets = value;
        num_hard_resets.value_namespace = name_space;
        num_hard_resets.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::SfeOper::Sfe::Driver::Location::DrvrInfo::AsicList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "asic_idx")
    {
        asic_idx.yfilter = yfilter;
    }
    if(value_path == "asic_instance")
    {
        asic_instance.yfilter = yfilter;
    }
    if(value_path == "card_present")
    {
        card_present.yfilter = yfilter;
    }
    if(value_path == "card_powered")
    {
        card_powered.yfilter = yfilter;
    }
    if(value_path == "hotplug_event")
    {
        hotplug_event.yfilter = yfilter;
    }
    if(value_path == "asic_type")
    {
        asic_type.yfilter = yfilter;
    }
    if(value_path == "asic_cardname")
    {
        asic_cardname.yfilter = yfilter;
    }
    if(value_path == "admin-state")
    {
        admin_state.yfilter = yfilter;
    }
    if(value_path == "oper_state")
    {
        oper_state.yfilter = yfilter;
    }
    if(value_path == "fab_plane")
    {
        fab_plane.yfilter = yfilter;
    }
    if(value_path == "fab_group")
    {
        fab_group.yfilter = yfilter;
    }
    if(value_path == "fgid_download")
    {
        fgid_download.yfilter = yfilter;
    }
    if(value_path == "asic_state")
    {
        asic_state.yfilter = yfilter;
    }
    if(value_path == "asic_disconnect_signal")
    {
        asic_disconnect_signal.yfilter = yfilter;
    }
    if(value_path == "last_init_cause")
    {
        last_init_cause.yfilter = yfilter;
    }
    if(value_path == "num_pon_resets")
    {
        num_pon_resets.yfilter = yfilter;
    }
    if(value_path == "num_hard_resets")
    {
        num_hard_resets.yfilter = yfilter;
    }
}

bool Controller::SfeOper::Sfe::Driver::Location::DrvrInfo::AsicList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "asic_idx" || name == "asic_instance" || name == "card_present" || name == "card_powered" || name == "hotplug_event" || name == "asic_type" || name == "asic_cardname" || name == "admin-state" || name == "oper_state" || name == "fab_plane" || name == "fab_group" || name == "fgid_download" || name == "asic_state" || name == "asic_disconnect_signal" || name == "last_init_cause" || name == "num_pon_resets" || name == "num_hard_resets")
        return true;
    return false;
}

Controller::SfeOper::Sfe::Statistics::Statistics()
    :
    location(this, {"loc_str"})
{

    yang_name = "statistics"; yang_parent_name = "sfe"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::SfeOper::Sfe::Statistics::~Statistics()
{
}

bool Controller::SfeOper::Sfe::Statistics::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_data())
            return true;
    }
    return false;
}

bool Controller::SfeOper::Sfe::Statistics::has_operation() const
{
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Controller::SfeOper::Sfe::Statistics::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers-ncs55A1:controller/sfe_oper/sfe/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::SfeOper::Sfe::Statistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::SfeOper::Sfe::Statistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::SfeOper::Sfe::Statistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "location")
    {
        auto ent_ = std::make_shared<Controller::SfeOper::Sfe::Statistics::Location>();
        ent_->parent = this;
        location.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::SfeOper::Sfe::Statistics::get_children() const
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

void Controller::SfeOper::Sfe::Statistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::SfeOper::Sfe::Statistics::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::SfeOper::Sfe::Statistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location")
        return true;
    return false;
}

Controller::SfeOper::Sfe::Statistics::Location::Location()
    :
    loc_str{YType::str, "loc_str"},
    description{YType::str, "description"}
        ,
    asic_types(this, {"asicname"})
{

    yang_name = "location"; yang_parent_name = "statistics"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::SfeOper::Sfe::Statistics::Location::~Location()
{
}

bool Controller::SfeOper::Sfe::Statistics::Location::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<asic_types.len(); index++)
    {
        if(asic_types[index]->has_data())
            return true;
    }
    return loc_str.is_set
	|| description.is_set;
}

bool Controller::SfeOper::Sfe::Statistics::Location::has_operation() const
{
    for (std::size_t index=0; index<asic_types.len(); index++)
    {
        if(asic_types[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(loc_str.yfilter)
	|| ydk::is_set(description.yfilter);
}

std::string Controller::SfeOper::Sfe::Statistics::Location::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers-ncs55A1:controller/sfe_oper/sfe/statistics/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::SfeOper::Sfe::Statistics::Location::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "location";
    ADD_KEY_TOKEN(loc_str, "loc_str");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::SfeOper::Sfe::Statistics::Location::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (loc_str.is_set || is_set(loc_str.yfilter)) leaf_name_data.push_back(loc_str.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::SfeOper::Sfe::Statistics::Location::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "asic_types")
    {
        auto ent_ = std::make_shared<Controller::SfeOper::Sfe::Statistics::Location::AsicTypes>();
        ent_->parent = this;
        asic_types.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::SfeOper::Sfe::Statistics::Location::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : asic_types.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Controller::SfeOper::Sfe::Statistics::Location::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Controller::SfeOper::Sfe::Statistics::Location::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Controller::SfeOper::Sfe::Statistics::Location::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "asic_types" || name == "loc_str" || name == "description")
        return true;
    return false;
}

Controller::SfeOper::Sfe::Statistics::Location::AsicTypes::AsicTypes()
    :
    asicname{YType::str, "asicname"}
        ,
    block(this, {"blockname"})
{

    yang_name = "asic_types"; yang_parent_name = "location"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::SfeOper::Sfe::Statistics::Location::AsicTypes::~AsicTypes()
{
}

bool Controller::SfeOper::Sfe::Statistics::Location::AsicTypes::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<block.len(); index++)
    {
        if(block[index]->has_data())
            return true;
    }
    return asicname.is_set;
}

bool Controller::SfeOper::Sfe::Statistics::Location::AsicTypes::has_operation() const
{
    for (std::size_t index=0; index<block.len(); index++)
    {
        if(block[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(asicname.yfilter);
}

std::string Controller::SfeOper::Sfe::Statistics::Location::AsicTypes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "asic_types";
    ADD_KEY_TOKEN(asicname, "asicname");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::SfeOper::Sfe::Statistics::Location::AsicTypes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (asicname.is_set || is_set(asicname.yfilter)) leaf_name_data.push_back(asicname.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::SfeOper::Sfe::Statistics::Location::AsicTypes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "block")
    {
        auto ent_ = std::make_shared<Controller::SfeOper::Sfe::Statistics::Location::AsicTypes::Block>();
        ent_->parent = this;
        block.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::SfeOper::Sfe::Statistics::Location::AsicTypes::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : block.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Controller::SfeOper::Sfe::Statistics::Location::AsicTypes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "asicname")
    {
        asicname = value;
        asicname.value_namespace = name_space;
        asicname.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::SfeOper::Sfe::Statistics::Location::AsicTypes::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "asicname")
    {
        asicname.yfilter = yfilter;
    }
}

bool Controller::SfeOper::Sfe::Statistics::Location::AsicTypes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "block" || name == "asicname")
        return true;
    return false;
}

Controller::SfeOper::Sfe::Statistics::Location::AsicTypes::Block::Block()
    :
    blockname{YType::str, "blockname"}
        ,
    instance(this, {"instance_id"})
{

    yang_name = "block"; yang_parent_name = "asic_types"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::SfeOper::Sfe::Statistics::Location::AsicTypes::Block::~Block()
{
}

bool Controller::SfeOper::Sfe::Statistics::Location::AsicTypes::Block::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<instance.len(); index++)
    {
        if(instance[index]->has_data())
            return true;
    }
    return blockname.is_set;
}

bool Controller::SfeOper::Sfe::Statistics::Location::AsicTypes::Block::has_operation() const
{
    for (std::size_t index=0; index<instance.len(); index++)
    {
        if(instance[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(blockname.yfilter);
}

std::string Controller::SfeOper::Sfe::Statistics::Location::AsicTypes::Block::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "block";
    ADD_KEY_TOKEN(blockname, "blockname");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::SfeOper::Sfe::Statistics::Location::AsicTypes::Block::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (blockname.is_set || is_set(blockname.yfilter)) leaf_name_data.push_back(blockname.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::SfeOper::Sfe::Statistics::Location::AsicTypes::Block::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "instance")
    {
        auto ent_ = std::make_shared<Controller::SfeOper::Sfe::Statistics::Location::AsicTypes::Block::Instance>();
        ent_->parent = this;
        instance.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::SfeOper::Sfe::Statistics::Location::AsicTypes::Block::get_children() const
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

void Controller::SfeOper::Sfe::Statistics::Location::AsicTypes::Block::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "blockname")
    {
        blockname = value;
        blockname.value_namespace = name_space;
        blockname.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::SfeOper::Sfe::Statistics::Location::AsicTypes::Block::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "blockname")
    {
        blockname.yfilter = yfilter;
    }
}

bool Controller::SfeOper::Sfe::Statistics::Location::AsicTypes::Block::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance" || name == "blockname")
        return true;
    return false;
}

Controller::SfeOper::Sfe::Statistics::Location::AsicTypes::Block::Instance::Instance()
    :
    instance_id{YType::str, "instance-id"},
    stats_output{YType::str, "stats_output"}
{

    yang_name = "instance"; yang_parent_name = "block"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::SfeOper::Sfe::Statistics::Location::AsicTypes::Block::Instance::~Instance()
{
}

bool Controller::SfeOper::Sfe::Statistics::Location::AsicTypes::Block::Instance::has_data() const
{
    if (is_presence_container) return true;
    return instance_id.is_set
	|| stats_output.is_set;
}

bool Controller::SfeOper::Sfe::Statistics::Location::AsicTypes::Block::Instance::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(instance_id.yfilter)
	|| ydk::is_set(stats_output.yfilter);
}

std::string Controller::SfeOper::Sfe::Statistics::Location::AsicTypes::Block::Instance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "instance";
    ADD_KEY_TOKEN(instance_id, "instance-id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::SfeOper::Sfe::Statistics::Location::AsicTypes::Block::Instance::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_id.is_set || is_set(instance_id.yfilter)) leaf_name_data.push_back(instance_id.get_name_leafdata());
    if (stats_output.is_set || is_set(stats_output.yfilter)) leaf_name_data.push_back(stats_output.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::SfeOper::Sfe::Statistics::Location::AsicTypes::Block::Instance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::SfeOper::Sfe::Statistics::Location::AsicTypes::Block::Instance::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Controller::SfeOper::Sfe::Statistics::Location::AsicTypes::Block::Instance::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "instance-id")
    {
        instance_id = value;
        instance_id.value_namespace = name_space;
        instance_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stats_output")
    {
        stats_output = value;
        stats_output.value_namespace = name_space;
        stats_output.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::SfeOper::Sfe::Statistics::Location::AsicTypes::Block::Instance::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "instance-id")
    {
        instance_id.yfilter = yfilter;
    }
    if(value_path == "stats_output")
    {
        stats_output.yfilter = yfilter;
    }
}

bool Controller::SfeOper::Sfe::Statistics::Location::AsicTypes::Block::Instance::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance-id" || name == "stats_output")
        return true;
    return false;
}

Controller::SfeOper::Sfe::LinkInfo::LinkInfo()
    :
    location(this, {"loc_str"})
{

    yang_name = "link-info"; yang_parent_name = "sfe"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::SfeOper::Sfe::LinkInfo::~LinkInfo()
{
}

bool Controller::SfeOper::Sfe::LinkInfo::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_data())
            return true;
    }
    return false;
}

bool Controller::SfeOper::Sfe::LinkInfo::has_operation() const
{
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Controller::SfeOper::Sfe::LinkInfo::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers-ncs55A1:controller/sfe_oper/sfe/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::SfeOper::Sfe::LinkInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "link-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::SfeOper::Sfe::LinkInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::SfeOper::Sfe::LinkInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "location")
    {
        auto ent_ = std::make_shared<Controller::SfeOper::Sfe::LinkInfo::Location>();
        ent_->parent = this;
        location.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::SfeOper::Sfe::LinkInfo::get_children() const
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

void Controller::SfeOper::Sfe::LinkInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::SfeOper::Sfe::LinkInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::SfeOper::Sfe::LinkInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location")
        return true;
    return false;
}

Controller::SfeOper::Sfe::LinkInfo::Location::Location()
    :
    loc_str{YType::str, "loc_str"},
    description{YType::str, "description"}
        ,
    rx(this, {"start", "end"})
    , tx(this, {"start", "end"})
{

    yang_name = "location"; yang_parent_name = "link-info"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::SfeOper::Sfe::LinkInfo::Location::~Location()
{
}

bool Controller::SfeOper::Sfe::LinkInfo::Location::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rx.len(); index++)
    {
        if(rx[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<tx.len(); index++)
    {
        if(tx[index]->has_data())
            return true;
    }
    return loc_str.is_set
	|| description.is_set;
}

bool Controller::SfeOper::Sfe::LinkInfo::Location::has_operation() const
{
    for (std::size_t index=0; index<rx.len(); index++)
    {
        if(rx[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<tx.len(); index++)
    {
        if(tx[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(loc_str.yfilter)
	|| ydk::is_set(description.yfilter);
}

std::string Controller::SfeOper::Sfe::LinkInfo::Location::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers-ncs55A1:controller/sfe_oper/sfe/link-info/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::SfeOper::Sfe::LinkInfo::Location::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "location";
    ADD_KEY_TOKEN(loc_str, "loc_str");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::SfeOper::Sfe::LinkInfo::Location::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (loc_str.is_set || is_set(loc_str.yfilter)) leaf_name_data.push_back(loc_str.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::SfeOper::Sfe::LinkInfo::Location::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rx")
    {
        auto ent_ = std::make_shared<Controller::SfeOper::Sfe::LinkInfo::Location::Rx>();
        ent_->parent = this;
        rx.append(ent_);
        return ent_;
    }

    if(child_yang_name == "tx")
    {
        auto ent_ = std::make_shared<Controller::SfeOper::Sfe::LinkInfo::Location::Tx>();
        ent_->parent = this;
        tx.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::SfeOper::Sfe::LinkInfo::Location::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : rx.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : tx.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Controller::SfeOper::Sfe::LinkInfo::Location::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Controller::SfeOper::Sfe::LinkInfo::Location::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Controller::SfeOper::Sfe::LinkInfo::Location::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rx" || name == "tx" || name == "loc_str" || name == "description")
        return true;
    return false;
}

Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Rx()
    :
    start{YType::int32, "start"},
    end{YType::int32, "end"}
        ,
    detail(std::make_shared<Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Detail>())
    , topo(std::make_shared<Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Topo>())
    , flap(std::make_shared<Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Flap>())
    , stats(std::make_shared<Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Stats>())
{
    detail->parent = this;
    topo->parent = this;
    flap->parent = this;
    stats->parent = this;

    yang_name = "rx"; yang_parent_name = "location"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::SfeOper::Sfe::LinkInfo::Location::Rx::~Rx()
{
}

bool Controller::SfeOper::Sfe::LinkInfo::Location::Rx::has_data() const
{
    if (is_presence_container) return true;
    return start.is_set
	|| end.is_set
	|| (detail !=  nullptr && detail->has_data())
	|| (topo !=  nullptr && topo->has_data())
	|| (flap !=  nullptr && flap->has_data())
	|| (stats !=  nullptr && stats->has_data());
}

bool Controller::SfeOper::Sfe::LinkInfo::Location::Rx::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(start.yfilter)
	|| ydk::is_set(end.yfilter)
	|| (detail !=  nullptr && detail->has_operation())
	|| (topo !=  nullptr && topo->has_operation())
	|| (flap !=  nullptr && flap->has_operation())
	|| (stats !=  nullptr && stats->has_operation());
}

std::string Controller::SfeOper::Sfe::LinkInfo::Location::Rx::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rx";
    ADD_KEY_TOKEN(start, "start");
    ADD_KEY_TOKEN(end, "end");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::SfeOper::Sfe::LinkInfo::Location::Rx::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (start.is_set || is_set(start.yfilter)) leaf_name_data.push_back(start.get_name_leafdata());
    if (end.is_set || is_set(end.yfilter)) leaf_name_data.push_back(end.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::SfeOper::Sfe::LinkInfo::Location::Rx::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "detail")
    {
        if(detail == nullptr)
        {
            detail = std::make_shared<Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Detail>();
        }
        return detail;
    }

    if(child_yang_name == "topo")
    {
        if(topo == nullptr)
        {
            topo = std::make_shared<Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Topo>();
        }
        return topo;
    }

    if(child_yang_name == "flap")
    {
        if(flap == nullptr)
        {
            flap = std::make_shared<Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Flap>();
        }
        return flap;
    }

    if(child_yang_name == "stats")
    {
        if(stats == nullptr)
        {
            stats = std::make_shared<Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Stats>();
        }
        return stats;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::SfeOper::Sfe::LinkInfo::Location::Rx::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(detail != nullptr)
    {
        _children["detail"] = detail;
    }

    if(topo != nullptr)
    {
        _children["topo"] = topo;
    }

    if(flap != nullptr)
    {
        _children["flap"] = flap;
    }

    if(stats != nullptr)
    {
        _children["stats"] = stats;
    }

    return _children;
}

void Controller::SfeOper::Sfe::LinkInfo::Location::Rx::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Controller::SfeOper::Sfe::LinkInfo::Location::Rx::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Controller::SfeOper::Sfe::LinkInfo::Location::Rx::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "detail" || name == "topo" || name == "flap" || name == "stats" || name == "start" || name == "end")
        return true;
    return false;
}

Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Detail::Detail()
    :
    topo(std::make_shared<Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Detail::Topo>())
    , flap(std::make_shared<Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Detail::Flap>())
{
    topo->parent = this;
    flap->parent = this;

    yang_name = "detail"; yang_parent_name = "rx"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Detail::~Detail()
{
}

bool Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Detail::has_data() const
{
    if (is_presence_container) return true;
    return (topo !=  nullptr && topo->has_data())
	|| (flap !=  nullptr && flap->has_data());
}

bool Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Detail::has_operation() const
{
    return is_set(yfilter)
	|| (topo !=  nullptr && topo->has_operation())
	|| (flap !=  nullptr && flap->has_operation());
}

std::string Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Detail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "detail";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Detail::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Detail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "topo")
    {
        if(topo == nullptr)
        {
            topo = std::make_shared<Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Detail::Topo>();
        }
        return topo;
    }

    if(child_yang_name == "flap")
    {
        if(flap == nullptr)
        {
            flap = std::make_shared<Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Detail::Flap>();
        }
        return flap;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Detail::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(topo != nullptr)
    {
        _children["topo"] = topo;
    }

    if(flap != nullptr)
    {
        _children["flap"] = flap;
    }

    return _children;
}

void Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Detail::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Detail::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Detail::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "topo" || name == "flap")
        return true;
    return false;
}

Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Detail::Topo::Topo()
    :
    instance(this, {"instance_id"})
{

    yang_name = "topo"; yang_parent_name = "detail"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Detail::Topo::~Topo()
{
}

bool Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Detail::Topo::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<instance.len(); index++)
    {
        if(instance[index]->has_data())
            return true;
    }
    return false;
}

bool Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Detail::Topo::has_operation() const
{
    for (std::size_t index=0; index<instance.len(); index++)
    {
        if(instance[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Detail::Topo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "topo";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Detail::Topo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Detail::Topo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "instance")
    {
        auto ent_ = std::make_shared<Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Detail::Topo::Instance>();
        ent_->parent = this;
        instance.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Detail::Topo::get_children() const
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

void Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Detail::Topo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Detail::Topo::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Detail::Topo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance")
        return true;
    return false;
}

Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Detail::Topo::Instance::Instance()
    :
    instance_id{YType::str, "instance-id"},
    nodeid_str{YType::str, "nodeid_str"},
    is_show{YType::boolean, "is_show"}
        ,
    link_idx_list(this, {"link_idx"})
{

    yang_name = "instance"; yang_parent_name = "topo"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Detail::Topo::Instance::~Instance()
{
}

bool Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Detail::Topo::Instance::has_data() const
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

bool Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Detail::Topo::Instance::has_operation() const
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

std::string Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Detail::Topo::Instance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "instance";
    ADD_KEY_TOKEN(instance_id, "instance-id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Detail::Topo::Instance::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_id.is_set || is_set(instance_id.yfilter)) leaf_name_data.push_back(instance_id.get_name_leafdata());
    if (nodeid_str.is_set || is_set(nodeid_str.yfilter)) leaf_name_data.push_back(nodeid_str.get_name_leafdata());
    if (is_show.is_set || is_set(is_show.yfilter)) leaf_name_data.push_back(is_show.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Detail::Topo::Instance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "link_idx_list")
    {
        auto ent_ = std::make_shared<Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Detail::Topo::Instance::LinkIdxList>();
        ent_->parent = this;
        link_idx_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Detail::Topo::Instance::get_children() const
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

void Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Detail::Topo::Instance::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Detail::Topo::Instance::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Detail::Topo::Instance::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "link_idx_list" || name == "instance-id" || name == "nodeid_str" || name == "is_show")
        return true;
    return false;
}

Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Detail::Topo::Instance::LinkIdxList::LinkIdxList()
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

Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Detail::Topo::Instance::LinkIdxList::~LinkIdxList()
{
}

bool Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Detail::Topo::Instance::LinkIdxList::has_data() const
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

bool Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Detail::Topo::Instance::LinkIdxList::has_operation() const
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

std::string Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Detail::Topo::Instance::LinkIdxList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "link_idx_list";
    ADD_KEY_TOKEN(link_idx, "link_idx");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Detail::Topo::Instance::LinkIdxList::get_name_leaf_data() const
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

std::shared_ptr<ydk::Entity> Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Detail::Topo::Instance::LinkIdxList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "history")
    {
        auto ent_ = std::make_shared<Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Detail::Topo::Instance::LinkIdxList::History>();
        ent_->parent = this;
        history.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Detail::Topo::Instance::LinkIdxList::get_children() const
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

void Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Detail::Topo::Instance::LinkIdxList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Detail::Topo::Instance::LinkIdxList::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Detail::Topo::Instance::LinkIdxList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "history" || name == "link_idx" || name == "link_id_str" || name == "phy_link" || name == "speed" || name == "stage" || name == "fab_plane" || name == "fab_group" || name == "flap_cnt" || name == "num_admin_shuts" || name == "admin-state" || name == "oper_state" || name == "flags" || name == "far_end_link_fsdb" || name == "far_end_link_hw" || name == "coeff1" || name == "coeff2" || name == "fsm_state" || name == "TX_Control_cells_counter" || name == "TX_Data_cell_counter" || name == "TX_Data_byte_counter" || name == "TX_BEC_retransmit" || name == "TX_Asyn_fifo_rate" || name == "RX_Control_cells_counter" || name == "RX_Data_cell_counter" || name == "RX_Data_byte_counter" || name == "RX_BEC_retransmit" || name == "RX_Asyn_fifo_rate" || name == "RX_CRC_errors_counter" || name == "RX_LFEC_FEC_correctable_error" || name == "RX_LFEC_FEC_uncorrectable_errors" || name == "RX_dropped_retransmitted_control")
        return true;
    return false;
}

Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Detail::Topo::Instance::LinkIdxList::History::History()
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

Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Detail::Topo::Instance::LinkIdxList::History::~History()
{
}

bool Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Detail::Topo::Instance::LinkIdxList::History::has_data() const
{
    if (is_presence_container) return true;
    return history_idx.is_set
	|| time_stamp.is_set
	|| admin_state.is_set
	|| oper_state.is_set
	|| error_state.is_set
	|| down_reasons.is_set;
}

bool Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Detail::Topo::Instance::LinkIdxList::History::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(history_idx.yfilter)
	|| ydk::is_set(time_stamp.yfilter)
	|| ydk::is_set(admin_state.yfilter)
	|| ydk::is_set(oper_state.yfilter)
	|| ydk::is_set(error_state.yfilter)
	|| ydk::is_set(down_reasons.yfilter);
}

std::string Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Detail::Topo::Instance::LinkIdxList::History::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "history";
    ADD_KEY_TOKEN(history_idx, "history_idx");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Detail::Topo::Instance::LinkIdxList::History::get_name_leaf_data() const
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

std::shared_ptr<ydk::Entity> Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Detail::Topo::Instance::LinkIdxList::History::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Detail::Topo::Instance::LinkIdxList::History::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Detail::Topo::Instance::LinkIdxList::History::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Detail::Topo::Instance::LinkIdxList::History::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Detail::Topo::Instance::LinkIdxList::History::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "history_idx" || name == "time_stamp" || name == "admin-state" || name == "oper_state" || name == "error_state" || name == "down_reasons")
        return true;
    return false;
}

Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Detail::Flap::Flap()
    :
    instance(this, {"instance_id"})
{

    yang_name = "flap"; yang_parent_name = "detail"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Detail::Flap::~Flap()
{
}

bool Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Detail::Flap::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<instance.len(); index++)
    {
        if(instance[index]->has_data())
            return true;
    }
    return false;
}

bool Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Detail::Flap::has_operation() const
{
    for (std::size_t index=0; index<instance.len(); index++)
    {
        if(instance[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Detail::Flap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flap";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Detail::Flap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Detail::Flap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "instance")
    {
        auto ent_ = std::make_shared<Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Detail::Flap::Instance>();
        ent_->parent = this;
        instance.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Detail::Flap::get_children() const
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

void Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Detail::Flap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Detail::Flap::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Detail::Flap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance")
        return true;
    return false;
}

Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Detail::Flap::Instance::Instance()
    :
    instance_id{YType::str, "instance-id"},
    nodeid_str{YType::str, "nodeid_str"},
    is_show{YType::boolean, "is_show"}
        ,
    link_idx_list(this, {"link_idx"})
{

    yang_name = "instance"; yang_parent_name = "flap"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Detail::Flap::Instance::~Instance()
{
}

bool Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Detail::Flap::Instance::has_data() const
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

bool Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Detail::Flap::Instance::has_operation() const
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

std::string Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Detail::Flap::Instance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "instance";
    ADD_KEY_TOKEN(instance_id, "instance-id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Detail::Flap::Instance::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_id.is_set || is_set(instance_id.yfilter)) leaf_name_data.push_back(instance_id.get_name_leafdata());
    if (nodeid_str.is_set || is_set(nodeid_str.yfilter)) leaf_name_data.push_back(nodeid_str.get_name_leafdata());
    if (is_show.is_set || is_set(is_show.yfilter)) leaf_name_data.push_back(is_show.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Detail::Flap::Instance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "link_idx_list")
    {
        auto ent_ = std::make_shared<Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Detail::Flap::Instance::LinkIdxList>();
        ent_->parent = this;
        link_idx_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Detail::Flap::Instance::get_children() const
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

void Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Detail::Flap::Instance::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Detail::Flap::Instance::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Detail::Flap::Instance::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "link_idx_list" || name == "instance-id" || name == "nodeid_str" || name == "is_show")
        return true;
    return false;
}

Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Detail::Flap::Instance::LinkIdxList::LinkIdxList()
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

Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Detail::Flap::Instance::LinkIdxList::~LinkIdxList()
{
}

bool Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Detail::Flap::Instance::LinkIdxList::has_data() const
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

bool Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Detail::Flap::Instance::LinkIdxList::has_operation() const
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

std::string Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Detail::Flap::Instance::LinkIdxList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "link_idx_list";
    ADD_KEY_TOKEN(link_idx, "link_idx");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Detail::Flap::Instance::LinkIdxList::get_name_leaf_data() const
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

std::shared_ptr<ydk::Entity> Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Detail::Flap::Instance::LinkIdxList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "history")
    {
        auto ent_ = std::make_shared<Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Detail::Flap::Instance::LinkIdxList::History>();
        ent_->parent = this;
        history.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Detail::Flap::Instance::LinkIdxList::get_children() const
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

void Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Detail::Flap::Instance::LinkIdxList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Detail::Flap::Instance::LinkIdxList::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Detail::Flap::Instance::LinkIdxList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "history" || name == "link_idx" || name == "link_id_str" || name == "phy_link" || name == "speed" || name == "stage" || name == "fab_plane" || name == "fab_group" || name == "flap_cnt" || name == "num_admin_shuts" || name == "admin-state" || name == "oper_state" || name == "flags" || name == "far_end_link_fsdb" || name == "far_end_link_hw" || name == "coeff1" || name == "coeff2" || name == "fsm_state" || name == "TX_Control_cells_counter" || name == "TX_Data_cell_counter" || name == "TX_Data_byte_counter" || name == "TX_BEC_retransmit" || name == "TX_Asyn_fifo_rate" || name == "RX_Control_cells_counter" || name == "RX_Data_cell_counter" || name == "RX_Data_byte_counter" || name == "RX_BEC_retransmit" || name == "RX_Asyn_fifo_rate" || name == "RX_CRC_errors_counter" || name == "RX_LFEC_FEC_correctable_error" || name == "RX_LFEC_FEC_uncorrectable_errors" || name == "RX_dropped_retransmitted_control")
        return true;
    return false;
}

Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Detail::Flap::Instance::LinkIdxList::History::History()
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

Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Detail::Flap::Instance::LinkIdxList::History::~History()
{
}

bool Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Detail::Flap::Instance::LinkIdxList::History::has_data() const
{
    if (is_presence_container) return true;
    return history_idx.is_set
	|| time_stamp.is_set
	|| admin_state.is_set
	|| oper_state.is_set
	|| error_state.is_set
	|| down_reasons.is_set;
}

bool Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Detail::Flap::Instance::LinkIdxList::History::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(history_idx.yfilter)
	|| ydk::is_set(time_stamp.yfilter)
	|| ydk::is_set(admin_state.yfilter)
	|| ydk::is_set(oper_state.yfilter)
	|| ydk::is_set(error_state.yfilter)
	|| ydk::is_set(down_reasons.yfilter);
}

std::string Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Detail::Flap::Instance::LinkIdxList::History::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "history";
    ADD_KEY_TOKEN(history_idx, "history_idx");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Detail::Flap::Instance::LinkIdxList::History::get_name_leaf_data() const
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

std::shared_ptr<ydk::Entity> Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Detail::Flap::Instance::LinkIdxList::History::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Detail::Flap::Instance::LinkIdxList::History::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Detail::Flap::Instance::LinkIdxList::History::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Detail::Flap::Instance::LinkIdxList::History::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Detail::Flap::Instance::LinkIdxList::History::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "history_idx" || name == "time_stamp" || name == "admin-state" || name == "oper_state" || name == "error_state" || name == "down_reasons")
        return true;
    return false;
}

Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Topo::Topo()
    :
    instance(this, {"instance_id"})
{

    yang_name = "topo"; yang_parent_name = "rx"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Topo::~Topo()
{
}

bool Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Topo::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<instance.len(); index++)
    {
        if(instance[index]->has_data())
            return true;
    }
    return false;
}

bool Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Topo::has_operation() const
{
    for (std::size_t index=0; index<instance.len(); index++)
    {
        if(instance[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Topo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "topo";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Topo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Topo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "instance")
    {
        auto ent_ = std::make_shared<Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Topo::Instance>();
        ent_->parent = this;
        instance.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Topo::get_children() const
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

void Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Topo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Topo::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Topo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance")
        return true;
    return false;
}

Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Topo::Instance::Instance()
    :
    instance_id{YType::str, "instance-id"},
    nodeid_str{YType::str, "nodeid_str"},
    is_show{YType::boolean, "is_show"}
        ,
    link_idx_list(this, {"link_idx"})
{

    yang_name = "instance"; yang_parent_name = "topo"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Topo::Instance::~Instance()
{
}

bool Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Topo::Instance::has_data() const
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

bool Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Topo::Instance::has_operation() const
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

std::string Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Topo::Instance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "instance";
    ADD_KEY_TOKEN(instance_id, "instance-id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Topo::Instance::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_id.is_set || is_set(instance_id.yfilter)) leaf_name_data.push_back(instance_id.get_name_leafdata());
    if (nodeid_str.is_set || is_set(nodeid_str.yfilter)) leaf_name_data.push_back(nodeid_str.get_name_leafdata());
    if (is_show.is_set || is_set(is_show.yfilter)) leaf_name_data.push_back(is_show.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Topo::Instance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "link_idx_list")
    {
        auto ent_ = std::make_shared<Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Topo::Instance::LinkIdxList>();
        ent_->parent = this;
        link_idx_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Topo::Instance::get_children() const
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

void Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Topo::Instance::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Topo::Instance::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Topo::Instance::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "link_idx_list" || name == "instance-id" || name == "nodeid_str" || name == "is_show")
        return true;
    return false;
}

Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Topo::Instance::LinkIdxList::LinkIdxList()
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

Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Topo::Instance::LinkIdxList::~LinkIdxList()
{
}

bool Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Topo::Instance::LinkIdxList::has_data() const
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

bool Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Topo::Instance::LinkIdxList::has_operation() const
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

std::string Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Topo::Instance::LinkIdxList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "link_idx_list";
    ADD_KEY_TOKEN(link_idx, "link_idx");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Topo::Instance::LinkIdxList::get_name_leaf_data() const
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

std::shared_ptr<ydk::Entity> Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Topo::Instance::LinkIdxList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "history")
    {
        auto ent_ = std::make_shared<Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Topo::Instance::LinkIdxList::History>();
        ent_->parent = this;
        history.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Topo::Instance::LinkIdxList::get_children() const
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

void Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Topo::Instance::LinkIdxList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Topo::Instance::LinkIdxList::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Topo::Instance::LinkIdxList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "history" || name == "link_idx" || name == "link_id_str" || name == "phy_link" || name == "speed" || name == "stage" || name == "fab_plane" || name == "fab_group" || name == "flap_cnt" || name == "num_admin_shuts" || name == "admin-state" || name == "oper_state" || name == "flags" || name == "far_end_link_fsdb" || name == "far_end_link_hw" || name == "coeff1" || name == "coeff2" || name == "fsm_state" || name == "TX_Control_cells_counter" || name == "TX_Data_cell_counter" || name == "TX_Data_byte_counter" || name == "TX_BEC_retransmit" || name == "TX_Asyn_fifo_rate" || name == "RX_Control_cells_counter" || name == "RX_Data_cell_counter" || name == "RX_Data_byte_counter" || name == "RX_BEC_retransmit" || name == "RX_Asyn_fifo_rate" || name == "RX_CRC_errors_counter" || name == "RX_LFEC_FEC_correctable_error" || name == "RX_LFEC_FEC_uncorrectable_errors" || name == "RX_dropped_retransmitted_control")
        return true;
    return false;
}

Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Topo::Instance::LinkIdxList::History::History()
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

Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Topo::Instance::LinkIdxList::History::~History()
{
}

bool Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Topo::Instance::LinkIdxList::History::has_data() const
{
    if (is_presence_container) return true;
    return history_idx.is_set
	|| time_stamp.is_set
	|| admin_state.is_set
	|| oper_state.is_set
	|| error_state.is_set
	|| down_reasons.is_set;
}

bool Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Topo::Instance::LinkIdxList::History::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(history_idx.yfilter)
	|| ydk::is_set(time_stamp.yfilter)
	|| ydk::is_set(admin_state.yfilter)
	|| ydk::is_set(oper_state.yfilter)
	|| ydk::is_set(error_state.yfilter)
	|| ydk::is_set(down_reasons.yfilter);
}

std::string Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Topo::Instance::LinkIdxList::History::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "history";
    ADD_KEY_TOKEN(history_idx, "history_idx");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Topo::Instance::LinkIdxList::History::get_name_leaf_data() const
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

std::shared_ptr<ydk::Entity> Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Topo::Instance::LinkIdxList::History::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Topo::Instance::LinkIdxList::History::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Topo::Instance::LinkIdxList::History::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Topo::Instance::LinkIdxList::History::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Topo::Instance::LinkIdxList::History::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "history_idx" || name == "time_stamp" || name == "admin-state" || name == "oper_state" || name == "error_state" || name == "down_reasons")
        return true;
    return false;
}

Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Flap::Flap()
    :
    instance(this, {"instance_id"})
{

    yang_name = "flap"; yang_parent_name = "rx"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Flap::~Flap()
{
}

bool Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Flap::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<instance.len(); index++)
    {
        if(instance[index]->has_data())
            return true;
    }
    return false;
}

bool Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Flap::has_operation() const
{
    for (std::size_t index=0; index<instance.len(); index++)
    {
        if(instance[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Flap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flap";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Flap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Flap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "instance")
    {
        auto ent_ = std::make_shared<Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Flap::Instance>();
        ent_->parent = this;
        instance.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Flap::get_children() const
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

void Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Flap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Flap::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Flap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance")
        return true;
    return false;
}

Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Flap::Instance::Instance()
    :
    instance_id{YType::str, "instance-id"},
    nodeid_str{YType::str, "nodeid_str"},
    is_show{YType::boolean, "is_show"}
        ,
    link_idx_list(this, {"link_idx"})
{

    yang_name = "instance"; yang_parent_name = "flap"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Flap::Instance::~Instance()
{
}

bool Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Flap::Instance::has_data() const
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

bool Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Flap::Instance::has_operation() const
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

std::string Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Flap::Instance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "instance";
    ADD_KEY_TOKEN(instance_id, "instance-id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Flap::Instance::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_id.is_set || is_set(instance_id.yfilter)) leaf_name_data.push_back(instance_id.get_name_leafdata());
    if (nodeid_str.is_set || is_set(nodeid_str.yfilter)) leaf_name_data.push_back(nodeid_str.get_name_leafdata());
    if (is_show.is_set || is_set(is_show.yfilter)) leaf_name_data.push_back(is_show.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Flap::Instance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "link_idx_list")
    {
        auto ent_ = std::make_shared<Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Flap::Instance::LinkIdxList>();
        ent_->parent = this;
        link_idx_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Flap::Instance::get_children() const
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

void Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Flap::Instance::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Flap::Instance::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Flap::Instance::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "link_idx_list" || name == "instance-id" || name == "nodeid_str" || name == "is_show")
        return true;
    return false;
}

Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Flap::Instance::LinkIdxList::LinkIdxList()
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

Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Flap::Instance::LinkIdxList::~LinkIdxList()
{
}

bool Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Flap::Instance::LinkIdxList::has_data() const
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

bool Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Flap::Instance::LinkIdxList::has_operation() const
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

std::string Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Flap::Instance::LinkIdxList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "link_idx_list";
    ADD_KEY_TOKEN(link_idx, "link_idx");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Flap::Instance::LinkIdxList::get_name_leaf_data() const
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

std::shared_ptr<ydk::Entity> Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Flap::Instance::LinkIdxList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "history")
    {
        auto ent_ = std::make_shared<Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Flap::Instance::LinkIdxList::History>();
        ent_->parent = this;
        history.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Flap::Instance::LinkIdxList::get_children() const
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

void Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Flap::Instance::LinkIdxList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Flap::Instance::LinkIdxList::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Flap::Instance::LinkIdxList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "history" || name == "link_idx" || name == "link_id_str" || name == "phy_link" || name == "speed" || name == "stage" || name == "fab_plane" || name == "fab_group" || name == "flap_cnt" || name == "num_admin_shuts" || name == "admin-state" || name == "oper_state" || name == "flags" || name == "far_end_link_fsdb" || name == "far_end_link_hw" || name == "coeff1" || name == "coeff2" || name == "fsm_state" || name == "TX_Control_cells_counter" || name == "TX_Data_cell_counter" || name == "TX_Data_byte_counter" || name == "TX_BEC_retransmit" || name == "TX_Asyn_fifo_rate" || name == "RX_Control_cells_counter" || name == "RX_Data_cell_counter" || name == "RX_Data_byte_counter" || name == "RX_BEC_retransmit" || name == "RX_Asyn_fifo_rate" || name == "RX_CRC_errors_counter" || name == "RX_LFEC_FEC_correctable_error" || name == "RX_LFEC_FEC_uncorrectable_errors" || name == "RX_dropped_retransmitted_control")
        return true;
    return false;
}

Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Flap::Instance::LinkIdxList::History::History()
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

Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Flap::Instance::LinkIdxList::History::~History()
{
}

bool Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Flap::Instance::LinkIdxList::History::has_data() const
{
    if (is_presence_container) return true;
    return history_idx.is_set
	|| time_stamp.is_set
	|| admin_state.is_set
	|| oper_state.is_set
	|| error_state.is_set
	|| down_reasons.is_set;
}

bool Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Flap::Instance::LinkIdxList::History::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(history_idx.yfilter)
	|| ydk::is_set(time_stamp.yfilter)
	|| ydk::is_set(admin_state.yfilter)
	|| ydk::is_set(oper_state.yfilter)
	|| ydk::is_set(error_state.yfilter)
	|| ydk::is_set(down_reasons.yfilter);
}

std::string Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Flap::Instance::LinkIdxList::History::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "history";
    ADD_KEY_TOKEN(history_idx, "history_idx");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Flap::Instance::LinkIdxList::History::get_name_leaf_data() const
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

std::shared_ptr<ydk::Entity> Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Flap::Instance::LinkIdxList::History::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Flap::Instance::LinkIdxList::History::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Flap::Instance::LinkIdxList::History::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Flap::Instance::LinkIdxList::History::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Flap::Instance::LinkIdxList::History::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "history_idx" || name == "time_stamp" || name == "admin-state" || name == "oper_state" || name == "error_state" || name == "down_reasons")
        return true;
    return false;
}

Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Stats::Stats()
    :
    data(std::make_shared<Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Stats::Data>())
    , ctrl(std::make_shared<Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Stats::Ctrl>())
    , all(std::make_shared<Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Stats::All>())
{
    data->parent = this;
    ctrl->parent = this;
    all->parent = this;

    yang_name = "stats"; yang_parent_name = "rx"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Stats::~Stats()
{
}

bool Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Stats::has_data() const
{
    if (is_presence_container) return true;
    return (data !=  nullptr && data->has_data())
	|| (ctrl !=  nullptr && ctrl->has_data())
	|| (all !=  nullptr && all->has_data());
}

bool Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Stats::has_operation() const
{
    return is_set(yfilter)
	|| (data !=  nullptr && data->has_operation())
	|| (ctrl !=  nullptr && ctrl->has_operation())
	|| (all !=  nullptr && all->has_operation());
}

std::string Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Stats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stats";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Stats::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Stats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "data")
    {
        if(data == nullptr)
        {
            data = std::make_shared<Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Stats::Data>();
        }
        return data;
    }

    if(child_yang_name == "ctrl")
    {
        if(ctrl == nullptr)
        {
            ctrl = std::make_shared<Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Stats::Ctrl>();
        }
        return ctrl;
    }

    if(child_yang_name == "all")
    {
        if(all == nullptr)
        {
            all = std::make_shared<Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Stats::All>();
        }
        return all;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Stats::get_children() const
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

void Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Stats::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Stats::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Stats::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "ctrl" || name == "all")
        return true;
    return false;
}

Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Stats::Data::Data()
    :
    instance(this, {"instance_id"})
{

    yang_name = "data"; yang_parent_name = "stats"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Stats::Data::~Data()
{
}

bool Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Stats::Data::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<instance.len(); index++)
    {
        if(instance[index]->has_data())
            return true;
    }
    return false;
}

bool Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Stats::Data::has_operation() const
{
    for (std::size_t index=0; index<instance.len(); index++)
    {
        if(instance[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Stats::Data::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Stats::Data::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Stats::Data::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "instance")
    {
        auto ent_ = std::make_shared<Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Stats::Data::Instance>();
        ent_->parent = this;
        instance.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Stats::Data::get_children() const
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

void Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Stats::Data::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Stats::Data::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Stats::Data::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance")
        return true;
    return false;
}

Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Stats::Data::Instance::Instance()
    :
    instance_id{YType::str, "instance-id"},
    nodeid_str{YType::str, "nodeid_str"},
    is_show{YType::boolean, "is_show"}
        ,
    link_idx_list(this, {"link_idx"})
{

    yang_name = "instance"; yang_parent_name = "data"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Stats::Data::Instance::~Instance()
{
}

bool Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Stats::Data::Instance::has_data() const
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

bool Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Stats::Data::Instance::has_operation() const
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

std::string Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Stats::Data::Instance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "instance";
    ADD_KEY_TOKEN(instance_id, "instance-id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Stats::Data::Instance::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_id.is_set || is_set(instance_id.yfilter)) leaf_name_data.push_back(instance_id.get_name_leafdata());
    if (nodeid_str.is_set || is_set(nodeid_str.yfilter)) leaf_name_data.push_back(nodeid_str.get_name_leafdata());
    if (is_show.is_set || is_set(is_show.yfilter)) leaf_name_data.push_back(is_show.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Stats::Data::Instance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "link_idx_list")
    {
        auto ent_ = std::make_shared<Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Stats::Data::Instance::LinkIdxList>();
        ent_->parent = this;
        link_idx_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Stats::Data::Instance::get_children() const
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

void Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Stats::Data::Instance::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Stats::Data::Instance::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Stats::Data::Instance::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "link_idx_list" || name == "instance-id" || name == "nodeid_str" || name == "is_show")
        return true;
    return false;
}

Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Stats::Data::Instance::LinkIdxList::LinkIdxList()
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

Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Stats::Data::Instance::LinkIdxList::~LinkIdxList()
{
}

bool Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Stats::Data::Instance::LinkIdxList::has_data() const
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

bool Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Stats::Data::Instance::LinkIdxList::has_operation() const
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

std::string Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Stats::Data::Instance::LinkIdxList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "link_idx_list";
    ADD_KEY_TOKEN(link_idx, "link_idx");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Stats::Data::Instance::LinkIdxList::get_name_leaf_data() const
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

std::shared_ptr<ydk::Entity> Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Stats::Data::Instance::LinkIdxList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "history")
    {
        auto ent_ = std::make_shared<Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Stats::Data::Instance::LinkIdxList::History>();
        ent_->parent = this;
        history.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Stats::Data::Instance::LinkIdxList::get_children() const
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

void Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Stats::Data::Instance::LinkIdxList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Stats::Data::Instance::LinkIdxList::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Stats::Data::Instance::LinkIdxList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "history" || name == "link_idx" || name == "link_id_str" || name == "phy_link" || name == "speed" || name == "stage" || name == "fab_plane" || name == "fab_group" || name == "flap_cnt" || name == "num_admin_shuts" || name == "admin-state" || name == "oper_state" || name == "flags" || name == "far_end_link_fsdb" || name == "far_end_link_hw" || name == "coeff1" || name == "coeff2" || name == "fsm_state" || name == "TX_Control_cells_counter" || name == "TX_Data_cell_counter" || name == "TX_Data_byte_counter" || name == "TX_BEC_retransmit" || name == "TX_Asyn_fifo_rate" || name == "RX_Control_cells_counter" || name == "RX_Data_cell_counter" || name == "RX_Data_byte_counter" || name == "RX_BEC_retransmit" || name == "RX_Asyn_fifo_rate" || name == "RX_CRC_errors_counter" || name == "RX_LFEC_FEC_correctable_error" || name == "RX_LFEC_FEC_uncorrectable_errors" || name == "RX_dropped_retransmitted_control")
        return true;
    return false;
}

Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Stats::Data::Instance::LinkIdxList::History::History()
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

Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Stats::Data::Instance::LinkIdxList::History::~History()
{
}

bool Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Stats::Data::Instance::LinkIdxList::History::has_data() const
{
    if (is_presence_container) return true;
    return history_idx.is_set
	|| time_stamp.is_set
	|| admin_state.is_set
	|| oper_state.is_set
	|| error_state.is_set
	|| down_reasons.is_set;
}

bool Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Stats::Data::Instance::LinkIdxList::History::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(history_idx.yfilter)
	|| ydk::is_set(time_stamp.yfilter)
	|| ydk::is_set(admin_state.yfilter)
	|| ydk::is_set(oper_state.yfilter)
	|| ydk::is_set(error_state.yfilter)
	|| ydk::is_set(down_reasons.yfilter);
}

std::string Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Stats::Data::Instance::LinkIdxList::History::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "history";
    ADD_KEY_TOKEN(history_idx, "history_idx");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Stats::Data::Instance::LinkIdxList::History::get_name_leaf_data() const
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

std::shared_ptr<ydk::Entity> Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Stats::Data::Instance::LinkIdxList::History::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Stats::Data::Instance::LinkIdxList::History::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Stats::Data::Instance::LinkIdxList::History::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Stats::Data::Instance::LinkIdxList::History::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Stats::Data::Instance::LinkIdxList::History::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "history_idx" || name == "time_stamp" || name == "admin-state" || name == "oper_state" || name == "error_state" || name == "down_reasons")
        return true;
    return false;
}

Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Stats::Ctrl::Ctrl()
    :
    instance(this, {"instance_id"})
{

    yang_name = "ctrl"; yang_parent_name = "stats"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Stats::Ctrl::~Ctrl()
{
}

bool Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Stats::Ctrl::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<instance.len(); index++)
    {
        if(instance[index]->has_data())
            return true;
    }
    return false;
}

bool Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Stats::Ctrl::has_operation() const
{
    for (std::size_t index=0; index<instance.len(); index++)
    {
        if(instance[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Stats::Ctrl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ctrl";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Stats::Ctrl::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Stats::Ctrl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "instance")
    {
        auto ent_ = std::make_shared<Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Stats::Ctrl::Instance>();
        ent_->parent = this;
        instance.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Stats::Ctrl::get_children() const
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

void Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Stats::Ctrl::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Stats::Ctrl::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Stats::Ctrl::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance")
        return true;
    return false;
}

Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Stats::Ctrl::Instance::Instance()
    :
    instance_id{YType::str, "instance-id"},
    nodeid_str{YType::str, "nodeid_str"},
    is_show{YType::boolean, "is_show"}
        ,
    link_idx_list(this, {"link_idx"})
{

    yang_name = "instance"; yang_parent_name = "ctrl"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Stats::Ctrl::Instance::~Instance()
{
}

bool Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Stats::Ctrl::Instance::has_data() const
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

bool Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Stats::Ctrl::Instance::has_operation() const
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

std::string Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Stats::Ctrl::Instance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "instance";
    ADD_KEY_TOKEN(instance_id, "instance-id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Stats::Ctrl::Instance::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_id.is_set || is_set(instance_id.yfilter)) leaf_name_data.push_back(instance_id.get_name_leafdata());
    if (nodeid_str.is_set || is_set(nodeid_str.yfilter)) leaf_name_data.push_back(nodeid_str.get_name_leafdata());
    if (is_show.is_set || is_set(is_show.yfilter)) leaf_name_data.push_back(is_show.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Stats::Ctrl::Instance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "link_idx_list")
    {
        auto ent_ = std::make_shared<Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Stats::Ctrl::Instance::LinkIdxList>();
        ent_->parent = this;
        link_idx_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Stats::Ctrl::Instance::get_children() const
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

void Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Stats::Ctrl::Instance::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Stats::Ctrl::Instance::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Stats::Ctrl::Instance::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "link_idx_list" || name == "instance-id" || name == "nodeid_str" || name == "is_show")
        return true;
    return false;
}

Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Stats::Ctrl::Instance::LinkIdxList::LinkIdxList()
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

Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Stats::Ctrl::Instance::LinkIdxList::~LinkIdxList()
{
}

bool Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Stats::Ctrl::Instance::LinkIdxList::has_data() const
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

bool Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Stats::Ctrl::Instance::LinkIdxList::has_operation() const
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

std::string Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Stats::Ctrl::Instance::LinkIdxList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "link_idx_list";
    ADD_KEY_TOKEN(link_idx, "link_idx");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Stats::Ctrl::Instance::LinkIdxList::get_name_leaf_data() const
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

std::shared_ptr<ydk::Entity> Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Stats::Ctrl::Instance::LinkIdxList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "history")
    {
        auto ent_ = std::make_shared<Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Stats::Ctrl::Instance::LinkIdxList::History>();
        ent_->parent = this;
        history.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Stats::Ctrl::Instance::LinkIdxList::get_children() const
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

void Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Stats::Ctrl::Instance::LinkIdxList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Stats::Ctrl::Instance::LinkIdxList::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Stats::Ctrl::Instance::LinkIdxList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "history" || name == "link_idx" || name == "link_id_str" || name == "phy_link" || name == "speed" || name == "stage" || name == "fab_plane" || name == "fab_group" || name == "flap_cnt" || name == "num_admin_shuts" || name == "admin-state" || name == "oper_state" || name == "flags" || name == "far_end_link_fsdb" || name == "far_end_link_hw" || name == "coeff1" || name == "coeff2" || name == "fsm_state" || name == "TX_Control_cells_counter" || name == "TX_Data_cell_counter" || name == "TX_Data_byte_counter" || name == "TX_BEC_retransmit" || name == "TX_Asyn_fifo_rate" || name == "RX_Control_cells_counter" || name == "RX_Data_cell_counter" || name == "RX_Data_byte_counter" || name == "RX_BEC_retransmit" || name == "RX_Asyn_fifo_rate" || name == "RX_CRC_errors_counter" || name == "RX_LFEC_FEC_correctable_error" || name == "RX_LFEC_FEC_uncorrectable_errors" || name == "RX_dropped_retransmitted_control")
        return true;
    return false;
}

Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Stats::Ctrl::Instance::LinkIdxList::History::History()
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

Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Stats::Ctrl::Instance::LinkIdxList::History::~History()
{
}

bool Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Stats::Ctrl::Instance::LinkIdxList::History::has_data() const
{
    if (is_presence_container) return true;
    return history_idx.is_set
	|| time_stamp.is_set
	|| admin_state.is_set
	|| oper_state.is_set
	|| error_state.is_set
	|| down_reasons.is_set;
}

bool Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Stats::Ctrl::Instance::LinkIdxList::History::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(history_idx.yfilter)
	|| ydk::is_set(time_stamp.yfilter)
	|| ydk::is_set(admin_state.yfilter)
	|| ydk::is_set(oper_state.yfilter)
	|| ydk::is_set(error_state.yfilter)
	|| ydk::is_set(down_reasons.yfilter);
}

std::string Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Stats::Ctrl::Instance::LinkIdxList::History::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "history";
    ADD_KEY_TOKEN(history_idx, "history_idx");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Stats::Ctrl::Instance::LinkIdxList::History::get_name_leaf_data() const
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

std::shared_ptr<ydk::Entity> Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Stats::Ctrl::Instance::LinkIdxList::History::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Stats::Ctrl::Instance::LinkIdxList::History::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Stats::Ctrl::Instance::LinkIdxList::History::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Stats::Ctrl::Instance::LinkIdxList::History::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Stats::Ctrl::Instance::LinkIdxList::History::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "history_idx" || name == "time_stamp" || name == "admin-state" || name == "oper_state" || name == "error_state" || name == "down_reasons")
        return true;
    return false;
}

Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Stats::All::All()
    :
    instance(this, {"instance_id"})
{

    yang_name = "all"; yang_parent_name = "stats"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Stats::All::~All()
{
}

bool Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Stats::All::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<instance.len(); index++)
    {
        if(instance[index]->has_data())
            return true;
    }
    return false;
}

bool Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Stats::All::has_operation() const
{
    for (std::size_t index=0; index<instance.len(); index++)
    {
        if(instance[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Stats::All::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "all";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Stats::All::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Stats::All::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "instance")
    {
        auto ent_ = std::make_shared<Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Stats::All::Instance>();
        ent_->parent = this;
        instance.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Stats::All::get_children() const
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

void Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Stats::All::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Stats::All::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Stats::All::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance")
        return true;
    return false;
}

Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Stats::All::Instance::Instance()
    :
    instance_id{YType::str, "instance-id"},
    nodeid_str{YType::str, "nodeid_str"},
    is_show{YType::boolean, "is_show"}
        ,
    link_idx_list(this, {"link_idx"})
{

    yang_name = "instance"; yang_parent_name = "all"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Stats::All::Instance::~Instance()
{
}

bool Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Stats::All::Instance::has_data() const
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

bool Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Stats::All::Instance::has_operation() const
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

std::string Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Stats::All::Instance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "instance";
    ADD_KEY_TOKEN(instance_id, "instance-id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Stats::All::Instance::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_id.is_set || is_set(instance_id.yfilter)) leaf_name_data.push_back(instance_id.get_name_leafdata());
    if (nodeid_str.is_set || is_set(nodeid_str.yfilter)) leaf_name_data.push_back(nodeid_str.get_name_leafdata());
    if (is_show.is_set || is_set(is_show.yfilter)) leaf_name_data.push_back(is_show.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Stats::All::Instance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "link_idx_list")
    {
        auto ent_ = std::make_shared<Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Stats::All::Instance::LinkIdxList>();
        ent_->parent = this;
        link_idx_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Stats::All::Instance::get_children() const
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

void Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Stats::All::Instance::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Stats::All::Instance::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Stats::All::Instance::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "link_idx_list" || name == "instance-id" || name == "nodeid_str" || name == "is_show")
        return true;
    return false;
}

Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Stats::All::Instance::LinkIdxList::LinkIdxList()
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

Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Stats::All::Instance::LinkIdxList::~LinkIdxList()
{
}

bool Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Stats::All::Instance::LinkIdxList::has_data() const
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

bool Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Stats::All::Instance::LinkIdxList::has_operation() const
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

std::string Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Stats::All::Instance::LinkIdxList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "link_idx_list";
    ADD_KEY_TOKEN(link_idx, "link_idx");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Stats::All::Instance::LinkIdxList::get_name_leaf_data() const
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

std::shared_ptr<ydk::Entity> Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Stats::All::Instance::LinkIdxList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "history")
    {
        auto ent_ = std::make_shared<Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Stats::All::Instance::LinkIdxList::History>();
        ent_->parent = this;
        history.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Stats::All::Instance::LinkIdxList::get_children() const
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

void Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Stats::All::Instance::LinkIdxList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Stats::All::Instance::LinkIdxList::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Stats::All::Instance::LinkIdxList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "history" || name == "link_idx" || name == "link_id_str" || name == "phy_link" || name == "speed" || name == "stage" || name == "fab_plane" || name == "fab_group" || name == "flap_cnt" || name == "num_admin_shuts" || name == "admin-state" || name == "oper_state" || name == "flags" || name == "far_end_link_fsdb" || name == "far_end_link_hw" || name == "coeff1" || name == "coeff2" || name == "fsm_state" || name == "TX_Control_cells_counter" || name == "TX_Data_cell_counter" || name == "TX_Data_byte_counter" || name == "TX_BEC_retransmit" || name == "TX_Asyn_fifo_rate" || name == "RX_Control_cells_counter" || name == "RX_Data_cell_counter" || name == "RX_Data_byte_counter" || name == "RX_BEC_retransmit" || name == "RX_Asyn_fifo_rate" || name == "RX_CRC_errors_counter" || name == "RX_LFEC_FEC_correctable_error" || name == "RX_LFEC_FEC_uncorrectable_errors" || name == "RX_dropped_retransmitted_control")
        return true;
    return false;
}

Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Stats::All::Instance::LinkIdxList::History::History()
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

Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Stats::All::Instance::LinkIdxList::History::~History()
{
}

bool Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Stats::All::Instance::LinkIdxList::History::has_data() const
{
    if (is_presence_container) return true;
    return history_idx.is_set
	|| time_stamp.is_set
	|| admin_state.is_set
	|| oper_state.is_set
	|| error_state.is_set
	|| down_reasons.is_set;
}

bool Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Stats::All::Instance::LinkIdxList::History::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(history_idx.yfilter)
	|| ydk::is_set(time_stamp.yfilter)
	|| ydk::is_set(admin_state.yfilter)
	|| ydk::is_set(oper_state.yfilter)
	|| ydk::is_set(error_state.yfilter)
	|| ydk::is_set(down_reasons.yfilter);
}

std::string Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Stats::All::Instance::LinkIdxList::History::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "history";
    ADD_KEY_TOKEN(history_idx, "history_idx");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Stats::All::Instance::LinkIdxList::History::get_name_leaf_data() const
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

std::shared_ptr<ydk::Entity> Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Stats::All::Instance::LinkIdxList::History::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Stats::All::Instance::LinkIdxList::History::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Stats::All::Instance::LinkIdxList::History::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Stats::All::Instance::LinkIdxList::History::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Stats::All::Instance::LinkIdxList::History::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "history_idx" || name == "time_stamp" || name == "admin-state" || name == "oper_state" || name == "error_state" || name == "down_reasons")
        return true;
    return false;
}

Controller::SfeOper::Sfe::LinkInfo::Location::Tx::Tx()
    :
    start{YType::int32, "start"},
    end{YType::int32, "end"}
        ,
    detail(std::make_shared<Controller::SfeOper::Sfe::LinkInfo::Location::Tx::Detail>())
    , instance(this, {"instance_id"})
    , stats(std::make_shared<Controller::SfeOper::Sfe::LinkInfo::Location::Tx::Stats>())
{
    detail->parent = this;
    stats->parent = this;

    yang_name = "tx"; yang_parent_name = "location"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::SfeOper::Sfe::LinkInfo::Location::Tx::~Tx()
{
}

bool Controller::SfeOper::Sfe::LinkInfo::Location::Tx::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<instance.len(); index++)
    {
        if(instance[index]->has_data())
            return true;
    }
    return start.is_set
	|| end.is_set
	|| (detail !=  nullptr && detail->has_data())
	|| (stats !=  nullptr && stats->has_data());
}

bool Controller::SfeOper::Sfe::LinkInfo::Location::Tx::has_operation() const
{
    for (std::size_t index=0; index<instance.len(); index++)
    {
        if(instance[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(start.yfilter)
	|| ydk::is_set(end.yfilter)
	|| (detail !=  nullptr && detail->has_operation())
	|| (stats !=  nullptr && stats->has_operation());
}

std::string Controller::SfeOper::Sfe::LinkInfo::Location::Tx::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tx";
    ADD_KEY_TOKEN(start, "start");
    ADD_KEY_TOKEN(end, "end");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::SfeOper::Sfe::LinkInfo::Location::Tx::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (start.is_set || is_set(start.yfilter)) leaf_name_data.push_back(start.get_name_leafdata());
    if (end.is_set || is_set(end.yfilter)) leaf_name_data.push_back(end.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::SfeOper::Sfe::LinkInfo::Location::Tx::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "detail")
    {
        if(detail == nullptr)
        {
            detail = std::make_shared<Controller::SfeOper::Sfe::LinkInfo::Location::Tx::Detail>();
        }
        return detail;
    }

    if(child_yang_name == "instance")
    {
        auto ent_ = std::make_shared<Controller::SfeOper::Sfe::LinkInfo::Location::Tx::Instance>();
        ent_->parent = this;
        instance.append(ent_);
        return ent_;
    }

    if(child_yang_name == "stats")
    {
        if(stats == nullptr)
        {
            stats = std::make_shared<Controller::SfeOper::Sfe::LinkInfo::Location::Tx::Stats>();
        }
        return stats;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::SfeOper::Sfe::LinkInfo::Location::Tx::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(detail != nullptr)
    {
        _children["detail"] = detail;
    }

    count_ = 0;
    for (auto ent_ : instance.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    if(stats != nullptr)
    {
        _children["stats"] = stats;
    }

    return _children;
}

void Controller::SfeOper::Sfe::LinkInfo::Location::Tx::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Controller::SfeOper::Sfe::LinkInfo::Location::Tx::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Controller::SfeOper::Sfe::LinkInfo::Location::Tx::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "detail" || name == "instance" || name == "stats" || name == "start" || name == "end")
        return true;
    return false;
}

Controller::SfeOper::Sfe::LinkInfo::Location::Tx::Detail::Detail()
    :
    instance(this, {"instance_id"})
{

    yang_name = "detail"; yang_parent_name = "tx"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::SfeOper::Sfe::LinkInfo::Location::Tx::Detail::~Detail()
{
}

bool Controller::SfeOper::Sfe::LinkInfo::Location::Tx::Detail::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<instance.len(); index++)
    {
        if(instance[index]->has_data())
            return true;
    }
    return false;
}

bool Controller::SfeOper::Sfe::LinkInfo::Location::Tx::Detail::has_operation() const
{
    for (std::size_t index=0; index<instance.len(); index++)
    {
        if(instance[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Controller::SfeOper::Sfe::LinkInfo::Location::Tx::Detail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "detail";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::SfeOper::Sfe::LinkInfo::Location::Tx::Detail::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::SfeOper::Sfe::LinkInfo::Location::Tx::Detail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "instance")
    {
        auto ent_ = std::make_shared<Controller::SfeOper::Sfe::LinkInfo::Location::Tx::Detail::Instance>();
        ent_->parent = this;
        instance.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::SfeOper::Sfe::LinkInfo::Location::Tx::Detail::get_children() const
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

void Controller::SfeOper::Sfe::LinkInfo::Location::Tx::Detail::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::SfeOper::Sfe::LinkInfo::Location::Tx::Detail::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::SfeOper::Sfe::LinkInfo::Location::Tx::Detail::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance")
        return true;
    return false;
}

Controller::SfeOper::Sfe::LinkInfo::Location::Tx::Detail::Instance::Instance()
    :
    instance_id{YType::str, "instance-id"},
    nodeid_str{YType::str, "nodeid_str"},
    is_show{YType::boolean, "is_show"}
        ,
    link_idx_list(this, {"link_idx"})
{

    yang_name = "instance"; yang_parent_name = "detail"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::SfeOper::Sfe::LinkInfo::Location::Tx::Detail::Instance::~Instance()
{
}

bool Controller::SfeOper::Sfe::LinkInfo::Location::Tx::Detail::Instance::has_data() const
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

bool Controller::SfeOper::Sfe::LinkInfo::Location::Tx::Detail::Instance::has_operation() const
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

std::string Controller::SfeOper::Sfe::LinkInfo::Location::Tx::Detail::Instance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "instance";
    ADD_KEY_TOKEN(instance_id, "instance-id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::SfeOper::Sfe::LinkInfo::Location::Tx::Detail::Instance::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_id.is_set || is_set(instance_id.yfilter)) leaf_name_data.push_back(instance_id.get_name_leafdata());
    if (nodeid_str.is_set || is_set(nodeid_str.yfilter)) leaf_name_data.push_back(nodeid_str.get_name_leafdata());
    if (is_show.is_set || is_set(is_show.yfilter)) leaf_name_data.push_back(is_show.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::SfeOper::Sfe::LinkInfo::Location::Tx::Detail::Instance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "link_idx_list")
    {
        auto ent_ = std::make_shared<Controller::SfeOper::Sfe::LinkInfo::Location::Tx::Detail::Instance::LinkIdxList>();
        ent_->parent = this;
        link_idx_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::SfeOper::Sfe::LinkInfo::Location::Tx::Detail::Instance::get_children() const
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

void Controller::SfeOper::Sfe::LinkInfo::Location::Tx::Detail::Instance::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Controller::SfeOper::Sfe::LinkInfo::Location::Tx::Detail::Instance::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Controller::SfeOper::Sfe::LinkInfo::Location::Tx::Detail::Instance::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "link_idx_list" || name == "instance-id" || name == "nodeid_str" || name == "is_show")
        return true;
    return false;
}

Controller::SfeOper::Sfe::LinkInfo::Location::Tx::Detail::Instance::LinkIdxList::LinkIdxList()
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

Controller::SfeOper::Sfe::LinkInfo::Location::Tx::Detail::Instance::LinkIdxList::~LinkIdxList()
{
}

bool Controller::SfeOper::Sfe::LinkInfo::Location::Tx::Detail::Instance::LinkIdxList::has_data() const
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

bool Controller::SfeOper::Sfe::LinkInfo::Location::Tx::Detail::Instance::LinkIdxList::has_operation() const
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

std::string Controller::SfeOper::Sfe::LinkInfo::Location::Tx::Detail::Instance::LinkIdxList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "link_idx_list";
    ADD_KEY_TOKEN(link_idx, "link_idx");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::SfeOper::Sfe::LinkInfo::Location::Tx::Detail::Instance::LinkIdxList::get_name_leaf_data() const
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

std::shared_ptr<ydk::Entity> Controller::SfeOper::Sfe::LinkInfo::Location::Tx::Detail::Instance::LinkIdxList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "history")
    {
        auto ent_ = std::make_shared<Controller::SfeOper::Sfe::LinkInfo::Location::Tx::Detail::Instance::LinkIdxList::History>();
        ent_->parent = this;
        history.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::SfeOper::Sfe::LinkInfo::Location::Tx::Detail::Instance::LinkIdxList::get_children() const
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

void Controller::SfeOper::Sfe::LinkInfo::Location::Tx::Detail::Instance::LinkIdxList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Controller::SfeOper::Sfe::LinkInfo::Location::Tx::Detail::Instance::LinkIdxList::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Controller::SfeOper::Sfe::LinkInfo::Location::Tx::Detail::Instance::LinkIdxList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "history" || name == "link_idx" || name == "link_id_str" || name == "phy_link" || name == "speed" || name == "stage" || name == "fab_plane" || name == "fab_group" || name == "flap_cnt" || name == "num_admin_shuts" || name == "admin-state" || name == "oper_state" || name == "flags" || name == "far_end_link_fsdb" || name == "far_end_link_hw" || name == "coeff1" || name == "coeff2" || name == "fsm_state" || name == "TX_Control_cells_counter" || name == "TX_Data_cell_counter" || name == "TX_Data_byte_counter" || name == "TX_BEC_retransmit" || name == "TX_Asyn_fifo_rate" || name == "RX_Control_cells_counter" || name == "RX_Data_cell_counter" || name == "RX_Data_byte_counter" || name == "RX_BEC_retransmit" || name == "RX_Asyn_fifo_rate" || name == "RX_CRC_errors_counter" || name == "RX_LFEC_FEC_correctable_error" || name == "RX_LFEC_FEC_uncorrectable_errors" || name == "RX_dropped_retransmitted_control")
        return true;
    return false;
}

Controller::SfeOper::Sfe::LinkInfo::Location::Tx::Detail::Instance::LinkIdxList::History::History()
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

Controller::SfeOper::Sfe::LinkInfo::Location::Tx::Detail::Instance::LinkIdxList::History::~History()
{
}

bool Controller::SfeOper::Sfe::LinkInfo::Location::Tx::Detail::Instance::LinkIdxList::History::has_data() const
{
    if (is_presence_container) return true;
    return history_idx.is_set
	|| time_stamp.is_set
	|| admin_state.is_set
	|| oper_state.is_set
	|| error_state.is_set
	|| down_reasons.is_set;
}

bool Controller::SfeOper::Sfe::LinkInfo::Location::Tx::Detail::Instance::LinkIdxList::History::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(history_idx.yfilter)
	|| ydk::is_set(time_stamp.yfilter)
	|| ydk::is_set(admin_state.yfilter)
	|| ydk::is_set(oper_state.yfilter)
	|| ydk::is_set(error_state.yfilter)
	|| ydk::is_set(down_reasons.yfilter);
}

std::string Controller::SfeOper::Sfe::LinkInfo::Location::Tx::Detail::Instance::LinkIdxList::History::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "history";
    ADD_KEY_TOKEN(history_idx, "history_idx");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::SfeOper::Sfe::LinkInfo::Location::Tx::Detail::Instance::LinkIdxList::History::get_name_leaf_data() const
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

std::shared_ptr<ydk::Entity> Controller::SfeOper::Sfe::LinkInfo::Location::Tx::Detail::Instance::LinkIdxList::History::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::SfeOper::Sfe::LinkInfo::Location::Tx::Detail::Instance::LinkIdxList::History::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Controller::SfeOper::Sfe::LinkInfo::Location::Tx::Detail::Instance::LinkIdxList::History::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Controller::SfeOper::Sfe::LinkInfo::Location::Tx::Detail::Instance::LinkIdxList::History::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Controller::SfeOper::Sfe::LinkInfo::Location::Tx::Detail::Instance::LinkIdxList::History::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "history_idx" || name == "time_stamp" || name == "admin-state" || name == "oper_state" || name == "error_state" || name == "down_reasons")
        return true;
    return false;
}

Controller::SfeOper::Sfe::LinkInfo::Location::Tx::Instance::Instance()
    :
    instance_id{YType::str, "instance-id"},
    nodeid_str{YType::str, "nodeid_str"},
    is_show{YType::boolean, "is_show"}
        ,
    link_idx_list(this, {"link_idx"})
{

    yang_name = "instance"; yang_parent_name = "tx"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::SfeOper::Sfe::LinkInfo::Location::Tx::Instance::~Instance()
{
}

bool Controller::SfeOper::Sfe::LinkInfo::Location::Tx::Instance::has_data() const
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

bool Controller::SfeOper::Sfe::LinkInfo::Location::Tx::Instance::has_operation() const
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

std::string Controller::SfeOper::Sfe::LinkInfo::Location::Tx::Instance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "instance";
    ADD_KEY_TOKEN(instance_id, "instance-id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::SfeOper::Sfe::LinkInfo::Location::Tx::Instance::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_id.is_set || is_set(instance_id.yfilter)) leaf_name_data.push_back(instance_id.get_name_leafdata());
    if (nodeid_str.is_set || is_set(nodeid_str.yfilter)) leaf_name_data.push_back(nodeid_str.get_name_leafdata());
    if (is_show.is_set || is_set(is_show.yfilter)) leaf_name_data.push_back(is_show.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::SfeOper::Sfe::LinkInfo::Location::Tx::Instance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "link_idx_list")
    {
        auto ent_ = std::make_shared<Controller::SfeOper::Sfe::LinkInfo::Location::Tx::Instance::LinkIdxList>();
        ent_->parent = this;
        link_idx_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::SfeOper::Sfe::LinkInfo::Location::Tx::Instance::get_children() const
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

void Controller::SfeOper::Sfe::LinkInfo::Location::Tx::Instance::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Controller::SfeOper::Sfe::LinkInfo::Location::Tx::Instance::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Controller::SfeOper::Sfe::LinkInfo::Location::Tx::Instance::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "link_idx_list" || name == "instance-id" || name == "nodeid_str" || name == "is_show")
        return true;
    return false;
}

Controller::SfeOper::Sfe::LinkInfo::Location::Tx::Instance::LinkIdxList::LinkIdxList()
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

Controller::SfeOper::Sfe::LinkInfo::Location::Tx::Instance::LinkIdxList::~LinkIdxList()
{
}

bool Controller::SfeOper::Sfe::LinkInfo::Location::Tx::Instance::LinkIdxList::has_data() const
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

bool Controller::SfeOper::Sfe::LinkInfo::Location::Tx::Instance::LinkIdxList::has_operation() const
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

std::string Controller::SfeOper::Sfe::LinkInfo::Location::Tx::Instance::LinkIdxList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "link_idx_list";
    ADD_KEY_TOKEN(link_idx, "link_idx");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::SfeOper::Sfe::LinkInfo::Location::Tx::Instance::LinkIdxList::get_name_leaf_data() const
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

std::shared_ptr<ydk::Entity> Controller::SfeOper::Sfe::LinkInfo::Location::Tx::Instance::LinkIdxList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "history")
    {
        auto ent_ = std::make_shared<Controller::SfeOper::Sfe::LinkInfo::Location::Tx::Instance::LinkIdxList::History>();
        ent_->parent = this;
        history.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::SfeOper::Sfe::LinkInfo::Location::Tx::Instance::LinkIdxList::get_children() const
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

void Controller::SfeOper::Sfe::LinkInfo::Location::Tx::Instance::LinkIdxList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Controller::SfeOper::Sfe::LinkInfo::Location::Tx::Instance::LinkIdxList::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Controller::SfeOper::Sfe::LinkInfo::Location::Tx::Instance::LinkIdxList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "history" || name == "link_idx" || name == "link_id_str" || name == "phy_link" || name == "speed" || name == "stage" || name == "fab_plane" || name == "fab_group" || name == "flap_cnt" || name == "num_admin_shuts" || name == "admin-state" || name == "oper_state" || name == "flags" || name == "far_end_link_fsdb" || name == "far_end_link_hw" || name == "coeff1" || name == "coeff2" || name == "fsm_state" || name == "TX_Control_cells_counter" || name == "TX_Data_cell_counter" || name == "TX_Data_byte_counter" || name == "TX_BEC_retransmit" || name == "TX_Asyn_fifo_rate" || name == "RX_Control_cells_counter" || name == "RX_Data_cell_counter" || name == "RX_Data_byte_counter" || name == "RX_BEC_retransmit" || name == "RX_Asyn_fifo_rate" || name == "RX_CRC_errors_counter" || name == "RX_LFEC_FEC_correctable_error" || name == "RX_LFEC_FEC_uncorrectable_errors" || name == "RX_dropped_retransmitted_control")
        return true;
    return false;
}

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


}
}

