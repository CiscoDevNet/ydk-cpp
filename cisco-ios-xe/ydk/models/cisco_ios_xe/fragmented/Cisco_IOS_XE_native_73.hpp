#ifndef _CISCO_IOS_XE_NATIVE_73_
#define _CISCO_IOS_XE_NATIVE_73_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XE_native_0.hpp"
#include "Cisco_IOS_XE_native_19.hpp"
#include "Cisco_IOS_XE_native_70.hpp"
#include "Cisco_IOS_XE_native_72.hpp"

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_native {


class Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::Autoroute::Metric : public ydk::Entity
{
    public:
        Metric();
        ~Metric();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf range; //type: uint32
        ydk::YLeaf absolute; //type: uint32
        ydk::YLeaf relative; //type: int8

}; // Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::Autoroute::Metric


class Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::BackupBw : public ydk::Entity
{
    public:
        BackupBw();
        ~BackupBw();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf bandwidth; //type: uint32
        class SubPool; //type: Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::BackupBw::SubPool
        class ClassType; //type: Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::BackupBw::ClassType
        class GlobalPool; //type: Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::BackupBw::GlobalPool

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::BackupBw::ClassType> class_type;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::BackupBw::GlobalPool> global_pool;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::BackupBw::SubPool> sub_pool;
        
}; // Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::BackupBw


class Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::BackupBw::ClassType : public ydk::Entity
{
    public:
        ClassType();
        ~ClassType();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf class_type_num; //type: uint8
        ydk::YLeaf bandwidth; //type: uint32
        ydk::YLeaf unlimited; //type: empty

}; // Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::BackupBw::ClassType


class Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::BackupBw::GlobalPool : public ydk::Entity
{
    public:
        GlobalPool();
        ~GlobalPool();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf bandwidth; //type: uint32
        ydk::YLeaf unlimited; //type: empty

}; // Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::BackupBw::GlobalPool


class Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::BackupBw::SubPool : public ydk::Entity
{
    public:
        SubPool();
        ~SubPool();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf unlimited; //type: empty
        class SubPoolConfig; //type: Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::BackupBw::SubPool::SubPoolConfig

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::BackupBw::SubPool::SubPoolConfig> sub_pool_config;
        
}; // Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::BackupBw::SubPool


class Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::BackupBw::SubPool::SubPoolConfig : public ydk::Entity
{
    public:
        SubPoolConfig();
        ~SubPoolConfig();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf bandwidth; //type: uint32
        class ClassType; //type: Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::BackupBw::SubPool::SubPoolConfig::ClassType
        class GlobalPool; //type: Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::BackupBw::SubPool::SubPoolConfig::GlobalPool

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::BackupBw::SubPool::SubPoolConfig::ClassType> class_type;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::BackupBw::SubPool::SubPoolConfig::GlobalPool> global_pool;
        
}; // Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::BackupBw::SubPool::SubPoolConfig


class Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::BackupBw::SubPool::SubPoolConfig::ClassType : public ydk::Entity
{
    public:
        ClassType();
        ~ClassType();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf class_type_num; //type: uint8
        ydk::YLeaf bandwidth; //type: uint32
        ydk::YLeaf unlimited; //type: empty

}; // Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::BackupBw::SubPool::SubPoolConfig::ClassType


class Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::BackupBw::SubPool::SubPoolConfig::GlobalPool : public ydk::Entity
{
    public:
        GlobalPool();
        ~GlobalPool();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf bandwidth; //type: uint32
        ydk::YLeaf unlimited; //type: empty

}; // Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::BackupBw::SubPool::SubPoolConfig::GlobalPool


class Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::Bandwidth : public ydk::Entity
{
    public:
        Bandwidth();
        ~Bandwidth();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf bw; //type: uint32
        ydk::YLeaf class_type; //type: uint8
        ydk::YLeaf sub_pool; //type: uint32

}; // Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::Bandwidth


class Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::Bfd : public ydk::Entity
{
    public:
        Bfd();
        ~Bfd();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf sbfd; //type: string

}; // Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::Bfd


class Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::BindingSid : public ydk::Entity
{
    public:
        BindingSid();
        ~BindingSid();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf label; //type: uint32

}; // Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::BindingSid


class Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::Exp : public ydk::Entity
{
    public:
        Exp();
        ~Exp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf default_; //type: empty
        ydk::YLeafList exp_value; //type: list of  uint8

}; // Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::Exp


class Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::ExpBundle : public ydk::Entity
{
    public:
        ExpBundle();
        ~ExpBundle();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf master; //type: empty
        class Member; //type: Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::ExpBundle::Member

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::ExpBundle::Member> member;
        
}; // Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::ExpBundle


class Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::ExpBundle::Member : public ydk::Entity
{
    public:
        Member();
        ~Member();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tunnel; //type: uint32

}; // Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::ExpBundle::Member


class Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::FastReroute : public ydk::Entity
{
    public:
        FastReroute();
        ~FastReroute();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf bw_protect; //type: empty
        ydk::YLeaf node_protect; //type: empty

}; // Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::FastReroute


class Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::ForwardingAdjacency : public ydk::Entity
{
    public:
        ForwardingAdjacency();
        ~ForwardingAdjacency();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf holdtime; //type: uint32

}; // Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::ForwardingAdjacency


class Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::Interface_ : public ydk::Entity
{
    public:
        Interface_();
        ~Interface_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Down; //type: Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::Interface_::Down

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::Interface_::Down> down;
        
}; // Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::Interface_


class Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::Interface_::Down : public ydk::Entity
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

        ydk::YLeaf delay; //type: uint32

}; // Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::Interface_::Down


class Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption : public ydk::Entity
{
    public:
        PathOption();
        ~PathOption();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Working; //type: Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Working
        class Protect; //type: Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Protect

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Protect> > protect;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Working> > working;
        
}; // Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption


class Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Protect : public ydk::Entity
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

        //type: uint32 (refers to cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Working::id)
        ydk::YLeaf id;
        class Diverse; //type: Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Protect::Diverse
        class Explicit_; //type: Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Protect::Explicit_
        class List; //type: Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Protect::List

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Protect::Diverse> diverse;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Protect::Explicit_> explicit_;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Protect::List> list;
        
}; // Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Protect


class Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Protect::Diverse : public ydk::Entity
{
    public:
        Diverse();
        ~Diverse();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf node; //type: empty
        ydk::YLeaf srlg; //type: empty
        ydk::YLeaf segment_routing; //type: empty
        ydk::YLeaf non_revertive; //type: empty
        ydk::YLeaf pce; //type: empty
        ydk::YLeaf address; //type: string
        ydk::YLeaf verbatim; //type: empty
        ydk::YLeaf lockdown; //type: empty
        ydk::YLeaf attributes; //type: string
        class Bandwidth; //type: Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Protect::Diverse::Bandwidth

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Protect::Diverse::Bandwidth> bandwidth;
        
}; // Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Protect::Diverse


class Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Protect::Diverse::Bandwidth : public ydk::Entity
{
    public:
        Bandwidth();
        ~Bandwidth();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf bandwidth; //type: uint32
        ydk::YLeaf sub_pool; //type: uint32

}; // Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Protect::Diverse::Bandwidth


class Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Protect::Explicit_ : public ydk::Entity
{
    public:
        Explicit_();
        ~Explicit_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf identifier; //type: uint16
        ydk::YLeaf name; //type: string
        ydk::YLeaf segment_routing; //type: empty
        ydk::YLeaf non_revertive; //type: empty
        ydk::YLeaf verbatim; //type: empty
        ydk::YLeaf attributes; //type: string
        class Bandwidth; //type: Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Protect::Explicit_::Bandwidth

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Protect::Explicit_::Bandwidth> bandwidth;
        
}; // Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Protect::Explicit_


class Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Protect::Explicit_::Bandwidth : public ydk::Entity
{
    public:
        Bandwidth();
        ~Bandwidth();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf bandwidth; //type: uint32
        ydk::YLeaf sub_pool; //type: uint32

}; // Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Protect::Explicit_::Bandwidth


class Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Protect::List : public ydk::Entity
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

        ydk::YLeaf identifier; //type: uint16
        ydk::YLeaf name; //type: string
        ydk::YLeaf segment_routing; //type: empty
        ydk::YLeaf non_revertive; //type: empty
        ydk::YLeaf attributes; //type: string
        ydk::YLeaf pce; //type: empty
        ydk::YLeaf address; //type: string
        ydk::YLeaf verbatim; //type: empty
        class Bandwidth; //type: Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Protect::List::Bandwidth

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Protect::List::Bandwidth> bandwidth;
        
}; // Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Protect::List


class Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Protect::List::Bandwidth : public ydk::Entity
{
    public:
        Bandwidth();
        ~Bandwidth();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf bandwidth; //type: uint32
        ydk::YLeaf sub_pool; //type: uint32

}; // Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Protect::List::Bandwidth


class Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Working : public ydk::Entity
{
    public:
        Working();
        ~Working();

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
        class Dynamic; //type: Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Working::Dynamic
        class Explicit_; //type: Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Working::Explicit_
        class SegmentRouting; //type: Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Working::SegmentRouting

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Working::Dynamic> dynamic; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Working::Explicit_> explicit_;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Working::SegmentRouting> segment_routing; // presence node
        
}; // Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Working


class Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Working::Dynamic : public ydk::Entity
{
    public:
        Dynamic();
        ~Dynamic();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf pce; //type: empty
        ydk::YLeaf address; //type: string
        ydk::YLeaf verbatim; //type: empty
        ydk::YLeaf lockdown; //type: empty
        ydk::YLeaf sticky; //type: empty
        ydk::YLeaf attributes; //type: string
        class SegmentRouting; //type: Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Working::Dynamic::SegmentRouting
        class Bandwidth; //type: Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Working::Dynamic::Bandwidth

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Working::Dynamic::Bandwidth> bandwidth;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Working::Dynamic::SegmentRouting> segment_routing; // presence node
        
}; // Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Working::Dynamic


class Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Working::Dynamic::Bandwidth : public ydk::Entity
{
    public:
        Bandwidth();
        ~Bandwidth();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf bandwidth; //type: uint32
        ydk::YLeaf sub_pool; //type: uint32

}; // Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Working::Dynamic::Bandwidth


class Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Working::Dynamic::SegmentRouting : public ydk::Entity
{
    public:
        SegmentRouting();
        ~SegmentRouting();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf attributes; //type: string
        ydk::YLeaf lockdown; //type: empty
        ydk::YLeaf sticky; //type: empty
        ydk::YLeaf pce; //type: empty
        ydk::YLeaf address; //type: string
        ydk::YLeaf verbatim; //type: empty

}; // Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Working::Dynamic::SegmentRouting


class Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Working::Explicit_ : public ydk::Entity
{
    public:
        Explicit_();
        ~Explicit_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf identifier; //type: uint16
        ydk::YLeaf name; //type: string
        ydk::YLeaf segment_routing; //type: empty
        ydk::YLeaf verbatim; //type: empty
        ydk::YLeaf attributes; //type: string
        ydk::YLeaf lockdown; //type: empty
        ydk::YLeaf sticky; //type: empty
        class Bandwidth; //type: Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Working::Explicit_::Bandwidth

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Working::Explicit_::Bandwidth> bandwidth;
        
}; // Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Working::Explicit_


class Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Working::Explicit_::Bandwidth : public ydk::Entity
{
    public:
        Bandwidth();
        ~Bandwidth();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf bandwidth; //type: uint32
        ydk::YLeaf sub_pool; //type: uint32

}; // Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Working::Explicit_::Bandwidth


class Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Working::SegmentRouting : public ydk::Entity
{
    public:
        SegmentRouting();
        ~SegmentRouting();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf lockdown; //type: empty
        ydk::YLeaf sticky; //type: empty

}; // Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Working::SegmentRouting


class Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathSelection : public ydk::Entity
{
    public:
        PathSelection();
        ~PathSelection();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf metric; //type: Metric
        ydk::YLeaf cost_limit; //type: uint32
        ydk::YLeaf hop_limit; //type: uint8
        ydk::YLeaf tiebreaker; //type: MplsTeTiebreakerType
        class Invalidation; //type: Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathSelection::Invalidation
        class SegmentRouting; //type: Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathSelection::SegmentRouting

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathSelection::Invalidation> invalidation;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathSelection::SegmentRouting> segment_routing;
                class Metric;

}; // Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathSelection


class Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathSelection::Invalidation : public ydk::Entity
{
    public:
        Invalidation();
        ~Invalidation();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf value_; //type: int32
        ydk::YLeaf drop; //type: empty

}; // Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathSelection::Invalidation


class Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathSelection::SegmentRouting : public ydk::Entity
{
    public:
        SegmentRouting();
        ~SegmentRouting();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf adjacency; //type: Adjacency
        class Adjacency;

}; // Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathSelection::SegmentRouting


class Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::Priority : public ydk::Entity
{
    public:
        Priority();
        ~Priority();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf setup_priority; //type: uint8
        ydk::YLeaf hold_priority; //type: uint8

}; // Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::Priority


class Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::RecordRoute : public ydk::Entity
{
    public:
        RecordRoute();
        ~RecordRoute();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;


}; // Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::RecordRoute


class Native::Interface::VirtualTemplate::Tunnel::NetworkId : public ydk::Entity
{
    public:
        NetworkId();
        ~NetworkId();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf id; //type: uint16
        ydk::YLeaf nexthop; //type: string
        ydk::YLeaf qos; //type: string
        ydk::YLeaf weight; //type: uint16

}; // Native::Interface::VirtualTemplate::Tunnel::NetworkId


class Native::Interface::VirtualTemplate::Tunnel::PathMtuDiscovery : public ydk::Entity
{
    public:
        PathMtuDiscovery();
        ~PathMtuDiscovery();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;


}; // Native::Interface::VirtualTemplate::Tunnel::PathMtuDiscovery


class Native::Interface::VirtualTemplate::Tunnel::Protection : public ydk::Entity
{
    public:
        Protection();
        ~Protection();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;


}; // Native::Interface::VirtualTemplate::Tunnel::Protection


class Native::Interface::VirtualTemplate::Tunnel::Rbscp : public ydk::Entity
{
    public:
        Rbscp();
        ~Rbscp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ack_split; //type: uint8
        ydk::YLeaf delay; //type: empty
        ydk::YLeaf input_drop; //type: uint8
        ydk::YLeaf long_drop; //type: empty
        ydk::YLeaf report; //type: empty
        ydk::YLeaf window_stuff; //type: uint8

}; // Native::Interface::VirtualTemplate::Tunnel::Rbscp


class Native::Interface::VirtualTemplate::Tunnel::SrcPort : public ydk::Entity
{
    public:
        SrcPort();
        ~SrcPort();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf port_num; //type: uint16
        ydk::YLeaf dynamic; //type: empty

}; // Native::Interface::VirtualTemplate::Tunnel::SrcPort


class Native::Interface::VirtualTemplate::Tunnel::Tun6rd : public ydk::Entity
{
    public:
        Tun6rd();
        ~Tun6rd();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf br; //type: string
        ydk::YLeaf prefix; //type: string
        ydk::YLeaf reverse_map_check; //type: empty
        class Ipv4; //type: Native::Interface::VirtualTemplate::Tunnel::Tun6rd::Ipv4

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::VirtualTemplate::Tunnel::Tun6rd::Ipv4> ipv4;
        
}; // Native::Interface::VirtualTemplate::Tunnel::Tun6rd


class Native::Interface::VirtualTemplate::Tunnel::Tun6rd::Ipv4 : public ydk::Entity
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

        ydk::YLeaf prefix_len; //type: uint8
        ydk::YLeaf suffix_len; //type: uint8

}; // Native::Interface::VirtualTemplate::Tunnel::Tun6rd::Ipv4


class Native::Interface::VirtualTemplate::Tunnel::Udlr : public ydk::Entity
{
    public:
        Udlr();
        ~Udlr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address_resolution; //type: empty
        ydk::YLeaf receive_only; //type: string
        ydk::YLeaf send_only; //type: string

}; // Native::Interface::VirtualTemplate::Tunnel::Udlr


class Native::Interface::VirtualTemplate::Tunnel::Vlan : public ydk::Entity
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

        ydk::YLeaf id1; //type: uint16
        ydk::YLeaf hyphen; //type: empty
        ydk::YLeaf id2; //type: uint16

}; // Native::Interface::VirtualTemplate::Tunnel::Vlan


class Native::Interface::VirtualTemplate::Utd : public ydk::Entity
{
    public:
        Utd();
        ~Utd();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf enable; //type: empty

}; // Native::Interface::VirtualTemplate::Utd


class Native::Interface::VirtualTemplate::Vrf : public ydk::Entity
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

        ydk::YLeaf forwarding; //type: string

}; // Native::Interface::VirtualTemplate::Vrf


class Native::Interface::VirtualTemplate::ZoneMember : public ydk::Entity
{
    public:
        ZoneMember();
        ~ZoneMember();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf security; //type: string

}; // Native::Interface::VirtualTemplate::ZoneMember


class Native::Interface::Vlan : public ydk::Entity
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

        ydk::YLeaf name; //type: uint16
        ydk::YLeaf cisco_ios_xe_interfaces_description; //type: string
        ydk::YLeaf cisco_ios_xe_interfaces_mac_address; //type: string
        ydk::YLeaf cisco_ios_xe_interfaces_shutdown; //type: empty
        ydk::YLeaf keepalive; //type: boolean
        ydk::YLeaf cisco_ios_xe_interfaces_if_state; //type: IfState
        ydk::YLeaf cisco_ios_xe_interfaces_delay; //type: uint32
        ydk::YLeaf cisco_ios_xe_interfaces_load_interval; //type: uint16
        ydk::YLeaf cisco_ios_xe_interfaces_max_reserved_bandwidth; //type: uint8
        ydk::YLeaf cisco_ios_xe_interfaces_mtu; //type: uint16
        ydk::YLeaf cisco_ios_xe_interfaces_service_insertion; //type: ServiceInsertion
        ydk::YLeaf cisco_ios_xe_interfaces_description_; //type: string
        ydk::YLeaf cisco_ios_xe_interfaces_mac_address_; //type: string
        ydk::YLeaf cisco_ios_xe_interfaces_shutdown_; //type: empty
        ydk::YLeaf keepalive_; //type: boolean
        ydk::YLeaf cisco_ios_xe_interfaces_if_state_; //type: IfState_
        ydk::YLeaf cisco_ios_xe_interfaces_delay_; //type: uint32
        ydk::YLeaf cisco_ios_xe_interfaces_load_interval_; //type: uint16
        ydk::YLeaf cisco_ios_xe_interfaces_max_reserved_bandwidth_; //type: uint8
        ydk::YLeaf cisco_ios_xe_interfaces_mtu_; //type: uint16
        ydk::YLeaf cisco_ios_xe_interfaces_service_insertion_; //type: ServiceInsertion_
        class CiscoIOSXEInterfacesSwitchportConf; //type: Native::Interface::Vlan::CiscoIOSXEInterfacesSwitchportConf
        class CiscoIOSXEInterfacesSwitchport; //type: Native::Interface::Vlan::CiscoIOSXEInterfacesSwitchport
        class CiscoIOSXEInterfacesArp; //type: Native::Interface::Vlan::CiscoIOSXEInterfacesArp
        class CiscoIOSXEInterfacesBackup; //type: Native::Interface::Vlan::CiscoIOSXEInterfacesBackup
        class CiscoIOSXEInterfacesCemoudp; //type: Native::Interface::Vlan::CiscoIOSXEInterfacesCemoudp
        class CiscoIOSXEInterfacesCwsTunnel; //type: Native::Interface::Vlan::CiscoIOSXEInterfacesCwsTunnel
        class CiscoIOSXEInterfacesL2ProtocolTunnel; //type: Native::Interface::Vlan::CiscoIOSXEInterfacesL2ProtocolTunnel
        class CiscoIOSXEInterfacesEncapsulation; //type: Native::Interface::Vlan::CiscoIOSXEInterfacesEncapsulation
        class CiscoIOSXEInterfacesFairQueueConf; //type: Native::Interface::Vlan::CiscoIOSXEInterfacesFairQueueConf
        class CiscoIOSXEInterfacesFairQueue; //type: Native::Interface::Vlan::CiscoIOSXEInterfacesFairQueue
        class CiscoIOSXEInterfacesFlowcontrol; //type: Native::Interface::Vlan::CiscoIOSXEInterfacesFlowcontrol
        class CiscoIOSXEInterfacesIsis; //type: Native::Interface::Vlan::CiscoIOSXEInterfacesIsis
        class KeepaliveSettings; //type: Native::Interface::Vlan::KeepaliveSettings
        class CiscoIOSXEInterfacesBfd; //type: Native::Interface::Vlan::CiscoIOSXEInterfacesBfd
        class CiscoIOSXEInterfacesBandwidth; //type: Native::Interface::Vlan::CiscoIOSXEInterfacesBandwidth
        class CiscoIOSXEInterfacesDampening; //type: Native::Interface::Vlan::CiscoIOSXEInterfacesDampening
        class CiscoIOSXEInterfacesDomain; //type: Native::Interface::Vlan::CiscoIOSXEInterfacesDomain
        class CiscoIOSXEInterfacesHoldQueue; //type: Native::Interface::Vlan::CiscoIOSXEInterfacesHoldQueue
        class CiscoIOSXEInterfacesMpls; //type: Native::Interface::Vlan::CiscoIOSXEInterfacesMpls
        class IpVrf; //type: Native::Interface::Vlan::IpVrf
        class Vrf; //type: Native::Interface::Vlan::Vrf
        class CiscoIOSXEInterfacesIp; //type: Native::Interface::Vlan::CiscoIOSXEInterfacesIp
        class CiscoIOSXEInterfacesIpv6; //type: Native::Interface::Vlan::CiscoIOSXEInterfacesIpv6
        class CiscoIOSXEInterfacesLogging; //type: Native::Interface::Vlan::CiscoIOSXEInterfacesLogging
        class CiscoIOSXEInterfacesMdix; //type: Native::Interface::Vlan::CiscoIOSXEInterfacesMdix
        class CiscoIOSXEInterfacesMop; //type: Native::Interface::Vlan::CiscoIOSXEInterfacesMop
        class CiscoIOSXEInterfacesInterfaceQos; //type: Native::Interface::Vlan::CiscoIOSXEInterfacesInterfaceQos
        class CiscoIOSXEInterfacesStandby; //type: Native::Interface::Vlan::CiscoIOSXEInterfacesStandby
        class CiscoIOSXEInterfacesAccessSession; //type: Native::Interface::Vlan::CiscoIOSXEInterfacesAccessSession
        class CiscoIOSXEInterfacesStormControl; //type: Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl
        class CiscoIOSXEInterfacesTrust; //type: Native::Interface::Vlan::CiscoIOSXEInterfacesTrust
        class CiscoIOSXEInterfacesUtd; //type: Native::Interface::Vlan::CiscoIOSXEInterfacesUtd
        class CiscoIOSXEInterfacesPriorityQueue; //type: Native::Interface::Vlan::CiscoIOSXEInterfacesPriorityQueue
        class CiscoIOSXEInterfacesRcvQueue; //type: Native::Interface::Vlan::CiscoIOSXEInterfacesRcvQueue
        class CiscoIOSXEInterfacesPeer; //type: Native::Interface::Vlan::CiscoIOSXEInterfacesPeer
        class CiscoIOSXEInterfacesPmPath; //type: Native::Interface::Vlan::CiscoIOSXEInterfacesPmPath
        class Crypto; //type: Native::Interface::Vlan::Crypto
        class Cts; //type: Native::Interface::Vlan::Cts
        class ServicePolicy; //type: Native::Interface::Vlan::ServicePolicy
        class Lisp; //type: Native::Interface::Vlan::Lisp
        class PrivateVlan; //type: Native::Interface::Vlan::PrivateVlan
        class Vrrp; //type: Native::Interface::Vlan::Vrrp
        class ServiceRouting; //type: Native::Interface::Vlan::ServiceRouting
        class Glbp; //type: Native::Interface::Vlan::Glbp
        class CiscoIOSXEInterfacesSwitchportConf_; //type: Native::Interface::Vlan::CiscoIOSXEInterfacesSwitchportConf_
        class CiscoIOSXEInterfacesSwitchport_; //type: Native::Interface::Vlan::CiscoIOSXEInterfacesSwitchport_
        class CiscoIOSXEInterfacesArp_; //type: Native::Interface::Vlan::CiscoIOSXEInterfacesArp_
        class CiscoIOSXEInterfacesBackup_; //type: Native::Interface::Vlan::CiscoIOSXEInterfacesBackup_
        class CiscoIOSXEInterfacesCemoudp_; //type: Native::Interface::Vlan::CiscoIOSXEInterfacesCemoudp_
        class CiscoIOSXEInterfacesCwsTunnel_; //type: Native::Interface::Vlan::CiscoIOSXEInterfacesCwsTunnel_
        class CiscoIOSXEInterfacesL2ProtocolTunnel_; //type: Native::Interface::Vlan::CiscoIOSXEInterfacesL2ProtocolTunnel_
        class CiscoIOSXEInterfacesEncapsulation_; //type: Native::Interface::Vlan::CiscoIOSXEInterfacesEncapsulation_
        class CiscoIOSXEInterfacesFairQueueConf_; //type: Native::Interface::Vlan::CiscoIOSXEInterfacesFairQueueConf_
        class CiscoIOSXEInterfacesFairQueue_; //type: Native::Interface::Vlan::CiscoIOSXEInterfacesFairQueue_
        class CiscoIOSXEInterfacesFlowcontrol_; //type: Native::Interface::Vlan::CiscoIOSXEInterfacesFlowcontrol_
        class CiscoIOSXEInterfacesIsis_; //type: Native::Interface::Vlan::CiscoIOSXEInterfacesIsis_
        class KeepaliveSettings_; //type: Native::Interface::Vlan::KeepaliveSettings_
        class CiscoIOSXEInterfacesBfd_; //type: Native::Interface::Vlan::CiscoIOSXEInterfacesBfd_
        class CiscoIOSXEInterfacesBandwidth_; //type: Native::Interface::Vlan::CiscoIOSXEInterfacesBandwidth_
        class CiscoIOSXEInterfacesDampening_; //type: Native::Interface::Vlan::CiscoIOSXEInterfacesDampening_
        class CiscoIOSXEInterfacesDomain_; //type: Native::Interface::Vlan::CiscoIOSXEInterfacesDomain_
        class CiscoIOSXEInterfacesHoldQueue_; //type: Native::Interface::Vlan::CiscoIOSXEInterfacesHoldQueue_
        class CiscoIOSXEInterfacesMpls_; //type: Native::Interface::Vlan::CiscoIOSXEInterfacesMpls_
        class IpVrf_; //type: Native::Interface::Vlan::IpVrf_
        class Vrf_; //type: Native::Interface::Vlan::Vrf_
        class CiscoIOSXEInterfacesIp_; //type: Native::Interface::Vlan::CiscoIOSXEInterfacesIp_
        class CiscoIOSXEInterfacesIpv6_; //type: Native::Interface::Vlan::CiscoIOSXEInterfacesIpv6_
        class CiscoIOSXEInterfacesLogging_; //type: Native::Interface::Vlan::CiscoIOSXEInterfacesLogging_
        class CiscoIOSXEInterfacesMdix_; //type: Native::Interface::Vlan::CiscoIOSXEInterfacesMdix_
        class CiscoIOSXEInterfacesMop_; //type: Native::Interface::Vlan::CiscoIOSXEInterfacesMop_
        class CiscoIOSXEInterfacesInterfaceQos_; //type: Native::Interface::Vlan::CiscoIOSXEInterfacesInterfaceQos_
        class CiscoIOSXEInterfacesStandby_; //type: Native::Interface::Vlan::CiscoIOSXEInterfacesStandby_
        class CiscoIOSXEInterfacesAccessSession_; //type: Native::Interface::Vlan::CiscoIOSXEInterfacesAccessSession_
        class CiscoIOSXEInterfacesStormControl_; //type: Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl_
        class CiscoIOSXEInterfacesTrust_; //type: Native::Interface::Vlan::CiscoIOSXEInterfacesTrust_
        class CiscoIOSXEInterfacesUtd_; //type: Native::Interface::Vlan::CiscoIOSXEInterfacesUtd_
        class CiscoIOSXEInterfacesPriorityQueue_; //type: Native::Interface::Vlan::CiscoIOSXEInterfacesPriorityQueue_
        class CiscoIOSXEInterfacesRcvQueue_; //type: Native::Interface::Vlan::CiscoIOSXEInterfacesRcvQueue_
        class CiscoIOSXEInterfacesPeer_; //type: Native::Interface::Vlan::CiscoIOSXEInterfacesPeer_
        class CiscoIOSXEInterfacesPmPath_; //type: Native::Interface::Vlan::CiscoIOSXEInterfacesPmPath_
        class ZoneMember; //type: Native::Interface::Vlan::ZoneMember

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIOSXEInterfacesAccessSession> cisco_ios_xe_interfaces_access_session;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIOSXEInterfacesAccessSession_> cisco_ios_xe_interfaces_access_session_;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIOSXEInterfacesArp> cisco_ios_xe_interfaces_arp;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIOSXEInterfacesArp_> cisco_ios_xe_interfaces_arp_;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIOSXEInterfacesBackup> cisco_ios_xe_interfaces_backup;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIOSXEInterfacesBackup_> cisco_ios_xe_interfaces_backup_;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIOSXEInterfacesBandwidth> cisco_ios_xe_interfaces_bandwidth;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIOSXEInterfacesBandwidth_> cisco_ios_xe_interfaces_bandwidth_;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIOSXEInterfacesBfd> cisco_ios_xe_interfaces_bfd;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIOSXEInterfacesBfd_> cisco_ios_xe_interfaces_bfd_;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIOSXEInterfacesCemoudp> cisco_ios_xe_interfaces_cemoudp;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIOSXEInterfacesCemoudp_> cisco_ios_xe_interfaces_cemoudp_;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIOSXEInterfacesCwsTunnel> cisco_ios_xe_interfaces_cws_tunnel;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIOSXEInterfacesCwsTunnel_> cisco_ios_xe_interfaces_cws_tunnel_;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIOSXEInterfacesDampening> cisco_ios_xe_interfaces_dampening;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIOSXEInterfacesDampening_> cisco_ios_xe_interfaces_dampening_;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIOSXEInterfacesDomain> cisco_ios_xe_interfaces_domain;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIOSXEInterfacesDomain_> cisco_ios_xe_interfaces_domain_;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIOSXEInterfacesEncapsulation> cisco_ios_xe_interfaces_encapsulation;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIOSXEInterfacesEncapsulation_> cisco_ios_xe_interfaces_encapsulation_;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIOSXEInterfacesFairQueue> cisco_ios_xe_interfaces_fair_queue;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIOSXEInterfacesFairQueue_> cisco_ios_xe_interfaces_fair_queue_;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIOSXEInterfacesFairQueueConf> cisco_ios_xe_interfaces_fair_queue_conf;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIOSXEInterfacesFairQueueConf_> cisco_ios_xe_interfaces_fair_queue_conf_;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIOSXEInterfacesFlowcontrol> cisco_ios_xe_interfaces_flowcontrol;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIOSXEInterfacesFlowcontrol_> cisco_ios_xe_interfaces_flowcontrol_;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIOSXEInterfacesHoldQueue> > cisco_ios_xe_interfaces_hold_queue;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIOSXEInterfacesHoldQueue_> > cisco_ios_xe_interfaces_hold_queue_;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIOSXEInterfacesInterfaceQos> cisco_ios_xe_interfaces_interface_qos;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIOSXEInterfacesInterfaceQos_> cisco_ios_xe_interfaces_interface_qos_;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIOSXEInterfacesIp> cisco_ios_xe_interfaces_ip;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIOSXEInterfacesIp_> cisco_ios_xe_interfaces_ip_;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIOSXEInterfacesIpv6> cisco_ios_xe_interfaces_ipv6;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIOSXEInterfacesIpv6_> cisco_ios_xe_interfaces_ipv6_;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIOSXEInterfacesIsis> cisco_ios_xe_interfaces_isis;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIOSXEInterfacesIsis_> cisco_ios_xe_interfaces_isis_;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIOSXEInterfacesL2ProtocolTunnel> cisco_ios_xe_interfaces_l2protocol_tunnel; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIOSXEInterfacesL2ProtocolTunnel_> cisco_ios_xe_interfaces_l2protocol_tunnel_; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIOSXEInterfacesLogging> cisco_ios_xe_interfaces_logging;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIOSXEInterfacesLogging_> cisco_ios_xe_interfaces_logging_;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIOSXEInterfacesMdix> cisco_ios_xe_interfaces_mdix;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIOSXEInterfacesMdix_> cisco_ios_xe_interfaces_mdix_;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIOSXEInterfacesMop> cisco_ios_xe_interfaces_mop;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIOSXEInterfacesMop_> cisco_ios_xe_interfaces_mop_;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIOSXEInterfacesMpls> cisco_ios_xe_interfaces_mpls;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIOSXEInterfacesMpls_> cisco_ios_xe_interfaces_mpls_;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIOSXEInterfacesPeer> cisco_ios_xe_interfaces_peer;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIOSXEInterfacesPeer_> cisco_ios_xe_interfaces_peer_;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIOSXEInterfacesPmPath> cisco_ios_xe_interfaces_pm_path;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIOSXEInterfacesPmPath_> cisco_ios_xe_interfaces_pm_path_;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIOSXEInterfacesPriorityQueue> cisco_ios_xe_interfaces_priority_queue;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIOSXEInterfacesPriorityQueue_> cisco_ios_xe_interfaces_priority_queue_;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIOSXEInterfacesRcvQueue> cisco_ios_xe_interfaces_rcv_queue;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIOSXEInterfacesRcvQueue_> cisco_ios_xe_interfaces_rcv_queue_;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIOSXEInterfacesStandby> cisco_ios_xe_interfaces_standby;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIOSXEInterfacesStandby_> cisco_ios_xe_interfaces_standby_;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl> cisco_ios_xe_interfaces_storm_control;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl_> cisco_ios_xe_interfaces_storm_control_;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIOSXEInterfacesSwitchport> cisco_ios_xe_interfaces_switchport;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIOSXEInterfacesSwitchport_> cisco_ios_xe_interfaces_switchport_;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIOSXEInterfacesSwitchportConf> cisco_ios_xe_interfaces_switchport_conf;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIOSXEInterfacesSwitchportConf_> cisco_ios_xe_interfaces_switchport_conf_;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIOSXEInterfacesTrust> cisco_ios_xe_interfaces_trust;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIOSXEInterfacesTrust_> cisco_ios_xe_interfaces_trust_;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIOSXEInterfacesUtd> cisco_ios_xe_interfaces_utd;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIOSXEInterfacesUtd_> cisco_ios_xe_interfaces_utd_;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::Crypto> crypto;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::Cts> cts;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::Glbp> glbp;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::IpVrf> ip_vrf;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::IpVrf_> ip_vrf_;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::KeepaliveSettings> keepalive_settings;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::KeepaliveSettings_> keepalive_settings_;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::Lisp> lisp;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::PrivateVlan> private_vlan;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::ServicePolicy> service_policy;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::ServiceRouting> service_routing;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::Vrf> vrf;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::Vrf_> vrf_;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::Vrrp> > vrrp;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::ZoneMember> zone_member;
                class IfState;
        class ServiceInsertion;
        class IfState_;
        class ServiceInsertion_;

}; // Native::Interface::Vlan


class Native::Interface::Vlan::CiscoIOSXEInterfacesAccessSession : public ydk::Entity
{
    public:
        CiscoIOSXEInterfacesAccessSession();
        ~CiscoIOSXEInterfacesAccessSession();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf closed; //type: empty
        ydk::YLeaf host_mode; //type: HostMode
        class PortControl; //type: Native::Interface::Vlan::CiscoIOSXEInterfacesAccessSession::PortControl

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIOSXEInterfacesAccessSession::PortControl> port_control;
                class HostMode;

}; // Native::Interface::Vlan::CiscoIOSXEInterfacesAccessSession


class Native::Interface::Vlan::CiscoIOSXEInterfacesAccessSession::PortControl : public ydk::Entity
{
    public:
        PortControl();
        ~PortControl();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf auto_; //type: empty

}; // Native::Interface::Vlan::CiscoIOSXEInterfacesAccessSession::PortControl


class Native::Interface::Vlan::CiscoIOSXEInterfacesAccessSession_ : public ydk::Entity
{
    public:
        CiscoIOSXEInterfacesAccessSession_();
        ~CiscoIOSXEInterfacesAccessSession_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf closed; //type: empty
        ydk::YLeaf host_mode; //type: HostMode
        class PortControl; //type: Native::Interface::Vlan::CiscoIOSXEInterfacesAccessSession_::PortControl

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIOSXEInterfacesAccessSession_::PortControl> port_control;
                class HostMode;

}; // Native::Interface::Vlan::CiscoIOSXEInterfacesAccessSession_


class Native::Interface::Vlan::CiscoIOSXEInterfacesAccessSession_::PortControl : public ydk::Entity
{
    public:
        PortControl();
        ~PortControl();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf auto_; //type: empty

}; // Native::Interface::Vlan::CiscoIOSXEInterfacesAccessSession_::PortControl


class Native::Interface::Vlan::CiscoIOSXEInterfacesArp : public ydk::Entity
{
    public:
        CiscoIOSXEInterfacesArp();
        ~CiscoIOSXEInterfacesArp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf timeout; //type: uint32

}; // Native::Interface::Vlan::CiscoIOSXEInterfacesArp


class Native::Interface::Vlan::CiscoIOSXEInterfacesArp_ : public ydk::Entity
{
    public:
        CiscoIOSXEInterfacesArp_();
        ~CiscoIOSXEInterfacesArp_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf timeout; //type: uint32

}; // Native::Interface::Vlan::CiscoIOSXEInterfacesArp_


class Native::Interface::Vlan::CiscoIOSXEInterfacesBackup : public ydk::Entity
{
    public:
        CiscoIOSXEInterfacesBackup();
        ~CiscoIOSXEInterfacesBackup();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Delay; //type: Native::Interface::Vlan::CiscoIOSXEInterfacesBackup::Delay
        class Interface_; //type: Native::Interface::Vlan::CiscoIOSXEInterfacesBackup::Interface_
        class Load; //type: Native::Interface::Vlan::CiscoIOSXEInterfacesBackup::Load

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIOSXEInterfacesBackup::Delay> delay;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIOSXEInterfacesBackup::Interface_> interface;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIOSXEInterfacesBackup::Load> load;
        
}; // Native::Interface::Vlan::CiscoIOSXEInterfacesBackup


class Native::Interface::Vlan::CiscoIOSXEInterfacesBackup::Delay : public ydk::Entity
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

        ydk::YLeaf failure; //type: one of enumeration, uint32
        ydk::YLeaf secondary_disable; //type: one of enumeration, uint32
        class Failure;
        class SecondaryDisable;

}; // Native::Interface::Vlan::CiscoIOSXEInterfacesBackup::Delay


class Native::Interface::Vlan::CiscoIOSXEInterfacesBackup::Interface_ : public ydk::Entity
{
    public:
        Interface_();
        ~Interface_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf appnav_compress; //type: uint16
        ydk::YLeaf appnav_uncompress; //type: uint16
        ydk::YLeaf atm; //type: string
        ydk::YLeaf atm_acr; //type: string
        ydk::YLeaf bdi; //type: string
        ydk::YLeaf cem; //type: string
        ydk::YLeaf cem_acr; //type: uint8
        ydk::YLeaf embedded_service_engine; //type: string
        ydk::YLeaf fastethernet; //type: string
        ydk::YLeaf gigabitethernet; //type: string
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
        class ATMSubinterface; //type: Native::Interface::Vlan::CiscoIOSXEInterfacesBackup::Interface_::ATMSubinterface
        class ATMACRsubinterface; //type: Native::Interface::Vlan::CiscoIOSXEInterfacesBackup::Interface_::ATMACRsubinterface
        class LISPSubinterface; //type: Native::Interface::Vlan::CiscoIOSXEInterfacesBackup::Interface_::LISPSubinterface
        class PortChannelSubinterface; //type: Native::Interface::Vlan::CiscoIOSXEInterfacesBackup::Interface_::PortChannelSubinterface

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIOSXEInterfacesBackup::Interface_::ATMACRsubinterface> atm_acrsubinterface;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIOSXEInterfacesBackup::Interface_::ATMSubinterface> atm_subinterface;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIOSXEInterfacesBackup::Interface_::LISPSubinterface> lisp_subinterface;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIOSXEInterfacesBackup::Interface_::PortChannelSubinterface> port_channel_subinterface;
        
}; // Native::Interface::Vlan::CiscoIOSXEInterfacesBackup::Interface_


class Native::Interface::Vlan::CiscoIOSXEInterfacesBackup::Interface_::ATMACRsubinterface : public ydk::Entity
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

        ydk::YLeaf atm_acr; //type: string

}; // Native::Interface::Vlan::CiscoIOSXEInterfacesBackup::Interface_::ATMACRsubinterface


class Native::Interface::Vlan::CiscoIOSXEInterfacesBackup::Interface_::ATMSubinterface : public ydk::Entity
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

        ydk::YLeaf atm; //type: string

}; // Native::Interface::Vlan::CiscoIOSXEInterfacesBackup::Interface_::ATMSubinterface


class Native::Interface::Vlan::CiscoIOSXEInterfacesBackup::Interface_::LISPSubinterface : public ydk::Entity
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

        ydk::YLeaf lisp; //type: string

}; // Native::Interface::Vlan::CiscoIOSXEInterfacesBackup::Interface_::LISPSubinterface


class Native::Interface::Vlan::CiscoIOSXEInterfacesBackup::Interface_::PortChannelSubinterface : public ydk::Entity
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

        ydk::YLeaf port_channel; //type: string

}; // Native::Interface::Vlan::CiscoIOSXEInterfacesBackup::Interface_::PortChannelSubinterface


class Native::Interface::Vlan::CiscoIOSXEInterfacesBackup::Load : public ydk::Entity
{
    public:
        Load();
        ~Load();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf kickin; //type: one of enumeration, uint32
        ydk::YLeaf kickout; //type: one of enumeration, uint32
        class Kickin;
        class Kickout;

}; // Native::Interface::Vlan::CiscoIOSXEInterfacesBackup::Load


class Native::Interface::Vlan::CiscoIOSXEInterfacesBackup_ : public ydk::Entity
{
    public:
        CiscoIOSXEInterfacesBackup_();
        ~CiscoIOSXEInterfacesBackup_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Delay; //type: Native::Interface::Vlan::CiscoIOSXEInterfacesBackup_::Delay
        class Interface_; //type: Native::Interface::Vlan::CiscoIOSXEInterfacesBackup_::Interface_
        class Load; //type: Native::Interface::Vlan::CiscoIOSXEInterfacesBackup_::Load

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIOSXEInterfacesBackup_::Delay> delay;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIOSXEInterfacesBackup_::Interface_> interface;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIOSXEInterfacesBackup_::Load> load;
        
}; // Native::Interface::Vlan::CiscoIOSXEInterfacesBackup_


class Native::Interface::Vlan::CiscoIOSXEInterfacesBackup_::Delay : public ydk::Entity
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

        ydk::YLeaf failure; //type: one of enumeration, uint32
        ydk::YLeaf secondary_disable; //type: one of enumeration, uint32
        class Failure;
        class SecondaryDisable;

}; // Native::Interface::Vlan::CiscoIOSXEInterfacesBackup_::Delay


class Native::Interface::Vlan::CiscoIOSXEInterfacesBackup_::Interface_ : public ydk::Entity
{
    public:
        Interface_();
        ~Interface_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf appnav_compress; //type: uint16
        ydk::YLeaf appnav_uncompress; //type: uint16
        ydk::YLeaf atm; //type: string
        ydk::YLeaf atm_acr; //type: string
        ydk::YLeaf bdi; //type: string
        ydk::YLeaf cem; //type: string
        ydk::YLeaf cem_acr; //type: uint8
        ydk::YLeaf embedded_service_engine; //type: string
        ydk::YLeaf fastethernet; //type: string
        ydk::YLeaf gigabitethernet; //type: string
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
        class ATMSubinterface; //type: Native::Interface::Vlan::CiscoIOSXEInterfacesBackup_::Interface_::ATMSubinterface
        class ATMACRsubinterface; //type: Native::Interface::Vlan::CiscoIOSXEInterfacesBackup_::Interface_::ATMACRsubinterface
        class LISPSubinterface; //type: Native::Interface::Vlan::CiscoIOSXEInterfacesBackup_::Interface_::LISPSubinterface
        class PortChannelSubinterface; //type: Native::Interface::Vlan::CiscoIOSXEInterfacesBackup_::Interface_::PortChannelSubinterface

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIOSXEInterfacesBackup_::Interface_::ATMACRsubinterface> atm_acrsubinterface;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIOSXEInterfacesBackup_::Interface_::ATMSubinterface> atm_subinterface;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIOSXEInterfacesBackup_::Interface_::LISPSubinterface> lisp_subinterface;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIOSXEInterfacesBackup_::Interface_::PortChannelSubinterface> port_channel_subinterface;
        
}; // Native::Interface::Vlan::CiscoIOSXEInterfacesBackup_::Interface_


class Native::Interface::Vlan::CiscoIOSXEInterfacesBackup_::Interface_::ATMACRsubinterface : public ydk::Entity
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

        ydk::YLeaf atm_acr; //type: string

}; // Native::Interface::Vlan::CiscoIOSXEInterfacesBackup_::Interface_::ATMACRsubinterface


class Native::Interface::Vlan::CiscoIOSXEInterfacesBackup_::Interface_::ATMSubinterface : public ydk::Entity
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

        ydk::YLeaf atm; //type: string

}; // Native::Interface::Vlan::CiscoIOSXEInterfacesBackup_::Interface_::ATMSubinterface


class Native::Interface::Vlan::CiscoIOSXEInterfacesBackup_::Interface_::LISPSubinterface : public ydk::Entity
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

        ydk::YLeaf lisp; //type: string

}; // Native::Interface::Vlan::CiscoIOSXEInterfacesBackup_::Interface_::LISPSubinterface


class Native::Interface::Vlan::CiscoIOSXEInterfacesBackup_::Interface_::PortChannelSubinterface : public ydk::Entity
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

        ydk::YLeaf port_channel; //type: string

}; // Native::Interface::Vlan::CiscoIOSXEInterfacesBackup_::Interface_::PortChannelSubinterface


class Native::Interface::Vlan::CiscoIOSXEInterfacesBackup_::Load : public ydk::Entity
{
    public:
        Load();
        ~Load();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf kickin; //type: one of enumeration, uint32
        ydk::YLeaf kickout; //type: one of enumeration, uint32
        class Kickin;
        class Kickout;

}; // Native::Interface::Vlan::CiscoIOSXEInterfacesBackup_::Load


class Native::Interface::Vlan::CiscoIOSXEInterfacesBandwidth : public ydk::Entity
{
    public:
        CiscoIOSXEInterfacesBandwidth();
        ~CiscoIOSXEInterfacesBandwidth();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf qos_reference; //type: uint32
        ydk::YLeaf kilobits; //type: uint32
        class Receive; //type: Native::Interface::Vlan::CiscoIOSXEInterfacesBandwidth::Receive
        class Inherit; //type: Native::Interface::Vlan::CiscoIOSXEInterfacesBandwidth::Inherit

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIOSXEInterfacesBandwidth::Inherit> inherit; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIOSXEInterfacesBandwidth::Receive> receive;
        
}; // Native::Interface::Vlan::CiscoIOSXEInterfacesBandwidth


class Native::Interface::Vlan::CiscoIOSXEInterfacesBandwidth::Inherit : public ydk::Entity
{
    public:
        Inherit();
        ~Inherit();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf kilobits; //type: uint32

}; // Native::Interface::Vlan::CiscoIOSXEInterfacesBandwidth::Inherit


class Native::Interface::Vlan::CiscoIOSXEInterfacesBandwidth::Receive : public ydk::Entity
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

        ydk::YLeaf inherit; //type: empty
        ydk::YLeaf kilobits; //type: uint32

}; // Native::Interface::Vlan::CiscoIOSXEInterfacesBandwidth::Receive


class Native::Interface::Vlan::CiscoIOSXEInterfacesBandwidth_ : public ydk::Entity
{
    public:
        CiscoIOSXEInterfacesBandwidth_();
        ~CiscoIOSXEInterfacesBandwidth_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf qos_reference; //type: uint32
        ydk::YLeaf kilobits; //type: uint32
        class Receive; //type: Native::Interface::Vlan::CiscoIOSXEInterfacesBandwidth_::Receive
        class Inherit; //type: Native::Interface::Vlan::CiscoIOSXEInterfacesBandwidth_::Inherit

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIOSXEInterfacesBandwidth_::Inherit> inherit; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIOSXEInterfacesBandwidth_::Receive> receive;
        
}; // Native::Interface::Vlan::CiscoIOSXEInterfacesBandwidth_


class Native::Interface::Vlan::CiscoIOSXEInterfacesBandwidth_::Inherit : public ydk::Entity
{
    public:
        Inherit();
        ~Inherit();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf kilobits; //type: uint32

}; // Native::Interface::Vlan::CiscoIOSXEInterfacesBandwidth_::Inherit


class Native::Interface::Vlan::CiscoIOSXEInterfacesBandwidth_::Receive : public ydk::Entity
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

        ydk::YLeaf inherit; //type: empty
        ydk::YLeaf kilobits; //type: uint32

}; // Native::Interface::Vlan::CiscoIOSXEInterfacesBandwidth_::Receive


class Native::Interface::Vlan::CiscoIOSXEInterfacesBfd : public ydk::Entity
{
    public:
        CiscoIOSXEInterfacesBfd();
        ~CiscoIOSXEInterfacesBfd();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;


}; // Native::Interface::Vlan::CiscoIOSXEInterfacesBfd


class Native::Interface::Vlan::CiscoIOSXEInterfacesBfd_ : public ydk::Entity
{
    public:
        CiscoIOSXEInterfacesBfd_();
        ~CiscoIOSXEInterfacesBfd_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;


}; // Native::Interface::Vlan::CiscoIOSXEInterfacesBfd_


class Native::Interface::Vlan::CiscoIOSXEInterfacesCemoudp : public ydk::Entity
{
    public:
        CiscoIOSXEInterfacesCemoudp();
        ~CiscoIOSXEInterfacesCemoudp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Reserve; //type: Native::Interface::Vlan::CiscoIOSXEInterfacesCemoudp::Reserve

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIOSXEInterfacesCemoudp::Reserve> reserve;
        
}; // Native::Interface::Vlan::CiscoIOSXEInterfacesCemoudp


class Native::Interface::Vlan::CiscoIOSXEInterfacesCemoudp::Reserve : public ydk::Entity
{
    public:
        Reserve();
        ~Reserve();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf acr; //type: uint8

}; // Native::Interface::Vlan::CiscoIOSXEInterfacesCemoudp::Reserve


class Native::Interface::Vlan::CiscoIOSXEInterfacesCemoudp_ : public ydk::Entity
{
    public:
        CiscoIOSXEInterfacesCemoudp_();
        ~CiscoIOSXEInterfacesCemoudp_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Reserve; //type: Native::Interface::Vlan::CiscoIOSXEInterfacesCemoudp_::Reserve

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIOSXEInterfacesCemoudp_::Reserve> reserve;
        
}; // Native::Interface::Vlan::CiscoIOSXEInterfacesCemoudp_


class Native::Interface::Vlan::CiscoIOSXEInterfacesCemoudp_::Reserve : public ydk::Entity
{
    public:
        Reserve();
        ~Reserve();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf acr; //type: uint8

}; // Native::Interface::Vlan::CiscoIOSXEInterfacesCemoudp_::Reserve


class Native::Interface::Vlan::CiscoIOSXEInterfacesCwsTunnel : public ydk::Entity
{
    public:
        CiscoIOSXEInterfacesCwsTunnel();
        ~CiscoIOSXEInterfacesCwsTunnel();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf in; //type: empty
        class Out; //type: Native::Interface::Vlan::CiscoIOSXEInterfacesCwsTunnel::Out

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIOSXEInterfacesCwsTunnel::Out> out;
        
}; // Native::Interface::Vlan::CiscoIOSXEInterfacesCwsTunnel


class Native::Interface::Vlan::CiscoIOSXEInterfacesCwsTunnel::Out : public ydk::Entity
{
    public:
        Out();
        ~Out();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tunnel_number; //type: uint16

}; // Native::Interface::Vlan::CiscoIOSXEInterfacesCwsTunnel::Out


class Native::Interface::Vlan::CiscoIOSXEInterfacesCwsTunnel_ : public ydk::Entity
{
    public:
        CiscoIOSXEInterfacesCwsTunnel_();
        ~CiscoIOSXEInterfacesCwsTunnel_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf in; //type: empty
        class Out; //type: Native::Interface::Vlan::CiscoIOSXEInterfacesCwsTunnel_::Out

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIOSXEInterfacesCwsTunnel_::Out> out;
        
}; // Native::Interface::Vlan::CiscoIOSXEInterfacesCwsTunnel_


class Native::Interface::Vlan::CiscoIOSXEInterfacesCwsTunnel_::Out : public ydk::Entity
{
    public:
        Out();
        ~Out();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tunnel_number; //type: uint16

}; // Native::Interface::Vlan::CiscoIOSXEInterfacesCwsTunnel_::Out


class Native::Interface::Vlan::CiscoIOSXEInterfacesDampening : public ydk::Entity
{
    public:
        CiscoIOSXEInterfacesDampening();
        ~CiscoIOSXEInterfacesDampening();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf dampening_time; //type: uint16
        ydk::YLeaf start_reusing_time; //type: uint16
        ydk::YLeaf start_supressing_time; //type: uint16
        ydk::YLeaf maximum_supressing_time; //type: uint16
        class Restart; //type: Native::Interface::Vlan::CiscoIOSXEInterfacesDampening::Restart

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIOSXEInterfacesDampening::Restart> restart;
        
}; // Native::Interface::Vlan::CiscoIOSXEInterfacesDampening


class Native::Interface::Vlan::CiscoIOSXEInterfacesDampening::Restart : public ydk::Entity
{
    public:
        Restart();
        ~Restart();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf restart; //type: empty
        ydk::YLeaf restart_penalty; //type: uint16

}; // Native::Interface::Vlan::CiscoIOSXEInterfacesDampening::Restart


class Native::Interface::Vlan::CiscoIOSXEInterfacesDampening_ : public ydk::Entity
{
    public:
        CiscoIOSXEInterfacesDampening_();
        ~CiscoIOSXEInterfacesDampening_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf dampening_time; //type: uint16
        ydk::YLeaf start_reusing_time; //type: uint16
        ydk::YLeaf start_supressing_time; //type: uint16
        ydk::YLeaf maximum_supressing_time; //type: uint16
        class Restart; //type: Native::Interface::Vlan::CiscoIOSXEInterfacesDampening_::Restart

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIOSXEInterfacesDampening_::Restart> restart;
        
}; // Native::Interface::Vlan::CiscoIOSXEInterfacesDampening_


class Native::Interface::Vlan::CiscoIOSXEInterfacesDampening_::Restart : public ydk::Entity
{
    public:
        Restart();
        ~Restart();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf restart; //type: empty
        ydk::YLeaf restart_penalty; //type: uint16

}; // Native::Interface::Vlan::CiscoIOSXEInterfacesDampening_::Restart


class Native::Interface::Vlan::CiscoIOSXEInterfacesDomain : public ydk::Entity
{
    public:
        CiscoIOSXEInterfacesDomain();
        ~CiscoIOSXEInterfacesDomain();

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
        ydk::YLeaf path; //type: string
        ydk::YLeaf internet_bound; //type: empty
        ydk::YLeaf path_id; //type: uint8
        ydk::YLeaf path_last_resort; //type: empty
        ydk::YLeaf zero_sla; //type: empty

}; // Native::Interface::Vlan::CiscoIOSXEInterfacesDomain


class Native::Interface::Vlan::CiscoIOSXEInterfacesDomain_ : public ydk::Entity
{
    public:
        CiscoIOSXEInterfacesDomain_();
        ~CiscoIOSXEInterfacesDomain_();

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
        ydk::YLeaf path; //type: string
        ydk::YLeaf internet_bound; //type: empty
        ydk::YLeaf path_id; //type: uint8
        ydk::YLeaf path_last_resort; //type: empty
        ydk::YLeaf zero_sla; //type: empty

}; // Native::Interface::Vlan::CiscoIOSXEInterfacesDomain_


class Native::Interface::Vlan::CiscoIOSXEInterfacesEncapsulation : public ydk::Entity
{
    public:
        CiscoIOSXEInterfacesEncapsulation();
        ~CiscoIOSXEInterfacesEncapsulation();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Dot1Q; //type: Native::Interface::Vlan::CiscoIOSXEInterfacesEncapsulation::Dot1Q
        class Isl; //type: Native::Interface::Vlan::CiscoIOSXEInterfacesEncapsulation::Isl
        class Ppp; //type: Native::Interface::Vlan::CiscoIOSXEInterfacesEncapsulation::Ppp
        class Slip; //type: Native::Interface::Vlan::CiscoIOSXEInterfacesEncapsulation::Slip
        class FrameRelay; //type: Native::Interface::Vlan::CiscoIOSXEInterfacesEncapsulation::FrameRelay

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIOSXEInterfacesEncapsulation::Dot1Q> dot1q;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIOSXEInterfacesEncapsulation::FrameRelay> frame_relay; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIOSXEInterfacesEncapsulation::Isl> isl;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIOSXEInterfacesEncapsulation::Ppp> ppp; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIOSXEInterfacesEncapsulation::Slip> slip; // presence node
        
}; // Native::Interface::Vlan::CiscoIOSXEInterfacesEncapsulation


class Native::Interface::Vlan::CiscoIOSXEInterfacesEncapsulation::Dot1Q : public ydk::Entity
{
    public:
        Dot1Q();
        ~Dot1Q();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf vlan_id; //type: uint16
        ydk::YLeaf native; //type: empty

}; // Native::Interface::Vlan::CiscoIOSXEInterfacesEncapsulation::Dot1Q


class Native::Interface::Vlan::CiscoIOSXEInterfacesEncapsulation::FrameRelay : public ydk::Entity
{
    public:
        FrameRelay();
        ~FrameRelay();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ietf; //type: empty

}; // Native::Interface::Vlan::CiscoIOSXEInterfacesEncapsulation::FrameRelay


class Native::Interface::Vlan::CiscoIOSXEInterfacesEncapsulation::Isl : public ydk::Entity
{
    public:
        Isl();
        ~Isl();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf vlan_id; //type: uint16

}; // Native::Interface::Vlan::CiscoIOSXEInterfacesEncapsulation::Isl


class Native::Interface::Vlan::CiscoIOSXEInterfacesEncapsulation::Ppp : public ydk::Entity
{
    public:
        Ppp();
        ~Ppp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;


}; // Native::Interface::Vlan::CiscoIOSXEInterfacesEncapsulation::Ppp


class Native::Interface::Vlan::CiscoIOSXEInterfacesEncapsulation::Slip : public ydk::Entity
{
    public:
        Slip();
        ~Slip();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;


}; // Native::Interface::Vlan::CiscoIOSXEInterfacesEncapsulation::Slip


class Native::Interface::Vlan::CiscoIOSXEInterfacesEncapsulation_ : public ydk::Entity
{
    public:
        CiscoIOSXEInterfacesEncapsulation_();
        ~CiscoIOSXEInterfacesEncapsulation_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Dot1Q; //type: Native::Interface::Vlan::CiscoIOSXEInterfacesEncapsulation_::Dot1Q
        class Isl; //type: Native::Interface::Vlan::CiscoIOSXEInterfacesEncapsulation_::Isl
        class Ppp; //type: Native::Interface::Vlan::CiscoIOSXEInterfacesEncapsulation_::Ppp
        class Slip; //type: Native::Interface::Vlan::CiscoIOSXEInterfacesEncapsulation_::Slip
        class FrameRelay; //type: Native::Interface::Vlan::CiscoIOSXEInterfacesEncapsulation_::FrameRelay

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIOSXEInterfacesEncapsulation_::Dot1Q> dot1q;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIOSXEInterfacesEncapsulation_::FrameRelay> frame_relay; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIOSXEInterfacesEncapsulation_::Isl> isl;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIOSXEInterfacesEncapsulation_::Ppp> ppp; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIOSXEInterfacesEncapsulation_::Slip> slip; // presence node
        
}; // Native::Interface::Vlan::CiscoIOSXEInterfacesEncapsulation_


class Native::Interface::Vlan::CiscoIOSXEInterfacesEncapsulation_::Dot1Q : public ydk::Entity
{
    public:
        Dot1Q();
        ~Dot1Q();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf vlan_id; //type: uint16
        ydk::YLeaf native; //type: empty

}; // Native::Interface::Vlan::CiscoIOSXEInterfacesEncapsulation_::Dot1Q


class Native::Interface::Vlan::CiscoIOSXEInterfacesEncapsulation_::FrameRelay : public ydk::Entity
{
    public:
        FrameRelay();
        ~FrameRelay();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ietf; //type: empty

}; // Native::Interface::Vlan::CiscoIOSXEInterfacesEncapsulation_::FrameRelay


class Native::Interface::Vlan::CiscoIOSXEInterfacesEncapsulation_::Isl : public ydk::Entity
{
    public:
        Isl();
        ~Isl();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf vlan_id; //type: uint16

}; // Native::Interface::Vlan::CiscoIOSXEInterfacesEncapsulation_::Isl


class Native::Interface::Vlan::CiscoIOSXEInterfacesEncapsulation_::Ppp : public ydk::Entity
{
    public:
        Ppp();
        ~Ppp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;


}; // Native::Interface::Vlan::CiscoIOSXEInterfacesEncapsulation_::Ppp


class Native::Interface::Vlan::CiscoIOSXEInterfacesEncapsulation_::Slip : public ydk::Entity
{
    public:
        Slip();
        ~Slip();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;


}; // Native::Interface::Vlan::CiscoIOSXEInterfacesEncapsulation_::Slip


class Native::Interface::Vlan::CiscoIOSXEInterfacesFairQueue : public ydk::Entity
{
    public:
        CiscoIOSXEInterfacesFairQueue();
        ~CiscoIOSXEInterfacesFairQueue();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf incomplete; //type: empty

}; // Native::Interface::Vlan::CiscoIOSXEInterfacesFairQueue


class Native::Interface::Vlan::CiscoIOSXEInterfacesFairQueueConf : public ydk::Entity
{
    public:
        CiscoIOSXEInterfacesFairQueueConf();
        ~CiscoIOSXEInterfacesFairQueueConf();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf fair_queue; //type: boolean

}; // Native::Interface::Vlan::CiscoIOSXEInterfacesFairQueueConf


class Native::Interface::Vlan::CiscoIOSXEInterfacesFairQueueConf_ : public ydk::Entity
{
    public:
        CiscoIOSXEInterfacesFairQueueConf_();
        ~CiscoIOSXEInterfacesFairQueueConf_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf fair_queue; //type: boolean

}; // Native::Interface::Vlan::CiscoIOSXEInterfacesFairQueueConf_


class Native::Interface::Vlan::CiscoIOSXEInterfacesFairQueue_ : public ydk::Entity
{
    public:
        CiscoIOSXEInterfacesFairQueue_();
        ~CiscoIOSXEInterfacesFairQueue_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf incomplete; //type: empty

}; // Native::Interface::Vlan::CiscoIOSXEInterfacesFairQueue_


class Native::Interface::Vlan::CiscoIOSXEInterfacesFlowcontrol : public ydk::Entity
{
    public:
        CiscoIOSXEInterfacesFlowcontrol();
        ~CiscoIOSXEInterfacesFlowcontrol();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf receive; //type: Receive
        ydk::YLeaf send; //type: Send
        class Receive;
        class Send;

}; // Native::Interface::Vlan::CiscoIOSXEInterfacesFlowcontrol


class Native::Interface::Vlan::CiscoIOSXEInterfacesFlowcontrol_ : public ydk::Entity
{
    public:
        CiscoIOSXEInterfacesFlowcontrol_();
        ~CiscoIOSXEInterfacesFlowcontrol_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf receive; //type: Receive
        ydk::YLeaf send; //type: Send
        class Receive;
        class Send;

}; // Native::Interface::Vlan::CiscoIOSXEInterfacesFlowcontrol_


class Native::Interface::Vlan::CiscoIOSXEInterfacesHoldQueue : public ydk::Entity
{
    public:
        CiscoIOSXEInterfacesHoldQueue();
        ~CiscoIOSXEInterfacesHoldQueue();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf direction; //type: Direction
        ydk::YLeaf queue_length; //type: uint16
        class Direction;

}; // Native::Interface::Vlan::CiscoIOSXEInterfacesHoldQueue


class Native::Interface::Vlan::CiscoIOSXEInterfacesHoldQueue_ : public ydk::Entity
{
    public:
        CiscoIOSXEInterfacesHoldQueue_();
        ~CiscoIOSXEInterfacesHoldQueue_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf direction; //type: Direction
        ydk::YLeaf queue_length; //type: uint16
        class Direction;

}; // Native::Interface::Vlan::CiscoIOSXEInterfacesHoldQueue_


class Native::Interface::Vlan::CiscoIOSXEInterfacesInterfaceQos : public ydk::Entity
{
    public:
        CiscoIOSXEInterfacesInterfaceQos();
        ~CiscoIOSXEInterfacesInterfaceQos();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Trust; //type: Native::Interface::Vlan::CiscoIOSXEInterfacesInterfaceQos::Trust

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIOSXEInterfacesInterfaceQos::Trust> trust;
        
}; // Native::Interface::Vlan::CiscoIOSXEInterfacesInterfaceQos


class Native::Interface::Vlan::CiscoIOSXEInterfacesInterfaceQos::Trust : public ydk::Entity
{
    public:
        Trust();
        ~Trust();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf device; //type: Device
        class Device;

}; // Native::Interface::Vlan::CiscoIOSXEInterfacesInterfaceQos::Trust


class Native::Interface::Vlan::CiscoIOSXEInterfacesInterfaceQos_ : public ydk::Entity
{
    public:
        CiscoIOSXEInterfacesInterfaceQos_();
        ~CiscoIOSXEInterfacesInterfaceQos_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Trust; //type: Native::Interface::Vlan::CiscoIOSXEInterfacesInterfaceQos_::Trust

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIOSXEInterfacesInterfaceQos_::Trust> trust;
        
}; // Native::Interface::Vlan::CiscoIOSXEInterfacesInterfaceQos_


class Native::Interface::Vlan::CiscoIOSXEInterfacesInterfaceQos_::Trust : public ydk::Entity
{
    public:
        Trust();
        ~Trust();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf device; //type: Device
        class Device;

}; // Native::Interface::Vlan::CiscoIOSXEInterfacesInterfaceQos_::Trust


class Native::Interface::Vlan::CiscoIOSXEInterfacesIp : public ydk::Entity
{
    public:
        CiscoIOSXEInterfacesIp();
        ~CiscoIOSXEInterfacesIp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf admission; //type: string
        ydk::YLeaf unnumbered; //type: string
        ydk::YLeaf directed_broadcast; //type: one of string, uint16
        ydk::YLeaf local_proxy_arp; //type: empty
        ydk::YLeaf proxy_arp; //type: boolean
        ydk::YLeaf redirects; //type: boolean
        ydk::YLeaf mtu; //type: uint16
        ydk::YLeaf mroute_cache; //type: boolean
        class AccessGroup; //type: Native::Interface::Vlan::CiscoIOSXEInterfacesIp::AccessGroup
        class Arp; //type: Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Arp
        class Vrf; //type: Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Vrf
        class NoAddress; //type: Native::Interface::Vlan::CiscoIOSXEInterfacesIp::NoAddress
        class Address; //type: Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Address
        class HelloInterval; //type: Native::Interface::Vlan::CiscoIOSXEInterfacesIp::HelloInterval
        class Authentication; //type: Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Authentication
        class HoldTime; //type: Native::Interface::Vlan::CiscoIOSXEInterfacesIp::HoldTime
        class HelperAddress; //type: Native::Interface::Vlan::CiscoIOSXEInterfacesIp::HelperAddress
        class Pim; //type: Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Pim
        class Policy; //type: Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Policy
        class Rip; //type: Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Rip
        class RouteCacheConf; //type: Native::Interface::Vlan::CiscoIOSXEInterfacesIp::RouteCacheConf
        class RouteCache; //type: Native::Interface::Vlan::CiscoIOSXEInterfacesIp::RouteCache
        class Router; //type: Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Router
        class Tcp; //type: Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Tcp
        class VirtualReassembly; //type: Native::Interface::Vlan::CiscoIOSXEInterfacesIp::VirtualReassembly
        class Dhcp; //type: Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Dhcp
        class SummaryAddress; //type: Native::Interface::Vlan::CiscoIOSXEInterfacesIp::SummaryAddress
        class Verify; //type: Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Verify
        class Nbar; //type: Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Nbar

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIOSXEInterfacesIp::AccessGroup> access_group;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Address> address;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Arp> arp;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Authentication> authentication;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Dhcp> dhcp;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIOSXEInterfacesIp::HelloInterval> hello_interval;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIOSXEInterfacesIp::HelperAddress> > helper_address;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIOSXEInterfacesIp::HoldTime> hold_time;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Nbar> nbar;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIOSXEInterfacesIp::NoAddress> no_address;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Pim> pim;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Policy> policy;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Rip> rip;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIOSXEInterfacesIp::RouteCache> route_cache; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIOSXEInterfacesIp::RouteCacheConf> route_cache_conf;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Router> router;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIOSXEInterfacesIp::SummaryAddress> summary_address;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Tcp> tcp;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Verify> verify;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIOSXEInterfacesIp::VirtualReassembly> virtual_reassembly;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Vrf> vrf;
        
}; // Native::Interface::Vlan::CiscoIOSXEInterfacesIp


class Native::Interface::Vlan::CiscoIOSXEInterfacesIp::AccessGroup : public ydk::Entity
{
    public:
        AccessGroup();
        ~AccessGroup();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class In; //type: Native::Interface::Vlan::CiscoIOSXEInterfacesIp::AccessGroup::In
        class Out; //type: Native::Interface::Vlan::CiscoIOSXEInterfacesIp::AccessGroup::Out

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIOSXEInterfacesIp::AccessGroup::In> in;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIOSXEInterfacesIp::AccessGroup::Out> out;
        
}; // Native::Interface::Vlan::CiscoIOSXEInterfacesIp::AccessGroup


class Native::Interface::Vlan::CiscoIOSXEInterfacesIp::AccessGroup::In : public ydk::Entity
{
    public:
        In();
        ~In();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class CommonAcl; //type: Native::Interface::Vlan::CiscoIOSXEInterfacesIp::AccessGroup::In::CommonAcl
        class Acl; //type: Native::Interface::Vlan::CiscoIOSXEInterfacesIp::AccessGroup::In::Acl

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIOSXEInterfacesIp::AccessGroup::In::Acl> acl;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIOSXEInterfacesIp::AccessGroup::In::CommonAcl> common_acl;
        
}; // Native::Interface::Vlan::CiscoIOSXEInterfacesIp::AccessGroup::In


class Native::Interface::Vlan::CiscoIOSXEInterfacesIp::AccessGroup::In::Acl : public ydk::Entity
{
    public:
        Acl();
        ~Acl();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf acl_name; //type: one of string, uint16
        ydk::YLeaf in; //type: empty

}; // Native::Interface::Vlan::CiscoIOSXEInterfacesIp::AccessGroup::In::Acl


class Native::Interface::Vlan::CiscoIOSXEInterfacesIp::AccessGroup::In::CommonAcl : public ydk::Entity
{
    public:
        CommonAcl();
        ~CommonAcl();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf common; //type: one of string, uint16
        ydk::YLeaf in; //type: empty

}; // Native::Interface::Vlan::CiscoIOSXEInterfacesIp::AccessGroup::In::CommonAcl


class Native::Interface::Vlan::CiscoIOSXEInterfacesIp::AccessGroup::Out : public ydk::Entity
{
    public:
        Out();
        ~Out();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class CommonAcl; //type: Native::Interface::Vlan::CiscoIOSXEInterfacesIp::AccessGroup::Out::CommonAcl
        class Acl; //type: Native::Interface::Vlan::CiscoIOSXEInterfacesIp::AccessGroup::Out::Acl

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIOSXEInterfacesIp::AccessGroup::Out::Acl> acl;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIOSXEInterfacesIp::AccessGroup::Out::CommonAcl> common_acl;
        
}; // Native::Interface::Vlan::CiscoIOSXEInterfacesIp::AccessGroup::Out


class Native::Interface::Vlan::CiscoIOSXEInterfacesIp::AccessGroup::Out::Acl : public ydk::Entity
{
    public:
        Acl();
        ~Acl();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf acl_name; //type: one of string, uint16
        ydk::YLeaf out; //type: empty

}; // Native::Interface::Vlan::CiscoIOSXEInterfacesIp::AccessGroup::Out::Acl


class Native::Interface::Vlan::CiscoIOSXEInterfacesIp::AccessGroup::Out::CommonAcl : public ydk::Entity
{
    public:
        CommonAcl();
        ~CommonAcl();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf common; //type: one of string, uint16
        ydk::YLeaf out; //type: empty

}; // Native::Interface::Vlan::CiscoIOSXEInterfacesIp::AccessGroup::Out::CommonAcl


class Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Address : public ydk::Entity
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

        ydk::YLeaf negotiated; //type: empty
        class Primary; //type: Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Address::Primary
        class Secondary; //type: Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Address::Secondary
        class Dhcp; //type: Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Address::Dhcp

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Address::Dhcp> dhcp; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Address::Primary> primary;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Address::Secondary> > secondary;
        
}; // Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Address


class Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Address::Dhcp : public ydk::Entity
{
    public:
        Dhcp();
        ~Dhcp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf hostname; //type: string
        class ClientId; //type: Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Address::Dhcp::ClientId

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Address::Dhcp::ClientId> client_id;
        
}; // Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Address::Dhcp


class Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Address::Dhcp::ClientId : public ydk::Entity
{
    public:
        ClientId();
        ~ClientId();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf fastethernet; //type: string
        ydk::YLeaf gigabitethernet; //type: string
        ydk::YLeaf port_channel; //type: uint32
        ydk::YLeaf tengigabitethernet; //type: string
        ydk::YLeaf fortygigabitethernet; //type: string
        ydk::YLeaf vlan; //type: uint16

}; // Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Address::Dhcp::ClientId


class Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Address::Primary : public ydk::Entity
{
    public:
        Primary();
        ~Primary();

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
        ydk::YLeaf mask; //type: string

}; // Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Address::Primary


class Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Address::Secondary : public ydk::Entity
{
    public:
        Secondary();
        ~Secondary();

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
        ydk::YLeaf mask; //type: string
        ydk::YLeaf secondary; //type: empty

}; // Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Address::Secondary


class Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Arp : public ydk::Entity
{
    public:
        Arp();
        ~Arp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Inspection; //type: Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Arp::Inspection

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Arp::Inspection> inspection;
        
}; // Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Arp


class Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Arp::Inspection : public ydk::Entity
{
    public:
        Inspection();
        ~Inspection();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf trust; //type: empty
        class Limit; //type: Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Arp::Inspection::Limit

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Arp::Inspection::Limit> limit;
        
}; // Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Arp::Inspection


class Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Arp::Inspection::Limit : public ydk::Entity
{
    public:
        Limit();
        ~Limit();

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
        ydk::YLeaf rate; //type: uint32

}; // Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Arp::Inspection::Limit


class Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Authentication : public ydk::Entity
{
    public:
        Authentication();
        ~Authentication();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class KeyChain; //type: Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Authentication::KeyChain
        class Mode; //type: Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Authentication::Mode

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Authentication::KeyChain> key_chain;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Authentication::Mode> mode;
        
}; // Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Authentication


class Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Authentication::KeyChain : public ydk::Entity
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

        ydk::YLeaf eigrp; //type: uint16
        ydk::YLeaf name; //type: string

}; // Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Authentication::KeyChain


class Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Authentication::Mode : public ydk::Entity
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

        ydk::YLeaf eigrp; //type: uint16
        ydk::YLeaf md5; //type: empty

}; // Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Authentication::Mode


class Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Dhcp : public ydk::Entity
{
    public:
        Dhcp();
        ~Dhcp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Client; //type: Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Dhcp::Client
        class Relay; //type: Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Dhcp::Relay
        class Snooping; //type: Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Dhcp::Snooping

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Dhcp::Client> client;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Dhcp::Relay> relay;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Dhcp::Snooping> snooping;
        
}; // Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Dhcp


class Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Dhcp::Client : public ydk::Entity
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

        ydk::YLeaf hostname; //type: string

}; // Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Dhcp::Client


class Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Dhcp::Relay : public ydk::Entity
{
    public:
        Relay();
        ~Relay();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf source_interface; //type: string
        class Information; //type: Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Dhcp::Relay::Information

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Dhcp::Relay::Information> information;
        
}; // Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Dhcp::Relay


class Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Dhcp::Relay::Information : public ydk::Entity
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

        ydk::YLeaf policy_action; //type: PolicyAction
        ydk::YLeaf trusted; //type: empty
        class CheckReply; //type: Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Dhcp::Relay::Information::CheckReply
        class Option; //type: Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Dhcp::Relay::Information::Option
        class OptionInsert; //type: Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Dhcp::Relay::Information::OptionInsert

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Dhcp::Relay::Information::CheckReply> check_reply; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Dhcp::Relay::Information::Option> option;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Dhcp::Relay::Information::OptionInsert> option_insert; // presence node
                class PolicyAction;

}; // Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Dhcp::Relay::Information


class Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Dhcp::Relay::Information::CheckReply : public ydk::Entity
{
    public:
        CheckReply();
        ~CheckReply();

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

}; // Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Dhcp::Relay::Information::CheckReply


class Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Dhcp::Relay::Information::Option : public ydk::Entity
{
    public:
        Option();
        ~Option();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf subscriber_id; //type: string

}; // Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Dhcp::Relay::Information::Option


class Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Dhcp::Relay::Information::OptionInsert : public ydk::Entity
{
    public:
        OptionInsert();
        ~OptionInsert();

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

}; // Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Dhcp::Relay::Information::OptionInsert


class Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Dhcp::Snooping : public ydk::Entity
{
    public:
        Snooping();
        ~Snooping();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf trust; //type: empty
        class Limit; //type: Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Dhcp::Snooping::Limit
        class Vlan_; //type: Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Dhcp::Snooping::Vlan_

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Dhcp::Snooping::Limit> limit;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Dhcp::Snooping::Vlan_> > vlan;
        
}; // Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Dhcp::Snooping


class Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Dhcp::Snooping::Limit : public ydk::Entity
{
    public:
        Limit();
        ~Limit();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf rate; //type: uint16

}; // Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Dhcp::Snooping::Limit


class Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Dhcp::Snooping::Vlan_ : public ydk::Entity
{
    public:
        Vlan_();
        ~Vlan_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf id; //type: uint16
        class Information; //type: Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Dhcp::Snooping::Vlan_::Information

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Dhcp::Snooping::Vlan_::Information> information;
        
}; // Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Dhcp::Snooping::Vlan_


class Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Dhcp::Snooping::Vlan_::Information : public ydk::Entity
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

        class Option; //type: Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Dhcp::Snooping::Vlan_::Information::Option

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Dhcp::Snooping::Vlan_::Information::Option> option;
        
}; // Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Dhcp::Snooping::Vlan_::Information


class Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Dhcp::Snooping::Vlan_::Information::Option : public ydk::Entity
{
    public:
        Option();
        ~Option();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class FormatType; //type: Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Dhcp::Snooping::Vlan_::Information::Option::FormatType

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Dhcp::Snooping::Vlan_::Information::Option::FormatType> format_type;
        
}; // Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Dhcp::Snooping::Vlan_::Information::Option

class Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathSelection::Metric : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf igp;
        static const ydk::Enum::YLeaf te;

};

class Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathSelection::SegmentRouting::Adjacency : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf protected_;
        static const ydk::Enum::YLeaf unprotected;

};

class Native::Interface::Vlan::IfState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf nhrp;

};

class Native::Interface::Vlan::ServiceInsertion : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf waas;

};

class Native::Interface::Vlan::IfState_ : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf nhrp;

};

class Native::Interface::Vlan::ServiceInsertion_ : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf waas;

};

class Native::Interface::Vlan::CiscoIOSXEInterfacesAccessSession::HostMode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf multi_auth;
        static const ydk::Enum::YLeaf multi_domain;
        static const ydk::Enum::YLeaf multi_host;
        static const ydk::Enum::YLeaf single_host;

};

class Native::Interface::Vlan::CiscoIOSXEInterfacesAccessSession_::HostMode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf multi_auth;
        static const ydk::Enum::YLeaf multi_domain;
        static const ydk::Enum::YLeaf multi_host;
        static const ydk::Enum::YLeaf single_host;

};

class Native::Interface::Vlan::CiscoIOSXEInterfacesBackup::Delay::Failure : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf never;

};

class Native::Interface::Vlan::CiscoIOSXEInterfacesBackup::Delay::SecondaryDisable : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf never;

};

class Native::Interface::Vlan::CiscoIOSXEInterfacesBackup::Load::Kickin : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf never;

};

class Native::Interface::Vlan::CiscoIOSXEInterfacesBackup::Load::Kickout : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf never;

};

class Native::Interface::Vlan::CiscoIOSXEInterfacesBackup_::Delay::Failure : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf never;

};

class Native::Interface::Vlan::CiscoIOSXEInterfacesBackup_::Delay::SecondaryDisable : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf never;

};

class Native::Interface::Vlan::CiscoIOSXEInterfacesBackup_::Load::Kickin : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf never;

};

class Native::Interface::Vlan::CiscoIOSXEInterfacesBackup_::Load::Kickout : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf never;

};

class Native::Interface::Vlan::CiscoIOSXEInterfacesFlowcontrol::Receive : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf desired;
        static const ydk::Enum::YLeaf off;
        static const ydk::Enum::YLeaf on;

};

class Native::Interface::Vlan::CiscoIOSXEInterfacesFlowcontrol::Send : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf desired;
        static const ydk::Enum::YLeaf off;
        static const ydk::Enum::YLeaf on;

};

class Native::Interface::Vlan::CiscoIOSXEInterfacesFlowcontrol_::Receive : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf desired;
        static const ydk::Enum::YLeaf off;
        static const ydk::Enum::YLeaf on;

};

class Native::Interface::Vlan::CiscoIOSXEInterfacesFlowcontrol_::Send : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf desired;
        static const ydk::Enum::YLeaf off;
        static const ydk::Enum::YLeaf on;

};

class Native::Interface::Vlan::CiscoIOSXEInterfacesHoldQueue::Direction : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf in;
        static const ydk::Enum::YLeaf out;

};

class Native::Interface::Vlan::CiscoIOSXEInterfacesHoldQueue_::Direction : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf in;
        static const ydk::Enum::YLeaf out;

};

class Native::Interface::Vlan::CiscoIOSXEInterfacesInterfaceQos::Trust::Device : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf cisco_phone;

};

class Native::Interface::Vlan::CiscoIOSXEInterfacesInterfaceQos_::Trust::Device : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf cisco_phone;

};

class Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Dhcp::Relay::Information::PolicyAction : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf drop;
        static const ydk::Enum::YLeaf encapsulate;
        static const ydk::Enum::YLeaf keep;
        static const ydk::Enum::YLeaf replace;

};


}
}

#endif /* _CISCO_IOS_XE_NATIVE_73_ */

