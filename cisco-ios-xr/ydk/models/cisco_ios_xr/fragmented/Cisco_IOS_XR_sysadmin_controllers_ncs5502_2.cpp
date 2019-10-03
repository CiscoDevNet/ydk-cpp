
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_sysadmin_controllers_ncs5502_2.hpp"
#include "Cisco_IOS_XR_sysadmin_controllers_ncs5502_3.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_sysadmin_controllers_ncs5502 {

Controller::Fabric::Oper::Link::Rack::Port::Tx::Detail::Detail()
    :
    data_idx(this, {"port_data_idx"})
{

    yang_name = "detail"; yang_parent_name = "tx"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::Fabric::Oper::Link::Rack::Port::Tx::Detail::~Detail()
{
}

bool Controller::Fabric::Oper::Link::Rack::Port::Tx::Detail::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<data_idx.len(); index++)
    {
        if(data_idx[index]->has_data())
            return true;
    }
    return false;
}

bool Controller::Fabric::Oper::Link::Rack::Port::Tx::Detail::has_operation() const
{
    for (std::size_t index=0; index<data_idx.len(); index++)
    {
        if(data_idx[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Controller::Fabric::Oper::Link::Rack::Port::Tx::Detail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "detail";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Link::Rack::Port::Tx::Detail::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::Fabric::Oper::Link::Rack::Port::Tx::Detail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "data_idx")
    {
        auto ent_ = std::make_shared<Controller::Fabric::Oper::Link::Rack::Port::Tx::Detail::DataIdx>();
        ent_->parent = this;
        data_idx.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Fabric::Oper::Link::Rack::Port::Tx::Detail::get_children() const
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

void Controller::Fabric::Oper::Link::Rack::Port::Tx::Detail::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::Fabric::Oper::Link::Rack::Port::Tx::Detail::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::Fabric::Oper::Link::Rack::Port::Tx::Detail::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data_idx")
        return true;
    return false;
}

Controller::Fabric::Oper::Link::Rack::Port::Tx::Detail::DataIdx::DataIdx()
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

Controller::Fabric::Oper::Link::Rack::Port::Tx::Detail::DataIdx::~DataIdx()
{
}

bool Controller::Fabric::Oper::Link::Rack::Port::Tx::Detail::DataIdx::has_data() const
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

bool Controller::Fabric::Oper::Link::Rack::Port::Tx::Detail::DataIdx::has_operation() const
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

std::string Controller::Fabric::Oper::Link::Rack::Port::Tx::Detail::DataIdx::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "data_idx";
    ADD_KEY_TOKEN(port_data_idx, "port_data_idx");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Link::Rack::Port::Tx::Detail::DataIdx::get_name_leaf_data() const
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

std::shared_ptr<ydk::Entity> Controller::Fabric::Oper::Link::Rack::Port::Tx::Detail::DataIdx::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "history")
    {
        auto ent_ = std::make_shared<Controller::Fabric::Oper::Link::Rack::Port::Tx::Detail::DataIdx::History>();
        ent_->parent = this;
        history.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Fabric::Oper::Link::Rack::Port::Tx::Detail::DataIdx::get_children() const
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

void Controller::Fabric::Oper::Link::Rack::Port::Tx::Detail::DataIdx::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Controller::Fabric::Oper::Link::Rack::Port::Tx::Detail::DataIdx::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Controller::Fabric::Oper::Link::Rack::Port::Tx::Detail::DataIdx::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "history" || name == "port_data_idx" || name == "sfe_port" || name == "admin-state" || name == "oper_state" || name == "near_end_cdr_ln" || name == "near_end_cxp_ch" || name == "far_end_cxp_ch" || name == "far_end_cdr_ln" || name == "neighbor_link")
        return true;
    return false;
}

Controller::Fabric::Oper::Link::Rack::Port::Tx::Detail::DataIdx::History::History()
    :
    history_idx{YType::int32, "history_idx"},
    time_stamp{YType::str, "time_stamp"},
    admin_state{YType::str, "admin-state"},
    oper_state{YType::str, "oper_state"},
    error_state{YType::str, "error_state"}
{

    yang_name = "history"; yang_parent_name = "data_idx"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::Fabric::Oper::Link::Rack::Port::Tx::Detail::DataIdx::History::~History()
{
}

bool Controller::Fabric::Oper::Link::Rack::Port::Tx::Detail::DataIdx::History::has_data() const
{
    if (is_presence_container) return true;
    return history_idx.is_set
	|| time_stamp.is_set
	|| admin_state.is_set
	|| oper_state.is_set
	|| error_state.is_set;
}

bool Controller::Fabric::Oper::Link::Rack::Port::Tx::Detail::DataIdx::History::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(history_idx.yfilter)
	|| ydk::is_set(time_stamp.yfilter)
	|| ydk::is_set(admin_state.yfilter)
	|| ydk::is_set(oper_state.yfilter)
	|| ydk::is_set(error_state.yfilter);
}

std::string Controller::Fabric::Oper::Link::Rack::Port::Tx::Detail::DataIdx::History::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "history";
    ADD_KEY_TOKEN(history_idx, "history_idx");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Link::Rack::Port::Tx::Detail::DataIdx::History::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (history_idx.is_set || is_set(history_idx.yfilter)) leaf_name_data.push_back(history_idx.get_name_leafdata());
    if (time_stamp.is_set || is_set(time_stamp.yfilter)) leaf_name_data.push_back(time_stamp.get_name_leafdata());
    if (admin_state.is_set || is_set(admin_state.yfilter)) leaf_name_data.push_back(admin_state.get_name_leafdata());
    if (oper_state.is_set || is_set(oper_state.yfilter)) leaf_name_data.push_back(oper_state.get_name_leafdata());
    if (error_state.is_set || is_set(error_state.yfilter)) leaf_name_data.push_back(error_state.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::Fabric::Oper::Link::Rack::Port::Tx::Detail::DataIdx::History::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Fabric::Oper::Link::Rack::Port::Tx::Detail::DataIdx::History::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Controller::Fabric::Oper::Link::Rack::Port::Tx::Detail::DataIdx::History::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Controller::Fabric::Oper::Link::Rack::Port::Tx::Detail::DataIdx::History::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Controller::Fabric::Oper::Link::Rack::Port::Tx::Detail::DataIdx::History::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "history_idx" || name == "time_stamp" || name == "admin-state" || name == "oper_state" || name == "error_state")
        return true;
    return false;
}

Controller::Fabric::Oper::Link::Rack::Port::Tx::State::State()
    :
    up(std::make_shared<Controller::Fabric::Oper::Link::Rack::Port::Tx::State::Up>())
    , down(std::make_shared<Controller::Fabric::Oper::Link::Rack::Port::Tx::State::Down>())
    , mismatch(std::make_shared<Controller::Fabric::Oper::Link::Rack::Port::Tx::State::Mismatch>())
{
    up->parent = this;
    down->parent = this;
    mismatch->parent = this;

    yang_name = "state"; yang_parent_name = "tx"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::Fabric::Oper::Link::Rack::Port::Tx::State::~State()
{
}

bool Controller::Fabric::Oper::Link::Rack::Port::Tx::State::has_data() const
{
    if (is_presence_container) return true;
    return (up !=  nullptr && up->has_data())
	|| (down !=  nullptr && down->has_data())
	|| (mismatch !=  nullptr && mismatch->has_data());
}

bool Controller::Fabric::Oper::Link::Rack::Port::Tx::State::has_operation() const
{
    return is_set(yfilter)
	|| (up !=  nullptr && up->has_operation())
	|| (down !=  nullptr && down->has_operation())
	|| (mismatch !=  nullptr && mismatch->has_operation());
}

std::string Controller::Fabric::Oper::Link::Rack::Port::Tx::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Link::Rack::Port::Tx::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::Fabric::Oper::Link::Rack::Port::Tx::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "up")
    {
        if(up == nullptr)
        {
            up = std::make_shared<Controller::Fabric::Oper::Link::Rack::Port::Tx::State::Up>();
        }
        return up;
    }

    if(child_yang_name == "down")
    {
        if(down == nullptr)
        {
            down = std::make_shared<Controller::Fabric::Oper::Link::Rack::Port::Tx::State::Down>();
        }
        return down;
    }

    if(child_yang_name == "mismatch")
    {
        if(mismatch == nullptr)
        {
            mismatch = std::make_shared<Controller::Fabric::Oper::Link::Rack::Port::Tx::State::Mismatch>();
        }
        return mismatch;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Fabric::Oper::Link::Rack::Port::Tx::State::get_children() const
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

void Controller::Fabric::Oper::Link::Rack::Port::Tx::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::Fabric::Oper::Link::Rack::Port::Tx::State::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::Fabric::Oper::Link::Rack::Port::Tx::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "up" || name == "down" || name == "mismatch")
        return true;
    return false;
}

Controller::Fabric::Oper::Link::Rack::Port::Tx::State::Up::Up()
    :
    data_idx(this, {"port_data_idx"})
    , brief(std::make_shared<Controller::Fabric::Oper::Link::Rack::Port::Tx::State::Up::Brief>())
    , detail(std::make_shared<Controller::Fabric::Oper::Link::Rack::Port::Tx::State::Up::Detail>())
{
    brief->parent = this;
    detail->parent = this;

    yang_name = "up"; yang_parent_name = "state"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::Fabric::Oper::Link::Rack::Port::Tx::State::Up::~Up()
{
}

bool Controller::Fabric::Oper::Link::Rack::Port::Tx::State::Up::has_data() const
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

bool Controller::Fabric::Oper::Link::Rack::Port::Tx::State::Up::has_operation() const
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

std::string Controller::Fabric::Oper::Link::Rack::Port::Tx::State::Up::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "up";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Link::Rack::Port::Tx::State::Up::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::Fabric::Oper::Link::Rack::Port::Tx::State::Up::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "data_idx")
    {
        auto ent_ = std::make_shared<Controller::Fabric::Oper::Link::Rack::Port::Tx::State::Up::DataIdx>();
        ent_->parent = this;
        data_idx.append(ent_);
        return ent_;
    }

    if(child_yang_name == "brief")
    {
        if(brief == nullptr)
        {
            brief = std::make_shared<Controller::Fabric::Oper::Link::Rack::Port::Tx::State::Up::Brief>();
        }
        return brief;
    }

    if(child_yang_name == "detail")
    {
        if(detail == nullptr)
        {
            detail = std::make_shared<Controller::Fabric::Oper::Link::Rack::Port::Tx::State::Up::Detail>();
        }
        return detail;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Fabric::Oper::Link::Rack::Port::Tx::State::Up::get_children() const
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

void Controller::Fabric::Oper::Link::Rack::Port::Tx::State::Up::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::Fabric::Oper::Link::Rack::Port::Tx::State::Up::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::Fabric::Oper::Link::Rack::Port::Tx::State::Up::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data_idx" || name == "brief" || name == "detail")
        return true;
    return false;
}

Controller::Fabric::Oper::Link::Rack::Port::Tx::State::Up::DataIdx::DataIdx()
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

Controller::Fabric::Oper::Link::Rack::Port::Tx::State::Up::DataIdx::~DataIdx()
{
}

bool Controller::Fabric::Oper::Link::Rack::Port::Tx::State::Up::DataIdx::has_data() const
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

bool Controller::Fabric::Oper::Link::Rack::Port::Tx::State::Up::DataIdx::has_operation() const
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

std::string Controller::Fabric::Oper::Link::Rack::Port::Tx::State::Up::DataIdx::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "data_idx";
    ADD_KEY_TOKEN(port_data_idx, "port_data_idx");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Link::Rack::Port::Tx::State::Up::DataIdx::get_name_leaf_data() const
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

std::shared_ptr<ydk::Entity> Controller::Fabric::Oper::Link::Rack::Port::Tx::State::Up::DataIdx::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "history")
    {
        auto ent_ = std::make_shared<Controller::Fabric::Oper::Link::Rack::Port::Tx::State::Up::DataIdx::History>();
        ent_->parent = this;
        history.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Fabric::Oper::Link::Rack::Port::Tx::State::Up::DataIdx::get_children() const
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

void Controller::Fabric::Oper::Link::Rack::Port::Tx::State::Up::DataIdx::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Controller::Fabric::Oper::Link::Rack::Port::Tx::State::Up::DataIdx::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Controller::Fabric::Oper::Link::Rack::Port::Tx::State::Up::DataIdx::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "history" || name == "port_data_idx" || name == "sfe_port" || name == "admin-state" || name == "oper_state" || name == "near_end_cdr_ln" || name == "near_end_cxp_ch" || name == "far_end_cxp_ch" || name == "far_end_cdr_ln" || name == "neighbor_link")
        return true;
    return false;
}

Controller::Fabric::Oper::Link::Rack::Port::Tx::State::Up::DataIdx::History::History()
    :
    history_idx{YType::int32, "history_idx"},
    time_stamp{YType::str, "time_stamp"},
    admin_state{YType::str, "admin-state"},
    oper_state{YType::str, "oper_state"},
    error_state{YType::str, "error_state"}
{

    yang_name = "history"; yang_parent_name = "data_idx"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::Fabric::Oper::Link::Rack::Port::Tx::State::Up::DataIdx::History::~History()
{
}

bool Controller::Fabric::Oper::Link::Rack::Port::Tx::State::Up::DataIdx::History::has_data() const
{
    if (is_presence_container) return true;
    return history_idx.is_set
	|| time_stamp.is_set
	|| admin_state.is_set
	|| oper_state.is_set
	|| error_state.is_set;
}

bool Controller::Fabric::Oper::Link::Rack::Port::Tx::State::Up::DataIdx::History::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(history_idx.yfilter)
	|| ydk::is_set(time_stamp.yfilter)
	|| ydk::is_set(admin_state.yfilter)
	|| ydk::is_set(oper_state.yfilter)
	|| ydk::is_set(error_state.yfilter);
}

std::string Controller::Fabric::Oper::Link::Rack::Port::Tx::State::Up::DataIdx::History::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "history";
    ADD_KEY_TOKEN(history_idx, "history_idx");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Link::Rack::Port::Tx::State::Up::DataIdx::History::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (history_idx.is_set || is_set(history_idx.yfilter)) leaf_name_data.push_back(history_idx.get_name_leafdata());
    if (time_stamp.is_set || is_set(time_stamp.yfilter)) leaf_name_data.push_back(time_stamp.get_name_leafdata());
    if (admin_state.is_set || is_set(admin_state.yfilter)) leaf_name_data.push_back(admin_state.get_name_leafdata());
    if (oper_state.is_set || is_set(oper_state.yfilter)) leaf_name_data.push_back(oper_state.get_name_leafdata());
    if (error_state.is_set || is_set(error_state.yfilter)) leaf_name_data.push_back(error_state.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::Fabric::Oper::Link::Rack::Port::Tx::State::Up::DataIdx::History::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Fabric::Oper::Link::Rack::Port::Tx::State::Up::DataIdx::History::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Controller::Fabric::Oper::Link::Rack::Port::Tx::State::Up::DataIdx::History::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Controller::Fabric::Oper::Link::Rack::Port::Tx::State::Up::DataIdx::History::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Controller::Fabric::Oper::Link::Rack::Port::Tx::State::Up::DataIdx::History::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "history_idx" || name == "time_stamp" || name == "admin-state" || name == "oper_state" || name == "error_state")
        return true;
    return false;
}

Controller::Fabric::Oper::Link::Rack::Port::Tx::State::Up::Brief::Brief()
    :
    data_idx(this, {"port_data_idx"})
{

    yang_name = "brief"; yang_parent_name = "up"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::Fabric::Oper::Link::Rack::Port::Tx::State::Up::Brief::~Brief()
{
}

bool Controller::Fabric::Oper::Link::Rack::Port::Tx::State::Up::Brief::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<data_idx.len(); index++)
    {
        if(data_idx[index]->has_data())
            return true;
    }
    return false;
}

bool Controller::Fabric::Oper::Link::Rack::Port::Tx::State::Up::Brief::has_operation() const
{
    for (std::size_t index=0; index<data_idx.len(); index++)
    {
        if(data_idx[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Controller::Fabric::Oper::Link::Rack::Port::Tx::State::Up::Brief::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "brief";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Link::Rack::Port::Tx::State::Up::Brief::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::Fabric::Oper::Link::Rack::Port::Tx::State::Up::Brief::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "data_idx")
    {
        auto ent_ = std::make_shared<Controller::Fabric::Oper::Link::Rack::Port::Tx::State::Up::Brief::DataIdx>();
        ent_->parent = this;
        data_idx.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Fabric::Oper::Link::Rack::Port::Tx::State::Up::Brief::get_children() const
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

void Controller::Fabric::Oper::Link::Rack::Port::Tx::State::Up::Brief::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::Fabric::Oper::Link::Rack::Port::Tx::State::Up::Brief::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::Fabric::Oper::Link::Rack::Port::Tx::State::Up::Brief::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data_idx")
        return true;
    return false;
}

Controller::Fabric::Oper::Link::Rack::Port::Tx::State::Up::Brief::DataIdx::DataIdx()
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

Controller::Fabric::Oper::Link::Rack::Port::Tx::State::Up::Brief::DataIdx::~DataIdx()
{
}

bool Controller::Fabric::Oper::Link::Rack::Port::Tx::State::Up::Brief::DataIdx::has_data() const
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

bool Controller::Fabric::Oper::Link::Rack::Port::Tx::State::Up::Brief::DataIdx::has_operation() const
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

std::string Controller::Fabric::Oper::Link::Rack::Port::Tx::State::Up::Brief::DataIdx::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "data_idx";
    ADD_KEY_TOKEN(port_data_idx, "port_data_idx");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Link::Rack::Port::Tx::State::Up::Brief::DataIdx::get_name_leaf_data() const
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

std::shared_ptr<ydk::Entity> Controller::Fabric::Oper::Link::Rack::Port::Tx::State::Up::Brief::DataIdx::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "history")
    {
        auto ent_ = std::make_shared<Controller::Fabric::Oper::Link::Rack::Port::Tx::State::Up::Brief::DataIdx::History>();
        ent_->parent = this;
        history.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Fabric::Oper::Link::Rack::Port::Tx::State::Up::Brief::DataIdx::get_children() const
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

void Controller::Fabric::Oper::Link::Rack::Port::Tx::State::Up::Brief::DataIdx::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Controller::Fabric::Oper::Link::Rack::Port::Tx::State::Up::Brief::DataIdx::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Controller::Fabric::Oper::Link::Rack::Port::Tx::State::Up::Brief::DataIdx::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "history" || name == "port_data_idx" || name == "sfe_port" || name == "admin-state" || name == "oper_state" || name == "near_end_cdr_ln" || name == "near_end_cxp_ch" || name == "far_end_cxp_ch" || name == "far_end_cdr_ln" || name == "neighbor_link")
        return true;
    return false;
}

Controller::Fabric::Oper::Link::Rack::Port::Tx::State::Up::Brief::DataIdx::History::History()
    :
    history_idx{YType::int32, "history_idx"},
    time_stamp{YType::str, "time_stamp"},
    admin_state{YType::str, "admin-state"},
    oper_state{YType::str, "oper_state"},
    error_state{YType::str, "error_state"}
{

    yang_name = "history"; yang_parent_name = "data_idx"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::Fabric::Oper::Link::Rack::Port::Tx::State::Up::Brief::DataIdx::History::~History()
{
}

bool Controller::Fabric::Oper::Link::Rack::Port::Tx::State::Up::Brief::DataIdx::History::has_data() const
{
    if (is_presence_container) return true;
    return history_idx.is_set
	|| time_stamp.is_set
	|| admin_state.is_set
	|| oper_state.is_set
	|| error_state.is_set;
}

bool Controller::Fabric::Oper::Link::Rack::Port::Tx::State::Up::Brief::DataIdx::History::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(history_idx.yfilter)
	|| ydk::is_set(time_stamp.yfilter)
	|| ydk::is_set(admin_state.yfilter)
	|| ydk::is_set(oper_state.yfilter)
	|| ydk::is_set(error_state.yfilter);
}

std::string Controller::Fabric::Oper::Link::Rack::Port::Tx::State::Up::Brief::DataIdx::History::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "history";
    ADD_KEY_TOKEN(history_idx, "history_idx");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Link::Rack::Port::Tx::State::Up::Brief::DataIdx::History::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (history_idx.is_set || is_set(history_idx.yfilter)) leaf_name_data.push_back(history_idx.get_name_leafdata());
    if (time_stamp.is_set || is_set(time_stamp.yfilter)) leaf_name_data.push_back(time_stamp.get_name_leafdata());
    if (admin_state.is_set || is_set(admin_state.yfilter)) leaf_name_data.push_back(admin_state.get_name_leafdata());
    if (oper_state.is_set || is_set(oper_state.yfilter)) leaf_name_data.push_back(oper_state.get_name_leafdata());
    if (error_state.is_set || is_set(error_state.yfilter)) leaf_name_data.push_back(error_state.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::Fabric::Oper::Link::Rack::Port::Tx::State::Up::Brief::DataIdx::History::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Fabric::Oper::Link::Rack::Port::Tx::State::Up::Brief::DataIdx::History::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Controller::Fabric::Oper::Link::Rack::Port::Tx::State::Up::Brief::DataIdx::History::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Controller::Fabric::Oper::Link::Rack::Port::Tx::State::Up::Brief::DataIdx::History::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Controller::Fabric::Oper::Link::Rack::Port::Tx::State::Up::Brief::DataIdx::History::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "history_idx" || name == "time_stamp" || name == "admin-state" || name == "oper_state" || name == "error_state")
        return true;
    return false;
}

Controller::Fabric::Oper::Link::Rack::Port::Tx::State::Up::Detail::Detail()
    :
    data_idx(this, {"port_data_idx"})
{

    yang_name = "detail"; yang_parent_name = "up"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::Fabric::Oper::Link::Rack::Port::Tx::State::Up::Detail::~Detail()
{
}

bool Controller::Fabric::Oper::Link::Rack::Port::Tx::State::Up::Detail::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<data_idx.len(); index++)
    {
        if(data_idx[index]->has_data())
            return true;
    }
    return false;
}

bool Controller::Fabric::Oper::Link::Rack::Port::Tx::State::Up::Detail::has_operation() const
{
    for (std::size_t index=0; index<data_idx.len(); index++)
    {
        if(data_idx[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Controller::Fabric::Oper::Link::Rack::Port::Tx::State::Up::Detail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "detail";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Link::Rack::Port::Tx::State::Up::Detail::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::Fabric::Oper::Link::Rack::Port::Tx::State::Up::Detail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "data_idx")
    {
        auto ent_ = std::make_shared<Controller::Fabric::Oper::Link::Rack::Port::Tx::State::Up::Detail::DataIdx>();
        ent_->parent = this;
        data_idx.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Fabric::Oper::Link::Rack::Port::Tx::State::Up::Detail::get_children() const
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

void Controller::Fabric::Oper::Link::Rack::Port::Tx::State::Up::Detail::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::Fabric::Oper::Link::Rack::Port::Tx::State::Up::Detail::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::Fabric::Oper::Link::Rack::Port::Tx::State::Up::Detail::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data_idx")
        return true;
    return false;
}

Controller::Fabric::Oper::Link::Rack::Port::Tx::State::Up::Detail::DataIdx::DataIdx()
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

Controller::Fabric::Oper::Link::Rack::Port::Tx::State::Up::Detail::DataIdx::~DataIdx()
{
}

bool Controller::Fabric::Oper::Link::Rack::Port::Tx::State::Up::Detail::DataIdx::has_data() const
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

bool Controller::Fabric::Oper::Link::Rack::Port::Tx::State::Up::Detail::DataIdx::has_operation() const
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

std::string Controller::Fabric::Oper::Link::Rack::Port::Tx::State::Up::Detail::DataIdx::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "data_idx";
    ADD_KEY_TOKEN(port_data_idx, "port_data_idx");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Link::Rack::Port::Tx::State::Up::Detail::DataIdx::get_name_leaf_data() const
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

std::shared_ptr<ydk::Entity> Controller::Fabric::Oper::Link::Rack::Port::Tx::State::Up::Detail::DataIdx::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "history")
    {
        auto ent_ = std::make_shared<Controller::Fabric::Oper::Link::Rack::Port::Tx::State::Up::Detail::DataIdx::History>();
        ent_->parent = this;
        history.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Fabric::Oper::Link::Rack::Port::Tx::State::Up::Detail::DataIdx::get_children() const
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

void Controller::Fabric::Oper::Link::Rack::Port::Tx::State::Up::Detail::DataIdx::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Controller::Fabric::Oper::Link::Rack::Port::Tx::State::Up::Detail::DataIdx::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Controller::Fabric::Oper::Link::Rack::Port::Tx::State::Up::Detail::DataIdx::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "history" || name == "port_data_idx" || name == "sfe_port" || name == "admin-state" || name == "oper_state" || name == "near_end_cdr_ln" || name == "near_end_cxp_ch" || name == "far_end_cxp_ch" || name == "far_end_cdr_ln" || name == "neighbor_link")
        return true;
    return false;
}

Controller::Fabric::Oper::Link::Rack::Port::Tx::State::Up::Detail::DataIdx::History::History()
    :
    history_idx{YType::int32, "history_idx"},
    time_stamp{YType::str, "time_stamp"},
    admin_state{YType::str, "admin-state"},
    oper_state{YType::str, "oper_state"},
    error_state{YType::str, "error_state"}
{

    yang_name = "history"; yang_parent_name = "data_idx"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::Fabric::Oper::Link::Rack::Port::Tx::State::Up::Detail::DataIdx::History::~History()
{
}

bool Controller::Fabric::Oper::Link::Rack::Port::Tx::State::Up::Detail::DataIdx::History::has_data() const
{
    if (is_presence_container) return true;
    return history_idx.is_set
	|| time_stamp.is_set
	|| admin_state.is_set
	|| oper_state.is_set
	|| error_state.is_set;
}

bool Controller::Fabric::Oper::Link::Rack::Port::Tx::State::Up::Detail::DataIdx::History::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(history_idx.yfilter)
	|| ydk::is_set(time_stamp.yfilter)
	|| ydk::is_set(admin_state.yfilter)
	|| ydk::is_set(oper_state.yfilter)
	|| ydk::is_set(error_state.yfilter);
}

std::string Controller::Fabric::Oper::Link::Rack::Port::Tx::State::Up::Detail::DataIdx::History::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "history";
    ADD_KEY_TOKEN(history_idx, "history_idx");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Link::Rack::Port::Tx::State::Up::Detail::DataIdx::History::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (history_idx.is_set || is_set(history_idx.yfilter)) leaf_name_data.push_back(history_idx.get_name_leafdata());
    if (time_stamp.is_set || is_set(time_stamp.yfilter)) leaf_name_data.push_back(time_stamp.get_name_leafdata());
    if (admin_state.is_set || is_set(admin_state.yfilter)) leaf_name_data.push_back(admin_state.get_name_leafdata());
    if (oper_state.is_set || is_set(oper_state.yfilter)) leaf_name_data.push_back(oper_state.get_name_leafdata());
    if (error_state.is_set || is_set(error_state.yfilter)) leaf_name_data.push_back(error_state.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::Fabric::Oper::Link::Rack::Port::Tx::State::Up::Detail::DataIdx::History::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Fabric::Oper::Link::Rack::Port::Tx::State::Up::Detail::DataIdx::History::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Controller::Fabric::Oper::Link::Rack::Port::Tx::State::Up::Detail::DataIdx::History::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Controller::Fabric::Oper::Link::Rack::Port::Tx::State::Up::Detail::DataIdx::History::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Controller::Fabric::Oper::Link::Rack::Port::Tx::State::Up::Detail::DataIdx::History::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "history_idx" || name == "time_stamp" || name == "admin-state" || name == "oper_state" || name == "error_state")
        return true;
    return false;
}

Controller::Fabric::Oper::Link::Rack::Port::Tx::State::Down::Down()
    :
    data_idx(this, {"port_data_idx"})
    , brief(std::make_shared<Controller::Fabric::Oper::Link::Rack::Port::Tx::State::Down::Brief>())
    , detail(std::make_shared<Controller::Fabric::Oper::Link::Rack::Port::Tx::State::Down::Detail>())
{
    brief->parent = this;
    detail->parent = this;

    yang_name = "down"; yang_parent_name = "state"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::Fabric::Oper::Link::Rack::Port::Tx::State::Down::~Down()
{
}

bool Controller::Fabric::Oper::Link::Rack::Port::Tx::State::Down::has_data() const
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

bool Controller::Fabric::Oper::Link::Rack::Port::Tx::State::Down::has_operation() const
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

std::string Controller::Fabric::Oper::Link::Rack::Port::Tx::State::Down::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "down";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Link::Rack::Port::Tx::State::Down::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::Fabric::Oper::Link::Rack::Port::Tx::State::Down::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "data_idx")
    {
        auto ent_ = std::make_shared<Controller::Fabric::Oper::Link::Rack::Port::Tx::State::Down::DataIdx>();
        ent_->parent = this;
        data_idx.append(ent_);
        return ent_;
    }

    if(child_yang_name == "brief")
    {
        if(brief == nullptr)
        {
            brief = std::make_shared<Controller::Fabric::Oper::Link::Rack::Port::Tx::State::Down::Brief>();
        }
        return brief;
    }

    if(child_yang_name == "detail")
    {
        if(detail == nullptr)
        {
            detail = std::make_shared<Controller::Fabric::Oper::Link::Rack::Port::Tx::State::Down::Detail>();
        }
        return detail;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Fabric::Oper::Link::Rack::Port::Tx::State::Down::get_children() const
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

void Controller::Fabric::Oper::Link::Rack::Port::Tx::State::Down::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::Fabric::Oper::Link::Rack::Port::Tx::State::Down::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::Fabric::Oper::Link::Rack::Port::Tx::State::Down::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data_idx" || name == "brief" || name == "detail")
        return true;
    return false;
}

Controller::Fabric::Oper::Link::Rack::Port::Tx::State::Down::DataIdx::DataIdx()
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

Controller::Fabric::Oper::Link::Rack::Port::Tx::State::Down::DataIdx::~DataIdx()
{
}

bool Controller::Fabric::Oper::Link::Rack::Port::Tx::State::Down::DataIdx::has_data() const
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

bool Controller::Fabric::Oper::Link::Rack::Port::Tx::State::Down::DataIdx::has_operation() const
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

std::string Controller::Fabric::Oper::Link::Rack::Port::Tx::State::Down::DataIdx::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "data_idx";
    ADD_KEY_TOKEN(port_data_idx, "port_data_idx");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Link::Rack::Port::Tx::State::Down::DataIdx::get_name_leaf_data() const
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

std::shared_ptr<ydk::Entity> Controller::Fabric::Oper::Link::Rack::Port::Tx::State::Down::DataIdx::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "history")
    {
        auto ent_ = std::make_shared<Controller::Fabric::Oper::Link::Rack::Port::Tx::State::Down::DataIdx::History>();
        ent_->parent = this;
        history.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Fabric::Oper::Link::Rack::Port::Tx::State::Down::DataIdx::get_children() const
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

void Controller::Fabric::Oper::Link::Rack::Port::Tx::State::Down::DataIdx::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Controller::Fabric::Oper::Link::Rack::Port::Tx::State::Down::DataIdx::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Controller::Fabric::Oper::Link::Rack::Port::Tx::State::Down::DataIdx::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "history" || name == "port_data_idx" || name == "sfe_port" || name == "admin-state" || name == "oper_state" || name == "near_end_cdr_ln" || name == "near_end_cxp_ch" || name == "far_end_cxp_ch" || name == "far_end_cdr_ln" || name == "neighbor_link")
        return true;
    return false;
}

Controller::Fabric::Oper::Link::Rack::Port::Tx::State::Down::DataIdx::History::History()
    :
    history_idx{YType::int32, "history_idx"},
    time_stamp{YType::str, "time_stamp"},
    admin_state{YType::str, "admin-state"},
    oper_state{YType::str, "oper_state"},
    error_state{YType::str, "error_state"}
{

    yang_name = "history"; yang_parent_name = "data_idx"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::Fabric::Oper::Link::Rack::Port::Tx::State::Down::DataIdx::History::~History()
{
}

bool Controller::Fabric::Oper::Link::Rack::Port::Tx::State::Down::DataIdx::History::has_data() const
{
    if (is_presence_container) return true;
    return history_idx.is_set
	|| time_stamp.is_set
	|| admin_state.is_set
	|| oper_state.is_set
	|| error_state.is_set;
}

bool Controller::Fabric::Oper::Link::Rack::Port::Tx::State::Down::DataIdx::History::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(history_idx.yfilter)
	|| ydk::is_set(time_stamp.yfilter)
	|| ydk::is_set(admin_state.yfilter)
	|| ydk::is_set(oper_state.yfilter)
	|| ydk::is_set(error_state.yfilter);
}

std::string Controller::Fabric::Oper::Link::Rack::Port::Tx::State::Down::DataIdx::History::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "history";
    ADD_KEY_TOKEN(history_idx, "history_idx");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Link::Rack::Port::Tx::State::Down::DataIdx::History::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (history_idx.is_set || is_set(history_idx.yfilter)) leaf_name_data.push_back(history_idx.get_name_leafdata());
    if (time_stamp.is_set || is_set(time_stamp.yfilter)) leaf_name_data.push_back(time_stamp.get_name_leafdata());
    if (admin_state.is_set || is_set(admin_state.yfilter)) leaf_name_data.push_back(admin_state.get_name_leafdata());
    if (oper_state.is_set || is_set(oper_state.yfilter)) leaf_name_data.push_back(oper_state.get_name_leafdata());
    if (error_state.is_set || is_set(error_state.yfilter)) leaf_name_data.push_back(error_state.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::Fabric::Oper::Link::Rack::Port::Tx::State::Down::DataIdx::History::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Fabric::Oper::Link::Rack::Port::Tx::State::Down::DataIdx::History::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Controller::Fabric::Oper::Link::Rack::Port::Tx::State::Down::DataIdx::History::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Controller::Fabric::Oper::Link::Rack::Port::Tx::State::Down::DataIdx::History::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Controller::Fabric::Oper::Link::Rack::Port::Tx::State::Down::DataIdx::History::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "history_idx" || name == "time_stamp" || name == "admin-state" || name == "oper_state" || name == "error_state")
        return true;
    return false;
}

Controller::Fabric::Oper::Link::Rack::Port::Tx::State::Down::Brief::Brief()
    :
    data_idx(this, {"port_data_idx"})
{

    yang_name = "brief"; yang_parent_name = "down"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::Fabric::Oper::Link::Rack::Port::Tx::State::Down::Brief::~Brief()
{
}

bool Controller::Fabric::Oper::Link::Rack::Port::Tx::State::Down::Brief::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<data_idx.len(); index++)
    {
        if(data_idx[index]->has_data())
            return true;
    }
    return false;
}

bool Controller::Fabric::Oper::Link::Rack::Port::Tx::State::Down::Brief::has_operation() const
{
    for (std::size_t index=0; index<data_idx.len(); index++)
    {
        if(data_idx[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Controller::Fabric::Oper::Link::Rack::Port::Tx::State::Down::Brief::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "brief";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Link::Rack::Port::Tx::State::Down::Brief::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::Fabric::Oper::Link::Rack::Port::Tx::State::Down::Brief::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "data_idx")
    {
        auto ent_ = std::make_shared<Controller::Fabric::Oper::Link::Rack::Port::Tx::State::Down::Brief::DataIdx>();
        ent_->parent = this;
        data_idx.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Fabric::Oper::Link::Rack::Port::Tx::State::Down::Brief::get_children() const
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

void Controller::Fabric::Oper::Link::Rack::Port::Tx::State::Down::Brief::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::Fabric::Oper::Link::Rack::Port::Tx::State::Down::Brief::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::Fabric::Oper::Link::Rack::Port::Tx::State::Down::Brief::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data_idx")
        return true;
    return false;
}

Controller::Fabric::Oper::Link::Rack::Port::Tx::State::Down::Brief::DataIdx::DataIdx()
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

Controller::Fabric::Oper::Link::Rack::Port::Tx::State::Down::Brief::DataIdx::~DataIdx()
{
}

bool Controller::Fabric::Oper::Link::Rack::Port::Tx::State::Down::Brief::DataIdx::has_data() const
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

bool Controller::Fabric::Oper::Link::Rack::Port::Tx::State::Down::Brief::DataIdx::has_operation() const
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

std::string Controller::Fabric::Oper::Link::Rack::Port::Tx::State::Down::Brief::DataIdx::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "data_idx";
    ADD_KEY_TOKEN(port_data_idx, "port_data_idx");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Link::Rack::Port::Tx::State::Down::Brief::DataIdx::get_name_leaf_data() const
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

std::shared_ptr<ydk::Entity> Controller::Fabric::Oper::Link::Rack::Port::Tx::State::Down::Brief::DataIdx::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "history")
    {
        auto ent_ = std::make_shared<Controller::Fabric::Oper::Link::Rack::Port::Tx::State::Down::Brief::DataIdx::History>();
        ent_->parent = this;
        history.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Fabric::Oper::Link::Rack::Port::Tx::State::Down::Brief::DataIdx::get_children() const
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

void Controller::Fabric::Oper::Link::Rack::Port::Tx::State::Down::Brief::DataIdx::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Controller::Fabric::Oper::Link::Rack::Port::Tx::State::Down::Brief::DataIdx::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Controller::Fabric::Oper::Link::Rack::Port::Tx::State::Down::Brief::DataIdx::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "history" || name == "port_data_idx" || name == "sfe_port" || name == "admin-state" || name == "oper_state" || name == "near_end_cdr_ln" || name == "near_end_cxp_ch" || name == "far_end_cxp_ch" || name == "far_end_cdr_ln" || name == "neighbor_link")
        return true;
    return false;
}

Controller::Fabric::Oper::Link::Rack::Port::Tx::State::Down::Brief::DataIdx::History::History()
    :
    history_idx{YType::int32, "history_idx"},
    time_stamp{YType::str, "time_stamp"},
    admin_state{YType::str, "admin-state"},
    oper_state{YType::str, "oper_state"},
    error_state{YType::str, "error_state"}
{

    yang_name = "history"; yang_parent_name = "data_idx"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::Fabric::Oper::Link::Rack::Port::Tx::State::Down::Brief::DataIdx::History::~History()
{
}

bool Controller::Fabric::Oper::Link::Rack::Port::Tx::State::Down::Brief::DataIdx::History::has_data() const
{
    if (is_presence_container) return true;
    return history_idx.is_set
	|| time_stamp.is_set
	|| admin_state.is_set
	|| oper_state.is_set
	|| error_state.is_set;
}

bool Controller::Fabric::Oper::Link::Rack::Port::Tx::State::Down::Brief::DataIdx::History::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(history_idx.yfilter)
	|| ydk::is_set(time_stamp.yfilter)
	|| ydk::is_set(admin_state.yfilter)
	|| ydk::is_set(oper_state.yfilter)
	|| ydk::is_set(error_state.yfilter);
}

std::string Controller::Fabric::Oper::Link::Rack::Port::Tx::State::Down::Brief::DataIdx::History::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "history";
    ADD_KEY_TOKEN(history_idx, "history_idx");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Link::Rack::Port::Tx::State::Down::Brief::DataIdx::History::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (history_idx.is_set || is_set(history_idx.yfilter)) leaf_name_data.push_back(history_idx.get_name_leafdata());
    if (time_stamp.is_set || is_set(time_stamp.yfilter)) leaf_name_data.push_back(time_stamp.get_name_leafdata());
    if (admin_state.is_set || is_set(admin_state.yfilter)) leaf_name_data.push_back(admin_state.get_name_leafdata());
    if (oper_state.is_set || is_set(oper_state.yfilter)) leaf_name_data.push_back(oper_state.get_name_leafdata());
    if (error_state.is_set || is_set(error_state.yfilter)) leaf_name_data.push_back(error_state.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::Fabric::Oper::Link::Rack::Port::Tx::State::Down::Brief::DataIdx::History::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Fabric::Oper::Link::Rack::Port::Tx::State::Down::Brief::DataIdx::History::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Controller::Fabric::Oper::Link::Rack::Port::Tx::State::Down::Brief::DataIdx::History::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Controller::Fabric::Oper::Link::Rack::Port::Tx::State::Down::Brief::DataIdx::History::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Controller::Fabric::Oper::Link::Rack::Port::Tx::State::Down::Brief::DataIdx::History::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "history_idx" || name == "time_stamp" || name == "admin-state" || name == "oper_state" || name == "error_state")
        return true;
    return false;
}

Controller::Fabric::Oper::Link::Rack::Port::Tx::State::Down::Detail::Detail()
    :
    data_idx(this, {"port_data_idx"})
{

    yang_name = "detail"; yang_parent_name = "down"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::Fabric::Oper::Link::Rack::Port::Tx::State::Down::Detail::~Detail()
{
}

bool Controller::Fabric::Oper::Link::Rack::Port::Tx::State::Down::Detail::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<data_idx.len(); index++)
    {
        if(data_idx[index]->has_data())
            return true;
    }
    return false;
}

bool Controller::Fabric::Oper::Link::Rack::Port::Tx::State::Down::Detail::has_operation() const
{
    for (std::size_t index=0; index<data_idx.len(); index++)
    {
        if(data_idx[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Controller::Fabric::Oper::Link::Rack::Port::Tx::State::Down::Detail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "detail";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Link::Rack::Port::Tx::State::Down::Detail::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::Fabric::Oper::Link::Rack::Port::Tx::State::Down::Detail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "data_idx")
    {
        auto ent_ = std::make_shared<Controller::Fabric::Oper::Link::Rack::Port::Tx::State::Down::Detail::DataIdx>();
        ent_->parent = this;
        data_idx.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Fabric::Oper::Link::Rack::Port::Tx::State::Down::Detail::get_children() const
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

void Controller::Fabric::Oper::Link::Rack::Port::Tx::State::Down::Detail::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::Fabric::Oper::Link::Rack::Port::Tx::State::Down::Detail::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::Fabric::Oper::Link::Rack::Port::Tx::State::Down::Detail::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data_idx")
        return true;
    return false;
}

Controller::Fabric::Oper::Link::Rack::Port::Tx::State::Down::Detail::DataIdx::DataIdx()
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

Controller::Fabric::Oper::Link::Rack::Port::Tx::State::Down::Detail::DataIdx::~DataIdx()
{
}

bool Controller::Fabric::Oper::Link::Rack::Port::Tx::State::Down::Detail::DataIdx::has_data() const
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

bool Controller::Fabric::Oper::Link::Rack::Port::Tx::State::Down::Detail::DataIdx::has_operation() const
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

std::string Controller::Fabric::Oper::Link::Rack::Port::Tx::State::Down::Detail::DataIdx::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "data_idx";
    ADD_KEY_TOKEN(port_data_idx, "port_data_idx");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Link::Rack::Port::Tx::State::Down::Detail::DataIdx::get_name_leaf_data() const
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

std::shared_ptr<ydk::Entity> Controller::Fabric::Oper::Link::Rack::Port::Tx::State::Down::Detail::DataIdx::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "history")
    {
        auto ent_ = std::make_shared<Controller::Fabric::Oper::Link::Rack::Port::Tx::State::Down::Detail::DataIdx::History>();
        ent_->parent = this;
        history.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Fabric::Oper::Link::Rack::Port::Tx::State::Down::Detail::DataIdx::get_children() const
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

void Controller::Fabric::Oper::Link::Rack::Port::Tx::State::Down::Detail::DataIdx::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Controller::Fabric::Oper::Link::Rack::Port::Tx::State::Down::Detail::DataIdx::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Controller::Fabric::Oper::Link::Rack::Port::Tx::State::Down::Detail::DataIdx::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "history" || name == "port_data_idx" || name == "sfe_port" || name == "admin-state" || name == "oper_state" || name == "near_end_cdr_ln" || name == "near_end_cxp_ch" || name == "far_end_cxp_ch" || name == "far_end_cdr_ln" || name == "neighbor_link")
        return true;
    return false;
}

Controller::Fabric::Oper::Link::Rack::Port::Tx::State::Down::Detail::DataIdx::History::History()
    :
    history_idx{YType::int32, "history_idx"},
    time_stamp{YType::str, "time_stamp"},
    admin_state{YType::str, "admin-state"},
    oper_state{YType::str, "oper_state"},
    error_state{YType::str, "error_state"}
{

    yang_name = "history"; yang_parent_name = "data_idx"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::Fabric::Oper::Link::Rack::Port::Tx::State::Down::Detail::DataIdx::History::~History()
{
}

bool Controller::Fabric::Oper::Link::Rack::Port::Tx::State::Down::Detail::DataIdx::History::has_data() const
{
    if (is_presence_container) return true;
    return history_idx.is_set
	|| time_stamp.is_set
	|| admin_state.is_set
	|| oper_state.is_set
	|| error_state.is_set;
}

bool Controller::Fabric::Oper::Link::Rack::Port::Tx::State::Down::Detail::DataIdx::History::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(history_idx.yfilter)
	|| ydk::is_set(time_stamp.yfilter)
	|| ydk::is_set(admin_state.yfilter)
	|| ydk::is_set(oper_state.yfilter)
	|| ydk::is_set(error_state.yfilter);
}

std::string Controller::Fabric::Oper::Link::Rack::Port::Tx::State::Down::Detail::DataIdx::History::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "history";
    ADD_KEY_TOKEN(history_idx, "history_idx");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Link::Rack::Port::Tx::State::Down::Detail::DataIdx::History::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (history_idx.is_set || is_set(history_idx.yfilter)) leaf_name_data.push_back(history_idx.get_name_leafdata());
    if (time_stamp.is_set || is_set(time_stamp.yfilter)) leaf_name_data.push_back(time_stamp.get_name_leafdata());
    if (admin_state.is_set || is_set(admin_state.yfilter)) leaf_name_data.push_back(admin_state.get_name_leafdata());
    if (oper_state.is_set || is_set(oper_state.yfilter)) leaf_name_data.push_back(oper_state.get_name_leafdata());
    if (error_state.is_set || is_set(error_state.yfilter)) leaf_name_data.push_back(error_state.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::Fabric::Oper::Link::Rack::Port::Tx::State::Down::Detail::DataIdx::History::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Fabric::Oper::Link::Rack::Port::Tx::State::Down::Detail::DataIdx::History::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Controller::Fabric::Oper::Link::Rack::Port::Tx::State::Down::Detail::DataIdx::History::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Controller::Fabric::Oper::Link::Rack::Port::Tx::State::Down::Detail::DataIdx::History::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Controller::Fabric::Oper::Link::Rack::Port::Tx::State::Down::Detail::DataIdx::History::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "history_idx" || name == "time_stamp" || name == "admin-state" || name == "oper_state" || name == "error_state")
        return true;
    return false;
}

Controller::Fabric::Oper::Link::Rack::Port::Tx::State::Mismatch::Mismatch()
    :
    data_idx(this, {"port_data_idx"})
    , brief(std::make_shared<Controller::Fabric::Oper::Link::Rack::Port::Tx::State::Mismatch::Brief>())
    , detail(std::make_shared<Controller::Fabric::Oper::Link::Rack::Port::Tx::State::Mismatch::Detail>())
{
    brief->parent = this;
    detail->parent = this;

    yang_name = "mismatch"; yang_parent_name = "state"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::Fabric::Oper::Link::Rack::Port::Tx::State::Mismatch::~Mismatch()
{
}

bool Controller::Fabric::Oper::Link::Rack::Port::Tx::State::Mismatch::has_data() const
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

bool Controller::Fabric::Oper::Link::Rack::Port::Tx::State::Mismatch::has_operation() const
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

std::string Controller::Fabric::Oper::Link::Rack::Port::Tx::State::Mismatch::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mismatch";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Link::Rack::Port::Tx::State::Mismatch::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::Fabric::Oper::Link::Rack::Port::Tx::State::Mismatch::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "data_idx")
    {
        auto ent_ = std::make_shared<Controller::Fabric::Oper::Link::Rack::Port::Tx::State::Mismatch::DataIdx>();
        ent_->parent = this;
        data_idx.append(ent_);
        return ent_;
    }

    if(child_yang_name == "brief")
    {
        if(brief == nullptr)
        {
            brief = std::make_shared<Controller::Fabric::Oper::Link::Rack::Port::Tx::State::Mismatch::Brief>();
        }
        return brief;
    }

    if(child_yang_name == "detail")
    {
        if(detail == nullptr)
        {
            detail = std::make_shared<Controller::Fabric::Oper::Link::Rack::Port::Tx::State::Mismatch::Detail>();
        }
        return detail;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Fabric::Oper::Link::Rack::Port::Tx::State::Mismatch::get_children() const
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

void Controller::Fabric::Oper::Link::Rack::Port::Tx::State::Mismatch::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::Fabric::Oper::Link::Rack::Port::Tx::State::Mismatch::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::Fabric::Oper::Link::Rack::Port::Tx::State::Mismatch::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data_idx" || name == "brief" || name == "detail")
        return true;
    return false;
}

Controller::Fabric::Oper::Link::Rack::Port::Tx::State::Mismatch::DataIdx::DataIdx()
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

Controller::Fabric::Oper::Link::Rack::Port::Tx::State::Mismatch::DataIdx::~DataIdx()
{
}

bool Controller::Fabric::Oper::Link::Rack::Port::Tx::State::Mismatch::DataIdx::has_data() const
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

bool Controller::Fabric::Oper::Link::Rack::Port::Tx::State::Mismatch::DataIdx::has_operation() const
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

std::string Controller::Fabric::Oper::Link::Rack::Port::Tx::State::Mismatch::DataIdx::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "data_idx";
    ADD_KEY_TOKEN(port_data_idx, "port_data_idx");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Link::Rack::Port::Tx::State::Mismatch::DataIdx::get_name_leaf_data() const
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

std::shared_ptr<ydk::Entity> Controller::Fabric::Oper::Link::Rack::Port::Tx::State::Mismatch::DataIdx::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "history")
    {
        auto ent_ = std::make_shared<Controller::Fabric::Oper::Link::Rack::Port::Tx::State::Mismatch::DataIdx::History>();
        ent_->parent = this;
        history.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Fabric::Oper::Link::Rack::Port::Tx::State::Mismatch::DataIdx::get_children() const
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

void Controller::Fabric::Oper::Link::Rack::Port::Tx::State::Mismatch::DataIdx::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Controller::Fabric::Oper::Link::Rack::Port::Tx::State::Mismatch::DataIdx::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Controller::Fabric::Oper::Link::Rack::Port::Tx::State::Mismatch::DataIdx::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "history" || name == "port_data_idx" || name == "sfe_port" || name == "admin-state" || name == "oper_state" || name == "near_end_cdr_ln" || name == "near_end_cxp_ch" || name == "far_end_cxp_ch" || name == "far_end_cdr_ln" || name == "neighbor_link")
        return true;
    return false;
}

Controller::Fabric::Oper::Link::Rack::Port::Tx::State::Mismatch::DataIdx::History::History()
    :
    history_idx{YType::int32, "history_idx"},
    time_stamp{YType::str, "time_stamp"},
    admin_state{YType::str, "admin-state"},
    oper_state{YType::str, "oper_state"},
    error_state{YType::str, "error_state"}
{

    yang_name = "history"; yang_parent_name = "data_idx"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::Fabric::Oper::Link::Rack::Port::Tx::State::Mismatch::DataIdx::History::~History()
{
}

bool Controller::Fabric::Oper::Link::Rack::Port::Tx::State::Mismatch::DataIdx::History::has_data() const
{
    if (is_presence_container) return true;
    return history_idx.is_set
	|| time_stamp.is_set
	|| admin_state.is_set
	|| oper_state.is_set
	|| error_state.is_set;
}

bool Controller::Fabric::Oper::Link::Rack::Port::Tx::State::Mismatch::DataIdx::History::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(history_idx.yfilter)
	|| ydk::is_set(time_stamp.yfilter)
	|| ydk::is_set(admin_state.yfilter)
	|| ydk::is_set(oper_state.yfilter)
	|| ydk::is_set(error_state.yfilter);
}

std::string Controller::Fabric::Oper::Link::Rack::Port::Tx::State::Mismatch::DataIdx::History::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "history";
    ADD_KEY_TOKEN(history_idx, "history_idx");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Link::Rack::Port::Tx::State::Mismatch::DataIdx::History::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (history_idx.is_set || is_set(history_idx.yfilter)) leaf_name_data.push_back(history_idx.get_name_leafdata());
    if (time_stamp.is_set || is_set(time_stamp.yfilter)) leaf_name_data.push_back(time_stamp.get_name_leafdata());
    if (admin_state.is_set || is_set(admin_state.yfilter)) leaf_name_data.push_back(admin_state.get_name_leafdata());
    if (oper_state.is_set || is_set(oper_state.yfilter)) leaf_name_data.push_back(oper_state.get_name_leafdata());
    if (error_state.is_set || is_set(error_state.yfilter)) leaf_name_data.push_back(error_state.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::Fabric::Oper::Link::Rack::Port::Tx::State::Mismatch::DataIdx::History::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Fabric::Oper::Link::Rack::Port::Tx::State::Mismatch::DataIdx::History::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Controller::Fabric::Oper::Link::Rack::Port::Tx::State::Mismatch::DataIdx::History::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Controller::Fabric::Oper::Link::Rack::Port::Tx::State::Mismatch::DataIdx::History::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Controller::Fabric::Oper::Link::Rack::Port::Tx::State::Mismatch::DataIdx::History::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "history_idx" || name == "time_stamp" || name == "admin-state" || name == "oper_state" || name == "error_state")
        return true;
    return false;
}

Controller::Fabric::Oper::Link::Rack::Port::Tx::State::Mismatch::Brief::Brief()
    :
    data_idx(this, {"port_data_idx"})
{

    yang_name = "brief"; yang_parent_name = "mismatch"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::Fabric::Oper::Link::Rack::Port::Tx::State::Mismatch::Brief::~Brief()
{
}

bool Controller::Fabric::Oper::Link::Rack::Port::Tx::State::Mismatch::Brief::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<data_idx.len(); index++)
    {
        if(data_idx[index]->has_data())
            return true;
    }
    return false;
}

bool Controller::Fabric::Oper::Link::Rack::Port::Tx::State::Mismatch::Brief::has_operation() const
{
    for (std::size_t index=0; index<data_idx.len(); index++)
    {
        if(data_idx[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Controller::Fabric::Oper::Link::Rack::Port::Tx::State::Mismatch::Brief::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "brief";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Link::Rack::Port::Tx::State::Mismatch::Brief::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::Fabric::Oper::Link::Rack::Port::Tx::State::Mismatch::Brief::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "data_idx")
    {
        auto ent_ = std::make_shared<Controller::Fabric::Oper::Link::Rack::Port::Tx::State::Mismatch::Brief::DataIdx>();
        ent_->parent = this;
        data_idx.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Fabric::Oper::Link::Rack::Port::Tx::State::Mismatch::Brief::get_children() const
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

void Controller::Fabric::Oper::Link::Rack::Port::Tx::State::Mismatch::Brief::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::Fabric::Oper::Link::Rack::Port::Tx::State::Mismatch::Brief::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::Fabric::Oper::Link::Rack::Port::Tx::State::Mismatch::Brief::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data_idx")
        return true;
    return false;
}

Controller::Fabric::Oper::Link::Rack::Port::Tx::State::Mismatch::Brief::DataIdx::DataIdx()
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

Controller::Fabric::Oper::Link::Rack::Port::Tx::State::Mismatch::Brief::DataIdx::~DataIdx()
{
}

bool Controller::Fabric::Oper::Link::Rack::Port::Tx::State::Mismatch::Brief::DataIdx::has_data() const
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

bool Controller::Fabric::Oper::Link::Rack::Port::Tx::State::Mismatch::Brief::DataIdx::has_operation() const
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

std::string Controller::Fabric::Oper::Link::Rack::Port::Tx::State::Mismatch::Brief::DataIdx::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "data_idx";
    ADD_KEY_TOKEN(port_data_idx, "port_data_idx");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Link::Rack::Port::Tx::State::Mismatch::Brief::DataIdx::get_name_leaf_data() const
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

std::shared_ptr<ydk::Entity> Controller::Fabric::Oper::Link::Rack::Port::Tx::State::Mismatch::Brief::DataIdx::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "history")
    {
        auto ent_ = std::make_shared<Controller::Fabric::Oper::Link::Rack::Port::Tx::State::Mismatch::Brief::DataIdx::History>();
        ent_->parent = this;
        history.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Fabric::Oper::Link::Rack::Port::Tx::State::Mismatch::Brief::DataIdx::get_children() const
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

void Controller::Fabric::Oper::Link::Rack::Port::Tx::State::Mismatch::Brief::DataIdx::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Controller::Fabric::Oper::Link::Rack::Port::Tx::State::Mismatch::Brief::DataIdx::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Controller::Fabric::Oper::Link::Rack::Port::Tx::State::Mismatch::Brief::DataIdx::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "history" || name == "port_data_idx" || name == "sfe_port" || name == "admin-state" || name == "oper_state" || name == "near_end_cdr_ln" || name == "near_end_cxp_ch" || name == "far_end_cxp_ch" || name == "far_end_cdr_ln" || name == "neighbor_link")
        return true;
    return false;
}

Controller::Fabric::Oper::Link::Rack::Port::Tx::State::Mismatch::Brief::DataIdx::History::History()
    :
    history_idx{YType::int32, "history_idx"},
    time_stamp{YType::str, "time_stamp"},
    admin_state{YType::str, "admin-state"},
    oper_state{YType::str, "oper_state"},
    error_state{YType::str, "error_state"}
{

    yang_name = "history"; yang_parent_name = "data_idx"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::Fabric::Oper::Link::Rack::Port::Tx::State::Mismatch::Brief::DataIdx::History::~History()
{
}

bool Controller::Fabric::Oper::Link::Rack::Port::Tx::State::Mismatch::Brief::DataIdx::History::has_data() const
{
    if (is_presence_container) return true;
    return history_idx.is_set
	|| time_stamp.is_set
	|| admin_state.is_set
	|| oper_state.is_set
	|| error_state.is_set;
}

bool Controller::Fabric::Oper::Link::Rack::Port::Tx::State::Mismatch::Brief::DataIdx::History::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(history_idx.yfilter)
	|| ydk::is_set(time_stamp.yfilter)
	|| ydk::is_set(admin_state.yfilter)
	|| ydk::is_set(oper_state.yfilter)
	|| ydk::is_set(error_state.yfilter);
}

std::string Controller::Fabric::Oper::Link::Rack::Port::Tx::State::Mismatch::Brief::DataIdx::History::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "history";
    ADD_KEY_TOKEN(history_idx, "history_idx");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Link::Rack::Port::Tx::State::Mismatch::Brief::DataIdx::History::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (history_idx.is_set || is_set(history_idx.yfilter)) leaf_name_data.push_back(history_idx.get_name_leafdata());
    if (time_stamp.is_set || is_set(time_stamp.yfilter)) leaf_name_data.push_back(time_stamp.get_name_leafdata());
    if (admin_state.is_set || is_set(admin_state.yfilter)) leaf_name_data.push_back(admin_state.get_name_leafdata());
    if (oper_state.is_set || is_set(oper_state.yfilter)) leaf_name_data.push_back(oper_state.get_name_leafdata());
    if (error_state.is_set || is_set(error_state.yfilter)) leaf_name_data.push_back(error_state.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::Fabric::Oper::Link::Rack::Port::Tx::State::Mismatch::Brief::DataIdx::History::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Fabric::Oper::Link::Rack::Port::Tx::State::Mismatch::Brief::DataIdx::History::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Controller::Fabric::Oper::Link::Rack::Port::Tx::State::Mismatch::Brief::DataIdx::History::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Controller::Fabric::Oper::Link::Rack::Port::Tx::State::Mismatch::Brief::DataIdx::History::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Controller::Fabric::Oper::Link::Rack::Port::Tx::State::Mismatch::Brief::DataIdx::History::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "history_idx" || name == "time_stamp" || name == "admin-state" || name == "oper_state" || name == "error_state")
        return true;
    return false;
}

Controller::Fabric::Oper::Link::Rack::Port::Tx::State::Mismatch::Detail::Detail()
    :
    data_idx(this, {"port_data_idx"})
{

    yang_name = "detail"; yang_parent_name = "mismatch"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::Fabric::Oper::Link::Rack::Port::Tx::State::Mismatch::Detail::~Detail()
{
}

bool Controller::Fabric::Oper::Link::Rack::Port::Tx::State::Mismatch::Detail::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<data_idx.len(); index++)
    {
        if(data_idx[index]->has_data())
            return true;
    }
    return false;
}

bool Controller::Fabric::Oper::Link::Rack::Port::Tx::State::Mismatch::Detail::has_operation() const
{
    for (std::size_t index=0; index<data_idx.len(); index++)
    {
        if(data_idx[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Controller::Fabric::Oper::Link::Rack::Port::Tx::State::Mismatch::Detail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "detail";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Link::Rack::Port::Tx::State::Mismatch::Detail::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::Fabric::Oper::Link::Rack::Port::Tx::State::Mismatch::Detail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "data_idx")
    {
        auto ent_ = std::make_shared<Controller::Fabric::Oper::Link::Rack::Port::Tx::State::Mismatch::Detail::DataIdx>();
        ent_->parent = this;
        data_idx.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Fabric::Oper::Link::Rack::Port::Tx::State::Mismatch::Detail::get_children() const
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

void Controller::Fabric::Oper::Link::Rack::Port::Tx::State::Mismatch::Detail::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::Fabric::Oper::Link::Rack::Port::Tx::State::Mismatch::Detail::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::Fabric::Oper::Link::Rack::Port::Tx::State::Mismatch::Detail::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data_idx")
        return true;
    return false;
}

Controller::Fabric::Oper::Link::Rack::Port::Tx::State::Mismatch::Detail::DataIdx::DataIdx()
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

Controller::Fabric::Oper::Link::Rack::Port::Tx::State::Mismatch::Detail::DataIdx::~DataIdx()
{
}

bool Controller::Fabric::Oper::Link::Rack::Port::Tx::State::Mismatch::Detail::DataIdx::has_data() const
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

bool Controller::Fabric::Oper::Link::Rack::Port::Tx::State::Mismatch::Detail::DataIdx::has_operation() const
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

std::string Controller::Fabric::Oper::Link::Rack::Port::Tx::State::Mismatch::Detail::DataIdx::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "data_idx";
    ADD_KEY_TOKEN(port_data_idx, "port_data_idx");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Link::Rack::Port::Tx::State::Mismatch::Detail::DataIdx::get_name_leaf_data() const
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

std::shared_ptr<ydk::Entity> Controller::Fabric::Oper::Link::Rack::Port::Tx::State::Mismatch::Detail::DataIdx::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "history")
    {
        auto ent_ = std::make_shared<Controller::Fabric::Oper::Link::Rack::Port::Tx::State::Mismatch::Detail::DataIdx::History>();
        ent_->parent = this;
        history.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Fabric::Oper::Link::Rack::Port::Tx::State::Mismatch::Detail::DataIdx::get_children() const
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

void Controller::Fabric::Oper::Link::Rack::Port::Tx::State::Mismatch::Detail::DataIdx::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Controller::Fabric::Oper::Link::Rack::Port::Tx::State::Mismatch::Detail::DataIdx::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Controller::Fabric::Oper::Link::Rack::Port::Tx::State::Mismatch::Detail::DataIdx::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "history" || name == "port_data_idx" || name == "sfe_port" || name == "admin-state" || name == "oper_state" || name == "near_end_cdr_ln" || name == "near_end_cxp_ch" || name == "far_end_cxp_ch" || name == "far_end_cdr_ln" || name == "neighbor_link")
        return true;
    return false;
}

Controller::Fabric::Oper::Link::Rack::Port::Tx::State::Mismatch::Detail::DataIdx::History::History()
    :
    history_idx{YType::int32, "history_idx"},
    time_stamp{YType::str, "time_stamp"},
    admin_state{YType::str, "admin-state"},
    oper_state{YType::str, "oper_state"},
    error_state{YType::str, "error_state"}
{

    yang_name = "history"; yang_parent_name = "data_idx"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::Fabric::Oper::Link::Rack::Port::Tx::State::Mismatch::Detail::DataIdx::History::~History()
{
}

bool Controller::Fabric::Oper::Link::Rack::Port::Tx::State::Mismatch::Detail::DataIdx::History::has_data() const
{
    if (is_presence_container) return true;
    return history_idx.is_set
	|| time_stamp.is_set
	|| admin_state.is_set
	|| oper_state.is_set
	|| error_state.is_set;
}

bool Controller::Fabric::Oper::Link::Rack::Port::Tx::State::Mismatch::Detail::DataIdx::History::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(history_idx.yfilter)
	|| ydk::is_set(time_stamp.yfilter)
	|| ydk::is_set(admin_state.yfilter)
	|| ydk::is_set(oper_state.yfilter)
	|| ydk::is_set(error_state.yfilter);
}

std::string Controller::Fabric::Oper::Link::Rack::Port::Tx::State::Mismatch::Detail::DataIdx::History::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "history";
    ADD_KEY_TOKEN(history_idx, "history_idx");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Link::Rack::Port::Tx::State::Mismatch::Detail::DataIdx::History::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (history_idx.is_set || is_set(history_idx.yfilter)) leaf_name_data.push_back(history_idx.get_name_leafdata());
    if (time_stamp.is_set || is_set(time_stamp.yfilter)) leaf_name_data.push_back(time_stamp.get_name_leafdata());
    if (admin_state.is_set || is_set(admin_state.yfilter)) leaf_name_data.push_back(admin_state.get_name_leafdata());
    if (oper_state.is_set || is_set(oper_state.yfilter)) leaf_name_data.push_back(oper_state.get_name_leafdata());
    if (error_state.is_set || is_set(error_state.yfilter)) leaf_name_data.push_back(error_state.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::Fabric::Oper::Link::Rack::Port::Tx::State::Mismatch::Detail::DataIdx::History::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Fabric::Oper::Link::Rack::Port::Tx::State::Mismatch::Detail::DataIdx::History::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Controller::Fabric::Oper::Link::Rack::Port::Tx::State::Mismatch::Detail::DataIdx::History::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Controller::Fabric::Oper::Link::Rack::Port::Tx::State::Mismatch::Detail::DataIdx::History::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Controller::Fabric::Oper::Link::Rack::Port::Tx::State::Mismatch::Detail::DataIdx::History::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "history_idx" || name == "time_stamp" || name == "admin-state" || name == "oper_state" || name == "error_state")
        return true;
    return false;
}

Controller::Fabric::Oper::Link::Rack::Port::Tx::Statistics::Statistics()
    :
    data_idx(this, {"port_data_idx"})
    , brief(std::make_shared<Controller::Fabric::Oper::Link::Rack::Port::Tx::Statistics::Brief>())
    , detail(std::make_shared<Controller::Fabric::Oper::Link::Rack::Port::Tx::Statistics::Detail>())
{
    brief->parent = this;
    detail->parent = this;

    yang_name = "statistics"; yang_parent_name = "tx"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::Fabric::Oper::Link::Rack::Port::Tx::Statistics::~Statistics()
{
}

bool Controller::Fabric::Oper::Link::Rack::Port::Tx::Statistics::has_data() const
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

bool Controller::Fabric::Oper::Link::Rack::Port::Tx::Statistics::has_operation() const
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

std::string Controller::Fabric::Oper::Link::Rack::Port::Tx::Statistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Link::Rack::Port::Tx::Statistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::Fabric::Oper::Link::Rack::Port::Tx::Statistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "data_idx")
    {
        auto ent_ = std::make_shared<Controller::Fabric::Oper::Link::Rack::Port::Tx::Statistics::DataIdx>();
        ent_->parent = this;
        data_idx.append(ent_);
        return ent_;
    }

    if(child_yang_name == "brief")
    {
        if(brief == nullptr)
        {
            brief = std::make_shared<Controller::Fabric::Oper::Link::Rack::Port::Tx::Statistics::Brief>();
        }
        return brief;
    }

    if(child_yang_name == "detail")
    {
        if(detail == nullptr)
        {
            detail = std::make_shared<Controller::Fabric::Oper::Link::Rack::Port::Tx::Statistics::Detail>();
        }
        return detail;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Fabric::Oper::Link::Rack::Port::Tx::Statistics::get_children() const
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

void Controller::Fabric::Oper::Link::Rack::Port::Tx::Statistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::Fabric::Oper::Link::Rack::Port::Tx::Statistics::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::Fabric::Oper::Link::Rack::Port::Tx::Statistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data_idx" || name == "brief" || name == "detail")
        return true;
    return false;
}

Controller::Fabric::Oper::Link::Rack::Port::Tx::Statistics::DataIdx::DataIdx()
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

Controller::Fabric::Oper::Link::Rack::Port::Tx::Statistics::DataIdx::~DataIdx()
{
}

bool Controller::Fabric::Oper::Link::Rack::Port::Tx::Statistics::DataIdx::has_data() const
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

bool Controller::Fabric::Oper::Link::Rack::Port::Tx::Statistics::DataIdx::has_operation() const
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

std::string Controller::Fabric::Oper::Link::Rack::Port::Tx::Statistics::DataIdx::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "data_idx";
    ADD_KEY_TOKEN(port_data_idx, "port_data_idx");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Link::Rack::Port::Tx::Statistics::DataIdx::get_name_leaf_data() const
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

std::shared_ptr<ydk::Entity> Controller::Fabric::Oper::Link::Rack::Port::Tx::Statistics::DataIdx::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Fabric::Oper::Link::Rack::Port::Tx::Statistics::DataIdx::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Controller::Fabric::Oper::Link::Rack::Port::Tx::Statistics::DataIdx::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Controller::Fabric::Oper::Link::Rack::Port::Tx::Statistics::DataIdx::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Controller::Fabric::Oper::Link::Rack::Port::Tx::Statistics::DataIdx::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "port_data_idx" || name == "rack_num" || name == "sfe_port" || name == "TX_Control_cells_counter" || name == "TX_Data_cell_counter" || name == "TX_Data_byte_counter" || name == "RX_CRC_errors_counter" || name == "RX_LFEC_FEC_correctable_error" || name == "RX_8b_10b_disparity_errors" || name == "RX_Control_cells_counter" || name == "RX_Data_cell_counter" || name == "RX_Data_byte_counter" || name == "RX_dropped_retransmitted_control" || name == "TX_Asyn_fifo_rate" || name == "RX_Asyn_fifo_rate" || name == "RX_LFEC_FEC_uncorrectable_errors" || name == "RX_8b_10b_code_errors" || name == "is_link_error" || name == "link_crc_error" || name == "link_size_error" || name == "link_mis_align_error" || name == "link_code_group_error" || name == "link_no_sig_lock_error" || name == "link_no_sig_accept_error" || name == "link_tokens_error" || name == "error_token_count")
        return true;
    return false;
}

Controller::Fabric::Oper::Link::Rack::Port::Tx::Statistics::Brief::Brief()
    :
    data_idx(this, {"port_data_idx"})
{

    yang_name = "brief"; yang_parent_name = "statistics"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::Fabric::Oper::Link::Rack::Port::Tx::Statistics::Brief::~Brief()
{
}

bool Controller::Fabric::Oper::Link::Rack::Port::Tx::Statistics::Brief::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<data_idx.len(); index++)
    {
        if(data_idx[index]->has_data())
            return true;
    }
    return false;
}

bool Controller::Fabric::Oper::Link::Rack::Port::Tx::Statistics::Brief::has_operation() const
{
    for (std::size_t index=0; index<data_idx.len(); index++)
    {
        if(data_idx[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Controller::Fabric::Oper::Link::Rack::Port::Tx::Statistics::Brief::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "brief";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Link::Rack::Port::Tx::Statistics::Brief::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::Fabric::Oper::Link::Rack::Port::Tx::Statistics::Brief::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "data_idx")
    {
        auto ent_ = std::make_shared<Controller::Fabric::Oper::Link::Rack::Port::Tx::Statistics::Brief::DataIdx>();
        ent_->parent = this;
        data_idx.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Fabric::Oper::Link::Rack::Port::Tx::Statistics::Brief::get_children() const
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

void Controller::Fabric::Oper::Link::Rack::Port::Tx::Statistics::Brief::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::Fabric::Oper::Link::Rack::Port::Tx::Statistics::Brief::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::Fabric::Oper::Link::Rack::Port::Tx::Statistics::Brief::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data_idx")
        return true;
    return false;
}

Controller::Fabric::Oper::Link::Rack::Port::Tx::Statistics::Brief::DataIdx::DataIdx()
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

Controller::Fabric::Oper::Link::Rack::Port::Tx::Statistics::Brief::DataIdx::~DataIdx()
{
}

bool Controller::Fabric::Oper::Link::Rack::Port::Tx::Statistics::Brief::DataIdx::has_data() const
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

bool Controller::Fabric::Oper::Link::Rack::Port::Tx::Statistics::Brief::DataIdx::has_operation() const
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

std::string Controller::Fabric::Oper::Link::Rack::Port::Tx::Statistics::Brief::DataIdx::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "data_idx";
    ADD_KEY_TOKEN(port_data_idx, "port_data_idx");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Link::Rack::Port::Tx::Statistics::Brief::DataIdx::get_name_leaf_data() const
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

std::shared_ptr<ydk::Entity> Controller::Fabric::Oper::Link::Rack::Port::Tx::Statistics::Brief::DataIdx::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Fabric::Oper::Link::Rack::Port::Tx::Statistics::Brief::DataIdx::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Controller::Fabric::Oper::Link::Rack::Port::Tx::Statistics::Brief::DataIdx::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Controller::Fabric::Oper::Link::Rack::Port::Tx::Statistics::Brief::DataIdx::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Controller::Fabric::Oper::Link::Rack::Port::Tx::Statistics::Brief::DataIdx::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "port_data_idx" || name == "rack_num" || name == "sfe_port" || name == "TX_Control_cells_counter" || name == "TX_Data_cell_counter" || name == "TX_Data_byte_counter" || name == "RX_CRC_errors_counter" || name == "RX_LFEC_FEC_correctable_error" || name == "RX_8b_10b_disparity_errors" || name == "RX_Control_cells_counter" || name == "RX_Data_cell_counter" || name == "RX_Data_byte_counter" || name == "RX_dropped_retransmitted_control" || name == "TX_Asyn_fifo_rate" || name == "RX_Asyn_fifo_rate" || name == "RX_LFEC_FEC_uncorrectable_errors" || name == "RX_8b_10b_code_errors" || name == "is_link_error" || name == "link_crc_error" || name == "link_size_error" || name == "link_mis_align_error" || name == "link_code_group_error" || name == "link_no_sig_lock_error" || name == "link_no_sig_accept_error" || name == "link_tokens_error" || name == "error_token_count")
        return true;
    return false;
}

Controller::Fabric::Oper::Link::Rack::Port::Tx::Statistics::Detail::Detail()
    :
    data_idx(this, {"port_data_idx"})
{

    yang_name = "detail"; yang_parent_name = "statistics"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::Fabric::Oper::Link::Rack::Port::Tx::Statistics::Detail::~Detail()
{
}

bool Controller::Fabric::Oper::Link::Rack::Port::Tx::Statistics::Detail::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<data_idx.len(); index++)
    {
        if(data_idx[index]->has_data())
            return true;
    }
    return false;
}

bool Controller::Fabric::Oper::Link::Rack::Port::Tx::Statistics::Detail::has_operation() const
{
    for (std::size_t index=0; index<data_idx.len(); index++)
    {
        if(data_idx[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Controller::Fabric::Oper::Link::Rack::Port::Tx::Statistics::Detail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "detail";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Link::Rack::Port::Tx::Statistics::Detail::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::Fabric::Oper::Link::Rack::Port::Tx::Statistics::Detail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "data_idx")
    {
        auto ent_ = std::make_shared<Controller::Fabric::Oper::Link::Rack::Port::Tx::Statistics::Detail::DataIdx>();
        ent_->parent = this;
        data_idx.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Fabric::Oper::Link::Rack::Port::Tx::Statistics::Detail::get_children() const
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

void Controller::Fabric::Oper::Link::Rack::Port::Tx::Statistics::Detail::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::Fabric::Oper::Link::Rack::Port::Tx::Statistics::Detail::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::Fabric::Oper::Link::Rack::Port::Tx::Statistics::Detail::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data_idx")
        return true;
    return false;
}

Controller::Fabric::Oper::Link::Rack::Port::Tx::Statistics::Detail::DataIdx::DataIdx()
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

Controller::Fabric::Oper::Link::Rack::Port::Tx::Statistics::Detail::DataIdx::~DataIdx()
{
}

bool Controller::Fabric::Oper::Link::Rack::Port::Tx::Statistics::Detail::DataIdx::has_data() const
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

bool Controller::Fabric::Oper::Link::Rack::Port::Tx::Statistics::Detail::DataIdx::has_operation() const
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

std::string Controller::Fabric::Oper::Link::Rack::Port::Tx::Statistics::Detail::DataIdx::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "data_idx";
    ADD_KEY_TOKEN(port_data_idx, "port_data_idx");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Link::Rack::Port::Tx::Statistics::Detail::DataIdx::get_name_leaf_data() const
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

std::shared_ptr<ydk::Entity> Controller::Fabric::Oper::Link::Rack::Port::Tx::Statistics::Detail::DataIdx::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Fabric::Oper::Link::Rack::Port::Tx::Statistics::Detail::DataIdx::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Controller::Fabric::Oper::Link::Rack::Port::Tx::Statistics::Detail::DataIdx::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Controller::Fabric::Oper::Link::Rack::Port::Tx::Statistics::Detail::DataIdx::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Controller::Fabric::Oper::Link::Rack::Port::Tx::Statistics::Detail::DataIdx::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "port_data_idx" || name == "rack_num" || name == "sfe_port" || name == "TX_Control_cells_counter" || name == "TX_Data_cell_counter" || name == "TX_Data_byte_counter" || name == "RX_CRC_errors_counter" || name == "RX_LFEC_FEC_correctable_error" || name == "RX_8b_10b_disparity_errors" || name == "RX_Control_cells_counter" || name == "RX_Data_cell_counter" || name == "RX_Data_byte_counter" || name == "RX_dropped_retransmitted_control" || name == "TX_Asyn_fifo_rate" || name == "RX_Asyn_fifo_rate" || name == "RX_LFEC_FEC_uncorrectable_errors" || name == "RX_8b_10b_code_errors" || name == "is_link_error" || name == "link_crc_error" || name == "link_size_error" || name == "link_mis_align_error" || name == "link_code_group_error" || name == "link_no_sig_lock_error" || name == "link_no_sig_accept_error" || name == "link_tokens_error" || name == "error_token_count")
        return true;
    return false;
}

Controller::Fabric::Oper::Link::NodeLocation::NodeLocation()
    :
    node_str{YType::str, "node_str"}
        ,
    port(this, {"portname"})
{

    yang_name = "node_location"; yang_parent_name = "link"; is_top_level_class = false; has_list_ancestor = false; 
}

Controller::Fabric::Oper::Link::NodeLocation::~NodeLocation()
{
}

bool Controller::Fabric::Oper::Link::NodeLocation::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<port.len(); index++)
    {
        if(port[index]->has_data())
            return true;
    }
    return node_str.is_set;
}

bool Controller::Fabric::Oper::Link::NodeLocation::has_operation() const
{
    for (std::size_t index=0; index<port.len(); index++)
    {
        if(port[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(node_str.yfilter);
}

std::string Controller::Fabric::Oper::Link::NodeLocation::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-controllers-ncs5502:controller/fabric/oper/link/" << get_segment_path();
    return path_buffer.str();
}

std::string Controller::Fabric::Oper::Link::NodeLocation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node_location";
    ADD_KEY_TOKEN(node_str, "node_str");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Link::NodeLocation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node_str.is_set || is_set(node_str.yfilter)) leaf_name_data.push_back(node_str.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::Fabric::Oper::Link::NodeLocation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "port")
    {
        auto ent_ = std::make_shared<Controller::Fabric::Oper::Link::NodeLocation::Port>();
        ent_->parent = this;
        port.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Fabric::Oper::Link::NodeLocation::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : port.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Controller::Fabric::Oper::Link::NodeLocation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "node_str")
    {
        node_str = value;
        node_str.value_namespace = name_space;
        node_str.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Fabric::Oper::Link::NodeLocation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "node_str")
    {
        node_str.yfilter = yfilter;
    }
}

bool Controller::Fabric::Oper::Link::NodeLocation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "port" || name == "node_str")
        return true;
    return false;
}

Controller::Fabric::Oper::Link::NodeLocation::Port::Port()
    :
    portname{YType::str, "portname"},
    description{YType::str, "description"}
        ,
    location(this, {"loc_str"})
    , rx(std::make_shared<Controller::Fabric::Oper::Link::NodeLocation::Port::Rx>())
    , tx(std::make_shared<Controller::Fabric::Oper::Link::NodeLocation::Port::Tx>())
{
    rx->parent = this;
    tx->parent = this;

    yang_name = "port"; yang_parent_name = "node_location"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::Fabric::Oper::Link::NodeLocation::Port::~Port()
{
}

bool Controller::Fabric::Oper::Link::NodeLocation::Port::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_data())
            return true;
    }
    return portname.is_set
	|| description.is_set
	|| (rx !=  nullptr && rx->has_data())
	|| (tx !=  nullptr && tx->has_data());
}

bool Controller::Fabric::Oper::Link::NodeLocation::Port::has_operation() const
{
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(portname.yfilter)
	|| ydk::is_set(description.yfilter)
	|| (rx !=  nullptr && rx->has_operation())
	|| (tx !=  nullptr && tx->has_operation());
}

std::string Controller::Fabric::Oper::Link::NodeLocation::Port::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "port";
    ADD_KEY_TOKEN(portname, "portname");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Link::NodeLocation::Port::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (portname.is_set || is_set(portname.yfilter)) leaf_name_data.push_back(portname.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::Fabric::Oper::Link::NodeLocation::Port::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "location")
    {
        auto ent_ = std::make_shared<Controller::Fabric::Oper::Link::NodeLocation::Port::Location>();
        ent_->parent = this;
        location.append(ent_);
        return ent_;
    }

    if(child_yang_name == "rx")
    {
        if(rx == nullptr)
        {
            rx = std::make_shared<Controller::Fabric::Oper::Link::NodeLocation::Port::Rx>();
        }
        return rx;
    }

    if(child_yang_name == "tx")
    {
        if(tx == nullptr)
        {
            tx = std::make_shared<Controller::Fabric::Oper::Link::NodeLocation::Port::Tx>();
        }
        return tx;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Fabric::Oper::Link::NodeLocation::Port::get_children() const
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

    if(rx != nullptr)
    {
        _children["rx"] = rx;
    }

    if(tx != nullptr)
    {
        _children["tx"] = tx;
    }

    return _children;
}

void Controller::Fabric::Oper::Link::NodeLocation::Port::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "portname")
    {
        portname = value;
        portname.value_namespace = name_space;
        portname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Fabric::Oper::Link::NodeLocation::Port::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "portname")
    {
        portname.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
}

bool Controller::Fabric::Oper::Link::NodeLocation::Port::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location" || name == "rx" || name == "tx" || name == "portname" || name == "description")
        return true;
    return false;
}

Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Location()
    :
    loc_str{YType::str, "loc_str"}
        ,
    rx(std::make_shared<Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx>())
    , tx(std::make_shared<Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx>())
{
    rx->parent = this;
    tx->parent = this;

    yang_name = "location"; yang_parent_name = "port"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::Fabric::Oper::Link::NodeLocation::Port::Location::~Location()
{
}

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Location::has_data() const
{
    if (is_presence_container) return true;
    return loc_str.is_set
	|| (rx !=  nullptr && rx->has_data())
	|| (tx !=  nullptr && tx->has_data());
}

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Location::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(loc_str.yfilter)
	|| (rx !=  nullptr && rx->has_operation())
	|| (tx !=  nullptr && tx->has_operation());
}

std::string Controller::Fabric::Oper::Link::NodeLocation::Port::Location::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "location";
    ADD_KEY_TOKEN(loc_str, "loc_str");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Link::NodeLocation::Port::Location::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (loc_str.is_set || is_set(loc_str.yfilter)) leaf_name_data.push_back(loc_str.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::Fabric::Oper::Link::NodeLocation::Port::Location::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rx")
    {
        if(rx == nullptr)
        {
            rx = std::make_shared<Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx>();
        }
        return rx;
    }

    if(child_yang_name == "tx")
    {
        if(tx == nullptr)
        {
            tx = std::make_shared<Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx>();
        }
        return tx;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Fabric::Oper::Link::NodeLocation::Port::Location::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(rx != nullptr)
    {
        _children["rx"] = rx;
    }

    if(tx != nullptr)
    {
        _children["tx"] = tx;
    }

    return _children;
}

void Controller::Fabric::Oper::Link::NodeLocation::Port::Location::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "loc_str")
    {
        loc_str = value;
        loc_str.value_namespace = name_space;
        loc_str.value_namespace_prefix = name_space_prefix;
    }
}

void Controller::Fabric::Oper::Link::NodeLocation::Port::Location::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "loc_str")
    {
        loc_str.yfilter = yfilter;
    }
}

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Location::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rx" || name == "tx" || name == "loc_str")
        return true;
    return false;
}

Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::Rx()
    :
    data_idx(this, {"port_data_idx"})
    , brief(std::make_shared<Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::Brief>())
    , detail(std::make_shared<Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::Detail>())
    , state(std::make_shared<Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::State>())
    , statistics(std::make_shared<Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::Statistics>())
{
    brief->parent = this;
    detail->parent = this;
    state->parent = this;
    statistics->parent = this;

    yang_name = "rx"; yang_parent_name = "location"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::~Rx()
{
}

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::has_data() const
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

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::has_operation() const
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

std::string Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rx";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "data_idx")
    {
        auto ent_ = std::make_shared<Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::DataIdx>();
        ent_->parent = this;
        data_idx.append(ent_);
        return ent_;
    }

    if(child_yang_name == "brief")
    {
        if(brief == nullptr)
        {
            brief = std::make_shared<Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::Brief>();
        }
        return brief;
    }

    if(child_yang_name == "detail")
    {
        if(detail == nullptr)
        {
            detail = std::make_shared<Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::Detail>();
        }
        return detail;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::State>();
        }
        return state;
    }

    if(child_yang_name == "statistics")
    {
        if(statistics == nullptr)
        {
            statistics = std::make_shared<Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::Statistics>();
        }
        return statistics;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::get_children() const
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

void Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data_idx" || name == "brief" || name == "detail" || name == "state" || name == "statistics")
        return true;
    return false;
}

Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::DataIdx::DataIdx()
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

    yang_name = "data_idx"; yang_parent_name = "rx"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::DataIdx::~DataIdx()
{
}

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::DataIdx::has_data() const
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

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::DataIdx::has_operation() const
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

std::string Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::DataIdx::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "data_idx";
    ADD_KEY_TOKEN(port_data_idx, "port_data_idx");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::DataIdx::get_name_leaf_data() const
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

std::shared_ptr<ydk::Entity> Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::DataIdx::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "history")
    {
        auto ent_ = std::make_shared<Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::DataIdx::History>();
        ent_->parent = this;
        history.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::DataIdx::get_children() const
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

void Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::DataIdx::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::DataIdx::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::DataIdx::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "history" || name == "port_data_idx" || name == "sfe_port" || name == "admin-state" || name == "oper_state" || name == "near_end_cdr_ln" || name == "near_end_cxp_ch" || name == "far_end_cxp_ch" || name == "far_end_cdr_ln" || name == "neighbor_link")
        return true;
    return false;
}

Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::DataIdx::History::History()
    :
    history_idx{YType::int32, "history_idx"},
    time_stamp{YType::str, "time_stamp"},
    admin_state{YType::str, "admin-state"},
    oper_state{YType::str, "oper_state"},
    error_state{YType::str, "error_state"}
{

    yang_name = "history"; yang_parent_name = "data_idx"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::DataIdx::History::~History()
{
}

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::DataIdx::History::has_data() const
{
    if (is_presence_container) return true;
    return history_idx.is_set
	|| time_stamp.is_set
	|| admin_state.is_set
	|| oper_state.is_set
	|| error_state.is_set;
}

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::DataIdx::History::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(history_idx.yfilter)
	|| ydk::is_set(time_stamp.yfilter)
	|| ydk::is_set(admin_state.yfilter)
	|| ydk::is_set(oper_state.yfilter)
	|| ydk::is_set(error_state.yfilter);
}

std::string Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::DataIdx::History::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "history";
    ADD_KEY_TOKEN(history_idx, "history_idx");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::DataIdx::History::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (history_idx.is_set || is_set(history_idx.yfilter)) leaf_name_data.push_back(history_idx.get_name_leafdata());
    if (time_stamp.is_set || is_set(time_stamp.yfilter)) leaf_name_data.push_back(time_stamp.get_name_leafdata());
    if (admin_state.is_set || is_set(admin_state.yfilter)) leaf_name_data.push_back(admin_state.get_name_leafdata());
    if (oper_state.is_set || is_set(oper_state.yfilter)) leaf_name_data.push_back(oper_state.get_name_leafdata());
    if (error_state.is_set || is_set(error_state.yfilter)) leaf_name_data.push_back(error_state.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::DataIdx::History::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::DataIdx::History::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::DataIdx::History::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::DataIdx::History::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::DataIdx::History::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "history_idx" || name == "time_stamp" || name == "admin-state" || name == "oper_state" || name == "error_state")
        return true;
    return false;
}

Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::Brief::Brief()
    :
    data_idx(this, {"port_data_idx"})
{

    yang_name = "brief"; yang_parent_name = "rx"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::Brief::~Brief()
{
}

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::Brief::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<data_idx.len(); index++)
    {
        if(data_idx[index]->has_data())
            return true;
    }
    return false;
}

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::Brief::has_operation() const
{
    for (std::size_t index=0; index<data_idx.len(); index++)
    {
        if(data_idx[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::Brief::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "brief";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::Brief::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::Brief::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "data_idx")
    {
        auto ent_ = std::make_shared<Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::Brief::DataIdx>();
        ent_->parent = this;
        data_idx.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::Brief::get_children() const
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

void Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::Brief::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::Brief::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::Brief::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data_idx")
        return true;
    return false;
}

Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::Brief::DataIdx::DataIdx()
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

Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::Brief::DataIdx::~DataIdx()
{
}

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::Brief::DataIdx::has_data() const
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

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::Brief::DataIdx::has_operation() const
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

std::string Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::Brief::DataIdx::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "data_idx";
    ADD_KEY_TOKEN(port_data_idx, "port_data_idx");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::Brief::DataIdx::get_name_leaf_data() const
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

std::shared_ptr<ydk::Entity> Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::Brief::DataIdx::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "history")
    {
        auto ent_ = std::make_shared<Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::Brief::DataIdx::History>();
        ent_->parent = this;
        history.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::Brief::DataIdx::get_children() const
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

void Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::Brief::DataIdx::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::Brief::DataIdx::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::Brief::DataIdx::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "history" || name == "port_data_idx" || name == "sfe_port" || name == "admin-state" || name == "oper_state" || name == "near_end_cdr_ln" || name == "near_end_cxp_ch" || name == "far_end_cxp_ch" || name == "far_end_cdr_ln" || name == "neighbor_link")
        return true;
    return false;
}

Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::Brief::DataIdx::History::History()
    :
    history_idx{YType::int32, "history_idx"},
    time_stamp{YType::str, "time_stamp"},
    admin_state{YType::str, "admin-state"},
    oper_state{YType::str, "oper_state"},
    error_state{YType::str, "error_state"}
{

    yang_name = "history"; yang_parent_name = "data_idx"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::Brief::DataIdx::History::~History()
{
}

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::Brief::DataIdx::History::has_data() const
{
    if (is_presence_container) return true;
    return history_idx.is_set
	|| time_stamp.is_set
	|| admin_state.is_set
	|| oper_state.is_set
	|| error_state.is_set;
}

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::Brief::DataIdx::History::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(history_idx.yfilter)
	|| ydk::is_set(time_stamp.yfilter)
	|| ydk::is_set(admin_state.yfilter)
	|| ydk::is_set(oper_state.yfilter)
	|| ydk::is_set(error_state.yfilter);
}

std::string Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::Brief::DataIdx::History::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "history";
    ADD_KEY_TOKEN(history_idx, "history_idx");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::Brief::DataIdx::History::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (history_idx.is_set || is_set(history_idx.yfilter)) leaf_name_data.push_back(history_idx.get_name_leafdata());
    if (time_stamp.is_set || is_set(time_stamp.yfilter)) leaf_name_data.push_back(time_stamp.get_name_leafdata());
    if (admin_state.is_set || is_set(admin_state.yfilter)) leaf_name_data.push_back(admin_state.get_name_leafdata());
    if (oper_state.is_set || is_set(oper_state.yfilter)) leaf_name_data.push_back(oper_state.get_name_leafdata());
    if (error_state.is_set || is_set(error_state.yfilter)) leaf_name_data.push_back(error_state.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::Brief::DataIdx::History::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::Brief::DataIdx::History::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::Brief::DataIdx::History::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::Brief::DataIdx::History::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::Brief::DataIdx::History::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "history_idx" || name == "time_stamp" || name == "admin-state" || name == "oper_state" || name == "error_state")
        return true;
    return false;
}

Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::Detail::Detail()
    :
    data_idx(this, {"port_data_idx"})
{

    yang_name = "detail"; yang_parent_name = "rx"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::Detail::~Detail()
{
}

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::Detail::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<data_idx.len(); index++)
    {
        if(data_idx[index]->has_data())
            return true;
    }
    return false;
}

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::Detail::has_operation() const
{
    for (std::size_t index=0; index<data_idx.len(); index++)
    {
        if(data_idx[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::Detail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "detail";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::Detail::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::Detail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "data_idx")
    {
        auto ent_ = std::make_shared<Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::Detail::DataIdx>();
        ent_->parent = this;
        data_idx.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::Detail::get_children() const
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

void Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::Detail::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::Detail::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::Detail::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data_idx")
        return true;
    return false;
}

Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::Detail::DataIdx::DataIdx()
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

Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::Detail::DataIdx::~DataIdx()
{
}

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::Detail::DataIdx::has_data() const
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

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::Detail::DataIdx::has_operation() const
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

std::string Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::Detail::DataIdx::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "data_idx";
    ADD_KEY_TOKEN(port_data_idx, "port_data_idx");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::Detail::DataIdx::get_name_leaf_data() const
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

std::shared_ptr<ydk::Entity> Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::Detail::DataIdx::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "history")
    {
        auto ent_ = std::make_shared<Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::Detail::DataIdx::History>();
        ent_->parent = this;
        history.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::Detail::DataIdx::get_children() const
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

void Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::Detail::DataIdx::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::Detail::DataIdx::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::Detail::DataIdx::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "history" || name == "port_data_idx" || name == "sfe_port" || name == "admin-state" || name == "oper_state" || name == "near_end_cdr_ln" || name == "near_end_cxp_ch" || name == "far_end_cxp_ch" || name == "far_end_cdr_ln" || name == "neighbor_link")
        return true;
    return false;
}

Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::Detail::DataIdx::History::History()
    :
    history_idx{YType::int32, "history_idx"},
    time_stamp{YType::str, "time_stamp"},
    admin_state{YType::str, "admin-state"},
    oper_state{YType::str, "oper_state"},
    error_state{YType::str, "error_state"}
{

    yang_name = "history"; yang_parent_name = "data_idx"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::Detail::DataIdx::History::~History()
{
}

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::Detail::DataIdx::History::has_data() const
{
    if (is_presence_container) return true;
    return history_idx.is_set
	|| time_stamp.is_set
	|| admin_state.is_set
	|| oper_state.is_set
	|| error_state.is_set;
}

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::Detail::DataIdx::History::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(history_idx.yfilter)
	|| ydk::is_set(time_stamp.yfilter)
	|| ydk::is_set(admin_state.yfilter)
	|| ydk::is_set(oper_state.yfilter)
	|| ydk::is_set(error_state.yfilter);
}

std::string Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::Detail::DataIdx::History::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "history";
    ADD_KEY_TOKEN(history_idx, "history_idx");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::Detail::DataIdx::History::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (history_idx.is_set || is_set(history_idx.yfilter)) leaf_name_data.push_back(history_idx.get_name_leafdata());
    if (time_stamp.is_set || is_set(time_stamp.yfilter)) leaf_name_data.push_back(time_stamp.get_name_leafdata());
    if (admin_state.is_set || is_set(admin_state.yfilter)) leaf_name_data.push_back(admin_state.get_name_leafdata());
    if (oper_state.is_set || is_set(oper_state.yfilter)) leaf_name_data.push_back(oper_state.get_name_leafdata());
    if (error_state.is_set || is_set(error_state.yfilter)) leaf_name_data.push_back(error_state.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::Detail::DataIdx::History::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::Detail::DataIdx::History::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::Detail::DataIdx::History::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::Detail::DataIdx::History::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::Detail::DataIdx::History::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "history_idx" || name == "time_stamp" || name == "admin-state" || name == "oper_state" || name == "error_state")
        return true;
    return false;
}

Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::State::State()
    :
    up(std::make_shared<Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::State::Up>())
    , down(std::make_shared<Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::State::Down>())
    , mismatch(std::make_shared<Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::State::Mismatch>())
{
    up->parent = this;
    down->parent = this;
    mismatch->parent = this;

    yang_name = "state"; yang_parent_name = "rx"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::State::~State()
{
}

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::State::has_data() const
{
    if (is_presence_container) return true;
    return (up !=  nullptr && up->has_data())
	|| (down !=  nullptr && down->has_data())
	|| (mismatch !=  nullptr && mismatch->has_data());
}

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::State::has_operation() const
{
    return is_set(yfilter)
	|| (up !=  nullptr && up->has_operation())
	|| (down !=  nullptr && down->has_operation())
	|| (mismatch !=  nullptr && mismatch->has_operation());
}

std::string Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "up")
    {
        if(up == nullptr)
        {
            up = std::make_shared<Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::State::Up>();
        }
        return up;
    }

    if(child_yang_name == "down")
    {
        if(down == nullptr)
        {
            down = std::make_shared<Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::State::Down>();
        }
        return down;
    }

    if(child_yang_name == "mismatch")
    {
        if(mismatch == nullptr)
        {
            mismatch = std::make_shared<Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::State::Mismatch>();
        }
        return mismatch;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::State::get_children() const
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

void Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::State::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "up" || name == "down" || name == "mismatch")
        return true;
    return false;
}

Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::State::Up::Up()
    :
    data_idx(this, {"port_data_idx"})
    , brief(std::make_shared<Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::State::Up::Brief>())
    , detail(std::make_shared<Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::State::Up::Detail>())
{
    brief->parent = this;
    detail->parent = this;

    yang_name = "up"; yang_parent_name = "state"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::State::Up::~Up()
{
}

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::State::Up::has_data() const
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

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::State::Up::has_operation() const
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

std::string Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::State::Up::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "up";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::State::Up::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::State::Up::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "data_idx")
    {
        auto ent_ = std::make_shared<Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::State::Up::DataIdx>();
        ent_->parent = this;
        data_idx.append(ent_);
        return ent_;
    }

    if(child_yang_name == "brief")
    {
        if(brief == nullptr)
        {
            brief = std::make_shared<Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::State::Up::Brief>();
        }
        return brief;
    }

    if(child_yang_name == "detail")
    {
        if(detail == nullptr)
        {
            detail = std::make_shared<Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::State::Up::Detail>();
        }
        return detail;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::State::Up::get_children() const
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

void Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::State::Up::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::State::Up::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::State::Up::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data_idx" || name == "brief" || name == "detail")
        return true;
    return false;
}

Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::State::Up::DataIdx::DataIdx()
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

Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::State::Up::DataIdx::~DataIdx()
{
}

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::State::Up::DataIdx::has_data() const
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

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::State::Up::DataIdx::has_operation() const
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

std::string Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::State::Up::DataIdx::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "data_idx";
    ADD_KEY_TOKEN(port_data_idx, "port_data_idx");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::State::Up::DataIdx::get_name_leaf_data() const
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

std::shared_ptr<ydk::Entity> Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::State::Up::DataIdx::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "history")
    {
        auto ent_ = std::make_shared<Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::State::Up::DataIdx::History>();
        ent_->parent = this;
        history.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::State::Up::DataIdx::get_children() const
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

void Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::State::Up::DataIdx::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::State::Up::DataIdx::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::State::Up::DataIdx::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "history" || name == "port_data_idx" || name == "sfe_port" || name == "admin-state" || name == "oper_state" || name == "near_end_cdr_ln" || name == "near_end_cxp_ch" || name == "far_end_cxp_ch" || name == "far_end_cdr_ln" || name == "neighbor_link")
        return true;
    return false;
}

Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::State::Up::DataIdx::History::History()
    :
    history_idx{YType::int32, "history_idx"},
    time_stamp{YType::str, "time_stamp"},
    admin_state{YType::str, "admin-state"},
    oper_state{YType::str, "oper_state"},
    error_state{YType::str, "error_state"}
{

    yang_name = "history"; yang_parent_name = "data_idx"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::State::Up::DataIdx::History::~History()
{
}

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::State::Up::DataIdx::History::has_data() const
{
    if (is_presence_container) return true;
    return history_idx.is_set
	|| time_stamp.is_set
	|| admin_state.is_set
	|| oper_state.is_set
	|| error_state.is_set;
}

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::State::Up::DataIdx::History::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(history_idx.yfilter)
	|| ydk::is_set(time_stamp.yfilter)
	|| ydk::is_set(admin_state.yfilter)
	|| ydk::is_set(oper_state.yfilter)
	|| ydk::is_set(error_state.yfilter);
}

std::string Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::State::Up::DataIdx::History::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "history";
    ADD_KEY_TOKEN(history_idx, "history_idx");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::State::Up::DataIdx::History::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (history_idx.is_set || is_set(history_idx.yfilter)) leaf_name_data.push_back(history_idx.get_name_leafdata());
    if (time_stamp.is_set || is_set(time_stamp.yfilter)) leaf_name_data.push_back(time_stamp.get_name_leafdata());
    if (admin_state.is_set || is_set(admin_state.yfilter)) leaf_name_data.push_back(admin_state.get_name_leafdata());
    if (oper_state.is_set || is_set(oper_state.yfilter)) leaf_name_data.push_back(oper_state.get_name_leafdata());
    if (error_state.is_set || is_set(error_state.yfilter)) leaf_name_data.push_back(error_state.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::State::Up::DataIdx::History::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::State::Up::DataIdx::History::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::State::Up::DataIdx::History::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::State::Up::DataIdx::History::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::State::Up::DataIdx::History::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "history_idx" || name == "time_stamp" || name == "admin-state" || name == "oper_state" || name == "error_state")
        return true;
    return false;
}

Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::State::Up::Brief::Brief()
    :
    data_idx(this, {"port_data_idx"})
{

    yang_name = "brief"; yang_parent_name = "up"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::State::Up::Brief::~Brief()
{
}

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::State::Up::Brief::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<data_idx.len(); index++)
    {
        if(data_idx[index]->has_data())
            return true;
    }
    return false;
}

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::State::Up::Brief::has_operation() const
{
    for (std::size_t index=0; index<data_idx.len(); index++)
    {
        if(data_idx[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::State::Up::Brief::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "brief";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::State::Up::Brief::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::State::Up::Brief::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "data_idx")
    {
        auto ent_ = std::make_shared<Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::State::Up::Brief::DataIdx>();
        ent_->parent = this;
        data_idx.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::State::Up::Brief::get_children() const
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

void Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::State::Up::Brief::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::State::Up::Brief::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::State::Up::Brief::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data_idx")
        return true;
    return false;
}

Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::State::Up::Brief::DataIdx::DataIdx()
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

Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::State::Up::Brief::DataIdx::~DataIdx()
{
}

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::State::Up::Brief::DataIdx::has_data() const
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

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::State::Up::Brief::DataIdx::has_operation() const
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

std::string Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::State::Up::Brief::DataIdx::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "data_idx";
    ADD_KEY_TOKEN(port_data_idx, "port_data_idx");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::State::Up::Brief::DataIdx::get_name_leaf_data() const
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

std::shared_ptr<ydk::Entity> Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::State::Up::Brief::DataIdx::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "history")
    {
        auto ent_ = std::make_shared<Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::State::Up::Brief::DataIdx::History>();
        ent_->parent = this;
        history.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::State::Up::Brief::DataIdx::get_children() const
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

void Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::State::Up::Brief::DataIdx::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::State::Up::Brief::DataIdx::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::State::Up::Brief::DataIdx::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "history" || name == "port_data_idx" || name == "sfe_port" || name == "admin-state" || name == "oper_state" || name == "near_end_cdr_ln" || name == "near_end_cxp_ch" || name == "far_end_cxp_ch" || name == "far_end_cdr_ln" || name == "neighbor_link")
        return true;
    return false;
}

Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::State::Up::Brief::DataIdx::History::History()
    :
    history_idx{YType::int32, "history_idx"},
    time_stamp{YType::str, "time_stamp"},
    admin_state{YType::str, "admin-state"},
    oper_state{YType::str, "oper_state"},
    error_state{YType::str, "error_state"}
{

    yang_name = "history"; yang_parent_name = "data_idx"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::State::Up::Brief::DataIdx::History::~History()
{
}

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::State::Up::Brief::DataIdx::History::has_data() const
{
    if (is_presence_container) return true;
    return history_idx.is_set
	|| time_stamp.is_set
	|| admin_state.is_set
	|| oper_state.is_set
	|| error_state.is_set;
}

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::State::Up::Brief::DataIdx::History::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(history_idx.yfilter)
	|| ydk::is_set(time_stamp.yfilter)
	|| ydk::is_set(admin_state.yfilter)
	|| ydk::is_set(oper_state.yfilter)
	|| ydk::is_set(error_state.yfilter);
}

std::string Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::State::Up::Brief::DataIdx::History::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "history";
    ADD_KEY_TOKEN(history_idx, "history_idx");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::State::Up::Brief::DataIdx::History::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (history_idx.is_set || is_set(history_idx.yfilter)) leaf_name_data.push_back(history_idx.get_name_leafdata());
    if (time_stamp.is_set || is_set(time_stamp.yfilter)) leaf_name_data.push_back(time_stamp.get_name_leafdata());
    if (admin_state.is_set || is_set(admin_state.yfilter)) leaf_name_data.push_back(admin_state.get_name_leafdata());
    if (oper_state.is_set || is_set(oper_state.yfilter)) leaf_name_data.push_back(oper_state.get_name_leafdata());
    if (error_state.is_set || is_set(error_state.yfilter)) leaf_name_data.push_back(error_state.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::State::Up::Brief::DataIdx::History::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::State::Up::Brief::DataIdx::History::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::State::Up::Brief::DataIdx::History::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::State::Up::Brief::DataIdx::History::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::State::Up::Brief::DataIdx::History::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "history_idx" || name == "time_stamp" || name == "admin-state" || name == "oper_state" || name == "error_state")
        return true;
    return false;
}

Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::State::Up::Detail::Detail()
    :
    data_idx(this, {"port_data_idx"})
{

    yang_name = "detail"; yang_parent_name = "up"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::State::Up::Detail::~Detail()
{
}

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::State::Up::Detail::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<data_idx.len(); index++)
    {
        if(data_idx[index]->has_data())
            return true;
    }
    return false;
}

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::State::Up::Detail::has_operation() const
{
    for (std::size_t index=0; index<data_idx.len(); index++)
    {
        if(data_idx[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::State::Up::Detail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "detail";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::State::Up::Detail::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::State::Up::Detail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "data_idx")
    {
        auto ent_ = std::make_shared<Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::State::Up::Detail::DataIdx>();
        ent_->parent = this;
        data_idx.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::State::Up::Detail::get_children() const
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

void Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::State::Up::Detail::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::State::Up::Detail::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::State::Up::Detail::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data_idx")
        return true;
    return false;
}

Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::State::Up::Detail::DataIdx::DataIdx()
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

Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::State::Up::Detail::DataIdx::~DataIdx()
{
}

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::State::Up::Detail::DataIdx::has_data() const
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

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::State::Up::Detail::DataIdx::has_operation() const
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

std::string Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::State::Up::Detail::DataIdx::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "data_idx";
    ADD_KEY_TOKEN(port_data_idx, "port_data_idx");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::State::Up::Detail::DataIdx::get_name_leaf_data() const
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

std::shared_ptr<ydk::Entity> Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::State::Up::Detail::DataIdx::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "history")
    {
        auto ent_ = std::make_shared<Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::State::Up::Detail::DataIdx::History>();
        ent_->parent = this;
        history.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::State::Up::Detail::DataIdx::get_children() const
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

void Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::State::Up::Detail::DataIdx::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::State::Up::Detail::DataIdx::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::State::Up::Detail::DataIdx::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "history" || name == "port_data_idx" || name == "sfe_port" || name == "admin-state" || name == "oper_state" || name == "near_end_cdr_ln" || name == "near_end_cxp_ch" || name == "far_end_cxp_ch" || name == "far_end_cdr_ln" || name == "neighbor_link")
        return true;
    return false;
}

Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::State::Up::Detail::DataIdx::History::History()
    :
    history_idx{YType::int32, "history_idx"},
    time_stamp{YType::str, "time_stamp"},
    admin_state{YType::str, "admin-state"},
    oper_state{YType::str, "oper_state"},
    error_state{YType::str, "error_state"}
{

    yang_name = "history"; yang_parent_name = "data_idx"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::State::Up::Detail::DataIdx::History::~History()
{
}

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::State::Up::Detail::DataIdx::History::has_data() const
{
    if (is_presence_container) return true;
    return history_idx.is_set
	|| time_stamp.is_set
	|| admin_state.is_set
	|| oper_state.is_set
	|| error_state.is_set;
}

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::State::Up::Detail::DataIdx::History::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(history_idx.yfilter)
	|| ydk::is_set(time_stamp.yfilter)
	|| ydk::is_set(admin_state.yfilter)
	|| ydk::is_set(oper_state.yfilter)
	|| ydk::is_set(error_state.yfilter);
}

std::string Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::State::Up::Detail::DataIdx::History::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "history";
    ADD_KEY_TOKEN(history_idx, "history_idx");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::State::Up::Detail::DataIdx::History::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (history_idx.is_set || is_set(history_idx.yfilter)) leaf_name_data.push_back(history_idx.get_name_leafdata());
    if (time_stamp.is_set || is_set(time_stamp.yfilter)) leaf_name_data.push_back(time_stamp.get_name_leafdata());
    if (admin_state.is_set || is_set(admin_state.yfilter)) leaf_name_data.push_back(admin_state.get_name_leafdata());
    if (oper_state.is_set || is_set(oper_state.yfilter)) leaf_name_data.push_back(oper_state.get_name_leafdata());
    if (error_state.is_set || is_set(error_state.yfilter)) leaf_name_data.push_back(error_state.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::State::Up::Detail::DataIdx::History::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::State::Up::Detail::DataIdx::History::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::State::Up::Detail::DataIdx::History::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::State::Up::Detail::DataIdx::History::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::State::Up::Detail::DataIdx::History::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "history_idx" || name == "time_stamp" || name == "admin-state" || name == "oper_state" || name == "error_state")
        return true;
    return false;
}

Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::State::Down::Down()
    :
    data_idx(this, {"port_data_idx"})
    , brief(std::make_shared<Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::State::Down::Brief>())
    , detail(std::make_shared<Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::State::Down::Detail>())
{
    brief->parent = this;
    detail->parent = this;

    yang_name = "down"; yang_parent_name = "state"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::State::Down::~Down()
{
}

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::State::Down::has_data() const
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

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::State::Down::has_operation() const
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

std::string Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::State::Down::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "down";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::State::Down::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::State::Down::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "data_idx")
    {
        auto ent_ = std::make_shared<Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::State::Down::DataIdx>();
        ent_->parent = this;
        data_idx.append(ent_);
        return ent_;
    }

    if(child_yang_name == "brief")
    {
        if(brief == nullptr)
        {
            brief = std::make_shared<Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::State::Down::Brief>();
        }
        return brief;
    }

    if(child_yang_name == "detail")
    {
        if(detail == nullptr)
        {
            detail = std::make_shared<Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::State::Down::Detail>();
        }
        return detail;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::State::Down::get_children() const
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

void Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::State::Down::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::State::Down::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::State::Down::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data_idx" || name == "brief" || name == "detail")
        return true;
    return false;
}

Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::State::Down::DataIdx::DataIdx()
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

Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::State::Down::DataIdx::~DataIdx()
{
}

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::State::Down::DataIdx::has_data() const
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

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::State::Down::DataIdx::has_operation() const
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

std::string Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::State::Down::DataIdx::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "data_idx";
    ADD_KEY_TOKEN(port_data_idx, "port_data_idx");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::State::Down::DataIdx::get_name_leaf_data() const
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

std::shared_ptr<ydk::Entity> Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::State::Down::DataIdx::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "history")
    {
        auto ent_ = std::make_shared<Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::State::Down::DataIdx::History>();
        ent_->parent = this;
        history.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::State::Down::DataIdx::get_children() const
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

void Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::State::Down::DataIdx::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::State::Down::DataIdx::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::State::Down::DataIdx::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "history" || name == "port_data_idx" || name == "sfe_port" || name == "admin-state" || name == "oper_state" || name == "near_end_cdr_ln" || name == "near_end_cxp_ch" || name == "far_end_cxp_ch" || name == "far_end_cdr_ln" || name == "neighbor_link")
        return true;
    return false;
}

Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::State::Down::DataIdx::History::History()
    :
    history_idx{YType::int32, "history_idx"},
    time_stamp{YType::str, "time_stamp"},
    admin_state{YType::str, "admin-state"},
    oper_state{YType::str, "oper_state"},
    error_state{YType::str, "error_state"}
{

    yang_name = "history"; yang_parent_name = "data_idx"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::State::Down::DataIdx::History::~History()
{
}

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::State::Down::DataIdx::History::has_data() const
{
    if (is_presence_container) return true;
    return history_idx.is_set
	|| time_stamp.is_set
	|| admin_state.is_set
	|| oper_state.is_set
	|| error_state.is_set;
}

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::State::Down::DataIdx::History::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(history_idx.yfilter)
	|| ydk::is_set(time_stamp.yfilter)
	|| ydk::is_set(admin_state.yfilter)
	|| ydk::is_set(oper_state.yfilter)
	|| ydk::is_set(error_state.yfilter);
}

std::string Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::State::Down::DataIdx::History::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "history";
    ADD_KEY_TOKEN(history_idx, "history_idx");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::State::Down::DataIdx::History::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (history_idx.is_set || is_set(history_idx.yfilter)) leaf_name_data.push_back(history_idx.get_name_leafdata());
    if (time_stamp.is_set || is_set(time_stamp.yfilter)) leaf_name_data.push_back(time_stamp.get_name_leafdata());
    if (admin_state.is_set || is_set(admin_state.yfilter)) leaf_name_data.push_back(admin_state.get_name_leafdata());
    if (oper_state.is_set || is_set(oper_state.yfilter)) leaf_name_data.push_back(oper_state.get_name_leafdata());
    if (error_state.is_set || is_set(error_state.yfilter)) leaf_name_data.push_back(error_state.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::State::Down::DataIdx::History::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::State::Down::DataIdx::History::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::State::Down::DataIdx::History::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::State::Down::DataIdx::History::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::State::Down::DataIdx::History::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "history_idx" || name == "time_stamp" || name == "admin-state" || name == "oper_state" || name == "error_state")
        return true;
    return false;
}

Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::State::Down::Brief::Brief()
    :
    data_idx(this, {"port_data_idx"})
{

    yang_name = "brief"; yang_parent_name = "down"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::State::Down::Brief::~Brief()
{
}

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::State::Down::Brief::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<data_idx.len(); index++)
    {
        if(data_idx[index]->has_data())
            return true;
    }
    return false;
}

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::State::Down::Brief::has_operation() const
{
    for (std::size_t index=0; index<data_idx.len(); index++)
    {
        if(data_idx[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::State::Down::Brief::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "brief";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::State::Down::Brief::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::State::Down::Brief::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "data_idx")
    {
        auto ent_ = std::make_shared<Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::State::Down::Brief::DataIdx>();
        ent_->parent = this;
        data_idx.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::State::Down::Brief::get_children() const
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

void Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::State::Down::Brief::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::State::Down::Brief::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::State::Down::Brief::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data_idx")
        return true;
    return false;
}

Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::State::Down::Brief::DataIdx::DataIdx()
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

Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::State::Down::Brief::DataIdx::~DataIdx()
{
}

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::State::Down::Brief::DataIdx::has_data() const
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

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::State::Down::Brief::DataIdx::has_operation() const
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

std::string Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::State::Down::Brief::DataIdx::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "data_idx";
    ADD_KEY_TOKEN(port_data_idx, "port_data_idx");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::State::Down::Brief::DataIdx::get_name_leaf_data() const
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

std::shared_ptr<ydk::Entity> Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::State::Down::Brief::DataIdx::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "history")
    {
        auto ent_ = std::make_shared<Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::State::Down::Brief::DataIdx::History>();
        ent_->parent = this;
        history.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::State::Down::Brief::DataIdx::get_children() const
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

void Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::State::Down::Brief::DataIdx::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::State::Down::Brief::DataIdx::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::State::Down::Brief::DataIdx::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "history" || name == "port_data_idx" || name == "sfe_port" || name == "admin-state" || name == "oper_state" || name == "near_end_cdr_ln" || name == "near_end_cxp_ch" || name == "far_end_cxp_ch" || name == "far_end_cdr_ln" || name == "neighbor_link")
        return true;
    return false;
}

Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::State::Down::Brief::DataIdx::History::History()
    :
    history_idx{YType::int32, "history_idx"},
    time_stamp{YType::str, "time_stamp"},
    admin_state{YType::str, "admin-state"},
    oper_state{YType::str, "oper_state"},
    error_state{YType::str, "error_state"}
{

    yang_name = "history"; yang_parent_name = "data_idx"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::State::Down::Brief::DataIdx::History::~History()
{
}

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::State::Down::Brief::DataIdx::History::has_data() const
{
    if (is_presence_container) return true;
    return history_idx.is_set
	|| time_stamp.is_set
	|| admin_state.is_set
	|| oper_state.is_set
	|| error_state.is_set;
}

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::State::Down::Brief::DataIdx::History::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(history_idx.yfilter)
	|| ydk::is_set(time_stamp.yfilter)
	|| ydk::is_set(admin_state.yfilter)
	|| ydk::is_set(oper_state.yfilter)
	|| ydk::is_set(error_state.yfilter);
}

std::string Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::State::Down::Brief::DataIdx::History::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "history";
    ADD_KEY_TOKEN(history_idx, "history_idx");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::State::Down::Brief::DataIdx::History::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (history_idx.is_set || is_set(history_idx.yfilter)) leaf_name_data.push_back(history_idx.get_name_leafdata());
    if (time_stamp.is_set || is_set(time_stamp.yfilter)) leaf_name_data.push_back(time_stamp.get_name_leafdata());
    if (admin_state.is_set || is_set(admin_state.yfilter)) leaf_name_data.push_back(admin_state.get_name_leafdata());
    if (oper_state.is_set || is_set(oper_state.yfilter)) leaf_name_data.push_back(oper_state.get_name_leafdata());
    if (error_state.is_set || is_set(error_state.yfilter)) leaf_name_data.push_back(error_state.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::State::Down::Brief::DataIdx::History::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::State::Down::Brief::DataIdx::History::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::State::Down::Brief::DataIdx::History::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::State::Down::Brief::DataIdx::History::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::State::Down::Brief::DataIdx::History::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "history_idx" || name == "time_stamp" || name == "admin-state" || name == "oper_state" || name == "error_state")
        return true;
    return false;
}

Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::State::Down::Detail::Detail()
    :
    data_idx(this, {"port_data_idx"})
{

    yang_name = "detail"; yang_parent_name = "down"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::State::Down::Detail::~Detail()
{
}

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::State::Down::Detail::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<data_idx.len(); index++)
    {
        if(data_idx[index]->has_data())
            return true;
    }
    return false;
}

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::State::Down::Detail::has_operation() const
{
    for (std::size_t index=0; index<data_idx.len(); index++)
    {
        if(data_idx[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::State::Down::Detail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "detail";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::State::Down::Detail::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::State::Down::Detail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "data_idx")
    {
        auto ent_ = std::make_shared<Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::State::Down::Detail::DataIdx>();
        ent_->parent = this;
        data_idx.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::State::Down::Detail::get_children() const
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

void Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::State::Down::Detail::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::State::Down::Detail::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::State::Down::Detail::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data_idx")
        return true;
    return false;
}

Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::State::Down::Detail::DataIdx::DataIdx()
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

Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::State::Down::Detail::DataIdx::~DataIdx()
{
}

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::State::Down::Detail::DataIdx::has_data() const
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

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::State::Down::Detail::DataIdx::has_operation() const
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

std::string Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::State::Down::Detail::DataIdx::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "data_idx";
    ADD_KEY_TOKEN(port_data_idx, "port_data_idx");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::State::Down::Detail::DataIdx::get_name_leaf_data() const
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

std::shared_ptr<ydk::Entity> Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::State::Down::Detail::DataIdx::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "history")
    {
        auto ent_ = std::make_shared<Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::State::Down::Detail::DataIdx::History>();
        ent_->parent = this;
        history.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::State::Down::Detail::DataIdx::get_children() const
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

void Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::State::Down::Detail::DataIdx::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::State::Down::Detail::DataIdx::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::State::Down::Detail::DataIdx::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "history" || name == "port_data_idx" || name == "sfe_port" || name == "admin-state" || name == "oper_state" || name == "near_end_cdr_ln" || name == "near_end_cxp_ch" || name == "far_end_cxp_ch" || name == "far_end_cdr_ln" || name == "neighbor_link")
        return true;
    return false;
}

Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::State::Down::Detail::DataIdx::History::History()
    :
    history_idx{YType::int32, "history_idx"},
    time_stamp{YType::str, "time_stamp"},
    admin_state{YType::str, "admin-state"},
    oper_state{YType::str, "oper_state"},
    error_state{YType::str, "error_state"}
{

    yang_name = "history"; yang_parent_name = "data_idx"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::State::Down::Detail::DataIdx::History::~History()
{
}

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::State::Down::Detail::DataIdx::History::has_data() const
{
    if (is_presence_container) return true;
    return history_idx.is_set
	|| time_stamp.is_set
	|| admin_state.is_set
	|| oper_state.is_set
	|| error_state.is_set;
}

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::State::Down::Detail::DataIdx::History::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(history_idx.yfilter)
	|| ydk::is_set(time_stamp.yfilter)
	|| ydk::is_set(admin_state.yfilter)
	|| ydk::is_set(oper_state.yfilter)
	|| ydk::is_set(error_state.yfilter);
}

std::string Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::State::Down::Detail::DataIdx::History::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "history";
    ADD_KEY_TOKEN(history_idx, "history_idx");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::State::Down::Detail::DataIdx::History::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (history_idx.is_set || is_set(history_idx.yfilter)) leaf_name_data.push_back(history_idx.get_name_leafdata());
    if (time_stamp.is_set || is_set(time_stamp.yfilter)) leaf_name_data.push_back(time_stamp.get_name_leafdata());
    if (admin_state.is_set || is_set(admin_state.yfilter)) leaf_name_data.push_back(admin_state.get_name_leafdata());
    if (oper_state.is_set || is_set(oper_state.yfilter)) leaf_name_data.push_back(oper_state.get_name_leafdata());
    if (error_state.is_set || is_set(error_state.yfilter)) leaf_name_data.push_back(error_state.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::State::Down::Detail::DataIdx::History::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::State::Down::Detail::DataIdx::History::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::State::Down::Detail::DataIdx::History::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::State::Down::Detail::DataIdx::History::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::State::Down::Detail::DataIdx::History::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "history_idx" || name == "time_stamp" || name == "admin-state" || name == "oper_state" || name == "error_state")
        return true;
    return false;
}

Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::State::Mismatch::Mismatch()
    :
    data_idx(this, {"port_data_idx"})
    , brief(std::make_shared<Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::State::Mismatch::Brief>())
    , detail(std::make_shared<Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::State::Mismatch::Detail>())
{
    brief->parent = this;
    detail->parent = this;

    yang_name = "mismatch"; yang_parent_name = "state"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::State::Mismatch::~Mismatch()
{
}

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::State::Mismatch::has_data() const
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

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::State::Mismatch::has_operation() const
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

std::string Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::State::Mismatch::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mismatch";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::State::Mismatch::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::State::Mismatch::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "data_idx")
    {
        auto ent_ = std::make_shared<Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::State::Mismatch::DataIdx>();
        ent_->parent = this;
        data_idx.append(ent_);
        return ent_;
    }

    if(child_yang_name == "brief")
    {
        if(brief == nullptr)
        {
            brief = std::make_shared<Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::State::Mismatch::Brief>();
        }
        return brief;
    }

    if(child_yang_name == "detail")
    {
        if(detail == nullptr)
        {
            detail = std::make_shared<Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::State::Mismatch::Detail>();
        }
        return detail;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::State::Mismatch::get_children() const
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

void Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::State::Mismatch::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::State::Mismatch::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::State::Mismatch::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data_idx" || name == "brief" || name == "detail")
        return true;
    return false;
}

Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::State::Mismatch::DataIdx::DataIdx()
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

Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::State::Mismatch::DataIdx::~DataIdx()
{
}

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::State::Mismatch::DataIdx::has_data() const
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

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::State::Mismatch::DataIdx::has_operation() const
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

std::string Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::State::Mismatch::DataIdx::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "data_idx";
    ADD_KEY_TOKEN(port_data_idx, "port_data_idx");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::State::Mismatch::DataIdx::get_name_leaf_data() const
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

std::shared_ptr<ydk::Entity> Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::State::Mismatch::DataIdx::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "history")
    {
        auto ent_ = std::make_shared<Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::State::Mismatch::DataIdx::History>();
        ent_->parent = this;
        history.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::State::Mismatch::DataIdx::get_children() const
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

void Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::State::Mismatch::DataIdx::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::State::Mismatch::DataIdx::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::State::Mismatch::DataIdx::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "history" || name == "port_data_idx" || name == "sfe_port" || name == "admin-state" || name == "oper_state" || name == "near_end_cdr_ln" || name == "near_end_cxp_ch" || name == "far_end_cxp_ch" || name == "far_end_cdr_ln" || name == "neighbor_link")
        return true;
    return false;
}

Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::State::Mismatch::DataIdx::History::History()
    :
    history_idx{YType::int32, "history_idx"},
    time_stamp{YType::str, "time_stamp"},
    admin_state{YType::str, "admin-state"},
    oper_state{YType::str, "oper_state"},
    error_state{YType::str, "error_state"}
{

    yang_name = "history"; yang_parent_name = "data_idx"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::State::Mismatch::DataIdx::History::~History()
{
}

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::State::Mismatch::DataIdx::History::has_data() const
{
    if (is_presence_container) return true;
    return history_idx.is_set
	|| time_stamp.is_set
	|| admin_state.is_set
	|| oper_state.is_set
	|| error_state.is_set;
}

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::State::Mismatch::DataIdx::History::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(history_idx.yfilter)
	|| ydk::is_set(time_stamp.yfilter)
	|| ydk::is_set(admin_state.yfilter)
	|| ydk::is_set(oper_state.yfilter)
	|| ydk::is_set(error_state.yfilter);
}

std::string Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::State::Mismatch::DataIdx::History::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "history";
    ADD_KEY_TOKEN(history_idx, "history_idx");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::State::Mismatch::DataIdx::History::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (history_idx.is_set || is_set(history_idx.yfilter)) leaf_name_data.push_back(history_idx.get_name_leafdata());
    if (time_stamp.is_set || is_set(time_stamp.yfilter)) leaf_name_data.push_back(time_stamp.get_name_leafdata());
    if (admin_state.is_set || is_set(admin_state.yfilter)) leaf_name_data.push_back(admin_state.get_name_leafdata());
    if (oper_state.is_set || is_set(oper_state.yfilter)) leaf_name_data.push_back(oper_state.get_name_leafdata());
    if (error_state.is_set || is_set(error_state.yfilter)) leaf_name_data.push_back(error_state.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::State::Mismatch::DataIdx::History::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::State::Mismatch::DataIdx::History::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::State::Mismatch::DataIdx::History::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::State::Mismatch::DataIdx::History::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::State::Mismatch::DataIdx::History::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "history_idx" || name == "time_stamp" || name == "admin-state" || name == "oper_state" || name == "error_state")
        return true;
    return false;
}

Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::State::Mismatch::Brief::Brief()
    :
    data_idx(this, {"port_data_idx"})
{

    yang_name = "brief"; yang_parent_name = "mismatch"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::State::Mismatch::Brief::~Brief()
{
}

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::State::Mismatch::Brief::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<data_idx.len(); index++)
    {
        if(data_idx[index]->has_data())
            return true;
    }
    return false;
}

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::State::Mismatch::Brief::has_operation() const
{
    for (std::size_t index=0; index<data_idx.len(); index++)
    {
        if(data_idx[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::State::Mismatch::Brief::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "brief";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::State::Mismatch::Brief::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::State::Mismatch::Brief::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "data_idx")
    {
        auto ent_ = std::make_shared<Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::State::Mismatch::Brief::DataIdx>();
        ent_->parent = this;
        data_idx.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::State::Mismatch::Brief::get_children() const
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

void Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::State::Mismatch::Brief::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::State::Mismatch::Brief::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::State::Mismatch::Brief::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data_idx")
        return true;
    return false;
}

Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::State::Mismatch::Brief::DataIdx::DataIdx()
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

Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::State::Mismatch::Brief::DataIdx::~DataIdx()
{
}

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::State::Mismatch::Brief::DataIdx::has_data() const
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

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::State::Mismatch::Brief::DataIdx::has_operation() const
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

std::string Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::State::Mismatch::Brief::DataIdx::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "data_idx";
    ADD_KEY_TOKEN(port_data_idx, "port_data_idx");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::State::Mismatch::Brief::DataIdx::get_name_leaf_data() const
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

std::shared_ptr<ydk::Entity> Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::State::Mismatch::Brief::DataIdx::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "history")
    {
        auto ent_ = std::make_shared<Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::State::Mismatch::Brief::DataIdx::History>();
        ent_->parent = this;
        history.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::State::Mismatch::Brief::DataIdx::get_children() const
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

void Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::State::Mismatch::Brief::DataIdx::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::State::Mismatch::Brief::DataIdx::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::State::Mismatch::Brief::DataIdx::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "history" || name == "port_data_idx" || name == "sfe_port" || name == "admin-state" || name == "oper_state" || name == "near_end_cdr_ln" || name == "near_end_cxp_ch" || name == "far_end_cxp_ch" || name == "far_end_cdr_ln" || name == "neighbor_link")
        return true;
    return false;
}

Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::State::Mismatch::Brief::DataIdx::History::History()
    :
    history_idx{YType::int32, "history_idx"},
    time_stamp{YType::str, "time_stamp"},
    admin_state{YType::str, "admin-state"},
    oper_state{YType::str, "oper_state"},
    error_state{YType::str, "error_state"}
{

    yang_name = "history"; yang_parent_name = "data_idx"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::State::Mismatch::Brief::DataIdx::History::~History()
{
}

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::State::Mismatch::Brief::DataIdx::History::has_data() const
{
    if (is_presence_container) return true;
    return history_idx.is_set
	|| time_stamp.is_set
	|| admin_state.is_set
	|| oper_state.is_set
	|| error_state.is_set;
}

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::State::Mismatch::Brief::DataIdx::History::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(history_idx.yfilter)
	|| ydk::is_set(time_stamp.yfilter)
	|| ydk::is_set(admin_state.yfilter)
	|| ydk::is_set(oper_state.yfilter)
	|| ydk::is_set(error_state.yfilter);
}

std::string Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::State::Mismatch::Brief::DataIdx::History::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "history";
    ADD_KEY_TOKEN(history_idx, "history_idx");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::State::Mismatch::Brief::DataIdx::History::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (history_idx.is_set || is_set(history_idx.yfilter)) leaf_name_data.push_back(history_idx.get_name_leafdata());
    if (time_stamp.is_set || is_set(time_stamp.yfilter)) leaf_name_data.push_back(time_stamp.get_name_leafdata());
    if (admin_state.is_set || is_set(admin_state.yfilter)) leaf_name_data.push_back(admin_state.get_name_leafdata());
    if (oper_state.is_set || is_set(oper_state.yfilter)) leaf_name_data.push_back(oper_state.get_name_leafdata());
    if (error_state.is_set || is_set(error_state.yfilter)) leaf_name_data.push_back(error_state.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::State::Mismatch::Brief::DataIdx::History::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::State::Mismatch::Brief::DataIdx::History::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::State::Mismatch::Brief::DataIdx::History::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::State::Mismatch::Brief::DataIdx::History::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::State::Mismatch::Brief::DataIdx::History::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "history_idx" || name == "time_stamp" || name == "admin-state" || name == "oper_state" || name == "error_state")
        return true;
    return false;
}

Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::State::Mismatch::Detail::Detail()
    :
    data_idx(this, {"port_data_idx"})
{

    yang_name = "detail"; yang_parent_name = "mismatch"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::State::Mismatch::Detail::~Detail()
{
}

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::State::Mismatch::Detail::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<data_idx.len(); index++)
    {
        if(data_idx[index]->has_data())
            return true;
    }
    return false;
}

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::State::Mismatch::Detail::has_operation() const
{
    for (std::size_t index=0; index<data_idx.len(); index++)
    {
        if(data_idx[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::State::Mismatch::Detail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "detail";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::State::Mismatch::Detail::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::State::Mismatch::Detail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "data_idx")
    {
        auto ent_ = std::make_shared<Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::State::Mismatch::Detail::DataIdx>();
        ent_->parent = this;
        data_idx.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::State::Mismatch::Detail::get_children() const
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

void Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::State::Mismatch::Detail::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::State::Mismatch::Detail::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::State::Mismatch::Detail::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data_idx")
        return true;
    return false;
}

Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::State::Mismatch::Detail::DataIdx::DataIdx()
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

Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::State::Mismatch::Detail::DataIdx::~DataIdx()
{
}

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::State::Mismatch::Detail::DataIdx::has_data() const
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

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::State::Mismatch::Detail::DataIdx::has_operation() const
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

std::string Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::State::Mismatch::Detail::DataIdx::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "data_idx";
    ADD_KEY_TOKEN(port_data_idx, "port_data_idx");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::State::Mismatch::Detail::DataIdx::get_name_leaf_data() const
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

std::shared_ptr<ydk::Entity> Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::State::Mismatch::Detail::DataIdx::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "history")
    {
        auto ent_ = std::make_shared<Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::State::Mismatch::Detail::DataIdx::History>();
        ent_->parent = this;
        history.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::State::Mismatch::Detail::DataIdx::get_children() const
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

void Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::State::Mismatch::Detail::DataIdx::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::State::Mismatch::Detail::DataIdx::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::State::Mismatch::Detail::DataIdx::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "history" || name == "port_data_idx" || name == "sfe_port" || name == "admin-state" || name == "oper_state" || name == "near_end_cdr_ln" || name == "near_end_cxp_ch" || name == "far_end_cxp_ch" || name == "far_end_cdr_ln" || name == "neighbor_link")
        return true;
    return false;
}

Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::State::Mismatch::Detail::DataIdx::History::History()
    :
    history_idx{YType::int32, "history_idx"},
    time_stamp{YType::str, "time_stamp"},
    admin_state{YType::str, "admin-state"},
    oper_state{YType::str, "oper_state"},
    error_state{YType::str, "error_state"}
{

    yang_name = "history"; yang_parent_name = "data_idx"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::State::Mismatch::Detail::DataIdx::History::~History()
{
}

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::State::Mismatch::Detail::DataIdx::History::has_data() const
{
    if (is_presence_container) return true;
    return history_idx.is_set
	|| time_stamp.is_set
	|| admin_state.is_set
	|| oper_state.is_set
	|| error_state.is_set;
}

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::State::Mismatch::Detail::DataIdx::History::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(history_idx.yfilter)
	|| ydk::is_set(time_stamp.yfilter)
	|| ydk::is_set(admin_state.yfilter)
	|| ydk::is_set(oper_state.yfilter)
	|| ydk::is_set(error_state.yfilter);
}

std::string Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::State::Mismatch::Detail::DataIdx::History::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "history";
    ADD_KEY_TOKEN(history_idx, "history_idx");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::State::Mismatch::Detail::DataIdx::History::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (history_idx.is_set || is_set(history_idx.yfilter)) leaf_name_data.push_back(history_idx.get_name_leafdata());
    if (time_stamp.is_set || is_set(time_stamp.yfilter)) leaf_name_data.push_back(time_stamp.get_name_leafdata());
    if (admin_state.is_set || is_set(admin_state.yfilter)) leaf_name_data.push_back(admin_state.get_name_leafdata());
    if (oper_state.is_set || is_set(oper_state.yfilter)) leaf_name_data.push_back(oper_state.get_name_leafdata());
    if (error_state.is_set || is_set(error_state.yfilter)) leaf_name_data.push_back(error_state.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::State::Mismatch::Detail::DataIdx::History::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::State::Mismatch::Detail::DataIdx::History::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::State::Mismatch::Detail::DataIdx::History::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::State::Mismatch::Detail::DataIdx::History::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::State::Mismatch::Detail::DataIdx::History::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "history_idx" || name == "time_stamp" || name == "admin-state" || name == "oper_state" || name == "error_state")
        return true;
    return false;
}

Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::Statistics::Statistics()
    :
    data_idx(this, {"port_data_idx"})
    , brief(std::make_shared<Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::Statistics::Brief>())
    , detail(std::make_shared<Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::Statistics::Detail>())
{
    brief->parent = this;
    detail->parent = this;

    yang_name = "statistics"; yang_parent_name = "rx"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::Statistics::~Statistics()
{
}

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::Statistics::has_data() const
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

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::Statistics::has_operation() const
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

std::string Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::Statistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::Statistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::Statistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "data_idx")
    {
        auto ent_ = std::make_shared<Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::Statistics::DataIdx>();
        ent_->parent = this;
        data_idx.append(ent_);
        return ent_;
    }

    if(child_yang_name == "brief")
    {
        if(brief == nullptr)
        {
            brief = std::make_shared<Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::Statistics::Brief>();
        }
        return brief;
    }

    if(child_yang_name == "detail")
    {
        if(detail == nullptr)
        {
            detail = std::make_shared<Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::Statistics::Detail>();
        }
        return detail;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::Statistics::get_children() const
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

void Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::Statistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::Statistics::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::Statistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data_idx" || name == "brief" || name == "detail")
        return true;
    return false;
}

Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::Statistics::DataIdx::DataIdx()
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

Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::Statistics::DataIdx::~DataIdx()
{
}

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::Statistics::DataIdx::has_data() const
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

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::Statistics::DataIdx::has_operation() const
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

std::string Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::Statistics::DataIdx::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "data_idx";
    ADD_KEY_TOKEN(port_data_idx, "port_data_idx");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::Statistics::DataIdx::get_name_leaf_data() const
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

std::shared_ptr<ydk::Entity> Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::Statistics::DataIdx::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::Statistics::DataIdx::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::Statistics::DataIdx::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::Statistics::DataIdx::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::Statistics::DataIdx::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "port_data_idx" || name == "rack_num" || name == "sfe_port" || name == "TX_Control_cells_counter" || name == "TX_Data_cell_counter" || name == "TX_Data_byte_counter" || name == "RX_CRC_errors_counter" || name == "RX_LFEC_FEC_correctable_error" || name == "RX_8b_10b_disparity_errors" || name == "RX_Control_cells_counter" || name == "RX_Data_cell_counter" || name == "RX_Data_byte_counter" || name == "RX_dropped_retransmitted_control" || name == "TX_Asyn_fifo_rate" || name == "RX_Asyn_fifo_rate" || name == "RX_LFEC_FEC_uncorrectable_errors" || name == "RX_8b_10b_code_errors" || name == "is_link_error" || name == "link_crc_error" || name == "link_size_error" || name == "link_mis_align_error" || name == "link_code_group_error" || name == "link_no_sig_lock_error" || name == "link_no_sig_accept_error" || name == "link_tokens_error" || name == "error_token_count")
        return true;
    return false;
}

Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::Statistics::Brief::Brief()
    :
    data_idx(this, {"port_data_idx"})
{

    yang_name = "brief"; yang_parent_name = "statistics"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::Statistics::Brief::~Brief()
{
}

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::Statistics::Brief::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<data_idx.len(); index++)
    {
        if(data_idx[index]->has_data())
            return true;
    }
    return false;
}

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::Statistics::Brief::has_operation() const
{
    for (std::size_t index=0; index<data_idx.len(); index++)
    {
        if(data_idx[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::Statistics::Brief::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "brief";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::Statistics::Brief::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::Statistics::Brief::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "data_idx")
    {
        auto ent_ = std::make_shared<Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::Statistics::Brief::DataIdx>();
        ent_->parent = this;
        data_idx.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::Statistics::Brief::get_children() const
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

void Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::Statistics::Brief::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::Statistics::Brief::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::Statistics::Brief::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data_idx")
        return true;
    return false;
}

Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::Statistics::Brief::DataIdx::DataIdx()
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

Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::Statistics::Brief::DataIdx::~DataIdx()
{
}

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::Statistics::Brief::DataIdx::has_data() const
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

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::Statistics::Brief::DataIdx::has_operation() const
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

std::string Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::Statistics::Brief::DataIdx::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "data_idx";
    ADD_KEY_TOKEN(port_data_idx, "port_data_idx");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::Statistics::Brief::DataIdx::get_name_leaf_data() const
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

std::shared_ptr<ydk::Entity> Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::Statistics::Brief::DataIdx::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::Statistics::Brief::DataIdx::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::Statistics::Brief::DataIdx::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::Statistics::Brief::DataIdx::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::Statistics::Brief::DataIdx::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "port_data_idx" || name == "rack_num" || name == "sfe_port" || name == "TX_Control_cells_counter" || name == "TX_Data_cell_counter" || name == "TX_Data_byte_counter" || name == "RX_CRC_errors_counter" || name == "RX_LFEC_FEC_correctable_error" || name == "RX_8b_10b_disparity_errors" || name == "RX_Control_cells_counter" || name == "RX_Data_cell_counter" || name == "RX_Data_byte_counter" || name == "RX_dropped_retransmitted_control" || name == "TX_Asyn_fifo_rate" || name == "RX_Asyn_fifo_rate" || name == "RX_LFEC_FEC_uncorrectable_errors" || name == "RX_8b_10b_code_errors" || name == "is_link_error" || name == "link_crc_error" || name == "link_size_error" || name == "link_mis_align_error" || name == "link_code_group_error" || name == "link_no_sig_lock_error" || name == "link_no_sig_accept_error" || name == "link_tokens_error" || name == "error_token_count")
        return true;
    return false;
}

Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::Statistics::Detail::Detail()
    :
    data_idx(this, {"port_data_idx"})
{

    yang_name = "detail"; yang_parent_name = "statistics"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::Statistics::Detail::~Detail()
{
}

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::Statistics::Detail::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<data_idx.len(); index++)
    {
        if(data_idx[index]->has_data())
            return true;
    }
    return false;
}

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::Statistics::Detail::has_operation() const
{
    for (std::size_t index=0; index<data_idx.len(); index++)
    {
        if(data_idx[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::Statistics::Detail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "detail";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::Statistics::Detail::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::Statistics::Detail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "data_idx")
    {
        auto ent_ = std::make_shared<Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::Statistics::Detail::DataIdx>();
        ent_->parent = this;
        data_idx.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::Statistics::Detail::get_children() const
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

void Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::Statistics::Detail::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::Statistics::Detail::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::Statistics::Detail::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data_idx")
        return true;
    return false;
}

Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::Statistics::Detail::DataIdx::DataIdx()
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

Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::Statistics::Detail::DataIdx::~DataIdx()
{
}

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::Statistics::Detail::DataIdx::has_data() const
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

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::Statistics::Detail::DataIdx::has_operation() const
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

std::string Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::Statistics::Detail::DataIdx::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "data_idx";
    ADD_KEY_TOKEN(port_data_idx, "port_data_idx");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::Statistics::Detail::DataIdx::get_name_leaf_data() const
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

std::shared_ptr<ydk::Entity> Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::Statistics::Detail::DataIdx::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::Statistics::Detail::DataIdx::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::Statistics::Detail::DataIdx::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::Statistics::Detail::DataIdx::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::Statistics::Detail::DataIdx::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "port_data_idx" || name == "rack_num" || name == "sfe_port" || name == "TX_Control_cells_counter" || name == "TX_Data_cell_counter" || name == "TX_Data_byte_counter" || name == "RX_CRC_errors_counter" || name == "RX_LFEC_FEC_correctable_error" || name == "RX_8b_10b_disparity_errors" || name == "RX_Control_cells_counter" || name == "RX_Data_cell_counter" || name == "RX_Data_byte_counter" || name == "RX_dropped_retransmitted_control" || name == "TX_Asyn_fifo_rate" || name == "RX_Asyn_fifo_rate" || name == "RX_LFEC_FEC_uncorrectable_errors" || name == "RX_8b_10b_code_errors" || name == "is_link_error" || name == "link_crc_error" || name == "link_size_error" || name == "link_mis_align_error" || name == "link_code_group_error" || name == "link_no_sig_lock_error" || name == "link_no_sig_accept_error" || name == "link_tokens_error" || name == "error_token_count")
        return true;
    return false;
}

Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::Tx()
    :
    data_idx(this, {"port_data_idx"})
    , brief(std::make_shared<Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::Brief>())
    , detail(std::make_shared<Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::Detail>())
    , state(std::make_shared<Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::State>())
    , statistics(std::make_shared<Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::Statistics>())
{
    brief->parent = this;
    detail->parent = this;
    state->parent = this;
    statistics->parent = this;

    yang_name = "tx"; yang_parent_name = "location"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::~Tx()
{
}

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::has_data() const
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

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::has_operation() const
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

std::string Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tx";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "data_idx")
    {
        auto ent_ = std::make_shared<Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::DataIdx>();
        ent_->parent = this;
        data_idx.append(ent_);
        return ent_;
    }

    if(child_yang_name == "brief")
    {
        if(brief == nullptr)
        {
            brief = std::make_shared<Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::Brief>();
        }
        return brief;
    }

    if(child_yang_name == "detail")
    {
        if(detail == nullptr)
        {
            detail = std::make_shared<Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::Detail>();
        }
        return detail;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::State>();
        }
        return state;
    }

    if(child_yang_name == "statistics")
    {
        if(statistics == nullptr)
        {
            statistics = std::make_shared<Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::Statistics>();
        }
        return statistics;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::get_children() const
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

void Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data_idx" || name == "brief" || name == "detail" || name == "state" || name == "statistics")
        return true;
    return false;
}

Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::DataIdx::DataIdx()
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

Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::DataIdx::~DataIdx()
{
}

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::DataIdx::has_data() const
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

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::DataIdx::has_operation() const
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

std::string Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::DataIdx::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "data_idx";
    ADD_KEY_TOKEN(port_data_idx, "port_data_idx");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::DataIdx::get_name_leaf_data() const
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

std::shared_ptr<ydk::Entity> Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::DataIdx::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "history")
    {
        auto ent_ = std::make_shared<Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::DataIdx::History>();
        ent_->parent = this;
        history.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::DataIdx::get_children() const
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

void Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::DataIdx::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::DataIdx::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::DataIdx::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "history" || name == "port_data_idx" || name == "sfe_port" || name == "admin-state" || name == "oper_state" || name == "near_end_cdr_ln" || name == "near_end_cxp_ch" || name == "far_end_cxp_ch" || name == "far_end_cdr_ln" || name == "neighbor_link")
        return true;
    return false;
}

Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::DataIdx::History::History()
    :
    history_idx{YType::int32, "history_idx"},
    time_stamp{YType::str, "time_stamp"},
    admin_state{YType::str, "admin-state"},
    oper_state{YType::str, "oper_state"},
    error_state{YType::str, "error_state"}
{

    yang_name = "history"; yang_parent_name = "data_idx"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::DataIdx::History::~History()
{
}

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::DataIdx::History::has_data() const
{
    if (is_presence_container) return true;
    return history_idx.is_set
	|| time_stamp.is_set
	|| admin_state.is_set
	|| oper_state.is_set
	|| error_state.is_set;
}

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::DataIdx::History::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(history_idx.yfilter)
	|| ydk::is_set(time_stamp.yfilter)
	|| ydk::is_set(admin_state.yfilter)
	|| ydk::is_set(oper_state.yfilter)
	|| ydk::is_set(error_state.yfilter);
}

std::string Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::DataIdx::History::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "history";
    ADD_KEY_TOKEN(history_idx, "history_idx");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::DataIdx::History::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (history_idx.is_set || is_set(history_idx.yfilter)) leaf_name_data.push_back(history_idx.get_name_leafdata());
    if (time_stamp.is_set || is_set(time_stamp.yfilter)) leaf_name_data.push_back(time_stamp.get_name_leafdata());
    if (admin_state.is_set || is_set(admin_state.yfilter)) leaf_name_data.push_back(admin_state.get_name_leafdata());
    if (oper_state.is_set || is_set(oper_state.yfilter)) leaf_name_data.push_back(oper_state.get_name_leafdata());
    if (error_state.is_set || is_set(error_state.yfilter)) leaf_name_data.push_back(error_state.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::DataIdx::History::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::DataIdx::History::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::DataIdx::History::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::DataIdx::History::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::DataIdx::History::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "history_idx" || name == "time_stamp" || name == "admin-state" || name == "oper_state" || name == "error_state")
        return true;
    return false;
}

Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::Brief::Brief()
    :
    data_idx(this, {"port_data_idx"})
{

    yang_name = "brief"; yang_parent_name = "tx"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::Brief::~Brief()
{
}

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::Brief::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<data_idx.len(); index++)
    {
        if(data_idx[index]->has_data())
            return true;
    }
    return false;
}

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::Brief::has_operation() const
{
    for (std::size_t index=0; index<data_idx.len(); index++)
    {
        if(data_idx[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::Brief::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "brief";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::Brief::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::Brief::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "data_idx")
    {
        auto ent_ = std::make_shared<Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::Brief::DataIdx>();
        ent_->parent = this;
        data_idx.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::Brief::get_children() const
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

void Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::Brief::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::Brief::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::Brief::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data_idx")
        return true;
    return false;
}

Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::Brief::DataIdx::DataIdx()
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

Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::Brief::DataIdx::~DataIdx()
{
}

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::Brief::DataIdx::has_data() const
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

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::Brief::DataIdx::has_operation() const
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

std::string Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::Brief::DataIdx::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "data_idx";
    ADD_KEY_TOKEN(port_data_idx, "port_data_idx");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::Brief::DataIdx::get_name_leaf_data() const
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

std::shared_ptr<ydk::Entity> Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::Brief::DataIdx::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "history")
    {
        auto ent_ = std::make_shared<Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::Brief::DataIdx::History>();
        ent_->parent = this;
        history.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::Brief::DataIdx::get_children() const
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

void Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::Brief::DataIdx::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::Brief::DataIdx::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::Brief::DataIdx::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "history" || name == "port_data_idx" || name == "sfe_port" || name == "admin-state" || name == "oper_state" || name == "near_end_cdr_ln" || name == "near_end_cxp_ch" || name == "far_end_cxp_ch" || name == "far_end_cdr_ln" || name == "neighbor_link")
        return true;
    return false;
}

Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::Brief::DataIdx::History::History()
    :
    history_idx{YType::int32, "history_idx"},
    time_stamp{YType::str, "time_stamp"},
    admin_state{YType::str, "admin-state"},
    oper_state{YType::str, "oper_state"},
    error_state{YType::str, "error_state"}
{

    yang_name = "history"; yang_parent_name = "data_idx"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::Brief::DataIdx::History::~History()
{
}

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::Brief::DataIdx::History::has_data() const
{
    if (is_presence_container) return true;
    return history_idx.is_set
	|| time_stamp.is_set
	|| admin_state.is_set
	|| oper_state.is_set
	|| error_state.is_set;
}

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::Brief::DataIdx::History::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(history_idx.yfilter)
	|| ydk::is_set(time_stamp.yfilter)
	|| ydk::is_set(admin_state.yfilter)
	|| ydk::is_set(oper_state.yfilter)
	|| ydk::is_set(error_state.yfilter);
}

std::string Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::Brief::DataIdx::History::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "history";
    ADD_KEY_TOKEN(history_idx, "history_idx");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::Brief::DataIdx::History::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (history_idx.is_set || is_set(history_idx.yfilter)) leaf_name_data.push_back(history_idx.get_name_leafdata());
    if (time_stamp.is_set || is_set(time_stamp.yfilter)) leaf_name_data.push_back(time_stamp.get_name_leafdata());
    if (admin_state.is_set || is_set(admin_state.yfilter)) leaf_name_data.push_back(admin_state.get_name_leafdata());
    if (oper_state.is_set || is_set(oper_state.yfilter)) leaf_name_data.push_back(oper_state.get_name_leafdata());
    if (error_state.is_set || is_set(error_state.yfilter)) leaf_name_data.push_back(error_state.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::Brief::DataIdx::History::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::Brief::DataIdx::History::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::Brief::DataIdx::History::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::Brief::DataIdx::History::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::Brief::DataIdx::History::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "history_idx" || name == "time_stamp" || name == "admin-state" || name == "oper_state" || name == "error_state")
        return true;
    return false;
}

Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::Detail::Detail()
    :
    data_idx(this, {"port_data_idx"})
{

    yang_name = "detail"; yang_parent_name = "tx"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::Detail::~Detail()
{
}

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::Detail::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<data_idx.len(); index++)
    {
        if(data_idx[index]->has_data())
            return true;
    }
    return false;
}

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::Detail::has_operation() const
{
    for (std::size_t index=0; index<data_idx.len(); index++)
    {
        if(data_idx[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::Detail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "detail";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::Detail::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::Detail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "data_idx")
    {
        auto ent_ = std::make_shared<Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::Detail::DataIdx>();
        ent_->parent = this;
        data_idx.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::Detail::get_children() const
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

void Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::Detail::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::Detail::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::Detail::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data_idx")
        return true;
    return false;
}

Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::Detail::DataIdx::DataIdx()
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

Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::Detail::DataIdx::~DataIdx()
{
}

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::Detail::DataIdx::has_data() const
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

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::Detail::DataIdx::has_operation() const
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

std::string Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::Detail::DataIdx::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "data_idx";
    ADD_KEY_TOKEN(port_data_idx, "port_data_idx");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::Detail::DataIdx::get_name_leaf_data() const
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

std::shared_ptr<ydk::Entity> Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::Detail::DataIdx::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "history")
    {
        auto ent_ = std::make_shared<Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::Detail::DataIdx::History>();
        ent_->parent = this;
        history.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::Detail::DataIdx::get_children() const
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

void Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::Detail::DataIdx::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::Detail::DataIdx::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::Detail::DataIdx::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "history" || name == "port_data_idx" || name == "sfe_port" || name == "admin-state" || name == "oper_state" || name == "near_end_cdr_ln" || name == "near_end_cxp_ch" || name == "far_end_cxp_ch" || name == "far_end_cdr_ln" || name == "neighbor_link")
        return true;
    return false;
}

Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::Detail::DataIdx::History::History()
    :
    history_idx{YType::int32, "history_idx"},
    time_stamp{YType::str, "time_stamp"},
    admin_state{YType::str, "admin-state"},
    oper_state{YType::str, "oper_state"},
    error_state{YType::str, "error_state"}
{

    yang_name = "history"; yang_parent_name = "data_idx"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::Detail::DataIdx::History::~History()
{
}

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::Detail::DataIdx::History::has_data() const
{
    if (is_presence_container) return true;
    return history_idx.is_set
	|| time_stamp.is_set
	|| admin_state.is_set
	|| oper_state.is_set
	|| error_state.is_set;
}

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::Detail::DataIdx::History::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(history_idx.yfilter)
	|| ydk::is_set(time_stamp.yfilter)
	|| ydk::is_set(admin_state.yfilter)
	|| ydk::is_set(oper_state.yfilter)
	|| ydk::is_set(error_state.yfilter);
}

std::string Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::Detail::DataIdx::History::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "history";
    ADD_KEY_TOKEN(history_idx, "history_idx");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::Detail::DataIdx::History::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (history_idx.is_set || is_set(history_idx.yfilter)) leaf_name_data.push_back(history_idx.get_name_leafdata());
    if (time_stamp.is_set || is_set(time_stamp.yfilter)) leaf_name_data.push_back(time_stamp.get_name_leafdata());
    if (admin_state.is_set || is_set(admin_state.yfilter)) leaf_name_data.push_back(admin_state.get_name_leafdata());
    if (oper_state.is_set || is_set(oper_state.yfilter)) leaf_name_data.push_back(oper_state.get_name_leafdata());
    if (error_state.is_set || is_set(error_state.yfilter)) leaf_name_data.push_back(error_state.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::Detail::DataIdx::History::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::Detail::DataIdx::History::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::Detail::DataIdx::History::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::Detail::DataIdx::History::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::Detail::DataIdx::History::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "history_idx" || name == "time_stamp" || name == "admin-state" || name == "oper_state" || name == "error_state")
        return true;
    return false;
}

Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::State::State()
    :
    up(std::make_shared<Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::State::Up>())
    , down(std::make_shared<Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::State::Down>())
    , mismatch(std::make_shared<Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::State::Mismatch>())
{
    up->parent = this;
    down->parent = this;
    mismatch->parent = this;

    yang_name = "state"; yang_parent_name = "tx"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::State::~State()
{
}

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::State::has_data() const
{
    if (is_presence_container) return true;
    return (up !=  nullptr && up->has_data())
	|| (down !=  nullptr && down->has_data())
	|| (mismatch !=  nullptr && mismatch->has_data());
}

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::State::has_operation() const
{
    return is_set(yfilter)
	|| (up !=  nullptr && up->has_operation())
	|| (down !=  nullptr && down->has_operation())
	|| (mismatch !=  nullptr && mismatch->has_operation());
}

std::string Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "up")
    {
        if(up == nullptr)
        {
            up = std::make_shared<Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::State::Up>();
        }
        return up;
    }

    if(child_yang_name == "down")
    {
        if(down == nullptr)
        {
            down = std::make_shared<Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::State::Down>();
        }
        return down;
    }

    if(child_yang_name == "mismatch")
    {
        if(mismatch == nullptr)
        {
            mismatch = std::make_shared<Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::State::Mismatch>();
        }
        return mismatch;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::State::get_children() const
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

void Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::State::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "up" || name == "down" || name == "mismatch")
        return true;
    return false;
}

Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::State::Up::Up()
    :
    data_idx(this, {"port_data_idx"})
    , brief(std::make_shared<Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::State::Up::Brief>())
    , detail(std::make_shared<Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::State::Up::Detail>())
{
    brief->parent = this;
    detail->parent = this;

    yang_name = "up"; yang_parent_name = "state"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::State::Up::~Up()
{
}

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::State::Up::has_data() const
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

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::State::Up::has_operation() const
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

std::string Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::State::Up::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "up";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::State::Up::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::State::Up::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "data_idx")
    {
        auto ent_ = std::make_shared<Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::State::Up::DataIdx>();
        ent_->parent = this;
        data_idx.append(ent_);
        return ent_;
    }

    if(child_yang_name == "brief")
    {
        if(brief == nullptr)
        {
            brief = std::make_shared<Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::State::Up::Brief>();
        }
        return brief;
    }

    if(child_yang_name == "detail")
    {
        if(detail == nullptr)
        {
            detail = std::make_shared<Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::State::Up::Detail>();
        }
        return detail;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::State::Up::get_children() const
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

void Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::State::Up::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::State::Up::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::State::Up::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data_idx" || name == "brief" || name == "detail")
        return true;
    return false;
}

Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::State::Up::DataIdx::DataIdx()
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

Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::State::Up::DataIdx::~DataIdx()
{
}

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::State::Up::DataIdx::has_data() const
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

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::State::Up::DataIdx::has_operation() const
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

std::string Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::State::Up::DataIdx::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "data_idx";
    ADD_KEY_TOKEN(port_data_idx, "port_data_idx");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::State::Up::DataIdx::get_name_leaf_data() const
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

std::shared_ptr<ydk::Entity> Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::State::Up::DataIdx::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "history")
    {
        auto ent_ = std::make_shared<Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::State::Up::DataIdx::History>();
        ent_->parent = this;
        history.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::State::Up::DataIdx::get_children() const
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

void Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::State::Up::DataIdx::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::State::Up::DataIdx::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::State::Up::DataIdx::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "history" || name == "port_data_idx" || name == "sfe_port" || name == "admin-state" || name == "oper_state" || name == "near_end_cdr_ln" || name == "near_end_cxp_ch" || name == "far_end_cxp_ch" || name == "far_end_cdr_ln" || name == "neighbor_link")
        return true;
    return false;
}

Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::State::Up::DataIdx::History::History()
    :
    history_idx{YType::int32, "history_idx"},
    time_stamp{YType::str, "time_stamp"},
    admin_state{YType::str, "admin-state"},
    oper_state{YType::str, "oper_state"},
    error_state{YType::str, "error_state"}
{

    yang_name = "history"; yang_parent_name = "data_idx"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::State::Up::DataIdx::History::~History()
{
}

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::State::Up::DataIdx::History::has_data() const
{
    if (is_presence_container) return true;
    return history_idx.is_set
	|| time_stamp.is_set
	|| admin_state.is_set
	|| oper_state.is_set
	|| error_state.is_set;
}

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::State::Up::DataIdx::History::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(history_idx.yfilter)
	|| ydk::is_set(time_stamp.yfilter)
	|| ydk::is_set(admin_state.yfilter)
	|| ydk::is_set(oper_state.yfilter)
	|| ydk::is_set(error_state.yfilter);
}

std::string Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::State::Up::DataIdx::History::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "history";
    ADD_KEY_TOKEN(history_idx, "history_idx");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::State::Up::DataIdx::History::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (history_idx.is_set || is_set(history_idx.yfilter)) leaf_name_data.push_back(history_idx.get_name_leafdata());
    if (time_stamp.is_set || is_set(time_stamp.yfilter)) leaf_name_data.push_back(time_stamp.get_name_leafdata());
    if (admin_state.is_set || is_set(admin_state.yfilter)) leaf_name_data.push_back(admin_state.get_name_leafdata());
    if (oper_state.is_set || is_set(oper_state.yfilter)) leaf_name_data.push_back(oper_state.get_name_leafdata());
    if (error_state.is_set || is_set(error_state.yfilter)) leaf_name_data.push_back(error_state.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::State::Up::DataIdx::History::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::State::Up::DataIdx::History::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::State::Up::DataIdx::History::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::State::Up::DataIdx::History::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::State::Up::DataIdx::History::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "history_idx" || name == "time_stamp" || name == "admin-state" || name == "oper_state" || name == "error_state")
        return true;
    return false;
}

Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::State::Up::Brief::Brief()
    :
    data_idx(this, {"port_data_idx"})
{

    yang_name = "brief"; yang_parent_name = "up"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::State::Up::Brief::~Brief()
{
}

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::State::Up::Brief::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<data_idx.len(); index++)
    {
        if(data_idx[index]->has_data())
            return true;
    }
    return false;
}

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::State::Up::Brief::has_operation() const
{
    for (std::size_t index=0; index<data_idx.len(); index++)
    {
        if(data_idx[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::State::Up::Brief::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "brief";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::State::Up::Brief::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::State::Up::Brief::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "data_idx")
    {
        auto ent_ = std::make_shared<Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::State::Up::Brief::DataIdx>();
        ent_->parent = this;
        data_idx.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::State::Up::Brief::get_children() const
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

void Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::State::Up::Brief::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::State::Up::Brief::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::State::Up::Brief::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data_idx")
        return true;
    return false;
}

Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::State::Up::Brief::DataIdx::DataIdx()
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

Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::State::Up::Brief::DataIdx::~DataIdx()
{
}

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::State::Up::Brief::DataIdx::has_data() const
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

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::State::Up::Brief::DataIdx::has_operation() const
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

std::string Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::State::Up::Brief::DataIdx::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "data_idx";
    ADD_KEY_TOKEN(port_data_idx, "port_data_idx");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::State::Up::Brief::DataIdx::get_name_leaf_data() const
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

std::shared_ptr<ydk::Entity> Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::State::Up::Brief::DataIdx::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "history")
    {
        auto ent_ = std::make_shared<Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::State::Up::Brief::DataIdx::History>();
        ent_->parent = this;
        history.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::State::Up::Brief::DataIdx::get_children() const
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

void Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::State::Up::Brief::DataIdx::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::State::Up::Brief::DataIdx::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::State::Up::Brief::DataIdx::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "history" || name == "port_data_idx" || name == "sfe_port" || name == "admin-state" || name == "oper_state" || name == "near_end_cdr_ln" || name == "near_end_cxp_ch" || name == "far_end_cxp_ch" || name == "far_end_cdr_ln" || name == "neighbor_link")
        return true;
    return false;
}

Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::State::Up::Brief::DataIdx::History::History()
    :
    history_idx{YType::int32, "history_idx"},
    time_stamp{YType::str, "time_stamp"},
    admin_state{YType::str, "admin-state"},
    oper_state{YType::str, "oper_state"},
    error_state{YType::str, "error_state"}
{

    yang_name = "history"; yang_parent_name = "data_idx"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::State::Up::Brief::DataIdx::History::~History()
{
}

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::State::Up::Brief::DataIdx::History::has_data() const
{
    if (is_presence_container) return true;
    return history_idx.is_set
	|| time_stamp.is_set
	|| admin_state.is_set
	|| oper_state.is_set
	|| error_state.is_set;
}

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::State::Up::Brief::DataIdx::History::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(history_idx.yfilter)
	|| ydk::is_set(time_stamp.yfilter)
	|| ydk::is_set(admin_state.yfilter)
	|| ydk::is_set(oper_state.yfilter)
	|| ydk::is_set(error_state.yfilter);
}

std::string Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::State::Up::Brief::DataIdx::History::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "history";
    ADD_KEY_TOKEN(history_idx, "history_idx");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::State::Up::Brief::DataIdx::History::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (history_idx.is_set || is_set(history_idx.yfilter)) leaf_name_data.push_back(history_idx.get_name_leafdata());
    if (time_stamp.is_set || is_set(time_stamp.yfilter)) leaf_name_data.push_back(time_stamp.get_name_leafdata());
    if (admin_state.is_set || is_set(admin_state.yfilter)) leaf_name_data.push_back(admin_state.get_name_leafdata());
    if (oper_state.is_set || is_set(oper_state.yfilter)) leaf_name_data.push_back(oper_state.get_name_leafdata());
    if (error_state.is_set || is_set(error_state.yfilter)) leaf_name_data.push_back(error_state.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::State::Up::Brief::DataIdx::History::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::State::Up::Brief::DataIdx::History::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::State::Up::Brief::DataIdx::History::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::State::Up::Brief::DataIdx::History::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::State::Up::Brief::DataIdx::History::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "history_idx" || name == "time_stamp" || name == "admin-state" || name == "oper_state" || name == "error_state")
        return true;
    return false;
}

Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::State::Up::Detail::Detail()
    :
    data_idx(this, {"port_data_idx"})
{

    yang_name = "detail"; yang_parent_name = "up"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::State::Up::Detail::~Detail()
{
}

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::State::Up::Detail::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<data_idx.len(); index++)
    {
        if(data_idx[index]->has_data())
            return true;
    }
    return false;
}

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::State::Up::Detail::has_operation() const
{
    for (std::size_t index=0; index<data_idx.len(); index++)
    {
        if(data_idx[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::State::Up::Detail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "detail";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::State::Up::Detail::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::State::Up::Detail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "data_idx")
    {
        auto ent_ = std::make_shared<Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::State::Up::Detail::DataIdx>();
        ent_->parent = this;
        data_idx.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::State::Up::Detail::get_children() const
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

void Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::State::Up::Detail::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::State::Up::Detail::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::State::Up::Detail::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data_idx")
        return true;
    return false;
}

Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::State::Up::Detail::DataIdx::DataIdx()
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

Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::State::Up::Detail::DataIdx::~DataIdx()
{
}

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::State::Up::Detail::DataIdx::has_data() const
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

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::State::Up::Detail::DataIdx::has_operation() const
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

std::string Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::State::Up::Detail::DataIdx::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "data_idx";
    ADD_KEY_TOKEN(port_data_idx, "port_data_idx");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::State::Up::Detail::DataIdx::get_name_leaf_data() const
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

std::shared_ptr<ydk::Entity> Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::State::Up::Detail::DataIdx::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "history")
    {
        auto ent_ = std::make_shared<Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::State::Up::Detail::DataIdx::History>();
        ent_->parent = this;
        history.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::State::Up::Detail::DataIdx::get_children() const
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

void Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::State::Up::Detail::DataIdx::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::State::Up::Detail::DataIdx::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::State::Up::Detail::DataIdx::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "history" || name == "port_data_idx" || name == "sfe_port" || name == "admin-state" || name == "oper_state" || name == "near_end_cdr_ln" || name == "near_end_cxp_ch" || name == "far_end_cxp_ch" || name == "far_end_cdr_ln" || name == "neighbor_link")
        return true;
    return false;
}

Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::State::Up::Detail::DataIdx::History::History()
    :
    history_idx{YType::int32, "history_idx"},
    time_stamp{YType::str, "time_stamp"},
    admin_state{YType::str, "admin-state"},
    oper_state{YType::str, "oper_state"},
    error_state{YType::str, "error_state"}
{

    yang_name = "history"; yang_parent_name = "data_idx"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::State::Up::Detail::DataIdx::History::~History()
{
}

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::State::Up::Detail::DataIdx::History::has_data() const
{
    if (is_presence_container) return true;
    return history_idx.is_set
	|| time_stamp.is_set
	|| admin_state.is_set
	|| oper_state.is_set
	|| error_state.is_set;
}

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::State::Up::Detail::DataIdx::History::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(history_idx.yfilter)
	|| ydk::is_set(time_stamp.yfilter)
	|| ydk::is_set(admin_state.yfilter)
	|| ydk::is_set(oper_state.yfilter)
	|| ydk::is_set(error_state.yfilter);
}

std::string Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::State::Up::Detail::DataIdx::History::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "history";
    ADD_KEY_TOKEN(history_idx, "history_idx");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::State::Up::Detail::DataIdx::History::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (history_idx.is_set || is_set(history_idx.yfilter)) leaf_name_data.push_back(history_idx.get_name_leafdata());
    if (time_stamp.is_set || is_set(time_stamp.yfilter)) leaf_name_data.push_back(time_stamp.get_name_leafdata());
    if (admin_state.is_set || is_set(admin_state.yfilter)) leaf_name_data.push_back(admin_state.get_name_leafdata());
    if (oper_state.is_set || is_set(oper_state.yfilter)) leaf_name_data.push_back(oper_state.get_name_leafdata());
    if (error_state.is_set || is_set(error_state.yfilter)) leaf_name_data.push_back(error_state.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::State::Up::Detail::DataIdx::History::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::State::Up::Detail::DataIdx::History::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::State::Up::Detail::DataIdx::History::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::State::Up::Detail::DataIdx::History::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::State::Up::Detail::DataIdx::History::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "history_idx" || name == "time_stamp" || name == "admin-state" || name == "oper_state" || name == "error_state")
        return true;
    return false;
}

Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::State::Down::Down()
    :
    data_idx(this, {"port_data_idx"})
    , brief(std::make_shared<Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::State::Down::Brief>())
    , detail(std::make_shared<Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::State::Down::Detail>())
{
    brief->parent = this;
    detail->parent = this;

    yang_name = "down"; yang_parent_name = "state"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::State::Down::~Down()
{
}

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::State::Down::has_data() const
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

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::State::Down::has_operation() const
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

std::string Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::State::Down::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "down";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::State::Down::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::State::Down::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "data_idx")
    {
        auto ent_ = std::make_shared<Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::State::Down::DataIdx>();
        ent_->parent = this;
        data_idx.append(ent_);
        return ent_;
    }

    if(child_yang_name == "brief")
    {
        if(brief == nullptr)
        {
            brief = std::make_shared<Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::State::Down::Brief>();
        }
        return brief;
    }

    if(child_yang_name == "detail")
    {
        if(detail == nullptr)
        {
            detail = std::make_shared<Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::State::Down::Detail>();
        }
        return detail;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::State::Down::get_children() const
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

void Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::State::Down::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::State::Down::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::State::Down::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data_idx" || name == "brief" || name == "detail")
        return true;
    return false;
}

Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::State::Down::DataIdx::DataIdx()
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

Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::State::Down::DataIdx::~DataIdx()
{
}

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::State::Down::DataIdx::has_data() const
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

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::State::Down::DataIdx::has_operation() const
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

std::string Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::State::Down::DataIdx::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "data_idx";
    ADD_KEY_TOKEN(port_data_idx, "port_data_idx");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::State::Down::DataIdx::get_name_leaf_data() const
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

std::shared_ptr<ydk::Entity> Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::State::Down::DataIdx::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "history")
    {
        auto ent_ = std::make_shared<Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::State::Down::DataIdx::History>();
        ent_->parent = this;
        history.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::State::Down::DataIdx::get_children() const
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

void Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::State::Down::DataIdx::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::State::Down::DataIdx::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::State::Down::DataIdx::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "history" || name == "port_data_idx" || name == "sfe_port" || name == "admin-state" || name == "oper_state" || name == "near_end_cdr_ln" || name == "near_end_cxp_ch" || name == "far_end_cxp_ch" || name == "far_end_cdr_ln" || name == "neighbor_link")
        return true;
    return false;
}

Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::State::Down::DataIdx::History::History()
    :
    history_idx{YType::int32, "history_idx"},
    time_stamp{YType::str, "time_stamp"},
    admin_state{YType::str, "admin-state"},
    oper_state{YType::str, "oper_state"},
    error_state{YType::str, "error_state"}
{

    yang_name = "history"; yang_parent_name = "data_idx"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::State::Down::DataIdx::History::~History()
{
}

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::State::Down::DataIdx::History::has_data() const
{
    if (is_presence_container) return true;
    return history_idx.is_set
	|| time_stamp.is_set
	|| admin_state.is_set
	|| oper_state.is_set
	|| error_state.is_set;
}

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::State::Down::DataIdx::History::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(history_idx.yfilter)
	|| ydk::is_set(time_stamp.yfilter)
	|| ydk::is_set(admin_state.yfilter)
	|| ydk::is_set(oper_state.yfilter)
	|| ydk::is_set(error_state.yfilter);
}

std::string Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::State::Down::DataIdx::History::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "history";
    ADD_KEY_TOKEN(history_idx, "history_idx");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::State::Down::DataIdx::History::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (history_idx.is_set || is_set(history_idx.yfilter)) leaf_name_data.push_back(history_idx.get_name_leafdata());
    if (time_stamp.is_set || is_set(time_stamp.yfilter)) leaf_name_data.push_back(time_stamp.get_name_leafdata());
    if (admin_state.is_set || is_set(admin_state.yfilter)) leaf_name_data.push_back(admin_state.get_name_leafdata());
    if (oper_state.is_set || is_set(oper_state.yfilter)) leaf_name_data.push_back(oper_state.get_name_leafdata());
    if (error_state.is_set || is_set(error_state.yfilter)) leaf_name_data.push_back(error_state.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::State::Down::DataIdx::History::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::State::Down::DataIdx::History::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::State::Down::DataIdx::History::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::State::Down::DataIdx::History::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::State::Down::DataIdx::History::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "history_idx" || name == "time_stamp" || name == "admin-state" || name == "oper_state" || name == "error_state")
        return true;
    return false;
}

Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::State::Down::Brief::Brief()
    :
    data_idx(this, {"port_data_idx"})
{

    yang_name = "brief"; yang_parent_name = "down"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::State::Down::Brief::~Brief()
{
}

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::State::Down::Brief::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<data_idx.len(); index++)
    {
        if(data_idx[index]->has_data())
            return true;
    }
    return false;
}

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::State::Down::Brief::has_operation() const
{
    for (std::size_t index=0; index<data_idx.len(); index++)
    {
        if(data_idx[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::State::Down::Brief::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "brief";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::State::Down::Brief::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::State::Down::Brief::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "data_idx")
    {
        auto ent_ = std::make_shared<Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::State::Down::Brief::DataIdx>();
        ent_->parent = this;
        data_idx.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::State::Down::Brief::get_children() const
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

void Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::State::Down::Brief::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::State::Down::Brief::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::State::Down::Brief::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data_idx")
        return true;
    return false;
}

Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::State::Down::Brief::DataIdx::DataIdx()
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

Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::State::Down::Brief::DataIdx::~DataIdx()
{
}

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::State::Down::Brief::DataIdx::has_data() const
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

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::State::Down::Brief::DataIdx::has_operation() const
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

std::string Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::State::Down::Brief::DataIdx::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "data_idx";
    ADD_KEY_TOKEN(port_data_idx, "port_data_idx");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::State::Down::Brief::DataIdx::get_name_leaf_data() const
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

std::shared_ptr<ydk::Entity> Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::State::Down::Brief::DataIdx::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "history")
    {
        auto ent_ = std::make_shared<Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::State::Down::Brief::DataIdx::History>();
        ent_->parent = this;
        history.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::State::Down::Brief::DataIdx::get_children() const
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

void Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::State::Down::Brief::DataIdx::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::State::Down::Brief::DataIdx::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::State::Down::Brief::DataIdx::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "history" || name == "port_data_idx" || name == "sfe_port" || name == "admin-state" || name == "oper_state" || name == "near_end_cdr_ln" || name == "near_end_cxp_ch" || name == "far_end_cxp_ch" || name == "far_end_cdr_ln" || name == "neighbor_link")
        return true;
    return false;
}

Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::State::Down::Brief::DataIdx::History::History()
    :
    history_idx{YType::int32, "history_idx"},
    time_stamp{YType::str, "time_stamp"},
    admin_state{YType::str, "admin-state"},
    oper_state{YType::str, "oper_state"},
    error_state{YType::str, "error_state"}
{

    yang_name = "history"; yang_parent_name = "data_idx"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::State::Down::Brief::DataIdx::History::~History()
{
}

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::State::Down::Brief::DataIdx::History::has_data() const
{
    if (is_presence_container) return true;
    return history_idx.is_set
	|| time_stamp.is_set
	|| admin_state.is_set
	|| oper_state.is_set
	|| error_state.is_set;
}

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::State::Down::Brief::DataIdx::History::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(history_idx.yfilter)
	|| ydk::is_set(time_stamp.yfilter)
	|| ydk::is_set(admin_state.yfilter)
	|| ydk::is_set(oper_state.yfilter)
	|| ydk::is_set(error_state.yfilter);
}

std::string Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::State::Down::Brief::DataIdx::History::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "history";
    ADD_KEY_TOKEN(history_idx, "history_idx");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::State::Down::Brief::DataIdx::History::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (history_idx.is_set || is_set(history_idx.yfilter)) leaf_name_data.push_back(history_idx.get_name_leafdata());
    if (time_stamp.is_set || is_set(time_stamp.yfilter)) leaf_name_data.push_back(time_stamp.get_name_leafdata());
    if (admin_state.is_set || is_set(admin_state.yfilter)) leaf_name_data.push_back(admin_state.get_name_leafdata());
    if (oper_state.is_set || is_set(oper_state.yfilter)) leaf_name_data.push_back(oper_state.get_name_leafdata());
    if (error_state.is_set || is_set(error_state.yfilter)) leaf_name_data.push_back(error_state.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::State::Down::Brief::DataIdx::History::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::State::Down::Brief::DataIdx::History::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::State::Down::Brief::DataIdx::History::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::State::Down::Brief::DataIdx::History::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::State::Down::Brief::DataIdx::History::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "history_idx" || name == "time_stamp" || name == "admin-state" || name == "oper_state" || name == "error_state")
        return true;
    return false;
}

Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::State::Down::Detail::Detail()
    :
    data_idx(this, {"port_data_idx"})
{

    yang_name = "detail"; yang_parent_name = "down"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::State::Down::Detail::~Detail()
{
}

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::State::Down::Detail::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<data_idx.len(); index++)
    {
        if(data_idx[index]->has_data())
            return true;
    }
    return false;
}

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::State::Down::Detail::has_operation() const
{
    for (std::size_t index=0; index<data_idx.len(); index++)
    {
        if(data_idx[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::State::Down::Detail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "detail";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::State::Down::Detail::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::State::Down::Detail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "data_idx")
    {
        auto ent_ = std::make_shared<Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::State::Down::Detail::DataIdx>();
        ent_->parent = this;
        data_idx.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::State::Down::Detail::get_children() const
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

void Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::State::Down::Detail::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::State::Down::Detail::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::State::Down::Detail::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data_idx")
        return true;
    return false;
}

Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::State::Down::Detail::DataIdx::DataIdx()
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

Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::State::Down::Detail::DataIdx::~DataIdx()
{
}

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::State::Down::Detail::DataIdx::has_data() const
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

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::State::Down::Detail::DataIdx::has_operation() const
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

std::string Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::State::Down::Detail::DataIdx::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "data_idx";
    ADD_KEY_TOKEN(port_data_idx, "port_data_idx");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::State::Down::Detail::DataIdx::get_name_leaf_data() const
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

std::shared_ptr<ydk::Entity> Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::State::Down::Detail::DataIdx::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "history")
    {
        auto ent_ = std::make_shared<Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::State::Down::Detail::DataIdx::History>();
        ent_->parent = this;
        history.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::State::Down::Detail::DataIdx::get_children() const
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

void Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::State::Down::Detail::DataIdx::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::State::Down::Detail::DataIdx::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::State::Down::Detail::DataIdx::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "history" || name == "port_data_idx" || name == "sfe_port" || name == "admin-state" || name == "oper_state" || name == "near_end_cdr_ln" || name == "near_end_cxp_ch" || name == "far_end_cxp_ch" || name == "far_end_cdr_ln" || name == "neighbor_link")
        return true;
    return false;
}

Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::State::Down::Detail::DataIdx::History::History()
    :
    history_idx{YType::int32, "history_idx"},
    time_stamp{YType::str, "time_stamp"},
    admin_state{YType::str, "admin-state"},
    oper_state{YType::str, "oper_state"},
    error_state{YType::str, "error_state"}
{

    yang_name = "history"; yang_parent_name = "data_idx"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::State::Down::Detail::DataIdx::History::~History()
{
}

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::State::Down::Detail::DataIdx::History::has_data() const
{
    if (is_presence_container) return true;
    return history_idx.is_set
	|| time_stamp.is_set
	|| admin_state.is_set
	|| oper_state.is_set
	|| error_state.is_set;
}

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::State::Down::Detail::DataIdx::History::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(history_idx.yfilter)
	|| ydk::is_set(time_stamp.yfilter)
	|| ydk::is_set(admin_state.yfilter)
	|| ydk::is_set(oper_state.yfilter)
	|| ydk::is_set(error_state.yfilter);
}

std::string Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::State::Down::Detail::DataIdx::History::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "history";
    ADD_KEY_TOKEN(history_idx, "history_idx");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::State::Down::Detail::DataIdx::History::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (history_idx.is_set || is_set(history_idx.yfilter)) leaf_name_data.push_back(history_idx.get_name_leafdata());
    if (time_stamp.is_set || is_set(time_stamp.yfilter)) leaf_name_data.push_back(time_stamp.get_name_leafdata());
    if (admin_state.is_set || is_set(admin_state.yfilter)) leaf_name_data.push_back(admin_state.get_name_leafdata());
    if (oper_state.is_set || is_set(oper_state.yfilter)) leaf_name_data.push_back(oper_state.get_name_leafdata());
    if (error_state.is_set || is_set(error_state.yfilter)) leaf_name_data.push_back(error_state.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::State::Down::Detail::DataIdx::History::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::State::Down::Detail::DataIdx::History::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::State::Down::Detail::DataIdx::History::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::State::Down::Detail::DataIdx::History::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::State::Down::Detail::DataIdx::History::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "history_idx" || name == "time_stamp" || name == "admin-state" || name == "oper_state" || name == "error_state")
        return true;
    return false;
}

Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::State::Mismatch::Mismatch()
    :
    data_idx(this, {"port_data_idx"})
    , brief(std::make_shared<Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::State::Mismatch::Brief>())
    , detail(std::make_shared<Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::State::Mismatch::Detail>())
{
    brief->parent = this;
    detail->parent = this;

    yang_name = "mismatch"; yang_parent_name = "state"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::State::Mismatch::~Mismatch()
{
}

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::State::Mismatch::has_data() const
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

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::State::Mismatch::has_operation() const
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

std::string Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::State::Mismatch::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mismatch";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::State::Mismatch::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::State::Mismatch::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "data_idx")
    {
        auto ent_ = std::make_shared<Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::State::Mismatch::DataIdx>();
        ent_->parent = this;
        data_idx.append(ent_);
        return ent_;
    }

    if(child_yang_name == "brief")
    {
        if(brief == nullptr)
        {
            brief = std::make_shared<Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::State::Mismatch::Brief>();
        }
        return brief;
    }

    if(child_yang_name == "detail")
    {
        if(detail == nullptr)
        {
            detail = std::make_shared<Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::State::Mismatch::Detail>();
        }
        return detail;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::State::Mismatch::get_children() const
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

void Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::State::Mismatch::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::State::Mismatch::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::State::Mismatch::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data_idx" || name == "brief" || name == "detail")
        return true;
    return false;
}

Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::State::Mismatch::DataIdx::DataIdx()
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

Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::State::Mismatch::DataIdx::~DataIdx()
{
}

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::State::Mismatch::DataIdx::has_data() const
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

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::State::Mismatch::DataIdx::has_operation() const
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

std::string Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::State::Mismatch::DataIdx::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "data_idx";
    ADD_KEY_TOKEN(port_data_idx, "port_data_idx");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::State::Mismatch::DataIdx::get_name_leaf_data() const
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

std::shared_ptr<ydk::Entity> Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::State::Mismatch::DataIdx::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "history")
    {
        auto ent_ = std::make_shared<Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::State::Mismatch::DataIdx::History>();
        ent_->parent = this;
        history.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::State::Mismatch::DataIdx::get_children() const
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

void Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::State::Mismatch::DataIdx::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::State::Mismatch::DataIdx::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::State::Mismatch::DataIdx::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "history" || name == "port_data_idx" || name == "sfe_port" || name == "admin-state" || name == "oper_state" || name == "near_end_cdr_ln" || name == "near_end_cxp_ch" || name == "far_end_cxp_ch" || name == "far_end_cdr_ln" || name == "neighbor_link")
        return true;
    return false;
}

Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::State::Mismatch::DataIdx::History::History()
    :
    history_idx{YType::int32, "history_idx"},
    time_stamp{YType::str, "time_stamp"},
    admin_state{YType::str, "admin-state"},
    oper_state{YType::str, "oper_state"},
    error_state{YType::str, "error_state"}
{

    yang_name = "history"; yang_parent_name = "data_idx"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::State::Mismatch::DataIdx::History::~History()
{
}

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::State::Mismatch::DataIdx::History::has_data() const
{
    if (is_presence_container) return true;
    return history_idx.is_set
	|| time_stamp.is_set
	|| admin_state.is_set
	|| oper_state.is_set
	|| error_state.is_set;
}

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::State::Mismatch::DataIdx::History::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(history_idx.yfilter)
	|| ydk::is_set(time_stamp.yfilter)
	|| ydk::is_set(admin_state.yfilter)
	|| ydk::is_set(oper_state.yfilter)
	|| ydk::is_set(error_state.yfilter);
}

std::string Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::State::Mismatch::DataIdx::History::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "history";
    ADD_KEY_TOKEN(history_idx, "history_idx");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::State::Mismatch::DataIdx::History::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (history_idx.is_set || is_set(history_idx.yfilter)) leaf_name_data.push_back(history_idx.get_name_leafdata());
    if (time_stamp.is_set || is_set(time_stamp.yfilter)) leaf_name_data.push_back(time_stamp.get_name_leafdata());
    if (admin_state.is_set || is_set(admin_state.yfilter)) leaf_name_data.push_back(admin_state.get_name_leafdata());
    if (oper_state.is_set || is_set(oper_state.yfilter)) leaf_name_data.push_back(oper_state.get_name_leafdata());
    if (error_state.is_set || is_set(error_state.yfilter)) leaf_name_data.push_back(error_state.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::State::Mismatch::DataIdx::History::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::State::Mismatch::DataIdx::History::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::State::Mismatch::DataIdx::History::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::State::Mismatch::DataIdx::History::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::State::Mismatch::DataIdx::History::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "history_idx" || name == "time_stamp" || name == "admin-state" || name == "oper_state" || name == "error_state")
        return true;
    return false;
}

Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::State::Mismatch::Brief::Brief()
    :
    data_idx(this, {"port_data_idx"})
{

    yang_name = "brief"; yang_parent_name = "mismatch"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::State::Mismatch::Brief::~Brief()
{
}

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::State::Mismatch::Brief::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<data_idx.len(); index++)
    {
        if(data_idx[index]->has_data())
            return true;
    }
    return false;
}

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::State::Mismatch::Brief::has_operation() const
{
    for (std::size_t index=0; index<data_idx.len(); index++)
    {
        if(data_idx[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::State::Mismatch::Brief::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "brief";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::State::Mismatch::Brief::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::State::Mismatch::Brief::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "data_idx")
    {
        auto ent_ = std::make_shared<Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::State::Mismatch::Brief::DataIdx>();
        ent_->parent = this;
        data_idx.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::State::Mismatch::Brief::get_children() const
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

void Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::State::Mismatch::Brief::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::State::Mismatch::Brief::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::State::Mismatch::Brief::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data_idx")
        return true;
    return false;
}

Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::State::Mismatch::Brief::DataIdx::DataIdx()
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

Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::State::Mismatch::Brief::DataIdx::~DataIdx()
{
}

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::State::Mismatch::Brief::DataIdx::has_data() const
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

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::State::Mismatch::Brief::DataIdx::has_operation() const
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

std::string Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::State::Mismatch::Brief::DataIdx::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "data_idx";
    ADD_KEY_TOKEN(port_data_idx, "port_data_idx");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::State::Mismatch::Brief::DataIdx::get_name_leaf_data() const
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

std::shared_ptr<ydk::Entity> Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::State::Mismatch::Brief::DataIdx::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "history")
    {
        auto ent_ = std::make_shared<Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::State::Mismatch::Brief::DataIdx::History>();
        ent_->parent = this;
        history.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::State::Mismatch::Brief::DataIdx::get_children() const
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

void Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::State::Mismatch::Brief::DataIdx::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::State::Mismatch::Brief::DataIdx::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::State::Mismatch::Brief::DataIdx::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "history" || name == "port_data_idx" || name == "sfe_port" || name == "admin-state" || name == "oper_state" || name == "near_end_cdr_ln" || name == "near_end_cxp_ch" || name == "far_end_cxp_ch" || name == "far_end_cdr_ln" || name == "neighbor_link")
        return true;
    return false;
}

Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::State::Mismatch::Brief::DataIdx::History::History()
    :
    history_idx{YType::int32, "history_idx"},
    time_stamp{YType::str, "time_stamp"},
    admin_state{YType::str, "admin-state"},
    oper_state{YType::str, "oper_state"},
    error_state{YType::str, "error_state"}
{

    yang_name = "history"; yang_parent_name = "data_idx"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::State::Mismatch::Brief::DataIdx::History::~History()
{
}

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::State::Mismatch::Brief::DataIdx::History::has_data() const
{
    if (is_presence_container) return true;
    return history_idx.is_set
	|| time_stamp.is_set
	|| admin_state.is_set
	|| oper_state.is_set
	|| error_state.is_set;
}

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::State::Mismatch::Brief::DataIdx::History::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(history_idx.yfilter)
	|| ydk::is_set(time_stamp.yfilter)
	|| ydk::is_set(admin_state.yfilter)
	|| ydk::is_set(oper_state.yfilter)
	|| ydk::is_set(error_state.yfilter);
}

std::string Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::State::Mismatch::Brief::DataIdx::History::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "history";
    ADD_KEY_TOKEN(history_idx, "history_idx");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::State::Mismatch::Brief::DataIdx::History::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (history_idx.is_set || is_set(history_idx.yfilter)) leaf_name_data.push_back(history_idx.get_name_leafdata());
    if (time_stamp.is_set || is_set(time_stamp.yfilter)) leaf_name_data.push_back(time_stamp.get_name_leafdata());
    if (admin_state.is_set || is_set(admin_state.yfilter)) leaf_name_data.push_back(admin_state.get_name_leafdata());
    if (oper_state.is_set || is_set(oper_state.yfilter)) leaf_name_data.push_back(oper_state.get_name_leafdata());
    if (error_state.is_set || is_set(error_state.yfilter)) leaf_name_data.push_back(error_state.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::State::Mismatch::Brief::DataIdx::History::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::State::Mismatch::Brief::DataIdx::History::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::State::Mismatch::Brief::DataIdx::History::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::State::Mismatch::Brief::DataIdx::History::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::State::Mismatch::Brief::DataIdx::History::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "history_idx" || name == "time_stamp" || name == "admin-state" || name == "oper_state" || name == "error_state")
        return true;
    return false;
}

Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::State::Mismatch::Detail::Detail()
    :
    data_idx(this, {"port_data_idx"})
{

    yang_name = "detail"; yang_parent_name = "mismatch"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::State::Mismatch::Detail::~Detail()
{
}

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::State::Mismatch::Detail::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<data_idx.len(); index++)
    {
        if(data_idx[index]->has_data())
            return true;
    }
    return false;
}

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::State::Mismatch::Detail::has_operation() const
{
    for (std::size_t index=0; index<data_idx.len(); index++)
    {
        if(data_idx[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::State::Mismatch::Detail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "detail";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::State::Mismatch::Detail::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::State::Mismatch::Detail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "data_idx")
    {
        auto ent_ = std::make_shared<Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::State::Mismatch::Detail::DataIdx>();
        ent_->parent = this;
        data_idx.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::State::Mismatch::Detail::get_children() const
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

void Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::State::Mismatch::Detail::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::State::Mismatch::Detail::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::State::Mismatch::Detail::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data_idx")
        return true;
    return false;
}

Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::State::Mismatch::Detail::DataIdx::DataIdx()
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

Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::State::Mismatch::Detail::DataIdx::~DataIdx()
{
}

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::State::Mismatch::Detail::DataIdx::has_data() const
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

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::State::Mismatch::Detail::DataIdx::has_operation() const
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

std::string Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::State::Mismatch::Detail::DataIdx::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "data_idx";
    ADD_KEY_TOKEN(port_data_idx, "port_data_idx");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::State::Mismatch::Detail::DataIdx::get_name_leaf_data() const
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

std::shared_ptr<ydk::Entity> Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::State::Mismatch::Detail::DataIdx::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "history")
    {
        auto ent_ = std::make_shared<Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::State::Mismatch::Detail::DataIdx::History>();
        ent_->parent = this;
        history.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::State::Mismatch::Detail::DataIdx::get_children() const
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

void Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::State::Mismatch::Detail::DataIdx::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::State::Mismatch::Detail::DataIdx::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::State::Mismatch::Detail::DataIdx::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "history" || name == "port_data_idx" || name == "sfe_port" || name == "admin-state" || name == "oper_state" || name == "near_end_cdr_ln" || name == "near_end_cxp_ch" || name == "far_end_cxp_ch" || name == "far_end_cdr_ln" || name == "neighbor_link")
        return true;
    return false;
}

Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::State::Mismatch::Detail::DataIdx::History::History()
    :
    history_idx{YType::int32, "history_idx"},
    time_stamp{YType::str, "time_stamp"},
    admin_state{YType::str, "admin-state"},
    oper_state{YType::str, "oper_state"},
    error_state{YType::str, "error_state"}
{

    yang_name = "history"; yang_parent_name = "data_idx"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::State::Mismatch::Detail::DataIdx::History::~History()
{
}

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::State::Mismatch::Detail::DataIdx::History::has_data() const
{
    if (is_presence_container) return true;
    return history_idx.is_set
	|| time_stamp.is_set
	|| admin_state.is_set
	|| oper_state.is_set
	|| error_state.is_set;
}

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::State::Mismatch::Detail::DataIdx::History::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(history_idx.yfilter)
	|| ydk::is_set(time_stamp.yfilter)
	|| ydk::is_set(admin_state.yfilter)
	|| ydk::is_set(oper_state.yfilter)
	|| ydk::is_set(error_state.yfilter);
}

std::string Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::State::Mismatch::Detail::DataIdx::History::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "history";
    ADD_KEY_TOKEN(history_idx, "history_idx");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::State::Mismatch::Detail::DataIdx::History::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (history_idx.is_set || is_set(history_idx.yfilter)) leaf_name_data.push_back(history_idx.get_name_leafdata());
    if (time_stamp.is_set || is_set(time_stamp.yfilter)) leaf_name_data.push_back(time_stamp.get_name_leafdata());
    if (admin_state.is_set || is_set(admin_state.yfilter)) leaf_name_data.push_back(admin_state.get_name_leafdata());
    if (oper_state.is_set || is_set(oper_state.yfilter)) leaf_name_data.push_back(oper_state.get_name_leafdata());
    if (error_state.is_set || is_set(error_state.yfilter)) leaf_name_data.push_back(error_state.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::State::Mismatch::Detail::DataIdx::History::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::State::Mismatch::Detail::DataIdx::History::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::State::Mismatch::Detail::DataIdx::History::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::State::Mismatch::Detail::DataIdx::History::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::State::Mismatch::Detail::DataIdx::History::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "history_idx" || name == "time_stamp" || name == "admin-state" || name == "oper_state" || name == "error_state")
        return true;
    return false;
}

Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::Statistics::Statistics()
    :
    data_idx(this, {"port_data_idx"})
    , brief(std::make_shared<Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::Statistics::Brief>())
    , detail(std::make_shared<Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::Statistics::Detail>())
{
    brief->parent = this;
    detail->parent = this;

    yang_name = "statistics"; yang_parent_name = "tx"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::Statistics::~Statistics()
{
}

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::Statistics::has_data() const
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

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::Statistics::has_operation() const
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

std::string Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::Statistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::Statistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::Statistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "data_idx")
    {
        auto ent_ = std::make_shared<Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::Statistics::DataIdx>();
        ent_->parent = this;
        data_idx.append(ent_);
        return ent_;
    }

    if(child_yang_name == "brief")
    {
        if(brief == nullptr)
        {
            brief = std::make_shared<Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::Statistics::Brief>();
        }
        return brief;
    }

    if(child_yang_name == "detail")
    {
        if(detail == nullptr)
        {
            detail = std::make_shared<Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::Statistics::Detail>();
        }
        return detail;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::Statistics::get_children() const
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

void Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::Statistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::Statistics::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::Statistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data_idx" || name == "brief" || name == "detail")
        return true;
    return false;
}

Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::Statistics::DataIdx::DataIdx()
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

Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::Statistics::DataIdx::~DataIdx()
{
}

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::Statistics::DataIdx::has_data() const
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

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::Statistics::DataIdx::has_operation() const
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

std::string Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::Statistics::DataIdx::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "data_idx";
    ADD_KEY_TOKEN(port_data_idx, "port_data_idx");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::Statistics::DataIdx::get_name_leaf_data() const
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

std::shared_ptr<ydk::Entity> Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::Statistics::DataIdx::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::Statistics::DataIdx::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::Statistics::DataIdx::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::Statistics::DataIdx::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::Statistics::DataIdx::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "port_data_idx" || name == "rack_num" || name == "sfe_port" || name == "TX_Control_cells_counter" || name == "TX_Data_cell_counter" || name == "TX_Data_byte_counter" || name == "RX_CRC_errors_counter" || name == "RX_LFEC_FEC_correctable_error" || name == "RX_8b_10b_disparity_errors" || name == "RX_Control_cells_counter" || name == "RX_Data_cell_counter" || name == "RX_Data_byte_counter" || name == "RX_dropped_retransmitted_control" || name == "TX_Asyn_fifo_rate" || name == "RX_Asyn_fifo_rate" || name == "RX_LFEC_FEC_uncorrectable_errors" || name == "RX_8b_10b_code_errors" || name == "is_link_error" || name == "link_crc_error" || name == "link_size_error" || name == "link_mis_align_error" || name == "link_code_group_error" || name == "link_no_sig_lock_error" || name == "link_no_sig_accept_error" || name == "link_tokens_error" || name == "error_token_count")
        return true;
    return false;
}

Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::Statistics::Brief::Brief()
    :
    data_idx(this, {"port_data_idx"})
{

    yang_name = "brief"; yang_parent_name = "statistics"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::Statistics::Brief::~Brief()
{
}

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::Statistics::Brief::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<data_idx.len(); index++)
    {
        if(data_idx[index]->has_data())
            return true;
    }
    return false;
}

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::Statistics::Brief::has_operation() const
{
    for (std::size_t index=0; index<data_idx.len(); index++)
    {
        if(data_idx[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::Statistics::Brief::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "brief";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::Statistics::Brief::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::Statistics::Brief::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "data_idx")
    {
        auto ent_ = std::make_shared<Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::Statistics::Brief::DataIdx>();
        ent_->parent = this;
        data_idx.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::Statistics::Brief::get_children() const
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

void Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::Statistics::Brief::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::Statistics::Brief::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::Statistics::Brief::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data_idx")
        return true;
    return false;
}

Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::Statistics::Brief::DataIdx::DataIdx()
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

Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::Statistics::Brief::DataIdx::~DataIdx()
{
}

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::Statistics::Brief::DataIdx::has_data() const
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

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::Statistics::Brief::DataIdx::has_operation() const
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

std::string Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::Statistics::Brief::DataIdx::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "data_idx";
    ADD_KEY_TOKEN(port_data_idx, "port_data_idx");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::Statistics::Brief::DataIdx::get_name_leaf_data() const
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

std::shared_ptr<ydk::Entity> Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::Statistics::Brief::DataIdx::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::Statistics::Brief::DataIdx::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::Statistics::Brief::DataIdx::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::Statistics::Brief::DataIdx::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::Statistics::Brief::DataIdx::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "port_data_idx" || name == "rack_num" || name == "sfe_port" || name == "TX_Control_cells_counter" || name == "TX_Data_cell_counter" || name == "TX_Data_byte_counter" || name == "RX_CRC_errors_counter" || name == "RX_LFEC_FEC_correctable_error" || name == "RX_8b_10b_disparity_errors" || name == "RX_Control_cells_counter" || name == "RX_Data_cell_counter" || name == "RX_Data_byte_counter" || name == "RX_dropped_retransmitted_control" || name == "TX_Asyn_fifo_rate" || name == "RX_Asyn_fifo_rate" || name == "RX_LFEC_FEC_uncorrectable_errors" || name == "RX_8b_10b_code_errors" || name == "is_link_error" || name == "link_crc_error" || name == "link_size_error" || name == "link_mis_align_error" || name == "link_code_group_error" || name == "link_no_sig_lock_error" || name == "link_no_sig_accept_error" || name == "link_tokens_error" || name == "error_token_count")
        return true;
    return false;
}

Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::Statistics::Detail::Detail()
    :
    data_idx(this, {"port_data_idx"})
{

    yang_name = "detail"; yang_parent_name = "statistics"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::Statistics::Detail::~Detail()
{
}

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::Statistics::Detail::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<data_idx.len(); index++)
    {
        if(data_idx[index]->has_data())
            return true;
    }
    return false;
}

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::Statistics::Detail::has_operation() const
{
    for (std::size_t index=0; index<data_idx.len(); index++)
    {
        if(data_idx[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::Statistics::Detail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "detail";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::Statistics::Detail::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::Statistics::Detail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "data_idx")
    {
        auto ent_ = std::make_shared<Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::Statistics::Detail::DataIdx>();
        ent_->parent = this;
        data_idx.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::Statistics::Detail::get_children() const
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

void Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::Statistics::Detail::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::Statistics::Detail::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::Statistics::Detail::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data_idx")
        return true;
    return false;
}

Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::Statistics::Detail::DataIdx::DataIdx()
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

Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::Statistics::Detail::DataIdx::~DataIdx()
{
}

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::Statistics::Detail::DataIdx::has_data() const
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

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::Statistics::Detail::DataIdx::has_operation() const
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

std::string Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::Statistics::Detail::DataIdx::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "data_idx";
    ADD_KEY_TOKEN(port_data_idx, "port_data_idx");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::Statistics::Detail::DataIdx::get_name_leaf_data() const
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

std::shared_ptr<ydk::Entity> Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::Statistics::Detail::DataIdx::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::Statistics::Detail::DataIdx::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::Statistics::Detail::DataIdx::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::Statistics::Detail::DataIdx::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::Statistics::Detail::DataIdx::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "port_data_idx" || name == "rack_num" || name == "sfe_port" || name == "TX_Control_cells_counter" || name == "TX_Data_cell_counter" || name == "TX_Data_byte_counter" || name == "RX_CRC_errors_counter" || name == "RX_LFEC_FEC_correctable_error" || name == "RX_8b_10b_disparity_errors" || name == "RX_Control_cells_counter" || name == "RX_Data_cell_counter" || name == "RX_Data_byte_counter" || name == "RX_dropped_retransmitted_control" || name == "TX_Asyn_fifo_rate" || name == "RX_Asyn_fifo_rate" || name == "RX_LFEC_FEC_uncorrectable_errors" || name == "RX_8b_10b_code_errors" || name == "is_link_error" || name == "link_crc_error" || name == "link_size_error" || name == "link_mis_align_error" || name == "link_code_group_error" || name == "link_no_sig_lock_error" || name == "link_no_sig_accept_error" || name == "link_tokens_error" || name == "error_token_count")
        return true;
    return false;
}

Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::Rx()
    :
    data_idx(this, {"port_data_idx"})
    , brief(std::make_shared<Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::Brief>())
    , detail(std::make_shared<Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::Detail>())
    , state(std::make_shared<Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::State>())
    , statistics(std::make_shared<Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::Statistics>())
{
    brief->parent = this;
    detail->parent = this;
    state->parent = this;
    statistics->parent = this;

    yang_name = "rx"; yang_parent_name = "port"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::~Rx()
{
}

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::has_data() const
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

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::has_operation() const
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

std::string Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rx";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "data_idx")
    {
        auto ent_ = std::make_shared<Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::DataIdx>();
        ent_->parent = this;
        data_idx.append(ent_);
        return ent_;
    }

    if(child_yang_name == "brief")
    {
        if(brief == nullptr)
        {
            brief = std::make_shared<Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::Brief>();
        }
        return brief;
    }

    if(child_yang_name == "detail")
    {
        if(detail == nullptr)
        {
            detail = std::make_shared<Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::Detail>();
        }
        return detail;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::State>();
        }
        return state;
    }

    if(child_yang_name == "statistics")
    {
        if(statistics == nullptr)
        {
            statistics = std::make_shared<Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::Statistics>();
        }
        return statistics;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::get_children() const
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

void Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data_idx" || name == "brief" || name == "detail" || name == "state" || name == "statistics")
        return true;
    return false;
}

Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::DataIdx::DataIdx()
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

    yang_name = "data_idx"; yang_parent_name = "rx"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::DataIdx::~DataIdx()
{
}

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::DataIdx::has_data() const
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

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::DataIdx::has_operation() const
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

std::string Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::DataIdx::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "data_idx";
    ADD_KEY_TOKEN(port_data_idx, "port_data_idx");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::DataIdx::get_name_leaf_data() const
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

std::shared_ptr<ydk::Entity> Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::DataIdx::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "history")
    {
        auto ent_ = std::make_shared<Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::DataIdx::History>();
        ent_->parent = this;
        history.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::DataIdx::get_children() const
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

void Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::DataIdx::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::DataIdx::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::DataIdx::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "history" || name == "port_data_idx" || name == "sfe_port" || name == "admin-state" || name == "oper_state" || name == "near_end_cdr_ln" || name == "near_end_cxp_ch" || name == "far_end_cxp_ch" || name == "far_end_cdr_ln" || name == "neighbor_link")
        return true;
    return false;
}

Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::DataIdx::History::History()
    :
    history_idx{YType::int32, "history_idx"},
    time_stamp{YType::str, "time_stamp"},
    admin_state{YType::str, "admin-state"},
    oper_state{YType::str, "oper_state"},
    error_state{YType::str, "error_state"}
{

    yang_name = "history"; yang_parent_name = "data_idx"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::DataIdx::History::~History()
{
}

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::DataIdx::History::has_data() const
{
    if (is_presence_container) return true;
    return history_idx.is_set
	|| time_stamp.is_set
	|| admin_state.is_set
	|| oper_state.is_set
	|| error_state.is_set;
}

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::DataIdx::History::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(history_idx.yfilter)
	|| ydk::is_set(time_stamp.yfilter)
	|| ydk::is_set(admin_state.yfilter)
	|| ydk::is_set(oper_state.yfilter)
	|| ydk::is_set(error_state.yfilter);
}

std::string Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::DataIdx::History::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "history";
    ADD_KEY_TOKEN(history_idx, "history_idx");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::DataIdx::History::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (history_idx.is_set || is_set(history_idx.yfilter)) leaf_name_data.push_back(history_idx.get_name_leafdata());
    if (time_stamp.is_set || is_set(time_stamp.yfilter)) leaf_name_data.push_back(time_stamp.get_name_leafdata());
    if (admin_state.is_set || is_set(admin_state.yfilter)) leaf_name_data.push_back(admin_state.get_name_leafdata());
    if (oper_state.is_set || is_set(oper_state.yfilter)) leaf_name_data.push_back(oper_state.get_name_leafdata());
    if (error_state.is_set || is_set(error_state.yfilter)) leaf_name_data.push_back(error_state.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::DataIdx::History::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::DataIdx::History::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::DataIdx::History::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::DataIdx::History::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::DataIdx::History::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "history_idx" || name == "time_stamp" || name == "admin-state" || name == "oper_state" || name == "error_state")
        return true;
    return false;
}

Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::Brief::Brief()
    :
    data_idx(this, {"port_data_idx"})
{

    yang_name = "brief"; yang_parent_name = "rx"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::Brief::~Brief()
{
}

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::Brief::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<data_idx.len(); index++)
    {
        if(data_idx[index]->has_data())
            return true;
    }
    return false;
}

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::Brief::has_operation() const
{
    for (std::size_t index=0; index<data_idx.len(); index++)
    {
        if(data_idx[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::Brief::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "brief";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::Brief::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::Brief::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "data_idx")
    {
        auto ent_ = std::make_shared<Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::Brief::DataIdx>();
        ent_->parent = this;
        data_idx.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::Brief::get_children() const
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

void Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::Brief::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::Brief::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::Brief::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data_idx")
        return true;
    return false;
}

Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::Brief::DataIdx::DataIdx()
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

Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::Brief::DataIdx::~DataIdx()
{
}

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::Brief::DataIdx::has_data() const
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

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::Brief::DataIdx::has_operation() const
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

std::string Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::Brief::DataIdx::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "data_idx";
    ADD_KEY_TOKEN(port_data_idx, "port_data_idx");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::Brief::DataIdx::get_name_leaf_data() const
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

std::shared_ptr<ydk::Entity> Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::Brief::DataIdx::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "history")
    {
        auto ent_ = std::make_shared<Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::Brief::DataIdx::History>();
        ent_->parent = this;
        history.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::Brief::DataIdx::get_children() const
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

void Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::Brief::DataIdx::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::Brief::DataIdx::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::Brief::DataIdx::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "history" || name == "port_data_idx" || name == "sfe_port" || name == "admin-state" || name == "oper_state" || name == "near_end_cdr_ln" || name == "near_end_cxp_ch" || name == "far_end_cxp_ch" || name == "far_end_cdr_ln" || name == "neighbor_link")
        return true;
    return false;
}

Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::Brief::DataIdx::History::History()
    :
    history_idx{YType::int32, "history_idx"},
    time_stamp{YType::str, "time_stamp"},
    admin_state{YType::str, "admin-state"},
    oper_state{YType::str, "oper_state"},
    error_state{YType::str, "error_state"}
{

    yang_name = "history"; yang_parent_name = "data_idx"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::Brief::DataIdx::History::~History()
{
}

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::Brief::DataIdx::History::has_data() const
{
    if (is_presence_container) return true;
    return history_idx.is_set
	|| time_stamp.is_set
	|| admin_state.is_set
	|| oper_state.is_set
	|| error_state.is_set;
}

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::Brief::DataIdx::History::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(history_idx.yfilter)
	|| ydk::is_set(time_stamp.yfilter)
	|| ydk::is_set(admin_state.yfilter)
	|| ydk::is_set(oper_state.yfilter)
	|| ydk::is_set(error_state.yfilter);
}

std::string Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::Brief::DataIdx::History::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "history";
    ADD_KEY_TOKEN(history_idx, "history_idx");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::Brief::DataIdx::History::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (history_idx.is_set || is_set(history_idx.yfilter)) leaf_name_data.push_back(history_idx.get_name_leafdata());
    if (time_stamp.is_set || is_set(time_stamp.yfilter)) leaf_name_data.push_back(time_stamp.get_name_leafdata());
    if (admin_state.is_set || is_set(admin_state.yfilter)) leaf_name_data.push_back(admin_state.get_name_leafdata());
    if (oper_state.is_set || is_set(oper_state.yfilter)) leaf_name_data.push_back(oper_state.get_name_leafdata());
    if (error_state.is_set || is_set(error_state.yfilter)) leaf_name_data.push_back(error_state.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::Brief::DataIdx::History::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::Brief::DataIdx::History::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::Brief::DataIdx::History::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::Brief::DataIdx::History::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::Brief::DataIdx::History::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "history_idx" || name == "time_stamp" || name == "admin-state" || name == "oper_state" || name == "error_state")
        return true;
    return false;
}

Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::Detail::Detail()
    :
    data_idx(this, {"port_data_idx"})
{

    yang_name = "detail"; yang_parent_name = "rx"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::Detail::~Detail()
{
}

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::Detail::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<data_idx.len(); index++)
    {
        if(data_idx[index]->has_data())
            return true;
    }
    return false;
}

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::Detail::has_operation() const
{
    for (std::size_t index=0; index<data_idx.len(); index++)
    {
        if(data_idx[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::Detail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "detail";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::Detail::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::Detail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "data_idx")
    {
        auto ent_ = std::make_shared<Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::Detail::DataIdx>();
        ent_->parent = this;
        data_idx.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::Detail::get_children() const
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

void Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::Detail::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::Detail::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::Detail::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data_idx")
        return true;
    return false;
}

Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::Detail::DataIdx::DataIdx()
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

Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::Detail::DataIdx::~DataIdx()
{
}

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::Detail::DataIdx::has_data() const
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

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::Detail::DataIdx::has_operation() const
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

std::string Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::Detail::DataIdx::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "data_idx";
    ADD_KEY_TOKEN(port_data_idx, "port_data_idx");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::Detail::DataIdx::get_name_leaf_data() const
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

std::shared_ptr<ydk::Entity> Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::Detail::DataIdx::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "history")
    {
        auto ent_ = std::make_shared<Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::Detail::DataIdx::History>();
        ent_->parent = this;
        history.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::Detail::DataIdx::get_children() const
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

void Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::Detail::DataIdx::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::Detail::DataIdx::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::Detail::DataIdx::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "history" || name == "port_data_idx" || name == "sfe_port" || name == "admin-state" || name == "oper_state" || name == "near_end_cdr_ln" || name == "near_end_cxp_ch" || name == "far_end_cxp_ch" || name == "far_end_cdr_ln" || name == "neighbor_link")
        return true;
    return false;
}

Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::Detail::DataIdx::History::History()
    :
    history_idx{YType::int32, "history_idx"},
    time_stamp{YType::str, "time_stamp"},
    admin_state{YType::str, "admin-state"},
    oper_state{YType::str, "oper_state"},
    error_state{YType::str, "error_state"}
{

    yang_name = "history"; yang_parent_name = "data_idx"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::Detail::DataIdx::History::~History()
{
}

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::Detail::DataIdx::History::has_data() const
{
    if (is_presence_container) return true;
    return history_idx.is_set
	|| time_stamp.is_set
	|| admin_state.is_set
	|| oper_state.is_set
	|| error_state.is_set;
}

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::Detail::DataIdx::History::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(history_idx.yfilter)
	|| ydk::is_set(time_stamp.yfilter)
	|| ydk::is_set(admin_state.yfilter)
	|| ydk::is_set(oper_state.yfilter)
	|| ydk::is_set(error_state.yfilter);
}

std::string Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::Detail::DataIdx::History::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "history";
    ADD_KEY_TOKEN(history_idx, "history_idx");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::Detail::DataIdx::History::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (history_idx.is_set || is_set(history_idx.yfilter)) leaf_name_data.push_back(history_idx.get_name_leafdata());
    if (time_stamp.is_set || is_set(time_stamp.yfilter)) leaf_name_data.push_back(time_stamp.get_name_leafdata());
    if (admin_state.is_set || is_set(admin_state.yfilter)) leaf_name_data.push_back(admin_state.get_name_leafdata());
    if (oper_state.is_set || is_set(oper_state.yfilter)) leaf_name_data.push_back(oper_state.get_name_leafdata());
    if (error_state.is_set || is_set(error_state.yfilter)) leaf_name_data.push_back(error_state.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::Detail::DataIdx::History::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::Detail::DataIdx::History::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::Detail::DataIdx::History::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::Detail::DataIdx::History::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::Detail::DataIdx::History::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "history_idx" || name == "time_stamp" || name == "admin-state" || name == "oper_state" || name == "error_state")
        return true;
    return false;
}

Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::State::State()
    :
    up(std::make_shared<Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::State::Up>())
    , down(std::make_shared<Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::State::Down>())
    , mismatch(std::make_shared<Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::State::Mismatch>())
{
    up->parent = this;
    down->parent = this;
    mismatch->parent = this;

    yang_name = "state"; yang_parent_name = "rx"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::State::~State()
{
}

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::State::has_data() const
{
    if (is_presence_container) return true;
    return (up !=  nullptr && up->has_data())
	|| (down !=  nullptr && down->has_data())
	|| (mismatch !=  nullptr && mismatch->has_data());
}

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::State::has_operation() const
{
    return is_set(yfilter)
	|| (up !=  nullptr && up->has_operation())
	|| (down !=  nullptr && down->has_operation())
	|| (mismatch !=  nullptr && mismatch->has_operation());
}

std::string Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "up")
    {
        if(up == nullptr)
        {
            up = std::make_shared<Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::State::Up>();
        }
        return up;
    }

    if(child_yang_name == "down")
    {
        if(down == nullptr)
        {
            down = std::make_shared<Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::State::Down>();
        }
        return down;
    }

    if(child_yang_name == "mismatch")
    {
        if(mismatch == nullptr)
        {
            mismatch = std::make_shared<Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::State::Mismatch>();
        }
        return mismatch;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::State::get_children() const
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

void Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::State::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "up" || name == "down" || name == "mismatch")
        return true;
    return false;
}

Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::State::Up::Up()
    :
    data_idx(this, {"port_data_idx"})
    , brief(std::make_shared<Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::State::Up::Brief>())
    , detail(std::make_shared<Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::State::Up::Detail>())
{
    brief->parent = this;
    detail->parent = this;

    yang_name = "up"; yang_parent_name = "state"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::State::Up::~Up()
{
}

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::State::Up::has_data() const
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

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::State::Up::has_operation() const
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

std::string Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::State::Up::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "up";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::State::Up::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::State::Up::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "data_idx")
    {
        auto ent_ = std::make_shared<Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::State::Up::DataIdx>();
        ent_->parent = this;
        data_idx.append(ent_);
        return ent_;
    }

    if(child_yang_name == "brief")
    {
        if(brief == nullptr)
        {
            brief = std::make_shared<Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::State::Up::Brief>();
        }
        return brief;
    }

    if(child_yang_name == "detail")
    {
        if(detail == nullptr)
        {
            detail = std::make_shared<Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::State::Up::Detail>();
        }
        return detail;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::State::Up::get_children() const
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

void Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::State::Up::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::State::Up::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::State::Up::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data_idx" || name == "brief" || name == "detail")
        return true;
    return false;
}

Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::State::Up::DataIdx::DataIdx()
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

Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::State::Up::DataIdx::~DataIdx()
{
}

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::State::Up::DataIdx::has_data() const
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

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::State::Up::DataIdx::has_operation() const
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

std::string Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::State::Up::DataIdx::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "data_idx";
    ADD_KEY_TOKEN(port_data_idx, "port_data_idx");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::State::Up::DataIdx::get_name_leaf_data() const
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

std::shared_ptr<ydk::Entity> Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::State::Up::DataIdx::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "history")
    {
        auto ent_ = std::make_shared<Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::State::Up::DataIdx::History>();
        ent_->parent = this;
        history.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::State::Up::DataIdx::get_children() const
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

void Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::State::Up::DataIdx::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::State::Up::DataIdx::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::State::Up::DataIdx::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "history" || name == "port_data_idx" || name == "sfe_port" || name == "admin-state" || name == "oper_state" || name == "near_end_cdr_ln" || name == "near_end_cxp_ch" || name == "far_end_cxp_ch" || name == "far_end_cdr_ln" || name == "neighbor_link")
        return true;
    return false;
}

Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::State::Up::DataIdx::History::History()
    :
    history_idx{YType::int32, "history_idx"},
    time_stamp{YType::str, "time_stamp"},
    admin_state{YType::str, "admin-state"},
    oper_state{YType::str, "oper_state"},
    error_state{YType::str, "error_state"}
{

    yang_name = "history"; yang_parent_name = "data_idx"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::State::Up::DataIdx::History::~History()
{
}

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::State::Up::DataIdx::History::has_data() const
{
    if (is_presence_container) return true;
    return history_idx.is_set
	|| time_stamp.is_set
	|| admin_state.is_set
	|| oper_state.is_set
	|| error_state.is_set;
}

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::State::Up::DataIdx::History::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(history_idx.yfilter)
	|| ydk::is_set(time_stamp.yfilter)
	|| ydk::is_set(admin_state.yfilter)
	|| ydk::is_set(oper_state.yfilter)
	|| ydk::is_set(error_state.yfilter);
}

std::string Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::State::Up::DataIdx::History::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "history";
    ADD_KEY_TOKEN(history_idx, "history_idx");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::State::Up::DataIdx::History::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (history_idx.is_set || is_set(history_idx.yfilter)) leaf_name_data.push_back(history_idx.get_name_leafdata());
    if (time_stamp.is_set || is_set(time_stamp.yfilter)) leaf_name_data.push_back(time_stamp.get_name_leafdata());
    if (admin_state.is_set || is_set(admin_state.yfilter)) leaf_name_data.push_back(admin_state.get_name_leafdata());
    if (oper_state.is_set || is_set(oper_state.yfilter)) leaf_name_data.push_back(oper_state.get_name_leafdata());
    if (error_state.is_set || is_set(error_state.yfilter)) leaf_name_data.push_back(error_state.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::State::Up::DataIdx::History::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::State::Up::DataIdx::History::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::State::Up::DataIdx::History::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::State::Up::DataIdx::History::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::State::Up::DataIdx::History::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "history_idx" || name == "time_stamp" || name == "admin-state" || name == "oper_state" || name == "error_state")
        return true;
    return false;
}

Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::State::Up::Brief::Brief()
    :
    data_idx(this, {"port_data_idx"})
{

    yang_name = "brief"; yang_parent_name = "up"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::State::Up::Brief::~Brief()
{
}

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::State::Up::Brief::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<data_idx.len(); index++)
    {
        if(data_idx[index]->has_data())
            return true;
    }
    return false;
}

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::State::Up::Brief::has_operation() const
{
    for (std::size_t index=0; index<data_idx.len(); index++)
    {
        if(data_idx[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::State::Up::Brief::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "brief";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::State::Up::Brief::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::State::Up::Brief::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "data_idx")
    {
        auto ent_ = std::make_shared<Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::State::Up::Brief::DataIdx>();
        ent_->parent = this;
        data_idx.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::State::Up::Brief::get_children() const
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

void Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::State::Up::Brief::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::State::Up::Brief::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::State::Up::Brief::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data_idx")
        return true;
    return false;
}

Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::State::Up::Brief::DataIdx::DataIdx()
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

Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::State::Up::Brief::DataIdx::~DataIdx()
{
}

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::State::Up::Brief::DataIdx::has_data() const
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

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::State::Up::Brief::DataIdx::has_operation() const
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

std::string Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::State::Up::Brief::DataIdx::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "data_idx";
    ADD_KEY_TOKEN(port_data_idx, "port_data_idx");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::State::Up::Brief::DataIdx::get_name_leaf_data() const
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

std::shared_ptr<ydk::Entity> Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::State::Up::Brief::DataIdx::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "history")
    {
        auto ent_ = std::make_shared<Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::State::Up::Brief::DataIdx::History>();
        ent_->parent = this;
        history.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::State::Up::Brief::DataIdx::get_children() const
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

void Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::State::Up::Brief::DataIdx::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::State::Up::Brief::DataIdx::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::State::Up::Brief::DataIdx::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "history" || name == "port_data_idx" || name == "sfe_port" || name == "admin-state" || name == "oper_state" || name == "near_end_cdr_ln" || name == "near_end_cxp_ch" || name == "far_end_cxp_ch" || name == "far_end_cdr_ln" || name == "neighbor_link")
        return true;
    return false;
}

Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::State::Up::Brief::DataIdx::History::History()
    :
    history_idx{YType::int32, "history_idx"},
    time_stamp{YType::str, "time_stamp"},
    admin_state{YType::str, "admin-state"},
    oper_state{YType::str, "oper_state"},
    error_state{YType::str, "error_state"}
{

    yang_name = "history"; yang_parent_name = "data_idx"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::State::Up::Brief::DataIdx::History::~History()
{
}

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::State::Up::Brief::DataIdx::History::has_data() const
{
    if (is_presence_container) return true;
    return history_idx.is_set
	|| time_stamp.is_set
	|| admin_state.is_set
	|| oper_state.is_set
	|| error_state.is_set;
}

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::State::Up::Brief::DataIdx::History::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(history_idx.yfilter)
	|| ydk::is_set(time_stamp.yfilter)
	|| ydk::is_set(admin_state.yfilter)
	|| ydk::is_set(oper_state.yfilter)
	|| ydk::is_set(error_state.yfilter);
}

std::string Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::State::Up::Brief::DataIdx::History::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "history";
    ADD_KEY_TOKEN(history_idx, "history_idx");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::State::Up::Brief::DataIdx::History::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (history_idx.is_set || is_set(history_idx.yfilter)) leaf_name_data.push_back(history_idx.get_name_leafdata());
    if (time_stamp.is_set || is_set(time_stamp.yfilter)) leaf_name_data.push_back(time_stamp.get_name_leafdata());
    if (admin_state.is_set || is_set(admin_state.yfilter)) leaf_name_data.push_back(admin_state.get_name_leafdata());
    if (oper_state.is_set || is_set(oper_state.yfilter)) leaf_name_data.push_back(oper_state.get_name_leafdata());
    if (error_state.is_set || is_set(error_state.yfilter)) leaf_name_data.push_back(error_state.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::State::Up::Brief::DataIdx::History::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::State::Up::Brief::DataIdx::History::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::State::Up::Brief::DataIdx::History::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::State::Up::Brief::DataIdx::History::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::State::Up::Brief::DataIdx::History::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "history_idx" || name == "time_stamp" || name == "admin-state" || name == "oper_state" || name == "error_state")
        return true;
    return false;
}

Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::State::Up::Detail::Detail()
    :
    data_idx(this, {"port_data_idx"})
{

    yang_name = "detail"; yang_parent_name = "up"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::State::Up::Detail::~Detail()
{
}

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::State::Up::Detail::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<data_idx.len(); index++)
    {
        if(data_idx[index]->has_data())
            return true;
    }
    return false;
}

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::State::Up::Detail::has_operation() const
{
    for (std::size_t index=0; index<data_idx.len(); index++)
    {
        if(data_idx[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::State::Up::Detail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "detail";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::State::Up::Detail::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::State::Up::Detail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "data_idx")
    {
        auto ent_ = std::make_shared<Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::State::Up::Detail::DataIdx>();
        ent_->parent = this;
        data_idx.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::State::Up::Detail::get_children() const
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

void Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::State::Up::Detail::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::State::Up::Detail::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::State::Up::Detail::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data_idx")
        return true;
    return false;
}

Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::State::Up::Detail::DataIdx::DataIdx()
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

Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::State::Up::Detail::DataIdx::~DataIdx()
{
}

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::State::Up::Detail::DataIdx::has_data() const
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

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::State::Up::Detail::DataIdx::has_operation() const
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

std::string Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::State::Up::Detail::DataIdx::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "data_idx";
    ADD_KEY_TOKEN(port_data_idx, "port_data_idx");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::State::Up::Detail::DataIdx::get_name_leaf_data() const
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

std::shared_ptr<ydk::Entity> Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::State::Up::Detail::DataIdx::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "history")
    {
        auto ent_ = std::make_shared<Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::State::Up::Detail::DataIdx::History>();
        ent_->parent = this;
        history.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::State::Up::Detail::DataIdx::get_children() const
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

void Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::State::Up::Detail::DataIdx::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::State::Up::Detail::DataIdx::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::State::Up::Detail::DataIdx::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "history" || name == "port_data_idx" || name == "sfe_port" || name == "admin-state" || name == "oper_state" || name == "near_end_cdr_ln" || name == "near_end_cxp_ch" || name == "far_end_cxp_ch" || name == "far_end_cdr_ln" || name == "neighbor_link")
        return true;
    return false;
}

Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::State::Up::Detail::DataIdx::History::History()
    :
    history_idx{YType::int32, "history_idx"},
    time_stamp{YType::str, "time_stamp"},
    admin_state{YType::str, "admin-state"},
    oper_state{YType::str, "oper_state"},
    error_state{YType::str, "error_state"}
{

    yang_name = "history"; yang_parent_name = "data_idx"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::State::Up::Detail::DataIdx::History::~History()
{
}

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::State::Up::Detail::DataIdx::History::has_data() const
{
    if (is_presence_container) return true;
    return history_idx.is_set
	|| time_stamp.is_set
	|| admin_state.is_set
	|| oper_state.is_set
	|| error_state.is_set;
}

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::State::Up::Detail::DataIdx::History::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(history_idx.yfilter)
	|| ydk::is_set(time_stamp.yfilter)
	|| ydk::is_set(admin_state.yfilter)
	|| ydk::is_set(oper_state.yfilter)
	|| ydk::is_set(error_state.yfilter);
}

std::string Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::State::Up::Detail::DataIdx::History::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "history";
    ADD_KEY_TOKEN(history_idx, "history_idx");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::State::Up::Detail::DataIdx::History::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (history_idx.is_set || is_set(history_idx.yfilter)) leaf_name_data.push_back(history_idx.get_name_leafdata());
    if (time_stamp.is_set || is_set(time_stamp.yfilter)) leaf_name_data.push_back(time_stamp.get_name_leafdata());
    if (admin_state.is_set || is_set(admin_state.yfilter)) leaf_name_data.push_back(admin_state.get_name_leafdata());
    if (oper_state.is_set || is_set(oper_state.yfilter)) leaf_name_data.push_back(oper_state.get_name_leafdata());
    if (error_state.is_set || is_set(error_state.yfilter)) leaf_name_data.push_back(error_state.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::State::Up::Detail::DataIdx::History::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::State::Up::Detail::DataIdx::History::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::State::Up::Detail::DataIdx::History::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::State::Up::Detail::DataIdx::History::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::State::Up::Detail::DataIdx::History::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "history_idx" || name == "time_stamp" || name == "admin-state" || name == "oper_state" || name == "error_state")
        return true;
    return false;
}

Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::State::Down::Down()
    :
    data_idx(this, {"port_data_idx"})
    , brief(std::make_shared<Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::State::Down::Brief>())
    , detail(std::make_shared<Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::State::Down::Detail>())
{
    brief->parent = this;
    detail->parent = this;

    yang_name = "down"; yang_parent_name = "state"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::State::Down::~Down()
{
}

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::State::Down::has_data() const
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

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::State::Down::has_operation() const
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

std::string Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::State::Down::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "down";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::State::Down::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::State::Down::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "data_idx")
    {
        auto ent_ = std::make_shared<Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::State::Down::DataIdx>();
        ent_->parent = this;
        data_idx.append(ent_);
        return ent_;
    }

    if(child_yang_name == "brief")
    {
        if(brief == nullptr)
        {
            brief = std::make_shared<Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::State::Down::Brief>();
        }
        return brief;
    }

    if(child_yang_name == "detail")
    {
        if(detail == nullptr)
        {
            detail = std::make_shared<Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::State::Down::Detail>();
        }
        return detail;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::State::Down::get_children() const
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

void Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::State::Down::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::State::Down::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::State::Down::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data_idx" || name == "brief" || name == "detail")
        return true;
    return false;
}

Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::State::Down::DataIdx::DataIdx()
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

Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::State::Down::DataIdx::~DataIdx()
{
}

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::State::Down::DataIdx::has_data() const
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

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::State::Down::DataIdx::has_operation() const
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

std::string Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::State::Down::DataIdx::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "data_idx";
    ADD_KEY_TOKEN(port_data_idx, "port_data_idx");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::State::Down::DataIdx::get_name_leaf_data() const
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

std::shared_ptr<ydk::Entity> Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::State::Down::DataIdx::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "history")
    {
        auto ent_ = std::make_shared<Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::State::Down::DataIdx::History>();
        ent_->parent = this;
        history.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::State::Down::DataIdx::get_children() const
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

void Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::State::Down::DataIdx::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::State::Down::DataIdx::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::State::Down::DataIdx::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "history" || name == "port_data_idx" || name == "sfe_port" || name == "admin-state" || name == "oper_state" || name == "near_end_cdr_ln" || name == "near_end_cxp_ch" || name == "far_end_cxp_ch" || name == "far_end_cdr_ln" || name == "neighbor_link")
        return true;
    return false;
}

Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::State::Down::DataIdx::History::History()
    :
    history_idx{YType::int32, "history_idx"},
    time_stamp{YType::str, "time_stamp"},
    admin_state{YType::str, "admin-state"},
    oper_state{YType::str, "oper_state"},
    error_state{YType::str, "error_state"}
{

    yang_name = "history"; yang_parent_name = "data_idx"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::State::Down::DataIdx::History::~History()
{
}

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::State::Down::DataIdx::History::has_data() const
{
    if (is_presence_container) return true;
    return history_idx.is_set
	|| time_stamp.is_set
	|| admin_state.is_set
	|| oper_state.is_set
	|| error_state.is_set;
}

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::State::Down::DataIdx::History::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(history_idx.yfilter)
	|| ydk::is_set(time_stamp.yfilter)
	|| ydk::is_set(admin_state.yfilter)
	|| ydk::is_set(oper_state.yfilter)
	|| ydk::is_set(error_state.yfilter);
}

std::string Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::State::Down::DataIdx::History::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "history";
    ADD_KEY_TOKEN(history_idx, "history_idx");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::State::Down::DataIdx::History::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (history_idx.is_set || is_set(history_idx.yfilter)) leaf_name_data.push_back(history_idx.get_name_leafdata());
    if (time_stamp.is_set || is_set(time_stamp.yfilter)) leaf_name_data.push_back(time_stamp.get_name_leafdata());
    if (admin_state.is_set || is_set(admin_state.yfilter)) leaf_name_data.push_back(admin_state.get_name_leafdata());
    if (oper_state.is_set || is_set(oper_state.yfilter)) leaf_name_data.push_back(oper_state.get_name_leafdata());
    if (error_state.is_set || is_set(error_state.yfilter)) leaf_name_data.push_back(error_state.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::State::Down::DataIdx::History::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::State::Down::DataIdx::History::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::State::Down::DataIdx::History::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::State::Down::DataIdx::History::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::State::Down::DataIdx::History::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "history_idx" || name == "time_stamp" || name == "admin-state" || name == "oper_state" || name == "error_state")
        return true;
    return false;
}

Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::State::Down::Brief::Brief()
    :
    data_idx(this, {"port_data_idx"})
{

    yang_name = "brief"; yang_parent_name = "down"; is_top_level_class = false; has_list_ancestor = true; 
}

Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::State::Down::Brief::~Brief()
{
}

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::State::Down::Brief::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<data_idx.len(); index++)
    {
        if(data_idx[index]->has_data())
            return true;
    }
    return false;
}

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::State::Down::Brief::has_operation() const
{
    for (std::size_t index=0; index<data_idx.len(); index++)
    {
        if(data_idx[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::State::Down::Brief::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "brief";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::State::Down::Brief::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::State::Down::Brief::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "data_idx")
    {
        auto ent_ = std::make_shared<Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::State::Down::Brief::DataIdx>();
        ent_->parent = this;
        data_idx.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::State::Down::Brief::get_children() const
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

void Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::State::Down::Brief::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::State::Down::Brief::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::State::Down::Brief::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data_idx")
        return true;
    return false;
}

Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::State::Down::Brief::DataIdx::DataIdx()
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

Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::State::Down::Brief::DataIdx::~DataIdx()
{
}

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::State::Down::Brief::DataIdx::has_data() const
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

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::State::Down::Brief::DataIdx::has_operation() const
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

std::string Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::State::Down::Brief::DataIdx::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "data_idx";
    ADD_KEY_TOKEN(port_data_idx, "port_data_idx");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::State::Down::Brief::DataIdx::get_name_leaf_data() const
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

std::shared_ptr<ydk::Entity> Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::State::Down::Brief::DataIdx::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "history")
    {
        auto ent_ = std::make_shared<Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::State::Down::Brief::DataIdx::History>();
        ent_->parent = this;
        history.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::State::Down::Brief::DataIdx::get_children() const
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

void Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::State::Down::Brief::DataIdx::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::State::Down::Brief::DataIdx::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::State::Down::Brief::DataIdx::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "history" || name == "port_data_idx" || name == "sfe_port" || name == "admin-state" || name == "oper_state" || name == "near_end_cdr_ln" || name == "near_end_cxp_ch" || name == "far_end_cxp_ch" || name == "far_end_cdr_ln" || name == "neighbor_link")
        return true;
    return false;
}


}
}

