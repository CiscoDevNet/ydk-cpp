#ifndef _CISCO_IOS_XR_SYSADMIN_CONTROLLERS_NCS5500_5_
#define _CISCO_IOS_XR_SYSADMIN_CONTROLLERS_NCS5500_5_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XR_sysadmin_controllers_ncs5500_0.hpp"
#include "Cisco_IOS_XR_sysadmin_controllers_ncs5500_4.hpp"

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_sysadmin_controllers_ncs5500 {


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

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers_ncs5500::Controller::CardMgr::EventHistory::Detail::Location::CardEventHistDetail> card_event_hist_detail;
        
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

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers_ncs5500::Controller::CardMgr::NotifHistory::Brief> brief;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers_ncs5500::Controller::CardMgr::NotifHistory::Detail> detail;
        
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

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers_ncs5500::Controller::CardMgr::NotifHistory::Brief::Location::CardNotifHistBrief> card_notif_hist_brief;
        
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

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers_ncs5500::Controller::CardMgr::NotifHistory::Detail::Location::CardNotifHistDetail> card_notif_hist_detail;
        
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

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers_ncs5500::Controller::CardMgr::OirHistory::Rack::CardOirHist> card_oir_hist;
        
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

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers_ncs5500::Controller::CardMgr::Iofpga::Register> register_;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers_ncs5500::Controller::CardMgr::Iofpga::Flash> flash;
        
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

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers_ncs5500::Controller::CardMgr::Iofpga::Register::Cpu> cpu;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers_ncs5500::Controller::CardMgr::Iofpga::Register::Mb> mb;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers_ncs5500::Controller::CardMgr::Iofpga::Register::Dc> dc;
        
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

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers_ncs5500::Controller::CardMgr::Iofpga::Flash::Info> info;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers_ncs5500::Controller::CardMgr::Iofpga::Flash::Status> status;
        
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

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers_ncs5500::Controller::CardMgr::Iofpga::Flash::Info::FlashLocation::IofpgaFlashInfo> iofpga_flash_info;
        
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

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers_ncs5500::Controller::CardMgr::Iofpga::Flash::Status::FlashLocation::IofpgaFlashStatus> iofpga_flash_status;
        
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

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers_ncs5500::Controller::CardMgr::Bootloader::Flash> flash;
        
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

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers_ncs5500::Controller::CardMgr::Bootloader::Flash::Info> info;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers_ncs5500::Controller::CardMgr::Bootloader::Flash::Status> status;
        
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

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers_ncs5500::Controller::CardMgr::Bootloader::Flash::Info::FlashLocation::BootldrFlashInfo> bootldr_flash_info;
        
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

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers_ncs5500::Controller::CardMgr::Bootloader::Flash::Status::FlashLocation::BootldrFlashStatus> bootldr_flash_status;
        
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

#endif /* _CISCO_IOS_XR_SYSADMIN_CONTROLLERS_NCS5500_5_ */

