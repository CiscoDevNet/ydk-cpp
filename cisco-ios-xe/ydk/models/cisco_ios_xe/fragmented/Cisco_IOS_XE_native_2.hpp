#ifndef _CISCO_IOS_XE_NATIVE_2_
#define _CISCO_IOS_XE_NATIVE_2_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XE_native_0.hpp"
#include "Cisco_IOS_XE_native_1.hpp"

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_native {


class Native::Controller::SONET::Au4::CemGroupUnframed : public ydk::Entity
{
    public:
        CemGroupUnframed();
        ~CemGroupUnframed();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Tug2; //type: Native::Controller::SONET::Au4::CemGroupUnframed::Tug2

        ydk::YList tug_2;
        
}; // Native::Controller::SONET::Au4::CemGroupUnframed


class Native::Controller::SONET::Au4::CemGroupUnframed::Tug2 : public ydk::Entity
{
    public:
        Tug2();
        ~Tug2();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf number; //type: int8
        ydk::YLeaf e1; //type: int8
        ydk::YLeaf cem_group; //type: int32
        ydk::YLeaf unframed; //type: empty

}; // Native::Controller::SONET::Au4::CemGroupUnframed::Tug2


class Native::Controller::SONET::Au4::FramingUnframed : public ydk::Entity
{
    public:
        FramingUnframed();
        ~FramingUnframed();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Tug2; //type: Native::Controller::SONET::Au4::FramingUnframed::Tug2

        ydk::YList tug_2;
        
}; // Native::Controller::SONET::Au4::FramingUnframed


class Native::Controller::SONET::Au4::FramingUnframed::Tug2 : public ydk::Entity
{
    public:
        Tug2();
        ~Tug2();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf number; //type: int8
        ydk::YLeaf e1; //type: int8
        ydk::YLeaf framing; //type: Framing
        class Framing;

}; // Native::Controller::SONET::Au4::FramingUnframed::Tug2


class Native::Controller::SONET::Au4::CemGroupAtm : public ydk::Entity
{
    public:
        CemGroupAtm();
        ~CemGroupAtm();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Tug2; //type: Native::Controller::SONET::Au4::CemGroupAtm::Tug2

        ydk::YList tug_2;
        
}; // Native::Controller::SONET::Au4::CemGroupAtm


class Native::Controller::SONET::Au4::CemGroupAtm::Tug2 : public ydk::Entity
{
    public:
        Tug2();
        ~Tug2();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf number; //type: int8
        ydk::YLeaf e1; //type: int8
        ydk::YLeaf atm; //type: empty

}; // Native::Controller::SONET::Au4::CemGroupAtm::Tug2


class Native::Controller::SONET::Au4::ImaGroup : public ydk::Entity
{
    public:
        ImaGroup();
        ~ImaGroup();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Tug2; //type: Native::Controller::SONET::Au4::ImaGroup::Tug2

        ydk::YList tug_2;
        
}; // Native::Controller::SONET::Au4::ImaGroup


class Native::Controller::SONET::Au4::ImaGroup::Tug2 : public ydk::Entity
{
    public:
        Tug2();
        ~Tug2();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf number; //type: int8
        ydk::YLeaf e1; //type: int8
        ydk::YLeaf ima_group; //type: int32

}; // Native::Controller::SONET::Au4::ImaGroup::Tug2


class Native::Controller::SONET::Aps : public ydk::Entity
{
    public:
        Aps();
        ~Aps();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf working; //type: int8
        ydk::YLeaf hspw_icrm_grp; //type: uint8
        class Group; //type: Native::Controller::SONET::Aps::Group
        class Protect; //type: Native::Controller::SONET::Aps::Protect
        class Interchassis; //type: Native::Controller::SONET::Aps::Interchassis

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Controller::SONET::Aps::Group> group;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Controller::SONET::Aps::Protect> protect;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Controller::SONET::Aps::Interchassis> interchassis;
        
}; // Native::Controller::SONET::Aps


class Native::Controller::SONET::Aps::Group : public ydk::Entity
{
    public:
        Group();
        ~Group();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf group_number; //type: uint8
        ydk::YLeaf acr; //type: int8

}; // Native::Controller::SONET::Aps::Group


class Native::Controller::SONET::Aps::Protect : public ydk::Entity
{
    public:
        Protect();
        ~Protect();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf number; //type: int8
        ydk::YLeaf ip_addr; //type: string

}; // Native::Controller::SONET::Aps::Protect


class Native::Controller::SONET::Aps::Interchassis : public ydk::Entity
{
    public:
        Interchassis();
        ~Interchassis();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf group; //type: uint8

}; // Native::Controller::SONET::Aps::Interchassis


class Native::Controller::SONETACR : public ydk::Entity
{
    public:
        SONETACR();
        ~SONETACR();

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

        ydk::YLeaf name; //type: string
        ydk::YLeaf framing; //type: Framing
        ydk::YLeaf shutdown; //type: empty
        class Clock; //type: Native::Controller::SONETACR::Clock
        class Aug; //type: Native::Controller::SONETACR::Aug
        class Au3; //type: Native::Controller::SONETACR::Au3
        class Au4Atm; //type: Native::Controller::SONETACR::Au4Atm
        class Au4; //type: Native::Controller::SONETACR::Au4
        class Aps; //type: Native::Controller::SONETACR::Aps

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Controller::SONETACR::Clock> clock_;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Controller::SONETACR::Aug> aug;
        ydk::YList au_3;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Controller::SONETACR::Au4Atm> au_4_atm;
        ydk::YList au_4;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Controller::SONETACR::Aps> aps;
                class Framing;

}; // Native::Controller::SONETACR


class Native::Controller::SONETACR::Clock : public ydk::Entity
{
    public:
        Clock();
        ~Clock();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf source; //type: Source
        class Source;

}; // Native::Controller::SONETACR::Clock


class Native::Controller::SONETACR::Aug : public ydk::Entity
{
    public:
        Aug();
        ~Aug();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf mapping; //type: Mapping
        class Mapping;

}; // Native::Controller::SONETACR::Aug


class Native::Controller::SONETACR::Au3 : public ydk::Entity
{
    public:
        Au3();
        ~Au3();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf number; //type: int8
        class Overhead; //type: Native::Controller::SONETACR::Au3::Overhead
        class Mode; //type: Native::Controller::SONETACR::Au3::Mode

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Controller::SONETACR::Au3::Overhead> overhead;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Controller::SONETACR::Au3::Mode> mode;
        
}; // Native::Controller::SONETACR::Au3


class Native::Controller::SONETACR::Au3::Overhead : public ydk::Entity
{
    public:
        Overhead();
        ~Overhead();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf byte; //type: Byte
        ydk::YLeaf length; //type: uint8
        class Byte;

}; // Native::Controller::SONETACR::Au3::Overhead


class Native::Controller::SONETACR::Au3::Mode : public ydk::Entity
{
    public:
        Mode();
        ~Mode();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf mapping; //type: Mapping
        class Mapping;

}; // Native::Controller::SONETACR::Au3::Mode


class Native::Controller::SONETACR::Au4Atm : public ydk::Entity
{
    public:
        Au4Atm();
        ~Au4Atm();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Au4; //type: Native::Controller::SONETACR::Au4Atm::Au4

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Controller::SONETACR::Au4Atm::Au4> au_4;
        
}; // Native::Controller::SONETACR::Au4Atm


class Native::Controller::SONETACR::Au4Atm::Au4 : public ydk::Entity
{
    public:
        Au4();
        ~Au4();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf number; //type: int8
        ydk::YLeaf atm; //type: empty

}; // Native::Controller::SONETACR::Au4Atm::Au4


class Native::Controller::SONETACR::Au4 : public ydk::Entity
{
    public:
        Au4();
        ~Au4();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf number; //type: int8
        ydk::YLeaf tug_3; //type: int8
        ydk::YLeaf mode; //type: Mode
        ydk::YLeaf cem_group; //type: int32
        ydk::YLeaf unframed; //type: empty
        ydk::YLeaf framing; //type: Framing
        class CemGroupTimeslots; //type: Native::Controller::SONETACR::Au4::CemGroupTimeslots
        class ChannelGroupTimeslots; //type: Native::Controller::SONETACR::Au4::ChannelGroupTimeslots
        class CemGroupUnframed; //type: Native::Controller::SONETACR::Au4::CemGroupUnframed
        class FramingUnframed; //type: Native::Controller::SONETACR::Au4::FramingUnframed
        class CemGroupAtm; //type: Native::Controller::SONETACR::Au4::CemGroupAtm
        class ImaGroup; //type: Native::Controller::SONETACR::Au4::ImaGroup

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Controller::SONETACR::Au4::CemGroupTimeslots> cem_group_timeslots;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Controller::SONETACR::Au4::ChannelGroupTimeslots> channel_group_timeslots;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Controller::SONETACR::Au4::CemGroupUnframed> cem_group_unframed;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Controller::SONETACR::Au4::FramingUnframed> framing_unframed;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Controller::SONETACR::Au4::CemGroupAtm> cem_group_atm;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Controller::SONETACR::Au4::ImaGroup> ima_group;
                class Mode;
        class Framing;

}; // Native::Controller::SONETACR::Au4


class Native::Controller::SONETACR::Au4::CemGroupTimeslots : public ydk::Entity
{
    public:
        CemGroupTimeslots();
        ~CemGroupTimeslots();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Tug2; //type: Native::Controller::SONETACR::Au4::CemGroupTimeslots::Tug2

        ydk::YList tug_2;
        
}; // Native::Controller::SONETACR::Au4::CemGroupTimeslots


class Native::Controller::SONETACR::Au4::CemGroupTimeslots::Tug2 : public ydk::Entity
{
    public:
        Tug2();
        ~Tug2();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf number; //type: int8
        ydk::YLeaf e1; //type: int8
        ydk::YLeaf cem_group; //type: int32
        ydk::YLeaf timeslots; //type: string

}; // Native::Controller::SONETACR::Au4::CemGroupTimeslots::Tug2


class Native::Controller::SONETACR::Au4::ChannelGroupTimeslots : public ydk::Entity
{
    public:
        ChannelGroupTimeslots();
        ~ChannelGroupTimeslots();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Tug2; //type: Native::Controller::SONETACR::Au4::ChannelGroupTimeslots::Tug2

        ydk::YList tug_2;
        
}; // Native::Controller::SONETACR::Au4::ChannelGroupTimeslots


class Native::Controller::SONETACR::Au4::ChannelGroupTimeslots::Tug2 : public ydk::Entity
{
    public:
        Tug2();
        ~Tug2();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf number; //type: int8
        ydk::YLeaf e1; //type: int8
        ydk::YLeaf channel_group; //type: int32
        ydk::YLeaf timeslots; //type: string

}; // Native::Controller::SONETACR::Au4::ChannelGroupTimeslots::Tug2


class Native::Controller::SONETACR::Au4::CemGroupUnframed : public ydk::Entity
{
    public:
        CemGroupUnframed();
        ~CemGroupUnframed();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Tug2; //type: Native::Controller::SONETACR::Au4::CemGroupUnframed::Tug2

        ydk::YList tug_2;
        
}; // Native::Controller::SONETACR::Au4::CemGroupUnframed


class Native::Controller::SONETACR::Au4::CemGroupUnframed::Tug2 : public ydk::Entity
{
    public:
        Tug2();
        ~Tug2();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf number; //type: int8
        ydk::YLeaf e1; //type: int8
        ydk::YLeaf cem_group; //type: int32
        ydk::YLeaf unframed; //type: empty

}; // Native::Controller::SONETACR::Au4::CemGroupUnframed::Tug2


class Native::Controller::SONETACR::Au4::FramingUnframed : public ydk::Entity
{
    public:
        FramingUnframed();
        ~FramingUnframed();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Tug2; //type: Native::Controller::SONETACR::Au4::FramingUnframed::Tug2

        ydk::YList tug_2;
        
}; // Native::Controller::SONETACR::Au4::FramingUnframed


class Native::Controller::SONETACR::Au4::FramingUnframed::Tug2 : public ydk::Entity
{
    public:
        Tug2();
        ~Tug2();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf number; //type: int8
        ydk::YLeaf e1; //type: int8
        ydk::YLeaf framing; //type: Framing
        class Framing;

}; // Native::Controller::SONETACR::Au4::FramingUnframed::Tug2


class Native::Controller::SONETACR::Au4::CemGroupAtm : public ydk::Entity
{
    public:
        CemGroupAtm();
        ~CemGroupAtm();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Tug2; //type: Native::Controller::SONETACR::Au4::CemGroupAtm::Tug2

        ydk::YList tug_2;
        
}; // Native::Controller::SONETACR::Au4::CemGroupAtm


class Native::Controller::SONETACR::Au4::CemGroupAtm::Tug2 : public ydk::Entity
{
    public:
        Tug2();
        ~Tug2();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf number; //type: int8
        ydk::YLeaf e1; //type: int8
        ydk::YLeaf atm; //type: empty

}; // Native::Controller::SONETACR::Au4::CemGroupAtm::Tug2


class Native::Controller::SONETACR::Au4::ImaGroup : public ydk::Entity
{
    public:
        ImaGroup();
        ~ImaGroup();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Tug2; //type: Native::Controller::SONETACR::Au4::ImaGroup::Tug2

        ydk::YList tug_2;
        
}; // Native::Controller::SONETACR::Au4::ImaGroup


class Native::Controller::SONETACR::Au4::ImaGroup::Tug2 : public ydk::Entity
{
    public:
        Tug2();
        ~Tug2();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf number; //type: int8
        ydk::YLeaf e1; //type: int8
        ydk::YLeaf ima_group; //type: int32

}; // Native::Controller::SONETACR::Au4::ImaGroup::Tug2


class Native::Controller::SONETACR::Aps : public ydk::Entity
{
    public:
        Aps();
        ~Aps();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf working; //type: int8
        ydk::YLeaf hspw_icrm_grp; //type: uint8
        class Group; //type: Native::Controller::SONETACR::Aps::Group
        class Protect; //type: Native::Controller::SONETACR::Aps::Protect
        class Interchassis; //type: Native::Controller::SONETACR::Aps::Interchassis

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Controller::SONETACR::Aps::Group> group;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Controller::SONETACR::Aps::Protect> protect;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Controller::SONETACR::Aps::Interchassis> interchassis;
        
}; // Native::Controller::SONETACR::Aps


class Native::Controller::SONETACR::Aps::Group : public ydk::Entity
{
    public:
        Group();
        ~Group();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf group_number; //type: uint8
        ydk::YLeaf acr; //type: int8

}; // Native::Controller::SONETACR::Aps::Group


class Native::Controller::SONETACR::Aps::Protect : public ydk::Entity
{
    public:
        Protect();
        ~Protect();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf number; //type: int8
        ydk::YLeaf ip_addr; //type: string

}; // Native::Controller::SONETACR::Aps::Protect


class Native::Controller::SONETACR::Aps::Interchassis : public ydk::Entity
{
    public:
        Interchassis();
        ~Interchassis();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf group; //type: uint8

}; // Native::Controller::SONETACR::Aps::Interchassis


class Native::Controller::Wanphy : public ydk::Entity
{
    public:
        Wanphy();
        ~Wanphy();

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

        ydk::YLeaf name; //type: string

}; // Native::Controller::Wanphy


class Native::Controller::Vdsl : public ydk::Entity
{
    public:
        Vdsl();
        ~Vdsl();

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

        ydk::YLeaf name; //type: string
        ydk::YLeaf shutdown; //type: empty
        ydk::YLeaf sra; //type: empty
        ydk::YLeaf bitswap; //type: empty
        ydk::YLeaf diagnostics; //type: Diagnostics
        ydk::YLeaf description; //type: string
        ydk::YLeaf modem; //type: string
        class LineMode; //type: Native::Controller::Vdsl::LineMode
        class Operating; //type: Native::Controller::Vdsl::Operating
        class Training; //type: Native::Controller::Vdsl::Training
        class Sync; //type: Native::Controller::Vdsl::Sync

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Controller::Vdsl::LineMode> line_mode;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Controller::Vdsl::Operating> operating;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Controller::Vdsl::Training> training;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Controller::Vdsl::Sync> sync;
                class Diagnostics;

}; // Native::Controller::Vdsl


class Native::Controller::Vdsl::LineMode : public ydk::Entity
{
    public:
        LineMode();
        ~LineMode();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf bonding; //type: empty
        class SingleWire; //type: Native::Controller::Vdsl::LineMode::SingleWire

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Controller::Vdsl::LineMode::SingleWire> single_wire;
        
}; // Native::Controller::Vdsl::LineMode


class Native::Controller::Vdsl::LineMode::SingleWire : public ydk::Entity
{
    public:
        SingleWire();
        ~SingleWire();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Line; //type: Native::Controller::Vdsl::LineMode::SingleWire::Line

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Controller::Vdsl::LineMode::SingleWire::Line> line;
        
}; // Native::Controller::Vdsl::LineMode::SingleWire


class Native::Controller::Vdsl::LineMode::SingleWire::Line : public ydk::Entity
{
    public:
        Line();
        ~Line();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf zero; //type: empty
        class One; //type: Native::Controller::Vdsl::LineMode::SingleWire::Line::One

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Controller::Vdsl::LineMode::SingleWire::Line::One> one; // presence node
        
}; // Native::Controller::Vdsl::LineMode::SingleWire::Line


class Native::Controller::Vdsl::LineMode::SingleWire::Line::One : public ydk::Entity
{
    public:
        One();
        ~One();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf profile; //type: Profile
        class Profile;

}; // Native::Controller::Vdsl::LineMode::SingleWire::Line::One


class Native::Controller::Vdsl::Operating : public ydk::Entity
{
    public:
        Operating();
        ~Operating();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Mode; //type: Native::Controller::Vdsl::Operating::Mode

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Controller::Vdsl::Operating::Mode> mode;
        
}; // Native::Controller::Vdsl::Operating


class Native::Controller::Vdsl::Operating::Mode : public ydk::Entity
{
    public:
        Mode();
        ~Mode();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf adsl1; //type: empty
        ydk::YLeaf auto_; //type: empty
        ydk::YLeaf vdsl2; //type: empty
        ydk::YLeaf ansi; //type: empty
        class Adsl2; //type: Native::Controller::Vdsl::Operating::Mode::Adsl2
        class Adsl2plus; //type: Native::Controller::Vdsl::Operating::Mode::Adsl2plus

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Controller::Vdsl::Operating::Mode::Adsl2> adsl2; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Controller::Vdsl::Operating::Mode::Adsl2plus> adsl2plus; // presence node
        
}; // Native::Controller::Vdsl::Operating::Mode


class Native::Controller::Vdsl::Operating::Mode::Adsl2 : public ydk::Entity
{
    public:
        Adsl2();
        ~Adsl2();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf annex; //type: Annex
        class Annex;

}; // Native::Controller::Vdsl::Operating::Mode::Adsl2


class Native::Controller::Vdsl::Operating::Mode::Adsl2plus : public ydk::Entity
{
    public:
        Adsl2plus();
        ~Adsl2plus();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf annex; //type: Annex
        class Annex;

}; // Native::Controller::Vdsl::Operating::Mode::Adsl2plus


class Native::Controller::Vdsl::Training : public ydk::Entity
{
    public:
        Training();
        ~Training();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Log; //type: Native::Controller::Vdsl::Training::Log

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Controller::Vdsl::Training::Log> log;
        
}; // Native::Controller::Vdsl::Training


class Native::Controller::Vdsl::Training::Log : public ydk::Entity
{
    public:
        Log();
        ~Log();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf filename; //type: string

}; // Native::Controller::Vdsl::Training::Log


class Native::Controller::Vdsl::Sync : public ydk::Entity
{
    public:
        Sync();
        ~Sync();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Interval; //type: Native::Controller::Vdsl::Sync::Interval
        class Mode; //type: Native::Controller::Vdsl::Sync::Mode

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Controller::Vdsl::Sync::Interval> interval;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Controller::Vdsl::Sync::Mode> mode;
        
}; // Native::Controller::Vdsl::Sync


class Native::Controller::Vdsl::Sync::Interval : public ydk::Entity
{
    public:
        Interval();
        ~Interval();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf seconds; //type: uint32

}; // Native::Controller::Vdsl::Sync::Interval


class Native::Controller::Vdsl::Sync::Mode : public ydk::Entity
{
    public:
        Mode();
        ~Mode();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf none; //type: empty
        class Itu; //type: Native::Controller::Vdsl::Sync::Mode::Itu
        class Ansi; //type: Native::Controller::Vdsl::Sync::Mode::Ansi

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Controller::Vdsl::Sync::Mode::Itu> itu; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Controller::Vdsl::Sync::Mode::Ansi> ansi; // presence node
        
}; // Native::Controller::Vdsl::Sync::Mode


class Native::Controller::Vdsl::Sync::Mode::Itu : public ydk::Entity
{
    public:
        Itu();
        ~Itu();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf previous; //type: empty

}; // Native::Controller::Vdsl::Sync::Mode::Itu


class Native::Controller::Vdsl::Sync::Mode::Ansi : public ydk::Entity
{
    public:
        Ansi();
        ~Ansi();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf previous; //type: empty

}; // Native::Controller::Vdsl::Sync::Mode::Ansi


class Native::Vrf : public ydk::Entity
{
    public:
        Vrf();
        ~Vrf();

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

        class Definition; //type: Native::Vrf::Definition

        ydk::YList definition;
        
}; // Native::Vrf


class Native::Vrf::Definition : public ydk::Entity
{
    public:
        Definition();
        ~Definition();

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

        ydk::YLeaf name; //type: string
        ydk::YLeaf description; //type: string
        ydk::YLeaf rd; //type: string
        class Default; //type: Native::Vrf::Definition::Default
        class Ipv4; //type: Native::Vrf::Definition::Ipv4
        class Ipv6; //type: Native::Vrf::Definition::Ipv6
        class AddressFamily; //type: Native::Vrf::Definition::AddressFamily
        class RouteTarget; //type: Native::Vrf::Definition::RouteTarget
        class Vnet; //type: Native::Vrf::Definition::Vnet
        class Vpn; //type: Native::Vrf::Definition::Vpn

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Vrf::Definition::Default> default_;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Vrf::Definition::Ipv4> ipv4;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Vrf::Definition::Ipv6> ipv6;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Vrf::Definition::AddressFamily> address_family;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Vrf::Definition::RouteTarget> route_target;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Vrf::Definition::Vnet> vnet;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Vrf::Definition::Vpn> vpn;
        
}; // Native::Vrf::Definition


class Native::Vrf::Definition::Default : public ydk::Entity
{
    public:
        Default();
        ~Default();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf description; //type: empty
        ydk::YLeaf rd; //type: string
        class Ipv4; //type: Native::Vrf::Definition::Default::Ipv4
        class Ipv6; //type: Native::Vrf::Definition::Default::Ipv6
        class AddressFamily; //type: Native::Vrf::Definition::Default::AddressFamily
        class RouteTarget; //type: Native::Vrf::Definition::Default::RouteTarget
        class Vnet; //type: Native::Vrf::Definition::Default::Vnet
        class Vpn; //type: Native::Vrf::Definition::Default::Vpn

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Vrf::Definition::Default::Ipv4> ipv4;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Vrf::Definition::Default::Ipv6> ipv6;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Vrf::Definition::Default::AddressFamily> address_family;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Vrf::Definition::Default::RouteTarget> route_target;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Vrf::Definition::Default::Vnet> vnet;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Vrf::Definition::Default::Vpn> vpn;
        
}; // Native::Vrf::Definition::Default


class Native::Vrf::Definition::Default::Ipv4 : public ydk::Entity
{
    public:
        Ipv4();
        ~Ipv4();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Multicast; //type: Native::Vrf::Definition::Default::Ipv4::Multicast

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Vrf::Definition::Default::Ipv4::Multicast> multicast;
        
}; // Native::Vrf::Definition::Default::Ipv4


class Native::Vrf::Definition::Default::Ipv4::Multicast : public ydk::Entity
{
    public:
        Multicast();
        ~Multicast();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf multitopology; //type: empty

}; // Native::Vrf::Definition::Default::Ipv4::Multicast


class Native::Vrf::Definition::Default::Ipv6 : public ydk::Entity
{
    public:
        Ipv6();
        ~Ipv6();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Multicast; //type: Native::Vrf::Definition::Default::Ipv6::Multicast

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Vrf::Definition::Default::Ipv6::Multicast> multicast;
        
}; // Native::Vrf::Definition::Default::Ipv6


class Native::Vrf::Definition::Default::Ipv6::Multicast : public ydk::Entity
{
    public:
        Multicast();
        ~Multicast();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf multitopology; //type: empty

}; // Native::Vrf::Definition::Default::Ipv6::Multicast


class Native::Vrf::Definition::Default::AddressFamily : public ydk::Entity
{
    public:
        AddressFamily();
        ~AddressFamily();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Ipv4; //type: Native::Vrf::Definition::Default::AddressFamily::Ipv4
        class Ipv6; //type: Native::Vrf::Definition::Default::AddressFamily::Ipv6

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Vrf::Definition::Default::AddressFamily::Ipv4> ipv4; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Vrf::Definition::Default::AddressFamily::Ipv6> ipv6; // presence node
        
}; // Native::Vrf::Definition::Default::AddressFamily


class Native::Vrf::Definition::Default::AddressFamily::Ipv4 : public ydk::Entity
{
    public:
        Ipv4();
        ~Ipv4();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf unicast; //type: empty
        ydk::YLeaf multicast; //type: empty

}; // Native::Vrf::Definition::Default::AddressFamily::Ipv4


class Native::Vrf::Definition::Default::AddressFamily::Ipv6 : public ydk::Entity
{
    public:
        Ipv6();
        ~Ipv6();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf unicast; //type: empty
        ydk::YLeaf multicast; //type: empty

}; // Native::Vrf::Definition::Default::AddressFamily::Ipv6


class Native::Vrf::Definition::Default::RouteTarget : public ydk::Entity
{
    public:
        RouteTarget();
        ~RouteTarget();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf empty_rt; //type: empty
        ydk::YLeaf export_; //type: empty
        ydk::YLeaf import; //type: empty
        class ExportAsn; //type: Native::Vrf::Definition::Default::RouteTarget::ExportAsn
        class ImportAsn; //type: Native::Vrf::Definition::Default::RouteTarget::ImportAsn

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Vrf::Definition::Default::RouteTarget::ExportAsn> export_asn;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Vrf::Definition::Default::RouteTarget::ImportAsn> import_asn;
        
}; // Native::Vrf::Definition::Default::RouteTarget


class Native::Vrf::Definition::Default::RouteTarget::ExportAsn : public ydk::Entity
{
    public:
        ExportAsn();
        ~ExportAsn();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Export; //type: Native::Vrf::Definition::Default::RouteTarget::ExportAsn::Export

        ydk::YList export_;
        
}; // Native::Vrf::Definition::Default::RouteTarget::ExportAsn


class Native::Vrf::Definition::Default::RouteTarget::ExportAsn::Export : public ydk::Entity
{
    public:
        Export();
        ~Export();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf asn_ip; //type: string

}; // Native::Vrf::Definition::Default::RouteTarget::ExportAsn::Export


class Native::Vrf::Definition::Default::RouteTarget::ImportAsn : public ydk::Entity
{
    public:
        ImportAsn();
        ~ImportAsn();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Import; //type: Native::Vrf::Definition::Default::RouteTarget::ImportAsn::Import

        ydk::YList import;
        
}; // Native::Vrf::Definition::Default::RouteTarget::ImportAsn


class Native::Vrf::Definition::Default::RouteTarget::ImportAsn::Import : public ydk::Entity
{
    public:
        Import();
        ~Import();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf asn_ip; //type: string

}; // Native::Vrf::Definition::Default::RouteTarget::ImportAsn::Import


class Native::Vrf::Definition::Default::Vnet : public ydk::Entity
{
    public:
        Vnet();
        ~Vnet();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tag; //type: empty

}; // Native::Vrf::Definition::Default::Vnet


class Native::Vrf::Definition::Default::Vpn : public ydk::Entity
{
    public:
        Vpn();
        ~Vpn();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf id; //type: empty

}; // Native::Vrf::Definition::Default::Vpn


class Native::Vrf::Definition::Ipv4 : public ydk::Entity
{
    public:
        Ipv4();
        ~Ipv4();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Multicast; //type: Native::Vrf::Definition::Ipv4::Multicast

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Vrf::Definition::Ipv4::Multicast> multicast;
        
}; // Native::Vrf::Definition::Ipv4


class Native::Vrf::Definition::Ipv4::Multicast : public ydk::Entity
{
    public:
        Multicast();
        ~Multicast();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf multitopology; //type: empty

}; // Native::Vrf::Definition::Ipv4::Multicast


class Native::Vrf::Definition::Ipv6 : public ydk::Entity
{
    public:
        Ipv6();
        ~Ipv6();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Multicast; //type: Native::Vrf::Definition::Ipv6::Multicast

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Vrf::Definition::Ipv6::Multicast> multicast;
        
}; // Native::Vrf::Definition::Ipv6


class Native::Vrf::Definition::Ipv6::Multicast : public ydk::Entity
{
    public:
        Multicast();
        ~Multicast();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf multitopology; //type: empty

}; // Native::Vrf::Definition::Ipv6::Multicast


class Native::Vrf::Definition::AddressFamily : public ydk::Entity
{
    public:
        AddressFamily();
        ~AddressFamily();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Ipv4; //type: Native::Vrf::Definition::AddressFamily::Ipv4
        class Ipv6; //type: Native::Vrf::Definition::AddressFamily::Ipv6

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Vrf::Definition::AddressFamily::Ipv4> ipv4; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Vrf::Definition::AddressFamily::Ipv6> ipv6; // presence node
        
}; // Native::Vrf::Definition::AddressFamily


class Native::Vrf::Definition::AddressFamily::Ipv4 : public ydk::Entity
{
    public:
        Ipv4();
        ~Ipv4();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Export; //type: Native::Vrf::Definition::AddressFamily::Ipv4::Export
        class Maximum; //type: Native::Vrf::Definition::AddressFamily::Ipv4::Maximum
        class Mdt; //type: Native::Vrf::Definition::AddressFamily::Ipv4::Mdt
        class RouteTarget; //type: Native::Vrf::Definition::AddressFamily::Ipv4::RouteTarget
        class Bgp; //type: Native::Vrf::Definition::AddressFamily::Ipv4::Bgp
        class Import; //type: Native::Vrf::Definition::AddressFamily::Ipv4::Import

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Vrf::Definition::AddressFamily::Ipv4::Export> export_;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Vrf::Definition::AddressFamily::Ipv4::Maximum> maximum; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Vrf::Definition::AddressFamily::Ipv4::Mdt> mdt;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Vrf::Definition::AddressFamily::Ipv4::RouteTarget> route_target;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Vrf::Definition::AddressFamily::Ipv4::Bgp> bgp;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Vrf::Definition::AddressFamily::Ipv4::Import> import;
        
}; // Native::Vrf::Definition::AddressFamily::Ipv4


class Native::Vrf::Definition::AddressFamily::Ipv4::Export : public ydk::Entity
{
    public:
        Export();
        ~Export();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf map; //type: string

}; // Native::Vrf::Definition::AddressFamily::Ipv4::Export


class Native::Vrf::Definition::AddressFamily::Ipv4::Maximum : public ydk::Entity
{
    public:
        Maximum();
        ~Maximum();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf routes; //type: uint32
        ydk::YLeaf threshold; //type: uint16
        ydk::YLeaf reinstall; //type: uint16
        ydk::YLeaf warning_only; //type: empty

}; // Native::Vrf::Definition::AddressFamily::Ipv4::Maximum


class Native::Vrf::Definition::AddressFamily::Ipv4::Mdt : public ydk::Entity
{
    public:
        Mdt();
        ~Mdt();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf log_reuse; //type: empty
        ydk::YLeaf mtu; //type: uint16
        ydk::YLeafList preference; //type: list of  Preference
        class Default; //type: Native::Vrf::Definition::AddressFamily::Ipv4::Mdt::Default
        class AutoDiscovery; //type: Native::Vrf::Definition::AddressFamily::Ipv4::Mdt::AutoDiscovery
        class Data; //type: Native::Vrf::Definition::AddressFamily::Ipv4::Mdt::Data
        class Overlay; //type: Native::Vrf::Definition::AddressFamily::Ipv4::Mdt::Overlay

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Vrf::Definition::AddressFamily::Ipv4::Mdt::Default> default_;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Vrf::Definition::AddressFamily::Ipv4::Mdt::AutoDiscovery> auto_discovery;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Vrf::Definition::AddressFamily::Ipv4::Mdt::Data> data;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Vrf::Definition::AddressFamily::Ipv4::Mdt::Overlay> overlay;
                class Preference;

}; // Native::Vrf::Definition::AddressFamily::Ipv4::Mdt


class Native::Vrf::Definition::AddressFamily::Ipv4::Mdt::Default : public ydk::Entity
{
    public:
        Default();
        ~Default();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address; //type: string
        class Mpls; //type: Native::Vrf::Definition::AddressFamily::Ipv4::Mdt::Default::Mpls

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Vrf::Definition::AddressFamily::Ipv4::Mdt::Default::Mpls> mpls;
        
}; // Native::Vrf::Definition::AddressFamily::Ipv4::Mdt::Default


class Native::Vrf::Definition::AddressFamily::Ipv4::Mdt::Default::Mpls : public ydk::Entity
{
    public:
        Mpls();
        ~Mpls();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf mldp; //type: string

}; // Native::Vrf::Definition::AddressFamily::Ipv4::Mdt::Default::Mpls


class Native::Vrf::Definition::AddressFamily::Ipv4::Mdt::AutoDiscovery : public ydk::Entity
{
    public:
        AutoDiscovery();
        ~AutoDiscovery();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf pim; //type: empty

}; // Native::Vrf::Definition::AddressFamily::Ipv4::Mdt::AutoDiscovery


class Native::Vrf::Definition::AddressFamily::Ipv4::Mdt::Data : public ydk::Entity
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

        ydk::YLeaf list; //type: one of uint16, string
        ydk::YLeaf threshold; //type: uint32
        class Multicast; //type: Native::Vrf::Definition::AddressFamily::Ipv4::Mdt::Data::Multicast

        ydk::YList multicast;
        
}; // Native::Vrf::Definition::AddressFamily::Ipv4::Mdt::Data


class Native::Vrf::Definition::AddressFamily::Ipv4::Mdt::Data::Multicast : public ydk::Entity
{
    public:
        Multicast();
        ~Multicast();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address; //type: string
        ydk::YLeaf wildcard; //type: string

}; // Native::Vrf::Definition::AddressFamily::Ipv4::Mdt::Data::Multicast


class Native::Vrf::Definition::AddressFamily::Ipv4::Mdt::Overlay : public ydk::Entity
{
    public:
        Overlay();
        ~Overlay();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf use_bgp; //type: empty

}; // Native::Vrf::Definition::AddressFamily::Ipv4::Mdt::Overlay


class Native::Vrf::Definition::AddressFamily::Ipv4::RouteTarget : public ydk::Entity
{
    public:
        RouteTarget();
        ~RouteTarget();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Export; //type: Native::Vrf::Definition::AddressFamily::Ipv4::RouteTarget::Export
        class Import; //type: Native::Vrf::Definition::AddressFamily::Ipv4::RouteTarget::Import

        ydk::YList export_;
        ydk::YList import;
        
}; // Native::Vrf::Definition::AddressFamily::Ipv4::RouteTarget


class Native::Vrf::Definition::AddressFamily::Ipv4::RouteTarget::Export : public ydk::Entity
{
    public:
        Export();
        ~Export();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf asn_ip; //type: string
        ydk::YLeaf stitching; //type: empty

}; // Native::Vrf::Definition::AddressFamily::Ipv4::RouteTarget::Export


class Native::Vrf::Definition::AddressFamily::Ipv4::RouteTarget::Import : public ydk::Entity
{
    public:
        Import();
        ~Import();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf asn_ip; //type: string
        ydk::YLeaf stitching; //type: empty

}; // Native::Vrf::Definition::AddressFamily::Ipv4::RouteTarget::Import


class Native::Vrf::Definition::AddressFamily::Ipv4::Bgp : public ydk::Entity
{
    public:
        Bgp();
        ~Bgp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class NextHop; //type: Native::Vrf::Definition::AddressFamily::Ipv4::Bgp::NextHop

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Vrf::Definition::AddressFamily::Ipv4::Bgp::NextHop> next_hop;
        
}; // Native::Vrf::Definition::AddressFamily::Ipv4::Bgp


class Native::Vrf::Definition::AddressFamily::Ipv4::Bgp::NextHop : public ydk::Entity
{
    public:
        NextHop();
        ~NextHop();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf loopback; //type: uint32

}; // Native::Vrf::Definition::AddressFamily::Ipv4::Bgp::NextHop


class Native::Vrf::Definition::AddressFamily::Ipv4::Import : public ydk::Entity
{
    public:
        Import();
        ~Import();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf map; //type: string

}; // Native::Vrf::Definition::AddressFamily::Ipv4::Import


class Native::Vrf::Definition::AddressFamily::Ipv6 : public ydk::Entity
{
    public:
        Ipv6();
        ~Ipv6();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Mdt; //type: Native::Vrf::Definition::AddressFamily::Ipv6::Mdt
        class RouteTarget; //type: Native::Vrf::Definition::AddressFamily::Ipv6::RouteTarget
        class Bgp; //type: Native::Vrf::Definition::AddressFamily::Ipv6::Bgp
        class Import; //type: Native::Vrf::Definition::AddressFamily::Ipv6::Import

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Vrf::Definition::AddressFamily::Ipv6::Mdt> mdt;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Vrf::Definition::AddressFamily::Ipv6::RouteTarget> route_target;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Vrf::Definition::AddressFamily::Ipv6::Bgp> bgp;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Vrf::Definition::AddressFamily::Ipv6::Import> import;
        
}; // Native::Vrf::Definition::AddressFamily::Ipv6


class Native::Vrf::Definition::AddressFamily::Ipv6::Mdt : public ydk::Entity
{
    public:
        Mdt();
        ~Mdt();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf mtu; //type: uint16

}; // Native::Vrf::Definition::AddressFamily::Ipv6::Mdt


class Native::Vrf::Definition::AddressFamily::Ipv6::RouteTarget : public ydk::Entity
{
    public:
        RouteTarget();
        ~RouteTarget();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Export; //type: Native::Vrf::Definition::AddressFamily::Ipv6::RouteTarget::Export
        class Import; //type: Native::Vrf::Definition::AddressFamily::Ipv6::RouteTarget::Import

        ydk::YList export_;
        ydk::YList import;
        
}; // Native::Vrf::Definition::AddressFamily::Ipv6::RouteTarget


class Native::Vrf::Definition::AddressFamily::Ipv6::RouteTarget::Export : public ydk::Entity
{
    public:
        Export();
        ~Export();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf asn_ip; //type: string
        ydk::YLeaf stitching; //type: empty

}; // Native::Vrf::Definition::AddressFamily::Ipv6::RouteTarget::Export


class Native::Vrf::Definition::AddressFamily::Ipv6::RouteTarget::Import : public ydk::Entity
{
    public:
        Import();
        ~Import();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf asn_ip; //type: string
        ydk::YLeaf stitching; //type: empty

}; // Native::Vrf::Definition::AddressFamily::Ipv6::RouteTarget::Import


class Native::Vrf::Definition::AddressFamily::Ipv6::Bgp : public ydk::Entity
{
    public:
        Bgp();
        ~Bgp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class NextHop; //type: Native::Vrf::Definition::AddressFamily::Ipv6::Bgp::NextHop

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Vrf::Definition::AddressFamily::Ipv6::Bgp::NextHop> next_hop;
        
}; // Native::Vrf::Definition::AddressFamily::Ipv6::Bgp


class Native::Vrf::Definition::AddressFamily::Ipv6::Bgp::NextHop : public ydk::Entity
{
    public:
        NextHop();
        ~NextHop();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Ipv4; //type: Native::Vrf::Definition::AddressFamily::Ipv6::Bgp::NextHop::Ipv4
        class Ipv6_; //type: Native::Vrf::Definition::AddressFamily::Ipv6::Bgp::NextHop::Ipv6_

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Vrf::Definition::AddressFamily::Ipv6::Bgp::NextHop::Ipv4> ipv4;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Vrf::Definition::AddressFamily::Ipv6::Bgp::NextHop::Ipv6_> ipv6;
        
}; // Native::Vrf::Definition::AddressFamily::Ipv6::Bgp::NextHop


class Native::Vrf::Definition::AddressFamily::Ipv6::Bgp::NextHop::Ipv4 : public ydk::Entity
{
    public:
        Ipv4();
        ~Ipv4();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf loopback; //type: uint32

}; // Native::Vrf::Definition::AddressFamily::Ipv6::Bgp::NextHop::Ipv4


class Native::Vrf::Definition::AddressFamily::Ipv6::Bgp::NextHop::Ipv6_ : public ydk::Entity
{
    public:
        Ipv6_();
        ~Ipv6_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf loopback; //type: uint32

}; // Native::Vrf::Definition::AddressFamily::Ipv6::Bgp::NextHop::Ipv6_


class Native::Vrf::Definition::AddressFamily::Ipv6::Import : public ydk::Entity
{
    public:
        Import();
        ~Import();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf map; //type: string

}; // Native::Vrf::Definition::AddressFamily::Ipv6::Import


class Native::Vrf::Definition::RouteTarget : public ydk::Entity
{
    public:
        RouteTarget();
        ~RouteTarget();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Export; //type: Native::Vrf::Definition::RouteTarget::Export
        class Import; //type: Native::Vrf::Definition::RouteTarget::Import

        ydk::YList export_;
        ydk::YList import;
        
}; // Native::Vrf::Definition::RouteTarget


class Native::Vrf::Definition::RouteTarget::Export : public ydk::Entity
{
    public:
        Export();
        ~Export();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf asn_ip; //type: string
        ydk::YLeaf stitching; //type: empty

}; // Native::Vrf::Definition::RouteTarget::Export


class Native::Vrf::Definition::RouteTarget::Import : public ydk::Entity
{
    public:
        Import();
        ~Import();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf asn_ip; //type: string
        ydk::YLeaf stitching; //type: empty

}; // Native::Vrf::Definition::RouteTarget::Import


class Native::Vrf::Definition::Vnet : public ydk::Entity
{
    public:
        Vnet();
        ~Vnet();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tag; //type: uint16

}; // Native::Vrf::Definition::Vnet


class Native::Vrf::Definition::Vpn : public ydk::Entity
{
    public:
        Vpn();
        ~Vpn();

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

}; // Native::Vrf::Definition::Vpn


class Native::Rmon : public ydk::Entity
{
    public:
        Rmon();
        ~Rmon();

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

        class Alarm; //type: Native::Rmon::Alarm
        class Event; //type: Native::Rmon::Event

        ydk::YList alarm;
        ydk::YList event;
        
}; // Native::Rmon


class Native::Rmon::Alarm : public ydk::Entity
{
    public:
        Alarm();
        ~Alarm();

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

        ydk::YLeaf number; //type: uint16
        ydk::YLeaf mib_object; //type: string
        ydk::YLeaf sample_interval; //type: uint32
        ydk::YLeaf test_mode; //type: TestMode
        ydk::YLeaf rising_threshold; //type: int32
        ydk::YLeaf rising_event; //type: uint16
        ydk::YLeaf falling_threshold; //type: int32
        ydk::YLeaf falling_event; //type: uint16
        ydk::YLeaf owner; //type: string
        class TestMode;

}; // Native::Rmon::Alarm


class Native::Rmon::Event : public ydk::Entity
{
    public:
        Event();
        ~Event();

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

        ydk::YLeaf number; //type: uint16
        class Log; //type: Native::Rmon::Event::Log

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Rmon::Event::Log> log; // presence node
        
}; // Native::Rmon::Event


class Native::Rmon::Event::Log : public ydk::Entity
{
    public:
        Log();
        ~Log();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf trap; //type: string
        ydk::YLeaf description; //type: string
        ydk::YLeaf owner; //type: string

}; // Native::Rmon::Event::Log


class Native::Sampler : public ydk::Entity
{
    public:
        Sampler();
        ~Sampler();

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

        ydk::YLeaf name; //type: string
        ydk::YLeaf description; //type: string
        class Mode; //type: Native::Sampler::Mode
        class Granularity; //type: Native::Sampler::Granularity

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Sampler::Mode> mode;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Sampler::Granularity> granularity;
        
}; // Native::Sampler


class Native::Sampler::Mode : public ydk::Entity
{
    public:
        Mode();
        ~Mode();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Deterministic; //type: Native::Sampler::Mode::Deterministic
        class Hash; //type: Native::Sampler::Mode::Hash
        class Random; //type: Native::Sampler::Mode::Random

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Sampler::Mode::Deterministic> deterministic;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Sampler::Mode::Hash> hash;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Sampler::Mode::Random> random;
        
}; // Native::Sampler::Mode


class Native::Sampler::Mode::Deterministic : public ydk::Entity
{
    public:
        Deterministic();
        ~Deterministic();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf number; //type: uint8
        ydk::YLeaf out_of; //type: uint16

}; // Native::Sampler::Mode::Deterministic


class Native::Sampler::Mode::Hash : public ydk::Entity
{
    public:
        Hash();
        ~Hash();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf number; //type: uint8
        ydk::YLeaf out_of; //type: uint16

}; // Native::Sampler::Mode::Hash


class Native::Sampler::Mode::Random : public ydk::Entity
{
    public:
        Random();
        ~Random();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf number; //type: uint8
        ydk::YLeaf out_of; //type: uint16

}; // Native::Sampler::Mode::Random


class Native::Sampler::Granularity : public ydk::Entity
{
    public:
        Granularity();
        ~Granularity();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf connection; //type: empty
        ydk::YLeaf packet; //type: empty

}; // Native::Sampler::Granularity


class Native::Flow : public ydk::Entity
{
    public:
        Flow();
        ~Flow();

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

        class Record; //type: Native::Flow::Record
        class Exporter; //type: Native::Flow::Exporter
        class Monitor; //type: Native::Flow::Monitor

        ydk::YList record;
        ydk::YList exporter;
        ydk::YList monitor;
        
}; // Native::Flow


class Native::Flow::Record : public ydk::Entity
{
    public:
        Record();
        ~Record();

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

        ydk::YLeaf name; //type: string
        ydk::YLeaf type; //type: Type
        ydk::YLeaf description; //type: string
        class Collect; //type: Native::Flow::Record::Collect
        class Default; //type: Native::Flow::Record::Default
        class Match; //type: Native::Flow::Record::Match

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Collect> collect;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Default> default_;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Match> match;
                class Type;

}; // Native::Flow::Record


class Native::Flow::Record::Collect : public ydk::Entity
{
    public:
        Collect();
        ~Collect();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Application; //type: Native::Flow::Record::Collect::Application
        class Connection; //type: Native::Flow::Record::Collect::Connection
        class Counter; //type: Native::Flow::Record::Collect::Counter
        class Datalink; //type: Native::Flow::Record::Collect::Datalink
        class Flow_; //type: Native::Flow::Record::Collect::Flow_
        class Interface; //type: Native::Flow::Record::Collect::Interface
        class Ipv4; //type: Native::Flow::Record::Collect::Ipv4
        class Ipv6; //type: Native::Flow::Record::Collect::Ipv6
        class Metadata; //type: Native::Flow::Record::Collect::Metadata
        class Monitor; //type: Native::Flow::Record::Collect::Monitor
        class Mpls; //type: Native::Flow::Record::Collect::Mpls
        class Network; //type: Native::Flow::Record::Collect::Network
        class Pfr; //type: Native::Flow::Record::Collect::Pfr
        class Policy; //type: Native::Flow::Record::Collect::Policy
        class Routing; //type: Native::Flow::Record::Collect::Routing
        class Services; //type: Native::Flow::Record::Collect::Services
        class Timestamp; //type: Native::Flow::Record::Collect::Timestamp
        class Transport; //type: Native::Flow::Record::Collect::Transport

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Collect::Application> application;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Collect::Connection> connection;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Collect::Counter> counter;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Collect::Datalink> datalink;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Collect::Flow_> flow;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Collect::Interface> interface;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Collect::Ipv4> ipv4;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Collect::Ipv6> ipv6;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Collect::Metadata> metadata;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Collect::Monitor> monitor;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Collect::Mpls> mpls;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Collect::Network> network;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Collect::Pfr> pfr;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Collect::Policy> policy;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Collect::Routing> routing;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Collect::Services> services;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Collect::Timestamp> timestamp;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Collect::Transport> transport;
        
}; // Native::Flow::Record::Collect


class Native::Flow::Record::Collect::Application : public ydk::Entity
{
    public:
        Application();
        ~Application();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf vendor; //type: empty
        ydk::YLeaf version; //type: empty
        class Dns; //type: Native::Flow::Record::Collect::Application::Dns
        class Http; //type: Native::Flow::Record::Collect::Application::Http
        class Media; //type: Native::Flow::Record::Collect::Application::Media
        class Name; //type: Native::Flow::Record::Collect::Application::Name
        class Nntp; //type: Native::Flow::Record::Collect::Application::Nntp
        class Pop3; //type: Native::Flow::Record::Collect::Application::Pop3
        class Rtmp; //type: Native::Flow::Record::Collect::Application::Rtmp
        class Rtsp; //type: Native::Flow::Record::Collect::Application::Rtsp
        class Sip; //type: Native::Flow::Record::Collect::Application::Sip
        class Smtp; //type: Native::Flow::Record::Collect::Application::Smtp
        class Ssl; //type: Native::Flow::Record::Collect::Application::Ssl

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Collect::Application::Dns> dns;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Collect::Application::Http> http;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Collect::Application::Media> media;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Collect::Application::Name> name; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Collect::Application::Nntp> nntp;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Collect::Application::Pop3> pop3;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Collect::Application::Rtmp> rtmp;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Collect::Application::Rtsp> rtsp;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Collect::Application::Sip> sip;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Collect::Application::Smtp> smtp;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Collect::Application::Ssl> ssl;
        
}; // Native::Flow::Record::Collect::Application


class Native::Flow::Record::Collect::Application::Dns : public ydk::Entity
{
    public:
        Dns();
        ~Dns();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf domain_name; //type: empty

}; // Native::Flow::Record::Collect::Application::Dns


class Native::Flow::Record::Collect::Application::Http : public ydk::Entity
{
    public:
        Http();
        ~Http();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf host; //type: empty
        ydk::YLeaf referer; //type: empty
        ydk::YLeaf url; //type: empty
        ydk::YLeaf user_agent; //type: empty
        class Uri; //type: Native::Flow::Record::Collect::Application::Http::Uri

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Collect::Application::Http::Uri> uri;
        
}; // Native::Flow::Record::Collect::Application::Http


class Native::Flow::Record::Collect::Application::Http::Uri : public ydk::Entity
{
    public:
        Uri();
        ~Uri();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf statistics; //type: empty

}; // Native::Flow::Record::Collect::Application::Http::Uri


class Native::Flow::Record::Collect::Application::Media : public ydk::Entity
{
    public:
        Media();
        ~Media();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf event; //type: empty
        class Bytes; //type: Native::Flow::Record::Collect::Application::Media::Bytes
        class Packets; //type: Native::Flow::Record::Collect::Application::Media::Packets

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Collect::Application::Media::Bytes> bytes;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Collect::Application::Media::Packets> packets;
        
}; // Native::Flow::Record::Collect::Application::Media


class Native::Flow::Record::Collect::Application::Media::Bytes : public ydk::Entity
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

        class Counter; //type: Native::Flow::Record::Collect::Application::Media::Bytes::Counter
        class Rate; //type: Native::Flow::Record::Collect::Application::Media::Bytes::Rate

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Collect::Application::Media::Bytes::Counter> counter; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Collect::Application::Media::Bytes::Rate> rate; // presence node
        
}; // Native::Flow::Record::Collect::Application::Media::Bytes


class Native::Flow::Record::Collect::Application::Media::Bytes::Counter : public ydk::Entity
{
    public:
        Counter();
        ~Counter();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf long_; //type: empty

}; // Native::Flow::Record::Collect::Application::Media::Bytes::Counter


class Native::Flow::Record::Collect::Application::Media::Bytes::Rate : public ydk::Entity
{
    public:
        Rate();
        ~Rate();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PerFlow; //type: Native::Flow::Record::Collect::Application::Media::Bytes::Rate::PerFlow

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Collect::Application::Media::Bytes::Rate::PerFlow> per_flow; // presence node
        
}; // Native::Flow::Record::Collect::Application::Media::Bytes::Rate


class Native::Flow::Record::Collect::Application::Media::Bytes::Rate::PerFlow : public ydk::Entity
{
    public:
        PerFlow();
        ~PerFlow();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf max; //type: empty
        ydk::YLeaf min; //type: empty

}; // Native::Flow::Record::Collect::Application::Media::Bytes::Rate::PerFlow


class Native::Flow::Record::Collect::Application::Media::Packets : public ydk::Entity
{
    public:
        Packets();
        ~Packets();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Counter; //type: Native::Flow::Record::Collect::Application::Media::Packets::Counter
        class Rate; //type: Native::Flow::Record::Collect::Application::Media::Packets::Rate

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Collect::Application::Media::Packets::Counter> counter; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Collect::Application::Media::Packets::Rate> rate; // presence node
        
}; // Native::Flow::Record::Collect::Application::Media::Packets


class Native::Flow::Record::Collect::Application::Media::Packets::Counter : public ydk::Entity
{
    public:
        Counter();
        ~Counter();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf long_; //type: empty

}; // Native::Flow::Record::Collect::Application::Media::Packets::Counter


class Native::Flow::Record::Collect::Application::Media::Packets::Rate : public ydk::Entity
{
    public:
        Rate();
        ~Rate();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Variation; //type: Native::Flow::Record::Collect::Application::Media::Packets::Rate::Variation

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Collect::Application::Media::Packets::Rate::Variation> variation; // presence node
        
}; // Native::Flow::Record::Collect::Application::Media::Packets::Rate


class Native::Flow::Record::Collect::Application::Media::Packets::Rate::Variation : public ydk::Entity
{
    public:
        Variation();
        ~Variation();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf max; //type: empty
        ydk::YLeaf min; //type: empty
        ydk::YLeaf sum; //type: empty

}; // Native::Flow::Record::Collect::Application::Media::Packets::Rate::Variation


class Native::Flow::Record::Collect::Application::Name : public ydk::Entity
{
    public:
        Name();
        ~Name();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf account_on_resolution; //type: empty

}; // Native::Flow::Record::Collect::Application::Name


class Native::Flow::Record::Collect::Application::Nntp : public ydk::Entity
{
    public:
        Nntp();
        ~Nntp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf group_name; //type: empty

}; // Native::Flow::Record::Collect::Application::Nntp


class Native::Flow::Record::Collect::Application::Pop3 : public ydk::Entity
{
    public:
        Pop3();
        ~Pop3();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf server; //type: empty

}; // Native::Flow::Record::Collect::Application::Pop3


class Native::Flow::Record::Collect::Application::Rtmp : public ydk::Entity
{
    public:
        Rtmp();
        ~Rtmp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf pageurl; //type: empty

}; // Native::Flow::Record::Collect::Application::Rtmp


class Native::Flow::Record::Collect::Application::Rtsp : public ydk::Entity
{
    public:
        Rtsp();
        ~Rtsp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf host; //type: empty

}; // Native::Flow::Record::Collect::Application::Rtsp


class Native::Flow::Record::Collect::Application::Sip : public ydk::Entity
{
    public:
        Sip();
        ~Sip();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf destination; //type: empty
        ydk::YLeaf source; //type: empty

}; // Native::Flow::Record::Collect::Application::Sip


class Native::Flow::Record::Collect::Application::Smtp : public ydk::Entity
{
    public:
        Smtp();
        ~Smtp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf sender; //type: empty
        ydk::YLeaf server; //type: empty

}; // Native::Flow::Record::Collect::Application::Smtp


class Native::Flow::Record::Collect::Application::Ssl : public ydk::Entity
{
    public:
        Ssl();
        ~Ssl();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf common_name; //type: empty

}; // Native::Flow::Record::Collect::Application::Ssl


class Native::Flow::Record::Collect::Connection : public ydk::Entity
{
    public:
        Connection();
        ~Connection();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf id; //type: empty
        ydk::YLeaf initiator; //type: empty
        ydk::YLeaf new_connections; //type: empty
        ydk::YLeaf sum_duration; //type: empty
        ydk::YLeaf transaction_id; //type: empty
        class Client; //type: Native::Flow::Record::Collect::Connection::Client
        class Delay; //type: Native::Flow::Record::Collect::Connection::Delay
        class Server; //type: Native::Flow::Record::Collect::Connection::Server
        class Transaction; //type: Native::Flow::Record::Collect::Connection::Transaction

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Collect::Connection::Client> client;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Collect::Connection::Delay> delay;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Collect::Connection::Server> server;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Collect::Connection::Transaction> transaction;
        
}; // Native::Flow::Record::Collect::Connection


class Native::Flow::Record::Collect::Connection::Client : public ydk::Entity
{
    public:
        Client();
        ~Client();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf all; //type: empty
        class Counter; //type: Native::Flow::Record::Collect::Connection::Client::Counter
        class Ipv4; //type: Native::Flow::Record::Collect::Connection::Client::Ipv4
        class Ipv6; //type: Native::Flow::Record::Collect::Connection::Client::Ipv6
        class Transport; //type: Native::Flow::Record::Collect::Connection::Client::Transport

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Collect::Connection::Client::Counter> counter;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Collect::Connection::Client::Ipv4> ipv4;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Collect::Connection::Client::Ipv6> ipv6;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Collect::Connection::Client::Transport> transport;
        
}; // Native::Flow::Record::Collect::Connection::Client


class Native::Flow::Record::Collect::Connection::Client::Counter : public ydk::Entity
{
    public:
        Counter();
        ~Counter();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Bytes; //type: Native::Flow::Record::Collect::Connection::Client::Counter::Bytes
        class Packets; //type: Native::Flow::Record::Collect::Connection::Client::Counter::Packets

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Collect::Connection::Client::Counter::Bytes> bytes;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Collect::Connection::Client::Counter::Packets> packets;
        
}; // Native::Flow::Record::Collect::Connection::Client::Counter


class Native::Flow::Record::Collect::Connection::Client::Counter::Bytes : public ydk::Entity
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

        ydk::YLeaf long_; //type: empty
        ydk::YLeaf retransmitted; //type: empty
        class Network; //type: Native::Flow::Record::Collect::Connection::Client::Counter::Bytes::Network
        class Transport; //type: Native::Flow::Record::Collect::Connection::Client::Counter::Bytes::Transport

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Collect::Connection::Client::Counter::Bytes::Network> network;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Flow::Record::Collect::Connection::Client::Counter::Bytes::Transport> transport;
        
}; // Native::Flow::Record::Collect::Connection::Client::Counter::Bytes


class Native::Flow::Record::Collect::Connection::Client::Counter::Bytes::Network : public ydk::Entity
{
    public:
        Network();
        ~Network();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf long_; //type: empty

}; // Native::Flow::Record::Collect::Connection::Client::Counter::Bytes::Network


class Native::Flow::Record::Collect::Connection::Client::Counter::Bytes::Transport : public ydk::Entity
{
    public:
        Transport();
        ~Transport();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf long_; //type: empty

}; // Native::Flow::Record::Collect::Connection::Client::Counter::Bytes::Transport


class Native::Flow::Record::Collect::Connection::Client::Counter::Packets : public ydk::Entity
{
    public:
        Packets();
        ~Packets();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf long_; //type: empty
        ydk::YLeaf retransmitted; //type: empty

}; // Native::Flow::Record::Collect::Connection::Client::Counter::Packets


class Native::Flow::Record::Collect::Connection::Client::Ipv4 : public ydk::Entity
{
    public:
        Ipv4();
        ~Ipv4();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address; //type: empty

}; // Native::Flow::Record::Collect::Connection::Client::Ipv4


class Native::Flow::Record::Collect::Connection::Client::Ipv6 : public ydk::Entity
{
    public:
        Ipv6();
        ~Ipv6();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address; //type: empty

}; // Native::Flow::Record::Collect::Connection::Client::Ipv6

class Native::Controller::SONET::Au4::FramingUnframed::Tug2::Framing : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unframed;

};

class Native::Controller::SONETACR::Framing : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf sonet;
        static const ydk::Enum::YLeaf sdh;

};

class Native::Controller::SONETACR::Clock::Source : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf internal;
        static const ydk::Enum::YLeaf line;

};

class Native::Controller::SONETACR::Aug::Mapping : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf au_3;
        static const ydk::Enum::YLeaf au_4;

};

class Native::Controller::SONETACR::Au3::Overhead::Byte : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf j1;

};

class Native::Controller::SONETACR::Au3::Mode::Mapping : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf c_11;
        static const ydk::Enum::YLeaf c_12;
        static const ydk::Enum::YLeaf c_2;

};

class Native::Controller::SONETACR::Au4::Mode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf c_11;
        static const ydk::Enum::YLeaf c_12;
        static const ydk::Enum::YLeaf c_2;
        static const ydk::Enum::YLeaf c_3;
        static const ydk::Enum::YLeaf c_4;
        static const ydk::Enum::YLeaf e3;

};

class Native::Controller::SONETACR::Au4::Framing : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unframed;

};

class Native::Controller::SONETACR::Au4::FramingUnframed::Tug2::Framing : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unframed;

};

class Native::Controller::Vdsl::Diagnostics : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf DELT;

};

class Native::Controller::Vdsl::LineMode::SingleWire::Line::One::Profile : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_30a;

};

class Native::Controller::Vdsl::Operating::Mode::Adsl2::Annex : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf A;
        static const ydk::Enum::YLeaf M;

};

class Native::Controller::Vdsl::Operating::Mode::Adsl2plus::Annex : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf A;
        static const ydk::Enum::YLeaf M;

};

class Native::Vrf::Definition::AddressFamily::Ipv4::Mdt::Preference : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf mldp;
        static const ydk::Enum::YLeaf pim;

};

class Native::Rmon::Alarm::TestMode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf absolute;
        static const ydk::Enum::YLeaf delta;

};

class Native::Flow::Record::Type : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf performance_monitor;

};


}
}

#endif /* _CISCO_IOS_XE_NATIVE_2_ */

