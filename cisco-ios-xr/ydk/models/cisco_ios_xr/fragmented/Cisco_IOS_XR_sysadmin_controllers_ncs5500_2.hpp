#ifndef _CISCO_IOS_XR_SYSADMIN_CONTROLLERS_NCS5500_2_
#define _CISCO_IOS_XR_SYSADMIN_CONTROLLERS_NCS5500_2_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XR_sysadmin_controllers_ncs5500_0.hpp"
#include "Cisco_IOS_XR_sysadmin_controllers_ncs5500_1.hpp"

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_sysadmin_controllers_ncs5500 {


class Controller::Fabric::Oper::Link::Rack::Port::Tx::Brief::DataIdx : public ydk::Entity
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
        class History; //type: Controller::Fabric::Oper::Link::Rack::Port::Tx::Brief::DataIdx::History

        ydk::YList history;
        
}; // Controller::Fabric::Oper::Link::Rack::Port::Tx::Brief::DataIdx


class Controller::Fabric::Oper::Link::Rack::Port::Tx::Brief::DataIdx::History : public ydk::Entity
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

}; // Controller::Fabric::Oper::Link::Rack::Port::Tx::Brief::DataIdx::History


class Controller::Fabric::Oper::Link::Rack::Port::Tx::Detail : public ydk::Entity
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

        class DataIdx; //type: Controller::Fabric::Oper::Link::Rack::Port::Tx::Detail::DataIdx

        ydk::YList data_idx;
        
}; // Controller::Fabric::Oper::Link::Rack::Port::Tx::Detail


class Controller::Fabric::Oper::Link::Rack::Port::Tx::Detail::DataIdx : public ydk::Entity
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
        class History; //type: Controller::Fabric::Oper::Link::Rack::Port::Tx::Detail::DataIdx::History

        ydk::YList history;
        
}; // Controller::Fabric::Oper::Link::Rack::Port::Tx::Detail::DataIdx


class Controller::Fabric::Oper::Link::Rack::Port::Tx::Detail::DataIdx::History : public ydk::Entity
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

}; // Controller::Fabric::Oper::Link::Rack::Port::Tx::Detail::DataIdx::History


class Controller::Fabric::Oper::Link::Rack::Port::Tx::State : public ydk::Entity
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

        class Up; //type: Controller::Fabric::Oper::Link::Rack::Port::Tx::State::Up
        class Down; //type: Controller::Fabric::Oper::Link::Rack::Port::Tx::State::Down
        class Mismatch; //type: Controller::Fabric::Oper::Link::Rack::Port::Tx::State::Mismatch

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers_ncs5500::Controller::Fabric::Oper::Link::Rack::Port::Tx::State::Up> up;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers_ncs5500::Controller::Fabric::Oper::Link::Rack::Port::Tx::State::Down> down;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers_ncs5500::Controller::Fabric::Oper::Link::Rack::Port::Tx::State::Mismatch> mismatch;
        
}; // Controller::Fabric::Oper::Link::Rack::Port::Tx::State


class Controller::Fabric::Oper::Link::Rack::Port::Tx::State::Up : public ydk::Entity
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

        class DataIdx; //type: Controller::Fabric::Oper::Link::Rack::Port::Tx::State::Up::DataIdx
        class Brief; //type: Controller::Fabric::Oper::Link::Rack::Port::Tx::State::Up::Brief
        class Detail; //type: Controller::Fabric::Oper::Link::Rack::Port::Tx::State::Up::Detail

        ydk::YList data_idx;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers_ncs5500::Controller::Fabric::Oper::Link::Rack::Port::Tx::State::Up::Brief> brief;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers_ncs5500::Controller::Fabric::Oper::Link::Rack::Port::Tx::State::Up::Detail> detail;
        
}; // Controller::Fabric::Oper::Link::Rack::Port::Tx::State::Up


class Controller::Fabric::Oper::Link::Rack::Port::Tx::State::Up::DataIdx : public ydk::Entity
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
        class History; //type: Controller::Fabric::Oper::Link::Rack::Port::Tx::State::Up::DataIdx::History

        ydk::YList history;
        
}; // Controller::Fabric::Oper::Link::Rack::Port::Tx::State::Up::DataIdx


class Controller::Fabric::Oper::Link::Rack::Port::Tx::State::Up::DataIdx::History : public ydk::Entity
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

}; // Controller::Fabric::Oper::Link::Rack::Port::Tx::State::Up::DataIdx::History


class Controller::Fabric::Oper::Link::Rack::Port::Tx::State::Up::Brief : public ydk::Entity
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

        class DataIdx; //type: Controller::Fabric::Oper::Link::Rack::Port::Tx::State::Up::Brief::DataIdx

        ydk::YList data_idx;
        
}; // Controller::Fabric::Oper::Link::Rack::Port::Tx::State::Up::Brief


class Controller::Fabric::Oper::Link::Rack::Port::Tx::State::Up::Brief::DataIdx : public ydk::Entity
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
        class History; //type: Controller::Fabric::Oper::Link::Rack::Port::Tx::State::Up::Brief::DataIdx::History

        ydk::YList history;
        
}; // Controller::Fabric::Oper::Link::Rack::Port::Tx::State::Up::Brief::DataIdx


class Controller::Fabric::Oper::Link::Rack::Port::Tx::State::Up::Brief::DataIdx::History : public ydk::Entity
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

}; // Controller::Fabric::Oper::Link::Rack::Port::Tx::State::Up::Brief::DataIdx::History


class Controller::Fabric::Oper::Link::Rack::Port::Tx::State::Up::Detail : public ydk::Entity
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

        class DataIdx; //type: Controller::Fabric::Oper::Link::Rack::Port::Tx::State::Up::Detail::DataIdx

        ydk::YList data_idx;
        
}; // Controller::Fabric::Oper::Link::Rack::Port::Tx::State::Up::Detail


class Controller::Fabric::Oper::Link::Rack::Port::Tx::State::Up::Detail::DataIdx : public ydk::Entity
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
        class History; //type: Controller::Fabric::Oper::Link::Rack::Port::Tx::State::Up::Detail::DataIdx::History

        ydk::YList history;
        
}; // Controller::Fabric::Oper::Link::Rack::Port::Tx::State::Up::Detail::DataIdx


class Controller::Fabric::Oper::Link::Rack::Port::Tx::State::Up::Detail::DataIdx::History : public ydk::Entity
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

}; // Controller::Fabric::Oper::Link::Rack::Port::Tx::State::Up::Detail::DataIdx::History


class Controller::Fabric::Oper::Link::Rack::Port::Tx::State::Down : public ydk::Entity
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

        class DataIdx; //type: Controller::Fabric::Oper::Link::Rack::Port::Tx::State::Down::DataIdx
        class Brief; //type: Controller::Fabric::Oper::Link::Rack::Port::Tx::State::Down::Brief
        class Detail; //type: Controller::Fabric::Oper::Link::Rack::Port::Tx::State::Down::Detail

        ydk::YList data_idx;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers_ncs5500::Controller::Fabric::Oper::Link::Rack::Port::Tx::State::Down::Brief> brief;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers_ncs5500::Controller::Fabric::Oper::Link::Rack::Port::Tx::State::Down::Detail> detail;
        
}; // Controller::Fabric::Oper::Link::Rack::Port::Tx::State::Down


class Controller::Fabric::Oper::Link::Rack::Port::Tx::State::Down::DataIdx : public ydk::Entity
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
        class History; //type: Controller::Fabric::Oper::Link::Rack::Port::Tx::State::Down::DataIdx::History

        ydk::YList history;
        
}; // Controller::Fabric::Oper::Link::Rack::Port::Tx::State::Down::DataIdx


class Controller::Fabric::Oper::Link::Rack::Port::Tx::State::Down::DataIdx::History : public ydk::Entity
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

}; // Controller::Fabric::Oper::Link::Rack::Port::Tx::State::Down::DataIdx::History


class Controller::Fabric::Oper::Link::Rack::Port::Tx::State::Down::Brief : public ydk::Entity
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

        class DataIdx; //type: Controller::Fabric::Oper::Link::Rack::Port::Tx::State::Down::Brief::DataIdx

        ydk::YList data_idx;
        
}; // Controller::Fabric::Oper::Link::Rack::Port::Tx::State::Down::Brief


class Controller::Fabric::Oper::Link::Rack::Port::Tx::State::Down::Brief::DataIdx : public ydk::Entity
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
        class History; //type: Controller::Fabric::Oper::Link::Rack::Port::Tx::State::Down::Brief::DataIdx::History

        ydk::YList history;
        
}; // Controller::Fabric::Oper::Link::Rack::Port::Tx::State::Down::Brief::DataIdx


class Controller::Fabric::Oper::Link::Rack::Port::Tx::State::Down::Brief::DataIdx::History : public ydk::Entity
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

}; // Controller::Fabric::Oper::Link::Rack::Port::Tx::State::Down::Brief::DataIdx::History


class Controller::Fabric::Oper::Link::Rack::Port::Tx::State::Down::Detail : public ydk::Entity
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

        class DataIdx; //type: Controller::Fabric::Oper::Link::Rack::Port::Tx::State::Down::Detail::DataIdx

        ydk::YList data_idx;
        
}; // Controller::Fabric::Oper::Link::Rack::Port::Tx::State::Down::Detail


class Controller::Fabric::Oper::Link::Rack::Port::Tx::State::Down::Detail::DataIdx : public ydk::Entity
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
        class History; //type: Controller::Fabric::Oper::Link::Rack::Port::Tx::State::Down::Detail::DataIdx::History

        ydk::YList history;
        
}; // Controller::Fabric::Oper::Link::Rack::Port::Tx::State::Down::Detail::DataIdx


class Controller::Fabric::Oper::Link::Rack::Port::Tx::State::Down::Detail::DataIdx::History : public ydk::Entity
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

}; // Controller::Fabric::Oper::Link::Rack::Port::Tx::State::Down::Detail::DataIdx::History


class Controller::Fabric::Oper::Link::Rack::Port::Tx::State::Mismatch : public ydk::Entity
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

        class DataIdx; //type: Controller::Fabric::Oper::Link::Rack::Port::Tx::State::Mismatch::DataIdx
        class Brief; //type: Controller::Fabric::Oper::Link::Rack::Port::Tx::State::Mismatch::Brief
        class Detail; //type: Controller::Fabric::Oper::Link::Rack::Port::Tx::State::Mismatch::Detail

        ydk::YList data_idx;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers_ncs5500::Controller::Fabric::Oper::Link::Rack::Port::Tx::State::Mismatch::Brief> brief;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers_ncs5500::Controller::Fabric::Oper::Link::Rack::Port::Tx::State::Mismatch::Detail> detail;
        
}; // Controller::Fabric::Oper::Link::Rack::Port::Tx::State::Mismatch


class Controller::Fabric::Oper::Link::Rack::Port::Tx::State::Mismatch::DataIdx : public ydk::Entity
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
        class History; //type: Controller::Fabric::Oper::Link::Rack::Port::Tx::State::Mismatch::DataIdx::History

        ydk::YList history;
        
}; // Controller::Fabric::Oper::Link::Rack::Port::Tx::State::Mismatch::DataIdx


class Controller::Fabric::Oper::Link::Rack::Port::Tx::State::Mismatch::DataIdx::History : public ydk::Entity
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

}; // Controller::Fabric::Oper::Link::Rack::Port::Tx::State::Mismatch::DataIdx::History


class Controller::Fabric::Oper::Link::Rack::Port::Tx::State::Mismatch::Brief : public ydk::Entity
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

        class DataIdx; //type: Controller::Fabric::Oper::Link::Rack::Port::Tx::State::Mismatch::Brief::DataIdx

        ydk::YList data_idx;
        
}; // Controller::Fabric::Oper::Link::Rack::Port::Tx::State::Mismatch::Brief


class Controller::Fabric::Oper::Link::Rack::Port::Tx::State::Mismatch::Brief::DataIdx : public ydk::Entity
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
        class History; //type: Controller::Fabric::Oper::Link::Rack::Port::Tx::State::Mismatch::Brief::DataIdx::History

        ydk::YList history;
        
}; // Controller::Fabric::Oper::Link::Rack::Port::Tx::State::Mismatch::Brief::DataIdx


class Controller::Fabric::Oper::Link::Rack::Port::Tx::State::Mismatch::Brief::DataIdx::History : public ydk::Entity
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

}; // Controller::Fabric::Oper::Link::Rack::Port::Tx::State::Mismatch::Brief::DataIdx::History


class Controller::Fabric::Oper::Link::Rack::Port::Tx::State::Mismatch::Detail : public ydk::Entity
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

        class DataIdx; //type: Controller::Fabric::Oper::Link::Rack::Port::Tx::State::Mismatch::Detail::DataIdx

        ydk::YList data_idx;
        
}; // Controller::Fabric::Oper::Link::Rack::Port::Tx::State::Mismatch::Detail


class Controller::Fabric::Oper::Link::Rack::Port::Tx::State::Mismatch::Detail::DataIdx : public ydk::Entity
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
        class History; //type: Controller::Fabric::Oper::Link::Rack::Port::Tx::State::Mismatch::Detail::DataIdx::History

        ydk::YList history;
        
}; // Controller::Fabric::Oper::Link::Rack::Port::Tx::State::Mismatch::Detail::DataIdx


class Controller::Fabric::Oper::Link::Rack::Port::Tx::State::Mismatch::Detail::DataIdx::History : public ydk::Entity
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

}; // Controller::Fabric::Oper::Link::Rack::Port::Tx::State::Mismatch::Detail::DataIdx::History


class Controller::Fabric::Oper::Link::Rack::Port::Tx::Statistics : public ydk::Entity
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

        class DataIdx; //type: Controller::Fabric::Oper::Link::Rack::Port::Tx::Statistics::DataIdx
        class Brief; //type: Controller::Fabric::Oper::Link::Rack::Port::Tx::Statistics::Brief
        class Detail; //type: Controller::Fabric::Oper::Link::Rack::Port::Tx::Statistics::Detail

        ydk::YList data_idx;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers_ncs5500::Controller::Fabric::Oper::Link::Rack::Port::Tx::Statistics::Brief> brief;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers_ncs5500::Controller::Fabric::Oper::Link::Rack::Port::Tx::Statistics::Detail> detail;
        
}; // Controller::Fabric::Oper::Link::Rack::Port::Tx::Statistics


class Controller::Fabric::Oper::Link::Rack::Port::Tx::Statistics::DataIdx : public ydk::Entity
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

}; // Controller::Fabric::Oper::Link::Rack::Port::Tx::Statistics::DataIdx


class Controller::Fabric::Oper::Link::Rack::Port::Tx::Statistics::Brief : public ydk::Entity
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

        class DataIdx; //type: Controller::Fabric::Oper::Link::Rack::Port::Tx::Statistics::Brief::DataIdx

        ydk::YList data_idx;
        
}; // Controller::Fabric::Oper::Link::Rack::Port::Tx::Statistics::Brief


class Controller::Fabric::Oper::Link::Rack::Port::Tx::Statistics::Brief::DataIdx : public ydk::Entity
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

}; // Controller::Fabric::Oper::Link::Rack::Port::Tx::Statistics::Brief::DataIdx


class Controller::Fabric::Oper::Link::Rack::Port::Tx::Statistics::Detail : public ydk::Entity
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

        class DataIdx; //type: Controller::Fabric::Oper::Link::Rack::Port::Tx::Statistics::Detail::DataIdx

        ydk::YList data_idx;
        
}; // Controller::Fabric::Oper::Link::Rack::Port::Tx::Statistics::Detail


class Controller::Fabric::Oper::Link::Rack::Port::Tx::Statistics::Detail::DataIdx : public ydk::Entity
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

}; // Controller::Fabric::Oper::Link::Rack::Port::Tx::Statistics::Detail::DataIdx


class Controller::Fabric::Oper::Link::NodeLocation : public ydk::Entity
{
    public:
        NodeLocation();
        ~NodeLocation();

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

        ydk::YLeaf node_str; //type: string
        class Port; //type: Controller::Fabric::Oper::Link::NodeLocation::Port

        ydk::YList port;
        
}; // Controller::Fabric::Oper::Link::NodeLocation


class Controller::Fabric::Oper::Link::NodeLocation::Port : public ydk::Entity
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
        class Location; //type: Controller::Fabric::Oper::Link::NodeLocation::Port::Location
        class Rx; //type: Controller::Fabric::Oper::Link::NodeLocation::Port::Rx
        class Tx; //type: Controller::Fabric::Oper::Link::NodeLocation::Port::Tx

        ydk::YList location;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers_ncs5500::Controller::Fabric::Oper::Link::NodeLocation::Port::Rx> rx;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers_ncs5500::Controller::Fabric::Oper::Link::NodeLocation::Port::Tx> tx;
        
}; // Controller::Fabric::Oper::Link::NodeLocation::Port


class Controller::Fabric::Oper::Link::NodeLocation::Port::Location : public ydk::Entity
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
        class Rx; //type: Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx
        class Tx; //type: Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers_ncs5500::Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx> rx;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers_ncs5500::Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx> tx;
        
}; // Controller::Fabric::Oper::Link::NodeLocation::Port::Location


class Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx : public ydk::Entity
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

        class DataIdx; //type: Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::DataIdx
        class Brief; //type: Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::Brief
        class Detail; //type: Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::Detail
        class State; //type: Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::State
        class Statistics; //type: Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::Statistics

        ydk::YList data_idx;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers_ncs5500::Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::Brief> brief;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers_ncs5500::Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::Detail> detail;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers_ncs5500::Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::State> state;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers_ncs5500::Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::Statistics> statistics;
        
}; // Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx


class Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::DataIdx : public ydk::Entity
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
        class History; //type: Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::DataIdx::History

        ydk::YList history;
        
}; // Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::DataIdx


class Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::DataIdx::History : public ydk::Entity
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

}; // Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::DataIdx::History


class Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::Brief : public ydk::Entity
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

        class DataIdx; //type: Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::Brief::DataIdx

        ydk::YList data_idx;
        
}; // Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::Brief


class Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::Brief::DataIdx : public ydk::Entity
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
        class History; //type: Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::Brief::DataIdx::History

        ydk::YList history;
        
}; // Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::Brief::DataIdx


class Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::Brief::DataIdx::History : public ydk::Entity
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

}; // Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::Brief::DataIdx::History


class Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::Detail : public ydk::Entity
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

        class DataIdx; //type: Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::Detail::DataIdx

        ydk::YList data_idx;
        
}; // Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::Detail


class Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::Detail::DataIdx : public ydk::Entity
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
        class History; //type: Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::Detail::DataIdx::History

        ydk::YList history;
        
}; // Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::Detail::DataIdx


class Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::Detail::DataIdx::History : public ydk::Entity
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

}; // Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::Detail::DataIdx::History


class Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::State : public ydk::Entity
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

        class Up; //type: Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::State::Up
        class Down; //type: Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::State::Down
        class Mismatch; //type: Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::State::Mismatch

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers_ncs5500::Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::State::Up> up;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers_ncs5500::Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::State::Down> down;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers_ncs5500::Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::State::Mismatch> mismatch;
        
}; // Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::State


class Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::State::Up : public ydk::Entity
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

        class DataIdx; //type: Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::State::Up::DataIdx
        class Brief; //type: Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::State::Up::Brief
        class Detail; //type: Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::State::Up::Detail

        ydk::YList data_idx;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers_ncs5500::Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::State::Up::Brief> brief;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers_ncs5500::Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::State::Up::Detail> detail;
        
}; // Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::State::Up


class Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::State::Up::DataIdx : public ydk::Entity
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
        class History; //type: Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::State::Up::DataIdx::History

        ydk::YList history;
        
}; // Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::State::Up::DataIdx


class Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::State::Up::DataIdx::History : public ydk::Entity
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

}; // Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::State::Up::DataIdx::History


class Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::State::Up::Brief : public ydk::Entity
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

        class DataIdx; //type: Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::State::Up::Brief::DataIdx

        ydk::YList data_idx;
        
}; // Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::State::Up::Brief


class Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::State::Up::Brief::DataIdx : public ydk::Entity
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
        class History; //type: Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::State::Up::Brief::DataIdx::History

        ydk::YList history;
        
}; // Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::State::Up::Brief::DataIdx


class Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::State::Up::Brief::DataIdx::History : public ydk::Entity
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

}; // Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::State::Up::Brief::DataIdx::History


class Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::State::Up::Detail : public ydk::Entity
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

        class DataIdx; //type: Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::State::Up::Detail::DataIdx

        ydk::YList data_idx;
        
}; // Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::State::Up::Detail


class Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::State::Up::Detail::DataIdx : public ydk::Entity
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
        class History; //type: Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::State::Up::Detail::DataIdx::History

        ydk::YList history;
        
}; // Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::State::Up::Detail::DataIdx


class Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::State::Up::Detail::DataIdx::History : public ydk::Entity
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

}; // Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::State::Up::Detail::DataIdx::History


class Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::State::Down : public ydk::Entity
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

        class DataIdx; //type: Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::State::Down::DataIdx
        class Brief; //type: Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::State::Down::Brief
        class Detail; //type: Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::State::Down::Detail

        ydk::YList data_idx;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers_ncs5500::Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::State::Down::Brief> brief;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers_ncs5500::Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::State::Down::Detail> detail;
        
}; // Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::State::Down


class Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::State::Down::DataIdx : public ydk::Entity
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
        class History; //type: Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::State::Down::DataIdx::History

        ydk::YList history;
        
}; // Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::State::Down::DataIdx


class Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::State::Down::DataIdx::History : public ydk::Entity
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

}; // Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::State::Down::DataIdx::History


class Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::State::Down::Brief : public ydk::Entity
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

        class DataIdx; //type: Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::State::Down::Brief::DataIdx

        ydk::YList data_idx;
        
}; // Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::State::Down::Brief


class Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::State::Down::Brief::DataIdx : public ydk::Entity
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
        class History; //type: Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::State::Down::Brief::DataIdx::History

        ydk::YList history;
        
}; // Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::State::Down::Brief::DataIdx


class Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::State::Down::Brief::DataIdx::History : public ydk::Entity
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

}; // Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::State::Down::Brief::DataIdx::History


class Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::State::Down::Detail : public ydk::Entity
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

        class DataIdx; //type: Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::State::Down::Detail::DataIdx

        ydk::YList data_idx;
        
}; // Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::State::Down::Detail


class Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::State::Down::Detail::DataIdx : public ydk::Entity
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
        class History; //type: Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::State::Down::Detail::DataIdx::History

        ydk::YList history;
        
}; // Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::State::Down::Detail::DataIdx


class Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::State::Down::Detail::DataIdx::History : public ydk::Entity
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

}; // Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::State::Down::Detail::DataIdx::History


class Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::State::Mismatch : public ydk::Entity
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

        class DataIdx; //type: Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::State::Mismatch::DataIdx
        class Brief; //type: Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::State::Mismatch::Brief
        class Detail; //type: Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::State::Mismatch::Detail

        ydk::YList data_idx;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers_ncs5500::Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::State::Mismatch::Brief> brief;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers_ncs5500::Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::State::Mismatch::Detail> detail;
        
}; // Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::State::Mismatch


class Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::State::Mismatch::DataIdx : public ydk::Entity
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
        class History; //type: Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::State::Mismatch::DataIdx::History

        ydk::YList history;
        
}; // Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::State::Mismatch::DataIdx


class Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::State::Mismatch::DataIdx::History : public ydk::Entity
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

}; // Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::State::Mismatch::DataIdx::History


class Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::State::Mismatch::Brief : public ydk::Entity
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

        class DataIdx; //type: Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::State::Mismatch::Brief::DataIdx

        ydk::YList data_idx;
        
}; // Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::State::Mismatch::Brief


class Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::State::Mismatch::Brief::DataIdx : public ydk::Entity
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
        class History; //type: Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::State::Mismatch::Brief::DataIdx::History

        ydk::YList history;
        
}; // Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::State::Mismatch::Brief::DataIdx


class Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::State::Mismatch::Brief::DataIdx::History : public ydk::Entity
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

}; // Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::State::Mismatch::Brief::DataIdx::History


class Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::State::Mismatch::Detail : public ydk::Entity
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

        class DataIdx; //type: Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::State::Mismatch::Detail::DataIdx

        ydk::YList data_idx;
        
}; // Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::State::Mismatch::Detail


class Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::State::Mismatch::Detail::DataIdx : public ydk::Entity
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
        class History; //type: Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::State::Mismatch::Detail::DataIdx::History

        ydk::YList history;
        
}; // Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::State::Mismatch::Detail::DataIdx


class Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::State::Mismatch::Detail::DataIdx::History : public ydk::Entity
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

}; // Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::State::Mismatch::Detail::DataIdx::History


class Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::Statistics : public ydk::Entity
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

        class DataIdx; //type: Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::Statistics::DataIdx
        class Brief; //type: Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::Statistics::Brief
        class Detail; //type: Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::Statistics::Detail

        ydk::YList data_idx;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers_ncs5500::Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::Statistics::Brief> brief;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers_ncs5500::Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::Statistics::Detail> detail;
        
}; // Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::Statistics


class Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::Statistics::DataIdx : public ydk::Entity
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

}; // Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::Statistics::DataIdx


class Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::Statistics::Brief : public ydk::Entity
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

        class DataIdx; //type: Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::Statistics::Brief::DataIdx

        ydk::YList data_idx;
        
}; // Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::Statistics::Brief


class Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::Statistics::Brief::DataIdx : public ydk::Entity
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

}; // Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::Statistics::Brief::DataIdx


class Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::Statistics::Detail : public ydk::Entity
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

        class DataIdx; //type: Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::Statistics::Detail::DataIdx

        ydk::YList data_idx;
        
}; // Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::Statistics::Detail


class Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::Statistics::Detail::DataIdx : public ydk::Entity
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

}; // Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Rx::Statistics::Detail::DataIdx


class Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx : public ydk::Entity
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

        class DataIdx; //type: Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::DataIdx
        class Brief; //type: Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::Brief
        class Detail; //type: Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::Detail
        class State; //type: Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::State
        class Statistics; //type: Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::Statistics

        ydk::YList data_idx;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers_ncs5500::Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::Brief> brief;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers_ncs5500::Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::Detail> detail;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers_ncs5500::Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::State> state;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers_ncs5500::Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::Statistics> statistics;
        
}; // Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx


class Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::DataIdx : public ydk::Entity
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
        class History; //type: Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::DataIdx::History

        ydk::YList history;
        
}; // Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::DataIdx


class Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::DataIdx::History : public ydk::Entity
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

}; // Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::DataIdx::History


class Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::Brief : public ydk::Entity
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

        class DataIdx; //type: Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::Brief::DataIdx

        ydk::YList data_idx;
        
}; // Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::Brief


class Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::Brief::DataIdx : public ydk::Entity
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
        class History; //type: Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::Brief::DataIdx::History

        ydk::YList history;
        
}; // Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::Brief::DataIdx


class Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::Brief::DataIdx::History : public ydk::Entity
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

}; // Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::Brief::DataIdx::History


class Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::Detail : public ydk::Entity
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

        class DataIdx; //type: Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::Detail::DataIdx

        ydk::YList data_idx;
        
}; // Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::Detail


class Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::Detail::DataIdx : public ydk::Entity
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
        class History; //type: Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::Detail::DataIdx::History

        ydk::YList history;
        
}; // Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::Detail::DataIdx


class Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::Detail::DataIdx::History : public ydk::Entity
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

}; // Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::Detail::DataIdx::History


class Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::State : public ydk::Entity
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

        class Up; //type: Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::State::Up
        class Down; //type: Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::State::Down
        class Mismatch; //type: Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::State::Mismatch

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers_ncs5500::Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::State::Up> up;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers_ncs5500::Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::State::Down> down;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers_ncs5500::Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::State::Mismatch> mismatch;
        
}; // Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::State


class Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::State::Up : public ydk::Entity
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

        class DataIdx; //type: Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::State::Up::DataIdx
        class Brief; //type: Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::State::Up::Brief
        class Detail; //type: Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::State::Up::Detail

        ydk::YList data_idx;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers_ncs5500::Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::State::Up::Brief> brief;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers_ncs5500::Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::State::Up::Detail> detail;
        
}; // Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::State::Up


class Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::State::Up::DataIdx : public ydk::Entity
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
        class History; //type: Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::State::Up::DataIdx::History

        ydk::YList history;
        
}; // Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::State::Up::DataIdx


class Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::State::Up::DataIdx::History : public ydk::Entity
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

}; // Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::State::Up::DataIdx::History


class Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::State::Up::Brief : public ydk::Entity
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

        class DataIdx; //type: Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::State::Up::Brief::DataIdx

        ydk::YList data_idx;
        
}; // Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::State::Up::Brief


class Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::State::Up::Brief::DataIdx : public ydk::Entity
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
        class History; //type: Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::State::Up::Brief::DataIdx::History

        ydk::YList history;
        
}; // Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::State::Up::Brief::DataIdx


class Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::State::Up::Brief::DataIdx::History : public ydk::Entity
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

}; // Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::State::Up::Brief::DataIdx::History


class Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::State::Up::Detail : public ydk::Entity
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

        class DataIdx; //type: Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::State::Up::Detail::DataIdx

        ydk::YList data_idx;
        
}; // Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::State::Up::Detail


class Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::State::Up::Detail::DataIdx : public ydk::Entity
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
        class History; //type: Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::State::Up::Detail::DataIdx::History

        ydk::YList history;
        
}; // Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::State::Up::Detail::DataIdx


class Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::State::Up::Detail::DataIdx::History : public ydk::Entity
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

}; // Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::State::Up::Detail::DataIdx::History


class Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::State::Down : public ydk::Entity
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

        class DataIdx; //type: Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::State::Down::DataIdx
        class Brief; //type: Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::State::Down::Brief
        class Detail; //type: Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::State::Down::Detail

        ydk::YList data_idx;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers_ncs5500::Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::State::Down::Brief> brief;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers_ncs5500::Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::State::Down::Detail> detail;
        
}; // Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::State::Down


class Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::State::Down::DataIdx : public ydk::Entity
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
        class History; //type: Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::State::Down::DataIdx::History

        ydk::YList history;
        
}; // Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::State::Down::DataIdx


class Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::State::Down::DataIdx::History : public ydk::Entity
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

}; // Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::State::Down::DataIdx::History


class Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::State::Down::Brief : public ydk::Entity
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

        class DataIdx; //type: Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::State::Down::Brief::DataIdx

        ydk::YList data_idx;
        
}; // Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::State::Down::Brief


class Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::State::Down::Brief::DataIdx : public ydk::Entity
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
        class History; //type: Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::State::Down::Brief::DataIdx::History

        ydk::YList history;
        
}; // Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::State::Down::Brief::DataIdx


class Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::State::Down::Brief::DataIdx::History : public ydk::Entity
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

}; // Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::State::Down::Brief::DataIdx::History


class Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::State::Down::Detail : public ydk::Entity
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

        class DataIdx; //type: Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::State::Down::Detail::DataIdx

        ydk::YList data_idx;
        
}; // Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::State::Down::Detail


class Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::State::Down::Detail::DataIdx : public ydk::Entity
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
        class History; //type: Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::State::Down::Detail::DataIdx::History

        ydk::YList history;
        
}; // Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::State::Down::Detail::DataIdx


class Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::State::Down::Detail::DataIdx::History : public ydk::Entity
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

}; // Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::State::Down::Detail::DataIdx::History


class Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::State::Mismatch : public ydk::Entity
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

        class DataIdx; //type: Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::State::Mismatch::DataIdx
        class Brief; //type: Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::State::Mismatch::Brief
        class Detail; //type: Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::State::Mismatch::Detail

        ydk::YList data_idx;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers_ncs5500::Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::State::Mismatch::Brief> brief;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers_ncs5500::Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::State::Mismatch::Detail> detail;
        
}; // Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::State::Mismatch


class Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::State::Mismatch::DataIdx : public ydk::Entity
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
        class History; //type: Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::State::Mismatch::DataIdx::History

        ydk::YList history;
        
}; // Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::State::Mismatch::DataIdx


class Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::State::Mismatch::DataIdx::History : public ydk::Entity
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

}; // Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::State::Mismatch::DataIdx::History


class Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::State::Mismatch::Brief : public ydk::Entity
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

        class DataIdx; //type: Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::State::Mismatch::Brief::DataIdx

        ydk::YList data_idx;
        
}; // Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::State::Mismatch::Brief


class Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::State::Mismatch::Brief::DataIdx : public ydk::Entity
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
        class History; //type: Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::State::Mismatch::Brief::DataIdx::History

        ydk::YList history;
        
}; // Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::State::Mismatch::Brief::DataIdx


class Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::State::Mismatch::Brief::DataIdx::History : public ydk::Entity
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

}; // Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::State::Mismatch::Brief::DataIdx::History


class Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::State::Mismatch::Detail : public ydk::Entity
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

        class DataIdx; //type: Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::State::Mismatch::Detail::DataIdx

        ydk::YList data_idx;
        
}; // Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::State::Mismatch::Detail


class Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::State::Mismatch::Detail::DataIdx : public ydk::Entity
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
        class History; //type: Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::State::Mismatch::Detail::DataIdx::History

        ydk::YList history;
        
}; // Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::State::Mismatch::Detail::DataIdx


class Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::State::Mismatch::Detail::DataIdx::History : public ydk::Entity
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

}; // Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::State::Mismatch::Detail::DataIdx::History


class Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::Statistics : public ydk::Entity
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

        class DataIdx; //type: Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::Statistics::DataIdx
        class Brief; //type: Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::Statistics::Brief
        class Detail; //type: Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::Statistics::Detail

        ydk::YList data_idx;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers_ncs5500::Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::Statistics::Brief> brief;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers_ncs5500::Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::Statistics::Detail> detail;
        
}; // Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::Statistics


class Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::Statistics::DataIdx : public ydk::Entity
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

}; // Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::Statistics::DataIdx


class Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::Statistics::Brief : public ydk::Entity
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

        class DataIdx; //type: Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::Statistics::Brief::DataIdx

        ydk::YList data_idx;
        
}; // Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::Statistics::Brief


class Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::Statistics::Brief::DataIdx : public ydk::Entity
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

}; // Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::Statistics::Brief::DataIdx


class Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::Statistics::Detail : public ydk::Entity
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

        class DataIdx; //type: Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::Statistics::Detail::DataIdx

        ydk::YList data_idx;
        
}; // Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::Statistics::Detail


class Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::Statistics::Detail::DataIdx : public ydk::Entity
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

}; // Controller::Fabric::Oper::Link::NodeLocation::Port::Location::Tx::Statistics::Detail::DataIdx


class Controller::Fabric::Oper::Link::NodeLocation::Port::Rx : public ydk::Entity
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

        class DataIdx; //type: Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::DataIdx
        class Brief; //type: Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::Brief
        class Detail; //type: Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::Detail
        class State; //type: Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::State
        class Statistics; //type: Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::Statistics

        ydk::YList data_idx;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers_ncs5500::Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::Brief> brief;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers_ncs5500::Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::Detail> detail;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers_ncs5500::Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::State> state;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers_ncs5500::Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::Statistics> statistics;
        
}; // Controller::Fabric::Oper::Link::NodeLocation::Port::Rx


class Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::DataIdx : public ydk::Entity
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
        class History; //type: Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::DataIdx::History

        ydk::YList history;
        
}; // Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::DataIdx


class Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::DataIdx::History : public ydk::Entity
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

}; // Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::DataIdx::History


class Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::Brief : public ydk::Entity
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

        class DataIdx; //type: Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::Brief::DataIdx

        ydk::YList data_idx;
        
}; // Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::Brief


class Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::Brief::DataIdx : public ydk::Entity
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
        class History; //type: Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::Brief::DataIdx::History

        ydk::YList history;
        
}; // Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::Brief::DataIdx


class Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::Brief::DataIdx::History : public ydk::Entity
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

}; // Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::Brief::DataIdx::History


class Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::Detail : public ydk::Entity
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

        class DataIdx; //type: Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::Detail::DataIdx

        ydk::YList data_idx;
        
}; // Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::Detail


class Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::Detail::DataIdx : public ydk::Entity
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
        class History; //type: Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::Detail::DataIdx::History

        ydk::YList history;
        
}; // Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::Detail::DataIdx


class Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::Detail::DataIdx::History : public ydk::Entity
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

}; // Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::Detail::DataIdx::History


class Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::State : public ydk::Entity
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

        class Up; //type: Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::State::Up
        class Down; //type: Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::State::Down
        class Mismatch; //type: Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::State::Mismatch

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers_ncs5500::Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::State::Up> up;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers_ncs5500::Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::State::Down> down;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers_ncs5500::Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::State::Mismatch> mismatch;
        
}; // Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::State


class Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::State::Up : public ydk::Entity
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

        class DataIdx; //type: Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::State::Up::DataIdx
        class Brief; //type: Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::State::Up::Brief
        class Detail; //type: Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::State::Up::Detail

        ydk::YList data_idx;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers_ncs5500::Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::State::Up::Brief> brief;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers_ncs5500::Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::State::Up::Detail> detail;
        
}; // Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::State::Up


class Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::State::Up::DataIdx : public ydk::Entity
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
        class History; //type: Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::State::Up::DataIdx::History

        ydk::YList history;
        
}; // Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::State::Up::DataIdx


class Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::State::Up::DataIdx::History : public ydk::Entity
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

}; // Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::State::Up::DataIdx::History


class Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::State::Up::Brief : public ydk::Entity
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

        class DataIdx; //type: Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::State::Up::Brief::DataIdx

        ydk::YList data_idx;
        
}; // Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::State::Up::Brief


class Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::State::Up::Brief::DataIdx : public ydk::Entity
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
        class History; //type: Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::State::Up::Brief::DataIdx::History

        ydk::YList history;
        
}; // Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::State::Up::Brief::DataIdx


class Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::State::Up::Brief::DataIdx::History : public ydk::Entity
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

}; // Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::State::Up::Brief::DataIdx::History


class Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::State::Up::Detail : public ydk::Entity
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

        class DataIdx; //type: Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::State::Up::Detail::DataIdx

        ydk::YList data_idx;
        
}; // Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::State::Up::Detail


class Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::State::Up::Detail::DataIdx : public ydk::Entity
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
        class History; //type: Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::State::Up::Detail::DataIdx::History

        ydk::YList history;
        
}; // Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::State::Up::Detail::DataIdx


class Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::State::Up::Detail::DataIdx::History : public ydk::Entity
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

}; // Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::State::Up::Detail::DataIdx::History


class Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::State::Down : public ydk::Entity
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

        class DataIdx; //type: Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::State::Down::DataIdx
        class Brief; //type: Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::State::Down::Brief
        class Detail; //type: Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::State::Down::Detail

        ydk::YList data_idx;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers_ncs5500::Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::State::Down::Brief> brief;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers_ncs5500::Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::State::Down::Detail> detail;
        
}; // Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::State::Down


class Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::State::Down::DataIdx : public ydk::Entity
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
        class History; //type: Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::State::Down::DataIdx::History

        ydk::YList history;
        
}; // Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::State::Down::DataIdx


class Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::State::Down::DataIdx::History : public ydk::Entity
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

}; // Controller::Fabric::Oper::Link::NodeLocation::Port::Rx::State::Down::DataIdx::History


}
}

#endif /* _CISCO_IOS_XR_SYSADMIN_CONTROLLERS_NCS5500_2_ */

