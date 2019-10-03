#ifndef _CISCO_IOS_XE_NATIVE_130_
#define _CISCO_IOS_XE_NATIVE_130_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XE_native_0.hpp"
#include "Cisco_IOS_XE_native_129.hpp"

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_native {


class Native::Cts::CriticalAuthentication::Default : public ydk::Entity
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
        std::string get_absolute_path() const override;

        class PeerSgt; //type: Native::Cts::CriticalAuthentication::Default::PeerSgt
        class Pmk; //type: Native::Cts::CriticalAuthentication::Default::Pmk

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Cts::CriticalAuthentication::Default::PeerSgt> peer_sgt;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Cts::CriticalAuthentication::Default::Pmk> pmk;
        
}; // Native::Cts::CriticalAuthentication::Default


class Native::Cts::CriticalAuthentication::Default::PeerSgt : public ydk::Entity
{
    public:
        PeerSgt();
        ~PeerSgt();

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

        class Range; //type: Native::Cts::CriticalAuthentication::Default::PeerSgt::Range

        ydk::YList range;
        
}; // Native::Cts::CriticalAuthentication::Default::PeerSgt


class Native::Cts::CriticalAuthentication::Default::PeerSgt::Range : public ydk::Entity
{
    public:
        Range();
        ~Range();

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

        ydk::YLeaf range; //type: uint16
        ydk::YLeaf trusted; //type: empty

}; // Native::Cts::CriticalAuthentication::Default::PeerSgt::Range


class Native::Cts::CriticalAuthentication::Default::Pmk : public ydk::Entity
{
    public:
        Pmk();
        ~Pmk();

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

        ydk::YLeaf type; //type: Type
        ydk::YLeaf secret; //type: string
        class Type;

}; // Native::Cts::CriticalAuthentication::Default::Pmk


class Native::Cts::CriticalAuthentication::Fallback : public ydk::Entity
{
    public:
        Fallback();
        ~Fallback();

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

        ydk::YLeaf cached; //type: empty
        ydk::YLeaf default_; //type: empty

}; // Native::Cts::CriticalAuthentication::Fallback


class Native::Cts::Authorization : public ydk::Entity
{
    public:
        Authorization();
        ~Authorization();

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

        ydk::YLeaf list; //type: string

}; // Native::Cts::Authorization


class Native::Cts::RoleBased : public ydk::Entity
{
    public:
        RoleBased();
        ~RoleBased();

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

        ydk::YLeaf sgt_caching; //type: empty
        class Permissions; //type: Native::Cts::RoleBased::Permissions
        class EnforcementOnly; //type: Native::Cts::RoleBased::EnforcementOnly
        class Enforcement; //type: Native::Cts::RoleBased::Enforcement
        class Monitor; //type: Native::Cts::RoleBased::Monitor
        class SgtMap; //type: Native::Cts::RoleBased::SgtMap
        class SgtMapVlanList; //type: Native::Cts::RoleBased::SgtMapVlanList

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Cts::RoleBased::Permissions> permissions;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Cts::RoleBased::EnforcementOnly> enforcement_only;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Cts::RoleBased::Enforcement> enforcement;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Cts::RoleBased::Monitor> monitor;
        ydk::YList sgt_map;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Cts::RoleBased::SgtMapVlanList> sgt_map_vlan_list;
        
}; // Native::Cts::RoleBased


class Native::Cts::RoleBased::Permissions : public ydk::Entity
{
    public:
        Permissions();
        ~Permissions();

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

        class Default; //type: Native::Cts::RoleBased::Permissions::Default
        class From; //type: Native::Cts::RoleBased::Permissions::From

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Cts::RoleBased::Permissions::Default> default_;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Cts::RoleBased::Permissions::From> from;
        
}; // Native::Cts::RoleBased::Permissions


class Native::Cts::RoleBased::Permissions::Default : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf name; //type: string

}; // Native::Cts::RoleBased::Permissions::Default


class Native::Cts::RoleBased::Permissions::From : public ydk::Entity
{
    public:
        From();
        ~From();

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

        class Range; //type: Native::Cts::RoleBased::Permissions::From::Range

        ydk::YList range;
        
}; // Native::Cts::RoleBased::Permissions::From


class Native::Cts::RoleBased::Permissions::From::Range : public ydk::Entity
{
    public:
        Range();
        ~Range();

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

        ydk::YLeaf range; //type: uint16
        class To; //type: Native::Cts::RoleBased::Permissions::From::Range::To

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Cts::RoleBased::Permissions::From::Range::To> to;
        
}; // Native::Cts::RoleBased::Permissions::From::Range


class Native::Cts::RoleBased::Permissions::From::Range::To : public ydk::Entity
{
    public:
        To();
        ~To();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Range_; //type: Native::Cts::RoleBased::Permissions::From::Range::To::Range_

        ydk::YList range;
        
}; // Native::Cts::RoleBased::Permissions::From::Range::To


class Native::Cts::RoleBased::Permissions::From::Range::To::Range_ : public ydk::Entity
{
    public:
        Range_();
        ~Range_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf range; //type: uint16
        ydk::YLeaf name; //type: string

}; // Native::Cts::RoleBased::Permissions::From::Range::To::Range_


class Native::Cts::RoleBased::EnforcementOnly : public ydk::Entity
{
    public:
        EnforcementOnly();
        ~EnforcementOnly();

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

        ydk::YLeaf enforcement; //type: empty

}; // Native::Cts::RoleBased::EnforcementOnly


class Native::Cts::RoleBased::Enforcement : public ydk::Entity
{
    public:
        Enforcement();
        ~Enforcement();

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

        ydk::YLeaf logging_interval; //type: uint32
        class VlanList; //type: Native::Cts::RoleBased::Enforcement::VlanList

        ydk::YList vlan_list;
        
}; // Native::Cts::RoleBased::Enforcement


class Native::Cts::RoleBased::Enforcement::VlanList : public ydk::Entity
{
    public:
        VlanList();
        ~VlanList();

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

        ydk::YLeaf id; //type: one of string, enumeration
        class Id;

}; // Native::Cts::RoleBased::Enforcement::VlanList


class Native::Cts::RoleBased::Monitor : public ydk::Entity
{
    public:
        Monitor();
        ~Monitor();

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

        ydk::YLeaf all; //type: empty

}; // Native::Cts::RoleBased::Monitor


class Native::Cts::RoleBased::SgtMap : public ydk::Entity
{
    public:
        SgtMap();
        ~SgtMap();

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

        ydk::YLeaf ip; //type: string
        ydk::YLeaf sgt; //type: uint16
        ydk::YLeaf vrf; //type: string
        ydk::YLeaf host; //type: empty

}; // Native::Cts::RoleBased::SgtMap


class Native::Cts::RoleBased::SgtMapVlanList : public ydk::Entity
{
    public:
        SgtMapVlanList();
        ~SgtMapVlanList();

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

        class SgtMap; //type: Native::Cts::RoleBased::SgtMapVlanList::SgtMap

        ydk::YList sgt_map;
        
}; // Native::Cts::RoleBased::SgtMapVlanList


class Native::Cts::RoleBased::SgtMapVlanList::SgtMap : public ydk::Entity
{
    public:
        SgtMap();
        ~SgtMap();

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

        ydk::YLeaf vlan_list; //type: one of string, enumeration
        ydk::YLeaf sgt; //type: int16
        class VlanList;

}; // Native::Cts::RoleBased::SgtMapVlanList::SgtMap


class Native::Cts::Server : public ydk::Entity
{
    public:
        Server();
        ~Server();

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

        ydk::YLeaf deadtime; //type: uint32
        class KeyWrap; //type: Native::Cts::Server::KeyWrap
        class LoadBalance; //type: Native::Cts::Server::LoadBalance
        class Test; //type: Native::Cts::Server::Test

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Cts::Server::KeyWrap> key_wrap;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Cts::Server::LoadBalance> load_balance;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Cts::Server::Test> test;
        
}; // Native::Cts::Server


class Native::Cts::Server::KeyWrap : public ydk::Entity
{
    public:
        KeyWrap();
        ~KeyWrap();

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

        ydk::YLeaf enable; //type: empty

}; // Native::Cts::Server::KeyWrap


class Native::Cts::Server::LoadBalance : public ydk::Entity
{
    public:
        LoadBalance();
        ~LoadBalance();

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

        class Method; //type: Native::Cts::Server::LoadBalance::Method

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Cts::Server::LoadBalance::Method> method;
        
}; // Native::Cts::Server::LoadBalance


class Native::Cts::Server::LoadBalance::Method : public ydk::Entity
{
    public:
        Method();
        ~Method();

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

        class LeastOutstanding; //type: Native::Cts::Server::LoadBalance::Method::LeastOutstanding

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Cts::Server::LoadBalance::Method::LeastOutstanding> least_outstanding; // presence node
        
}; // Native::Cts::Server::LoadBalance::Method


class Native::Cts::Server::LoadBalance::Method::LeastOutstanding : public ydk::Entity
{
    public:
        LeastOutstanding();
        ~LeastOutstanding();

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

        ydk::YLeaf batch_size; //type: uint32
        ydk::YLeaf ignore_preferred_server; //type: empty

}; // Native::Cts::Server::LoadBalance::Method::LeastOutstanding


class Native::Cts::Server::Test : public ydk::Entity
{
    public:
        Test();
        ~Test();

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

        class Server_; //type: Native::Cts::Server::Test::Server_
        class All; //type: Native::Cts::Server::Test::All

        ydk::YList server;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Cts::Server::Test::All> all;
        
}; // Native::Cts::Server::Test


class Native::Cts::Server::Test::Server_ : public ydk::Entity
{
    public:
        Server_();
        ~Server_();

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

        ydk::YLeaf ip; //type: string
        ydk::YLeaf deadtime; //type: uint32
        ydk::YLeaf enable; //type: boolean
        ydk::YLeaf idle_time; //type: uint32

}; // Native::Cts::Server::Test::Server_


class Native::Cts::Server::Test::All : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf deadtime; //type: uint32
        ydk::YLeaf enable; //type: boolean
        ydk::YLeaf idle_time; //type: uint32

}; // Native::Cts::Server::Test::All


class Native::Cts::Sxp : public ydk::Entity
{
    public:
        Sxp();
        ~Sxp();

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

        ydk::YLeaf enable; //type: empty
        class Default; //type: Native::Cts::Sxp::Default
        class Connection; //type: Native::Cts::Sxp::Connection

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Cts::Sxp::Default> default_;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Cts::Sxp::Connection> connection;
        
}; // Native::Cts::Sxp


class Native::Cts::Sxp::Default : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf source_ip; //type: string
        class Password; //type: Native::Cts::Sxp::Default::Password

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Cts::Sxp::Default::Password> password;
        
}; // Native::Cts::Sxp::Default


class Native::Cts::Sxp::Default::Password : public ydk::Entity
{
    public:
        Password();
        ~Password();

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

        ydk::YLeaf type; //type: Type
        ydk::YLeaf secret; //type: string
        class Type;

}; // Native::Cts::Sxp::Default::Password


class Native::Cts::Sxp::Connection : public ydk::Entity
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
        std::string get_absolute_path() const override;

        class Peer; //type: Native::Cts::Sxp::Connection::Peer

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Cts::Sxp::Connection::Peer> peer;
        
}; // Native::Cts::Sxp::Connection


class Native::Cts::Sxp::Connection::Peer : public ydk::Entity
{
    public:
        Peer();
        ~Peer();

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

        class Ipv4; //type: Native::Cts::Sxp::Connection::Peer::Ipv4

        ydk::YList ipv4;
        
}; // Native::Cts::Sxp::Connection::Peer


class Native::Cts::Sxp::Connection::Peer::Ipv4 : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf ipv4; //type: string
        class Source; //type: Native::Cts::Sxp::Connection::Peer::Ipv4::Source
        class Password; //type: Native::Cts::Sxp::Connection::Peer::Ipv4::Password

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Cts::Sxp::Connection::Peer::Ipv4::Source> source;
        ydk::YList password;
        
}; // Native::Cts::Sxp::Connection::Peer::Ipv4


class Native::Cts::Sxp::Connection::Peer::Ipv4::Source : public ydk::Entity
{
    public:
        Source();
        ~Source();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Ipv4_; //type: Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_

        ydk::YList ipv4;
        
}; // Native::Cts::Sxp::Connection::Peer::Ipv4::Source


class Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_ : public ydk::Entity
{
    public:
        Ipv4_();
        ~Ipv4_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ipv4; //type: string
        class Password; //type: Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password

        ydk::YList password;
        
}; // Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_


class Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password : public ydk::Entity
{
    public:
        Password();
        ~Password();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf password_type; //type: PasswordType
        class Mode; //type: Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode> mode;
                class PasswordType;

}; // Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password


class Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode : public ydk::Entity
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

        class Local; //type: Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Local
        class Peer_; //type: Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Peer_

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Local> local; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Peer_> peer; // presence node
        
}; // Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode


class Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Local : public ydk::Entity
{
    public:
        Local();
        ~Local();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Both; //type: Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Local::Both
        class Listener; //type: Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Local::Listener
        class Speaker; //type: Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Local::Speaker

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Local::Both> both; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Local::Listener> listener; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Local::Speaker> speaker; // presence node
        
}; // Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Local


class Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Local::Both : public ydk::Entity
{
    public:
        Both();
        ~Both();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf vrf; //type: string

}; // Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Local::Both


class Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Local::Listener : public ydk::Entity
{
    public:
        Listener();
        ~Listener();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf vrf; //type: string
        class HoldTime; //type: Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Local::Listener::HoldTime

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Local::Listener::HoldTime> hold_time;
        
}; // Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Local::Listener


class Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Local::Listener::HoldTime : public ydk::Entity
{
    public:
        HoldTime();
        ~HoldTime();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf min_time; //type: uint16
        ydk::YLeaf max_time; //type: uint16
        ydk::YLeaf vrf; //type: string

}; // Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Local::Listener::HoldTime


class Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Local::Speaker : public ydk::Entity
{
    public:
        Speaker();
        ~Speaker();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf vrf; //type: string
        class HoldTime; //type: Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Local::Speaker::HoldTime

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Local::Speaker::HoldTime> hold_time;
        
}; // Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Local::Speaker


class Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Local::Speaker::HoldTime : public ydk::Entity
{
    public:
        HoldTime();
        ~HoldTime();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf min_time; //type: uint16
        ydk::YLeaf vrf; //type: string

}; // Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Local::Speaker::HoldTime


class Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Peer_ : public ydk::Entity
{
    public:
        Peer_();
        ~Peer_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Both; //type: Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Peer_::Both
        class Listener; //type: Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Peer_::Listener
        class Speaker; //type: Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Peer_::Speaker

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Peer_::Both> both; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Peer_::Listener> listener; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Peer_::Speaker> speaker; // presence node
        
}; // Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Peer_


class Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Peer_::Both : public ydk::Entity
{
    public:
        Both();
        ~Both();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf vrf; //type: string

}; // Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Peer_::Both


class Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Peer_::Listener : public ydk::Entity
{
    public:
        Listener();
        ~Listener();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf vrf; //type: string
        class HoldTime; //type: Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Peer_::Listener::HoldTime

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Peer_::Listener::HoldTime> hold_time;
        
}; // Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Peer_::Listener


class Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Peer_::Listener::HoldTime : public ydk::Entity
{
    public:
        HoldTime();
        ~HoldTime();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf min_time; //type: uint16
        ydk::YLeaf vrf; //type: string

}; // Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Peer_::Listener::HoldTime


class Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Peer_::Speaker : public ydk::Entity
{
    public:
        Speaker();
        ~Speaker();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf vrf; //type: string
        class HoldTime; //type: Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Peer_::Speaker::HoldTime

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Peer_::Speaker::HoldTime> hold_time;
        
}; // Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Peer_::Speaker


class Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Peer_::Speaker::HoldTime : public ydk::Entity
{
    public:
        HoldTime();
        ~HoldTime();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf min_time; //type: uint16
        ydk::YLeaf max_time; //type: uint16
        ydk::YLeaf vrf; //type: string

}; // Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::Mode::Peer_::Speaker::HoldTime


class Native::Cts::Sxp::Connection::Peer::Ipv4::Password : public ydk::Entity
{
    public:
        Password();
        ~Password();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf password_type; //type: PasswordType
        class Mode; //type: Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode> mode;
                class PasswordType;

}; // Native::Cts::Sxp::Connection::Peer::Ipv4::Password


class Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode : public ydk::Entity
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

        class Local; //type: Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Local
        class Peer_; //type: Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Peer_

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Local> local; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Peer_> peer; // presence node
        
}; // Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode


class Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Local : public ydk::Entity
{
    public:
        Local();
        ~Local();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Both; //type: Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Local::Both
        class Listener; //type: Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Local::Listener
        class Speaker; //type: Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Local::Speaker

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Local::Both> both; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Local::Listener> listener; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Local::Speaker> speaker; // presence node
        
}; // Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Local


class Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Local::Both : public ydk::Entity
{
    public:
        Both();
        ~Both();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf vrf; //type: string

}; // Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Local::Both


class Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Local::Listener : public ydk::Entity
{
    public:
        Listener();
        ~Listener();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf vrf; //type: string
        class HoldTime; //type: Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Local::Listener::HoldTime

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Local::Listener::HoldTime> hold_time;
        
}; // Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Local::Listener


class Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Local::Listener::HoldTime : public ydk::Entity
{
    public:
        HoldTime();
        ~HoldTime();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf min_time; //type: uint16
        ydk::YLeaf max_time; //type: uint16
        ydk::YLeaf vrf; //type: string

}; // Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Local::Listener::HoldTime


class Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Local::Speaker : public ydk::Entity
{
    public:
        Speaker();
        ~Speaker();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf vrf; //type: string
        class HoldTime; //type: Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Local::Speaker::HoldTime

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Local::Speaker::HoldTime> hold_time;
        
}; // Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Local::Speaker


class Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Local::Speaker::HoldTime : public ydk::Entity
{
    public:
        HoldTime();
        ~HoldTime();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf min_time; //type: uint16
        ydk::YLeaf vrf; //type: string

}; // Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Local::Speaker::HoldTime


class Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Peer_ : public ydk::Entity
{
    public:
        Peer_();
        ~Peer_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Both; //type: Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Peer_::Both
        class Listener; //type: Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Peer_::Listener
        class Speaker; //type: Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Peer_::Speaker

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Peer_::Both> both; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Peer_::Listener> listener; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Peer_::Speaker> speaker; // presence node
        
}; // Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Peer_


class Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Peer_::Both : public ydk::Entity
{
    public:
        Both();
        ~Both();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf vrf; //type: string

}; // Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Peer_::Both


class Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Peer_::Listener : public ydk::Entity
{
    public:
        Listener();
        ~Listener();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf vrf; //type: string
        class HoldTime; //type: Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Peer_::Listener::HoldTime

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Peer_::Listener::HoldTime> hold_time;
        
}; // Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Peer_::Listener


class Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Peer_::Listener::HoldTime : public ydk::Entity
{
    public:
        HoldTime();
        ~HoldTime();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf min_time; //type: uint16
        ydk::YLeaf vrf; //type: string

}; // Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Peer_::Listener::HoldTime


class Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Peer_::Speaker : public ydk::Entity
{
    public:
        Speaker();
        ~Speaker();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf vrf; //type: string
        class HoldTime; //type: Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Peer_::Speaker::HoldTime

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Peer_::Speaker::HoldTime> hold_time;
        
}; // Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Peer_::Speaker


class Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Peer_::Speaker::HoldTime : public ydk::Entity
{
    public:
        HoldTime();
        ~HoldTime();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf min_time; //type: uint16
        ydk::YLeaf max_time; //type: uint16
        ydk::YLeaf vrf; //type: string

}; // Native::Cts::Sxp::Connection::Peer::Ipv4::Password::Mode::Peer_::Speaker::HoldTime


class Native::BfdTemplate : public ydk::Entity
{
    public:
        BfdTemplate();
        ~BfdTemplate();

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

        class SingleHop; //type: Native::BfdTemplate::SingleHop
        class MultiHop; //type: Native::BfdTemplate::MultiHop

        ydk::YList single_hop;
        ydk::YList multi_hop;
        
}; // Native::BfdTemplate


class Native::BfdTemplate::SingleHop : public ydk::Entity
{
    public:
        SingleHop();
        ~SingleHop();

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
        class Interval; //type: Native::BfdTemplate::SingleHop::Interval

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::BfdTemplate::SingleHop::Interval> interval;
        
}; // Native::BfdTemplate::SingleHop


class Native::BfdTemplate::SingleHop::Interval : public ydk::Entity
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

        ydk::YLeaf microseconds; //type: empty
        ydk::YLeaf both; //type: uint32
        ydk::YLeaf min_tx; //type: uint32
        ydk::YLeaf min_rx; //type: uint32
        ydk::YLeaf multiplier; //type: uint8

}; // Native::BfdTemplate::SingleHop::Interval


class Native::BfdTemplate::MultiHop : public ydk::Entity
{
    public:
        MultiHop();
        ~MultiHop();

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
        class Interval; //type: Native::BfdTemplate::MultiHop::Interval

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::BfdTemplate::MultiHop::Interval> interval;
        
}; // Native::BfdTemplate::MultiHop


class Native::BfdTemplate::MultiHop::Interval : public ydk::Entity
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

        ydk::YLeaf microseconds; //type: empty
        ydk::YLeaf both; //type: uint32
        ydk::YLeaf min_tx; //type: uint32
        ydk::YLeaf min_rx; //type: uint32
        ydk::YLeaf multiplier; //type: uint8

}; // Native::BfdTemplate::MultiHop::Interval


class Native::Pfr : public ydk::Entity
{
    public:
        Pfr();
        ~Pfr();

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

        class Border; //type: Native::Pfr::Border
        class Master; //type: Native::Pfr::Master

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Pfr::Border> border; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Pfr::Master> master; // presence node
        
}; // Native::Pfr


class Native::Pfr::Border : public ydk::Entity
{
    public:
        Border();
        ~Border();

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

        class PfrModeConfigPfrBr; //type: Native::Pfr::Border::PfrModeConfigPfrBr

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Pfr::Border::PfrModeConfigPfrBr> pfr_mode__config_pfr_br;
        
}; // Native::Pfr::Border


class Native::Pfr::Border::PfrModeConfigPfrBr : public ydk::Entity
{
    public:
        PfrModeConfigPfrBr();
        ~PfrModeConfigPfrBr();

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

        ydk::YLeaf logging; //type: empty
        ydk::YLeaf port; //type: uint16
        ydk::YLeaf shutdown; //type: empty
        class ActiveProbe; //type: Native::Pfr::Border::PfrModeConfigPfrBr::ActiveProbe
        class Local; //type: Native::Pfr::Border::PfrModeConfigPfrBr::Local
        class Master; //type: Native::Pfr::Border::PfrModeConfigPfrBr::Master

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Pfr::Border::PfrModeConfigPfrBr::ActiveProbe> active_probe;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Pfr::Border::PfrModeConfigPfrBr::Local> local;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Pfr::Border::PfrModeConfigPfrBr::Master> master;
        
}; // Native::Pfr::Border::PfrModeConfigPfrBr


class Native::Pfr::Border::PfrModeConfigPfrBr::ActiveProbe : public ydk::Entity
{
    public:
        ActiveProbe();
        ~ActiveProbe();

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

        class Address; //type: Native::Pfr::Border::PfrModeConfigPfrBr::ActiveProbe::Address

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Pfr::Border::PfrModeConfigPfrBr::ActiveProbe::Address> address;
        
}; // Native::Pfr::Border::PfrModeConfigPfrBr::ActiveProbe


class Native::Pfr::Border::PfrModeConfigPfrBr::ActiveProbe::Address : public ydk::Entity
{
    public:
        Address();
        ~Address();

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

        class Source; //type: Native::Pfr::Border::PfrModeConfigPfrBr::ActiveProbe::Address::Source

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Pfr::Border::PfrModeConfigPfrBr::ActiveProbe::Address::Source> source;
        
}; // Native::Pfr::Border::PfrModeConfigPfrBr::ActiveProbe::Address


class Native::Pfr::Border::PfrModeConfigPfrBr::ActiveProbe::Address::Source : public ydk::Entity
{
    public:
        Source();
        ~Source();

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

        class Interface; //type: Native::Pfr::Border::PfrModeConfigPfrBr::ActiveProbe::Address::Source::Interface

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Pfr::Border::PfrModeConfigPfrBr::ActiveProbe::Address::Source::Interface> interface;
        
}; // Native::Pfr::Border::PfrModeConfigPfrBr::ActiveProbe::Address::Source


class Native::Pfr::Border::PfrModeConfigPfrBr::ActiveProbe::Address::Source::Interface : public ydk::Entity
{
    public:
        Interface();
        ~Interface();

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

        ydk::YLeaf appnav_compress; //type: uint16
        ydk::YLeaf appnav_uncompress; //type: uint16
        ydk::YLeaf atm; //type: string
        ydk::YLeaf atm_acr; //type: string
        ydk::YLeaf bdi; //type: string
        ydk::YLeaf cem; //type: string
        ydk::YLeaf cem_acr; //type: uint8
        ydk::YLeaf embedded_service_engine; //type: string
        ydk::YLeaf ethernet; //type: string
        ydk::YLeaf fastethernet; //type: string
        ydk::YLeaf gigabitethernet; //type: string
        ydk::YLeaf fivegigabitethernet; //type: string
        ydk::YLeaf twentyfivegige; //type: string
        ydk::YLeaf twogigabitethernet; //type: string
        ydk::YLeaf fortygigabitethernet; //type: string
        ydk::YLeaf hundredgige; //type: string
        ydk::YLeaf lisp; //type: string
        ydk::YLeaf loopback; //type: uint32
        ydk::YLeaf multilink; //type: uint16
        ydk::YLeaf nve; //type: uint16
        ydk::YLeaf overlay; //type: uint16
        ydk::YLeaf port_channel; //type: uint32
        ydk::YLeaf pseudowire; //type: uint32
        ydk::YLeaf sm; //type: string
        ydk::YLeaf cellular; //type: string
        ydk::YLeaf serial; //type: string
        ydk::YLeaf tengigabitethernet; //type: string
        ydk::YLeaf tunnel; //type: uint32
        ydk::YLeaf virtual_template; //type: uint16
        ydk::YLeaf vlan; //type: uint16
        ydk::YLeaf virtualportgroup; //type: uint16
        ydk::YLeaf vasileft; //type: uint16
        ydk::YLeaf vasiright; //type: uint16
        class ATMSubinterface; //type: Native::Pfr::Border::PfrModeConfigPfrBr::ActiveProbe::Address::Source::Interface::ATMSubinterface
        class ATMACRsubinterface; //type: Native::Pfr::Border::PfrModeConfigPfrBr::ActiveProbe::Address::Source::Interface::ATMACRsubinterface
        class LISPSubinterface; //type: Native::Pfr::Border::PfrModeConfigPfrBr::ActiveProbe::Address::Source::Interface::LISPSubinterface
        class PortChannelSubinterface; //type: Native::Pfr::Border::PfrModeConfigPfrBr::ActiveProbe::Address::Source::Interface::PortChannelSubinterface

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Pfr::Border::PfrModeConfigPfrBr::ActiveProbe::Address::Source::Interface::ATMSubinterface> atm_subinterface;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Pfr::Border::PfrModeConfigPfrBr::ActiveProbe::Address::Source::Interface::ATMACRsubinterface> atm_acrsubinterface;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Pfr::Border::PfrModeConfigPfrBr::ActiveProbe::Address::Source::Interface::LISPSubinterface> lisp_subinterface;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Pfr::Border::PfrModeConfigPfrBr::ActiveProbe::Address::Source::Interface::PortChannelSubinterface> port_channel_subinterface;
        
}; // Native::Pfr::Border::PfrModeConfigPfrBr::ActiveProbe::Address::Source::Interface


class Native::Pfr::Border::PfrModeConfigPfrBr::ActiveProbe::Address::Source::Interface::ATMSubinterface : public ydk::Entity
{
    public:
        ATMSubinterface();
        ~ATMSubinterface();

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

        ydk::YLeaf atm; //type: string

}; // Native::Pfr::Border::PfrModeConfigPfrBr::ActiveProbe::Address::Source::Interface::ATMSubinterface


class Native::Pfr::Border::PfrModeConfigPfrBr::ActiveProbe::Address::Source::Interface::ATMACRsubinterface : public ydk::Entity
{
    public:
        ATMACRsubinterface();
        ~ATMACRsubinterface();

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

        ydk::YLeaf atm_acr; //type: string

}; // Native::Pfr::Border::PfrModeConfigPfrBr::ActiveProbe::Address::Source::Interface::ATMACRsubinterface


class Native::Pfr::Border::PfrModeConfigPfrBr::ActiveProbe::Address::Source::Interface::LISPSubinterface : public ydk::Entity
{
    public:
        LISPSubinterface();
        ~LISPSubinterface();

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

        ydk::YLeaf lisp; //type: string

}; // Native::Pfr::Border::PfrModeConfigPfrBr::ActiveProbe::Address::Source::Interface::LISPSubinterface


class Native::Pfr::Border::PfrModeConfigPfrBr::ActiveProbe::Address::Source::Interface::PortChannelSubinterface : public ydk::Entity
{
    public:
        PortChannelSubinterface();
        ~PortChannelSubinterface();

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

        ydk::YLeaf port_channel; //type: string

}; // Native::Pfr::Border::PfrModeConfigPfrBr::ActiveProbe::Address::Source::Interface::PortChannelSubinterface


class Native::Pfr::Border::PfrModeConfigPfrBr::Local : public ydk::Entity
{
    public:
        Local();
        ~Local();

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

        class Interface; //type: Native::Pfr::Border::PfrModeConfigPfrBr::Local::Interface

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Pfr::Border::PfrModeConfigPfrBr::Local::Interface> interface;
        
}; // Native::Pfr::Border::PfrModeConfigPfrBr::Local


class Native::Pfr::Border::PfrModeConfigPfrBr::Local::Interface : public ydk::Entity
{
    public:
        Interface();
        ~Interface();

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

        ydk::YLeaf appnav_compress; //type: uint16
        ydk::YLeaf appnav_uncompress; //type: uint16
        ydk::YLeaf atm; //type: string
        ydk::YLeaf atm_acr; //type: string
        ydk::YLeaf bdi; //type: string
        ydk::YLeaf cem; //type: string
        ydk::YLeaf cem_acr; //type: uint8
        ydk::YLeaf embedded_service_engine; //type: string
        ydk::YLeaf ethernet; //type: string
        ydk::YLeaf fastethernet; //type: string
        ydk::YLeaf gigabitethernet; //type: string
        ydk::YLeaf fivegigabitethernet; //type: string
        ydk::YLeaf twentyfivegige; //type: string
        ydk::YLeaf twogigabitethernet; //type: string
        ydk::YLeaf fortygigabitethernet; //type: string
        ydk::YLeaf hundredgige; //type: string
        ydk::YLeaf lisp; //type: string
        ydk::YLeaf loopback; //type: uint32
        ydk::YLeaf multilink; //type: uint16
        ydk::YLeaf nve; //type: uint16
        ydk::YLeaf overlay; //type: uint16
        ydk::YLeaf port_channel; //type: uint32
        ydk::YLeaf pseudowire; //type: uint32
        ydk::YLeaf sm; //type: string
        ydk::YLeaf cellular; //type: string
        ydk::YLeaf serial; //type: string
        ydk::YLeaf tengigabitethernet; //type: string
        ydk::YLeaf tunnel; //type: uint32
        ydk::YLeaf virtual_template; //type: uint16
        ydk::YLeaf vlan; //type: uint16
        ydk::YLeaf virtualportgroup; //type: uint16
        ydk::YLeaf vasileft; //type: uint16
        ydk::YLeaf vasiright; //type: uint16
        class ATMSubinterface; //type: Native::Pfr::Border::PfrModeConfigPfrBr::Local::Interface::ATMSubinterface
        class ATMACRsubinterface; //type: Native::Pfr::Border::PfrModeConfigPfrBr::Local::Interface::ATMACRsubinterface
        class LISPSubinterface; //type: Native::Pfr::Border::PfrModeConfigPfrBr::Local::Interface::LISPSubinterface
        class PortChannelSubinterface; //type: Native::Pfr::Border::PfrModeConfigPfrBr::Local::Interface::PortChannelSubinterface

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Pfr::Border::PfrModeConfigPfrBr::Local::Interface::ATMSubinterface> atm_subinterface;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Pfr::Border::PfrModeConfigPfrBr::Local::Interface::ATMACRsubinterface> atm_acrsubinterface;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Pfr::Border::PfrModeConfigPfrBr::Local::Interface::LISPSubinterface> lisp_subinterface;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Pfr::Border::PfrModeConfigPfrBr::Local::Interface::PortChannelSubinterface> port_channel_subinterface;
        
}; // Native::Pfr::Border::PfrModeConfigPfrBr::Local::Interface


class Native::Pfr::Border::PfrModeConfigPfrBr::Local::Interface::ATMSubinterface : public ydk::Entity
{
    public:
        ATMSubinterface();
        ~ATMSubinterface();

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

        ydk::YLeaf atm; //type: string

}; // Native::Pfr::Border::PfrModeConfigPfrBr::Local::Interface::ATMSubinterface


class Native::Pfr::Border::PfrModeConfigPfrBr::Local::Interface::ATMACRsubinterface : public ydk::Entity
{
    public:
        ATMACRsubinterface();
        ~ATMACRsubinterface();

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

        ydk::YLeaf atm_acr; //type: string

}; // Native::Pfr::Border::PfrModeConfigPfrBr::Local::Interface::ATMACRsubinterface


class Native::Pfr::Border::PfrModeConfigPfrBr::Local::Interface::LISPSubinterface : public ydk::Entity
{
    public:
        LISPSubinterface();
        ~LISPSubinterface();

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

        ydk::YLeaf lisp; //type: string

}; // Native::Pfr::Border::PfrModeConfigPfrBr::Local::Interface::LISPSubinterface


class Native::Pfr::Border::PfrModeConfigPfrBr::Local::Interface::PortChannelSubinterface : public ydk::Entity
{
    public:
        PortChannelSubinterface();
        ~PortChannelSubinterface();

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

        ydk::YLeaf port_channel; //type: string

}; // Native::Pfr::Border::PfrModeConfigPfrBr::Local::Interface::PortChannelSubinterface


class Native::Pfr::Border::PfrModeConfigPfrBr::Master : public ydk::Entity
{
    public:
        Master();
        ~Master();

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

        class Ipv4; //type: Native::Pfr::Border::PfrModeConfigPfrBr::Master::Ipv4

        ydk::YList ipv4;
        
}; // Native::Pfr::Border::PfrModeConfigPfrBr::Master


class Native::Pfr::Border::PfrModeConfigPfrBr::Master::Ipv4 : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf ipv4; //type: string
        ydk::YLeaf key_chain; //type: string

}; // Native::Pfr::Border::PfrModeConfigPfrBr::Master::Ipv4


class Native::Pfr::Master : public ydk::Entity
{
    public:
        Master();
        ~Master();

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

        class IcmpModeConfigPfrMc; //type: Native::Pfr::Master::IcmpModeConfigPfrMc

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Pfr::Master::IcmpModeConfigPfrMc> icmp_mode_config_pfr_mc;
        
}; // Native::Pfr::Master


class Native::Pfr::Master::IcmpModeConfigPfrMc : public ydk::Entity
{
    public:
        IcmpModeConfigPfrMc();
        ~IcmpModeConfigPfrMc();

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

        ydk::YLeaf bandwidth_resolution; //type: empty
        ydk::YLeaf exporter; //type: string
        ydk::YLeaf holddown; //type: uint16
        ydk::YLeaf keepalive; //type: uint16
        ydk::YLeaf logging; //type: empty
        ydk::YLeaf periodic; //type: uint16
        ydk::YLeaf policy_rules; //type: string
        ydk::YLeaf port; //type: uint16
        ydk::YLeaf shutdown; //type: empty
        ydk::YLeaf trigger_log_percentage; //type: uint8
        class ActiveProbe; //type: Native::Pfr::Master::IcmpModeConfigPfrMc::ActiveProbe
        class Application; //type: Native::Pfr::Master::IcmpModeConfigPfrMc::Application
        class Backoff; //type: Native::Pfr::Master::IcmpModeConfigPfrMc::Backoff
        class Border; //type: Native::Pfr::Master::IcmpModeConfigPfrMc::Border
        class Delay; //type: Native::Pfr::Master::IcmpModeConfigPfrMc::Delay
        class Jitter; //type: Native::Pfr::Master::IcmpModeConfigPfrMc::Jitter
        class Learn; //type: Native::Pfr::Master::IcmpModeConfigPfrMc::Learn
        class Loss; //type: Native::Pfr::Master::IcmpModeConfigPfrMc::Loss
        class Max; //type: Native::Pfr::Master::IcmpModeConfigPfrMc::Max
        class MaxRangeUtilization; //type: Native::Pfr::Master::IcmpModeConfigPfrMc::MaxRangeUtilization
        class McPeer; //type: Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer
        class Mode; //type: Native::Pfr::Master::IcmpModeConfigPfrMc::Mode
        class Mos; //type: Native::Pfr::Master::IcmpModeConfigPfrMc::Mos
        class Probe; //type: Native::Pfr::Master::IcmpModeConfigPfrMc::Probe
        class Resolve; //type: Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve
        class Rsvp; //type: Native::Pfr::Master::IcmpModeConfigPfrMc::Rsvp
        class TargetDiscovery; //type: Native::Pfr::Master::IcmpModeConfigPfrMc::TargetDiscovery
        class Traceroute; //type: Native::Pfr::Master::IcmpModeConfigPfrMc::Traceroute
        class Unreachable; //type: Native::Pfr::Master::IcmpModeConfigPfrMc::Unreachable

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Pfr::Master::IcmpModeConfigPfrMc::ActiveProbe> active_probe;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Pfr::Master::IcmpModeConfigPfrMc::Application> application;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Pfr::Master::IcmpModeConfigPfrMc::Backoff> backoff;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Pfr::Master::IcmpModeConfigPfrMc::Border> border;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Pfr::Master::IcmpModeConfigPfrMc::Delay> delay;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Pfr::Master::IcmpModeConfigPfrMc::Jitter> jitter;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Pfr::Master::IcmpModeConfigPfrMc::Learn> learn; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Pfr::Master::IcmpModeConfigPfrMc::Loss> loss;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Pfr::Master::IcmpModeConfigPfrMc::Max> max;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Pfr::Master::IcmpModeConfigPfrMc::MaxRangeUtilization> max_range_utilization;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer> mc_peer; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Pfr::Master::IcmpModeConfigPfrMc::Mode> mode;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Pfr::Master::IcmpModeConfigPfrMc::Mos> mos;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Pfr::Master::IcmpModeConfigPfrMc::Probe> probe;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve> resolve;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Pfr::Master::IcmpModeConfigPfrMc::Rsvp> rsvp;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Pfr::Master::IcmpModeConfigPfrMc::TargetDiscovery> target_discovery; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Pfr::Master::IcmpModeConfigPfrMc::Traceroute> traceroute;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Pfr::Master::IcmpModeConfigPfrMc::Unreachable> unreachable;
        
}; // Native::Pfr::Master::IcmpModeConfigPfrMc


class Native::Pfr::Master::IcmpModeConfigPfrMc::ActiveProbe : public ydk::Entity
{
    public:
        ActiveProbe();
        ~ActiveProbe();

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

        ydk::YLeaf echo; //type: one of union, string
        class Jitter; //type: Native::Pfr::Master::IcmpModeConfigPfrMc::ActiveProbe::Jitter
        class TcpConn; //type: Native::Pfr::Master::IcmpModeConfigPfrMc::ActiveProbe::TcpConn
        class UdpEcho; //type: Native::Pfr::Master::IcmpModeConfigPfrMc::ActiveProbe::UdpEcho

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Pfr::Master::IcmpModeConfigPfrMc::ActiveProbe::Jitter> jitter;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Pfr::Master::IcmpModeConfigPfrMc::ActiveProbe::TcpConn> tcp_conn;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Pfr::Master::IcmpModeConfigPfrMc::ActiveProbe::UdpEcho> udp_echo;
        
}; // Native::Pfr::Master::IcmpModeConfigPfrMc::ActiveProbe


class Native::Pfr::Master::IcmpModeConfigPfrMc::ActiveProbe::Jitter : public ydk::Entity
{
    public:
        Jitter();
        ~Jitter();

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

        class Ipv4OrHostname; //type: Native::Pfr::Master::IcmpModeConfigPfrMc::ActiveProbe::Jitter::Ipv4OrHostname

        ydk::YList ipv4_or_hostname;
        
}; // Native::Pfr::Master::IcmpModeConfigPfrMc::ActiveProbe::Jitter


class Native::Pfr::Master::IcmpModeConfigPfrMc::ActiveProbe::Jitter::Ipv4OrHostname : public ydk::Entity
{
    public:
        Ipv4OrHostname();
        ~Ipv4OrHostname();

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

        ydk::YLeaf ipv4_or_hostname; //type: one of union, string
        ydk::YLeaf target_port; //type: uint16

}; // Native::Pfr::Master::IcmpModeConfigPfrMc::ActiveProbe::Jitter::Ipv4OrHostname


class Native::Pfr::Master::IcmpModeConfigPfrMc::ActiveProbe::TcpConn : public ydk::Entity
{
    public:
        TcpConn();
        ~TcpConn();

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

        class Ipv4OrHostname; //type: Native::Pfr::Master::IcmpModeConfigPfrMc::ActiveProbe::TcpConn::Ipv4OrHostname

        ydk::YList ipv4_or_hostname;
        
}; // Native::Pfr::Master::IcmpModeConfigPfrMc::ActiveProbe::TcpConn


class Native::Pfr::Master::IcmpModeConfigPfrMc::ActiveProbe::TcpConn::Ipv4OrHostname : public ydk::Entity
{
    public:
        Ipv4OrHostname();
        ~Ipv4OrHostname();

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

        ydk::YLeaf ipv4_or_hostname; //type: one of union, string
        ydk::YLeaf target_port; //type: uint16

}; // Native::Pfr::Master::IcmpModeConfigPfrMc::ActiveProbe::TcpConn::Ipv4OrHostname


class Native::Pfr::Master::IcmpModeConfigPfrMc::ActiveProbe::UdpEcho : public ydk::Entity
{
    public:
        UdpEcho();
        ~UdpEcho();

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

        class Ipv4OrHostname; //type: Native::Pfr::Master::IcmpModeConfigPfrMc::ActiveProbe::UdpEcho::Ipv4OrHostname

        ydk::YList ipv4_or_hostname;
        
}; // Native::Pfr::Master::IcmpModeConfigPfrMc::ActiveProbe::UdpEcho


class Native::Pfr::Master::IcmpModeConfigPfrMc::ActiveProbe::UdpEcho::Ipv4OrHostname : public ydk::Entity
{
    public:
        Ipv4OrHostname();
        ~Ipv4OrHostname();

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

        ydk::YLeaf ipv4_or_hostname; //type: one of union, string
        ydk::YLeaf target_port; //type: uint16

}; // Native::Pfr::Master::IcmpModeConfigPfrMc::ActiveProbe::UdpEcho::Ipv4OrHostname


class Native::Pfr::Master::IcmpModeConfigPfrMc::Application : public ydk::Entity
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
        std::string get_absolute_path() const override;

        class Define; //type: Native::Pfr::Master::IcmpModeConfigPfrMc::Application::Define

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Pfr::Master::IcmpModeConfigPfrMc::Application::Define> define;
        
}; // Native::Pfr::Master::IcmpModeConfigPfrMc::Application


class Native::Pfr::Master::IcmpModeConfigPfrMc::Application::Define : public ydk::Entity
{
    public:
        Define();
        ~Define();

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

        class AppDef; //type: Native::Pfr::Master::IcmpModeConfigPfrMc::Application::Define::AppDef

        ydk::YList app_def;
        
}; // Native::Pfr::Master::IcmpModeConfigPfrMc::Application::Define


class Native::Pfr::Master::IcmpModeConfigPfrMc::Application::Define::AppDef : public ydk::Entity
{
    public:
        AppDef();
        ~AppDef();

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

        ydk::YLeaf app_def; //type: string
        ydk::YLeaf access_list; //type: string
        ydk::YLeaf nbar; //type: empty

}; // Native::Pfr::Master::IcmpModeConfigPfrMc::Application::Define::AppDef


class Native::Pfr::Master::IcmpModeConfigPfrMc::Backoff : public ydk::Entity
{
    public:
        Backoff();
        ~Backoff();

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

        class Boff; //type: Native::Pfr::Master::IcmpModeConfigPfrMc::Backoff::Boff

        ydk::YList boff;
        
}; // Native::Pfr::Master::IcmpModeConfigPfrMc::Backoff


class Native::Pfr::Master::IcmpModeConfigPfrMc::Backoff::Boff : public ydk::Entity
{
    public:
        Boff();
        ~Boff();

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

        ydk::YLeaf boff; //type: uint16
        class Boff0; //type: Native::Pfr::Master::IcmpModeConfigPfrMc::Backoff::Boff::Boff0

        ydk::YList boff0;
        
}; // Native::Pfr::Master::IcmpModeConfigPfrMc::Backoff::Boff


class Native::Pfr::Master::IcmpModeConfigPfrMc::Backoff::Boff::Boff0 : public ydk::Entity
{
    public:
        Boff0();
        ~Boff0();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf boff0; //type: uint16
        ydk::YLeaf bstep; //type: uint16

}; // Native::Pfr::Master::IcmpModeConfigPfrMc::Backoff::Boff::Boff0


class Native::Pfr::Master::IcmpModeConfigPfrMc::Border : public ydk::Entity
{
    public:
        Border();
        ~Border();

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

        class Ipv4; //type: Native::Pfr::Master::IcmpModeConfigPfrMc::Border::Ipv4

        ydk::YList ipv4;
        
}; // Native::Pfr::Master::IcmpModeConfigPfrMc::Border


class Native::Pfr::Master::IcmpModeConfigPfrMc::Border::Ipv4 : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf ipv4; //type: string
        ydk::YLeaf interface; //type: empty
        class KeyChain; //type: Native::Pfr::Master::IcmpModeConfigPfrMc::Border::Ipv4::KeyChain

        ydk::YList key_chain;
        
}; // Native::Pfr::Master::IcmpModeConfigPfrMc::Border::Ipv4


class Native::Pfr::Master::IcmpModeConfigPfrMc::Border::Ipv4::KeyChain : public ydk::Entity
{
    public:
        KeyChain();
        ~KeyChain();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf kc_name; //type: string
        ydk::YLeaf interface; //type: empty

}; // Native::Pfr::Master::IcmpModeConfigPfrMc::Border::Ipv4::KeyChain


class Native::Pfr::Master::IcmpModeConfigPfrMc::Delay : public ydk::Entity
{
    public:
        Delay();
        ~Delay();

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

        ydk::YLeaf relative; //type: uint16
        ydk::YLeaf threshold; //type: uint16

}; // Native::Pfr::Master::IcmpModeConfigPfrMc::Delay


class Native::Pfr::Master::IcmpModeConfigPfrMc::Jitter : public ydk::Entity
{
    public:
        Jitter();
        ~Jitter();

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

        ydk::YLeaf threshold; //type: uint16

}; // Native::Pfr::Master::IcmpModeConfigPfrMc::Jitter


class Native::Pfr::Master::IcmpModeConfigPfrMc::Learn : public ydk::Entity
{
    public:
        Learn();
        ~Learn();

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

        class LrnModeConfigPfrMcLearn; //type: Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigPfrMcLearn

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigPfrMcLearn> lrn_mode__config_pfr_mc_learn;
        
}; // Native::Pfr::Master::IcmpModeConfigPfrMc::Learn


class Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigPfrMcLearn : public ydk::Entity
{
    public:
        LrnModeConfigPfrMcLearn();
        ~LrnModeConfigPfrMcLearn();

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

        ydk::YLeaf delay; //type: empty
        ydk::YLeaf monitor_period; //type: uint16
        ydk::YLeaf periodic_interval; //type: uint16
        ydk::YLeaf throughput; //type: empty
        class AggregationType; //type: Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigPfrMcLearn::AggregationType
        class Expire; //type: Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigPfrMcLearn::Expire
        class Inside; //type: Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigPfrMcLearn::Inside
        class List; //type: Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigPfrMcLearn::List
        class Prefixes; //type: Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigPfrMcLearn::Prefixes
        class TrafficClass; //type: Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigPfrMcLearn::TrafficClass

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigPfrMcLearn::AggregationType> aggregation_type;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigPfrMcLearn::Expire> expire;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigPfrMcLearn::Inside> inside;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigPfrMcLearn::List> list;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigPfrMcLearn::Prefixes> prefixes;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigPfrMcLearn::TrafficClass> traffic_class;
        
}; // Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigPfrMcLearn


class Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigPfrMcLearn::AggregationType : public ydk::Entity
{
    public:
        AggregationType();
        ~AggregationType();

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

        ydk::YLeaf bgp; //type: empty
        ydk::YLeaf non_bgp; //type: empty
        ydk::YLeaf prefix_length; //type: uint8

}; // Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigPfrMcLearn::AggregationType


class Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigPfrMcLearn::Expire : public ydk::Entity
{
    public:
        Expire();
        ~Expire();

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

        class After; //type: Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigPfrMcLearn::Expire::After

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigPfrMcLearn::Expire::After> after;
        
}; // Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigPfrMcLearn::Expire


class Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigPfrMcLearn::Expire::After : public ydk::Entity
{
    public:
        After();
        ~After();

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

        ydk::YLeaf session; //type: uint16
        ydk::YLeaf time; //type: uint16

}; // Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigPfrMcLearn::Expire::After


class Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigPfrMcLearn::Inside : public ydk::Entity
{
    public:
        Inside();
        ~Inside();

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

        ydk::YLeaf bgp; //type: empty

}; // Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigPfrMcLearn::Inside


class Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigPfrMcLearn::List : public ydk::Entity
{
    public:
        List();
        ~List();

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

        class Seq; //type: Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigPfrMcLearn::List::Seq

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigPfrMcLearn::List::Seq> seq;
        
}; // Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigPfrMcLearn::List


class Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigPfrMcLearn::List::Seq : public ydk::Entity
{
    public:
        Seq();
        ~Seq();

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

        class PfrTc; //type: Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigPfrMcLearn::List::Seq::PfrTc

        ydk::YList pfr_tc;
        
}; // Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigPfrMcLearn::List::Seq


class Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigPfrMcLearn::List::Seq::PfrTc : public ydk::Entity
{
    public:
        PfrTc();
        ~PfrTc();

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

        ydk::YLeaf pfr_tc; //type: uint16
        ydk::YLeaf refname; //type: empty

}; // Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigPfrMcLearn::List::Seq::PfrTc


class Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigPfrMcLearn::Prefixes : public ydk::Entity
{
    public:
        Prefixes();
        ~Prefixes();

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

        class Prnum; //type: Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigPfrMcLearn::Prefixes::Prnum

        ydk::YList prnum;
        
}; // Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigPfrMcLearn::Prefixes


class Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigPfrMcLearn::Prefixes::Prnum : public ydk::Entity
{
    public:
        Prnum();
        ~Prnum();

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

        ydk::YLeaf prnum; //type: uint32
        ydk::YLeaf applications; //type: uint16

}; // Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigPfrMcLearn::Prefixes::Prnum


class Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigPfrMcLearn::TrafficClass : public ydk::Entity
{
    public:
        TrafficClass();
        ~TrafficClass();

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

        class Aggregate; //type: Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigPfrMcLearn::TrafficClass::Aggregate
        class Filter; //type: Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigPfrMcLearn::TrafficClass::Filter
        class Keys; //type: Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigPfrMcLearn::TrafficClass::Keys

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigPfrMcLearn::TrafficClass::Aggregate> aggregate;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigPfrMcLearn::TrafficClass::Filter> filter;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigPfrMcLearn::TrafficClass::Keys> keys;
        
}; // Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigPfrMcLearn::TrafficClass


class Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigPfrMcLearn::TrafficClass::Aggregate : public ydk::Entity
{
    public:
        Aggregate();
        ~Aggregate();

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

        ydk::YLeaf access_list; //type: string

}; // Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigPfrMcLearn::TrafficClass::Aggregate


class Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigPfrMcLearn::TrafficClass::Filter : public ydk::Entity
{
    public:
        Filter();
        ~Filter();

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

        ydk::YLeaf access_list; //type: string

}; // Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigPfrMcLearn::TrafficClass::Filter


class Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigPfrMcLearn::TrafficClass::Keys : public ydk::Entity
{
    public:
        Keys();
        ~Keys();

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

        class Dport; //type: Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigPfrMcLearn::TrafficClass::Keys::Dport
        class Dscp; //type: Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigPfrMcLearn::TrafficClass::Keys::Dscp
        class Protocol; //type: Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigPfrMcLearn::TrafficClass::Keys::Protocol
        class Sport; //type: Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigPfrMcLearn::TrafficClass::Keys::Sport

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigPfrMcLearn::TrafficClass::Keys::Dport> dport; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigPfrMcLearn::TrafficClass::Keys::Dscp> dscp; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigPfrMcLearn::TrafficClass::Keys::Protocol> protocol; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigPfrMcLearn::TrafficClass::Keys::Sport> sport; // presence node
        
}; // Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigPfrMcLearn::TrafficClass::Keys


class Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigPfrMcLearn::TrafficClass::Keys::Dport : public ydk::Entity
{
    public:
        Dport();
        ~Dport();

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

        ydk::YLeaf dscp; //type: empty
        ydk::YLeaf protocol; //type: empty
        ydk::YLeaf sport; //type: empty

}; // Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigPfrMcLearn::TrafficClass::Keys::Dport


class Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigPfrMcLearn::TrafficClass::Keys::Dscp : public ydk::Entity
{
    public:
        Dscp();
        ~Dscp();

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

        ydk::YLeaf dport; //type: empty
        ydk::YLeaf protocol; //type: empty
        ydk::YLeaf sport; //type: empty

}; // Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigPfrMcLearn::TrafficClass::Keys::Dscp


class Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigPfrMcLearn::TrafficClass::Keys::Protocol : public ydk::Entity
{
    public:
        Protocol();
        ~Protocol();

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

        ydk::YLeaf dport; //type: empty
        ydk::YLeaf dscp; //type: empty
        class Sport; //type: Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigPfrMcLearn::TrafficClass::Keys::Protocol::Sport

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigPfrMcLearn::TrafficClass::Keys::Protocol::Sport> sport; // presence node
        
}; // Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigPfrMcLearn::TrafficClass::Keys::Protocol


class Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigPfrMcLearn::TrafficClass::Keys::Protocol::Sport : public ydk::Entity
{
    public:
        Sport();
        ~Sport();

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

        ydk::YLeaf dport; //type: empty
        ydk::YLeaf dscp; //type: empty

}; // Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigPfrMcLearn::TrafficClass::Keys::Protocol::Sport


class Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigPfrMcLearn::TrafficClass::Keys::Sport : public ydk::Entity
{
    public:
        Sport();
        ~Sport();

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

        ydk::YLeaf dport; //type: empty
        ydk::YLeaf dscp; //type: empty
        ydk::YLeaf protocol; //type: empty

}; // Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigPfrMcLearn::TrafficClass::Keys::Sport


class Native::Pfr::Master::IcmpModeConfigPfrMc::Loss : public ydk::Entity
{
    public:
        Loss();
        ~Loss();

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

        ydk::YLeaf relative; //type: uint16
        ydk::YLeaf threshold; //type: uint32

}; // Native::Pfr::Master::IcmpModeConfigPfrMc::Loss


class Native::Pfr::Master::IcmpModeConfigPfrMc::Max : public ydk::Entity
{
    public:
        Max();
        ~Max();

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

        class Prefix; //type: Native::Pfr::Master::IcmpModeConfigPfrMc::Max::Prefix
        class Range; //type: Native::Pfr::Master::IcmpModeConfigPfrMc::Max::Range

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Pfr::Master::IcmpModeConfigPfrMc::Max::Prefix> prefix;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Pfr::Master::IcmpModeConfigPfrMc::Max::Range> range;
        
}; // Native::Pfr::Master::IcmpModeConfigPfrMc::Max


class Native::Pfr::Master::IcmpModeConfigPfrMc::Max::Prefix : public ydk::Entity
{
    public:
        Prefix();
        ~Prefix();

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

        class Total; //type: Native::Pfr::Master::IcmpModeConfigPfrMc::Max::Prefix::Total

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Pfr::Master::IcmpModeConfigPfrMc::Max::Prefix::Total> total;
        
}; // Native::Pfr::Master::IcmpModeConfigPfrMc::Max::Prefix


class Native::Pfr::Master::IcmpModeConfigPfrMc::Max::Prefix::Total : public ydk::Entity
{
    public:
        Total();
        ~Total();

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

        class Maxpr; //type: Native::Pfr::Master::IcmpModeConfigPfrMc::Max::Prefix::Total::Maxpr

        ydk::YList maxpr;
        
}; // Native::Pfr::Master::IcmpModeConfigPfrMc::Max::Prefix::Total


class Native::Pfr::Master::IcmpModeConfigPfrMc::Max::Prefix::Total::Maxpr : public ydk::Entity
{
    public:
        Maxpr();
        ~Maxpr();

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

        ydk::YLeaf maxpr; //type: uint32
        ydk::YLeaf learn; //type: uint32

}; // Native::Pfr::Master::IcmpModeConfigPfrMc::Max::Prefix::Total::Maxpr


class Native::Pfr::Master::IcmpModeConfigPfrMc::Max::Range : public ydk::Entity
{
    public:
        Range();
        ~Range();

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

        class Receive; //type: Native::Pfr::Master::IcmpModeConfigPfrMc::Max::Range::Receive

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Pfr::Master::IcmpModeConfigPfrMc::Max::Range::Receive> receive;
        
}; // Native::Pfr::Master::IcmpModeConfigPfrMc::Max::Range


class Native::Pfr::Master::IcmpModeConfigPfrMc::Max::Range::Receive : public ydk::Entity
{
    public:
        Receive();
        ~Receive();

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

        ydk::YLeaf percent; //type: uint8

}; // Native::Pfr::Master::IcmpModeConfigPfrMc::Max::Range::Receive


class Native::Pfr::Master::IcmpModeConfigPfrMc::MaxRangeUtilization : public ydk::Entity
{
    public:
        MaxRangeUtilization();
        ~MaxRangeUtilization();

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

        ydk::YLeaf percent; //type: uint8

}; // Native::Pfr::Master::IcmpModeConfigPfrMc::MaxRangeUtilization


class Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer : public ydk::Entity
{
    public:
        McPeer();
        ~McPeer();

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

        ydk::YLeaf description; //type: string
        class Ipv4; //type: Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Ipv4
        class Domain; //type: Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Domain
        class Eigrp; //type: Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Eigrp
        class HeadEnd; //type: Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::HeadEnd

        ydk::YList ipv4;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Domain> domain;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Eigrp> eigrp;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::HeadEnd> head_end;
        
}; // Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer


class Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Ipv4 : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf ipv4; //type: string
        class Interface; //type: Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Ipv4::Interface

        ydk::YList interface;
        
}; // Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Ipv4


class Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Ipv4::Interface : public ydk::Entity
{
    public:
        Interface();
        ~Interface();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf interface; //type: string
        ydk::YLeaf description; //type: string
        ydk::YLeaf domain; //type: uint16

}; // Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Ipv4::Interface


class Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Domain : public ydk::Entity
{
    public:
        Domain();
        ~Domain();

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

        class Dmval; //type: Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Domain::Dmval

        ydk::YList dmval;
        
}; // Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Domain


class Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Domain::Dmval : public ydk::Entity
{
    public:
        Dmval();
        ~Dmval();

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

        ydk::YLeaf dmval; //type: uint16
        ydk::YLeaf description; //type: string
        ydk::YLeaf eigrp; //type: string
        ydk::YLeaf head_end; //type: string
        class Ipv4; //type: Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Domain::Dmval::Ipv4

        ydk::YList ipv4;
        
}; // Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Domain::Dmval


class Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Domain::Dmval::Ipv4 : public ydk::Entity
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

        ydk::YLeaf ipv4; //type: string
        ydk::YLeaf interface; //type: string

}; // Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Domain::Dmval::Ipv4


class Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Eigrp : public ydk::Entity
{
    public:
        Eigrp();
        ~Eigrp();

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

        class Interface; //type: Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Eigrp::Interface

        ydk::YList interface;
        
}; // Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Eigrp


class Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Eigrp::Interface : public ydk::Entity
{
    public:
        Interface();
        ~Interface();

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

        ydk::YLeaf interface; //type: string
        ydk::YLeaf description; //type: string
        ydk::YLeaf domain; //type: uint16

}; // Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Eigrp::Interface


class Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::HeadEnd : public ydk::Entity
{
    public:
        HeadEnd();
        ~HeadEnd();

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

        class Interface; //type: Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::HeadEnd::Interface

        ydk::YList interface;
        
}; // Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::HeadEnd


class Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::HeadEnd::Interface : public ydk::Entity
{
    public:
        Interface();
        ~Interface();

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

        ydk::YLeaf interface; //type: string
        ydk::YLeaf description; //type: string
        ydk::YLeaf domain; //type: uint16

}; // Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::HeadEnd::Interface


class Native::Pfr::Master::IcmpModeConfigPfrMc::Mode : public ydk::Entity
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
        std::string get_absolute_path() const override;

        class Monitor; //type: Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Monitor
        class Route; //type: Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route
        class Verify; //type: Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Verify

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Monitor> monitor;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route> route;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Verify> verify;
        
}; // Native::Pfr::Master::IcmpModeConfigPfrMc::Mode


class Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Monitor : public ydk::Entity
{
    public:
        Monitor();
        ~Monitor();

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

        ydk::YLeaf both; //type: empty
        ydk::YLeaf fast; //type: empty
        ydk::YLeaf passive; //type: empty
        class Active; //type: Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Monitor::Active

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Monitor::Active> active; // presence node
        
}; // Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Monitor


class Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Monitor::Active : public ydk::Entity
{
    public:
        Active();
        ~Active();

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

        ydk::YLeaf throughput; //type: empty

}; // Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Monitor::Active


class Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route : public ydk::Entity
{
    public:
        Route();
        ~Route();

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

        ydk::YLeaf control; //type: empty
        ydk::YLeaf observe; //type: empty
        class Metric; //type: Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::Metric
        class Protocol; //type: Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::Protocol

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::Metric> metric;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::Protocol> protocol;
        
}; // Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route

class Native::Cts::CriticalAuthentication::Default::Pmk::Type : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_0;
        static const ydk::Enum::YLeaf Y_6;

        static int get_enum_value(const std::string & name) {
            if (name == "0") return 0;
            if (name == "6") return 1;
            return -1;
        }
};

class Native::Cts::RoleBased::Enforcement::VlanList::Id : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf all;

        static int get_enum_value(const std::string & name) {
            if (name == "all") return 0;
            return -1;
        }
};

class Native::Cts::RoleBased::SgtMapVlanList::SgtMap::VlanList : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf all;

        static int get_enum_value(const std::string & name) {
            if (name == "all") return 0;
            return -1;
        }
};

class Native::Cts::Sxp::Default::Password::Type : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_0;
        static const ydk::Enum::YLeaf Y_6;
        static const ydk::Enum::YLeaf Y_7;

        static int get_enum_value(const std::string & name) {
            if (name == "0") return 0;
            if (name == "6") return 1;
            if (name == "7") return 2;
            return -1;
        }
};

class Native::Cts::Sxp::Connection::Peer::Ipv4::Source::Ipv4_::Password::PasswordType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf default_;
        static const ydk::Enum::YLeaf none;

        static int get_enum_value(const std::string & name) {
            if (name == "default") return 0;
            if (name == "none") return 1;
            return -1;
        }
};

class Native::Cts::Sxp::Connection::Peer::Ipv4::Password::PasswordType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf default_;
        static const ydk::Enum::YLeaf none;

        static int get_enum_value(const std::string & name) {
            if (name == "default") return 0;
            if (name == "none") return 1;
            return -1;
        }
};


}
}

#endif /* _CISCO_IOS_XE_NATIVE_130_ */

