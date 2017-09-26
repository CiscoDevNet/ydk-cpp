#ifndef _CISCO_IOS_XE_NATIVE_4_
#define _CISCO_IOS_XE_NATIVE_4_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XE_native_0.hpp"
#include "Cisco_IOS_XE_native_3.hpp"

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_native {


class Native::Bfd::Map::Ipv4::Vrf::DstVrf : public ydk::Entity
{
    public:
        DstVrf();
        ~DstVrf();

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

        ydk::YLeaf dst_vrf; //type: string
        ydk::YLeaf a_period_b_period_c_period_d_slash_nn; //type: empty

}; // Native::Bfd::Map::Ipv4::Vrf::DstVrf


class Native::Bfd::Map::Ipv6 : public ydk::Entity
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
        std::string get_absolute_path() const override;

        class DpIpv6Prefix; //type: Native::Bfd::Map::Ipv6::DpIpv6Prefix
        class Vrf; //type: Native::Bfd::Map::Ipv6::Vrf

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Bfd::Map::Ipv6::DpIpv6Prefix> > dp_ipv6_prefix;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Bfd::Map::Ipv6::Vrf> vrf;
        
}; // Native::Bfd::Map::Ipv6


class Native::Bfd::Map::Ipv6::DpIpv6Prefix : public ydk::Entity
{
    public:
        DpIpv6Prefix();
        ~DpIpv6Prefix();

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

        ydk::YLeaf dp_ipv6_prefix; //type: string
        ydk::YLeaf bfd_nm; //type: string
        class SrcIpv6Prefix0; //type: Native::Bfd::Map::Ipv6::DpIpv6Prefix::SrcIpv6Prefix0
        class Vrf; //type: Native::Bfd::Map::Ipv6::DpIpv6Prefix::Vrf

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Bfd::Map::Ipv6::DpIpv6Prefix::SrcIpv6Prefix0> > src_ipv6_prefix0;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Bfd::Map::Ipv6::DpIpv6Prefix::Vrf> vrf;
        
}; // Native::Bfd::Map::Ipv6::DpIpv6Prefix


class Native::Bfd::Map::Ipv6::DpIpv6Prefix::SrcIpv6Prefix0 : public ydk::Entity
{
    public:
        SrcIpv6Prefix0();
        ~SrcIpv6Prefix0();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf src_ipv6_prefix0; //type: string
        ydk::YLeaf bfd_name; //type: string

}; // Native::Bfd::Map::Ipv6::DpIpv6Prefix::SrcIpv6Prefix0


class Native::Bfd::Map::Ipv6::DpIpv6Prefix::Vrf : public ydk::Entity
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

        class SrcVrf; //type: Native::Bfd::Map::Ipv6::DpIpv6Prefix::Vrf::SrcVrf

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Bfd::Map::Ipv6::DpIpv6Prefix::Vrf::SrcVrf> > src_vrf;
        
}; // Native::Bfd::Map::Ipv6::DpIpv6Prefix::Vrf


class Native::Bfd::Map::Ipv6::DpIpv6Prefix::Vrf::SrcVrf : public ydk::Entity
{
    public:
        SrcVrf();
        ~SrcVrf();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf src_vrf; //type: string
        ydk::YLeaf src_ipv6_prefix; //type: string

}; // Native::Bfd::Map::Ipv6::DpIpv6Prefix::Vrf::SrcVrf


class Native::Bfd::Map::Ipv6::Vrf : public ydk::Entity
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

        class DstVrf; //type: Native::Bfd::Map::Ipv6::Vrf::DstVrf

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Bfd::Map::Ipv6::Vrf::DstVrf> > dst_vrf;
        
}; // Native::Bfd::Map::Ipv6::Vrf


class Native::Bfd::Map::Ipv6::Vrf::DstVrf : public ydk::Entity
{
    public:
        DstVrf();
        ~DstVrf();

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

        ydk::YLeaf dst_vrf; //type: string
        ydk::YLeaf dst_ipv6_prefix; //type: string

}; // Native::Bfd::Map::Ipv6::Vrf::DstVrf


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

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::BfdTemplate::SingleHop> single_hop;
        
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
        std::string get_absolute_path() const override;

        class Microseconds; //type: Native::BfdTemplate::SingleHop::Interval::Microseconds

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::BfdTemplate::SingleHop::Interval::Microseconds> microseconds;
        
}; // Native::BfdTemplate::SingleHop::Interval


class Native::BfdTemplate::SingleHop::Interval::Microseconds : public ydk::Entity
{
    public:
        Microseconds();
        ~Microseconds();

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

        ydk::YLeaf min_tx; //type: uint32
        ydk::YLeaf min_rx; //type: uint32
        ydk::YLeaf multiplier; //type: uint8

}; // Native::BfdTemplate::SingleHop::Interval::Microseconds


class Native::Boot : public ydk::Entity
{
    public:
        Boot();
        ~Boot();

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

        class System; //type: Native::Boot::System
        class EnableBreak; //type: Native::Boot::EnableBreak
        class Manual; //type: Native::Boot::Manual

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Boot::EnableBreak> enable_break; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Boot::Manual> manual; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Boot::System> system;
        
}; // Native::Boot


class Native::Boot::EnableBreak : public ydk::Entity
{
    public:
        EnableBreak();
        ~EnableBreak();

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

        ydk::YLeaf switch_; //type: uint8

}; // Native::Boot::EnableBreak


class Native::Boot::Manual : public ydk::Entity
{
    public:
        Manual();
        ~Manual();

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

        ydk::YLeaf switch_; //type: uint8

}; // Native::Boot::Manual


class Native::Boot::System : public ydk::Entity
{
    public:
        System();
        ~System();

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

        ydk::YLeaf tftp_path; //type: string
        ydk::YLeaf tftp; //type: string
        class Bootfile; //type: Native::Boot::System::Bootfile
        class Flash; //type: Native::Boot::System::Flash
        class Switch_; //type: Native::Boot::System::Switch_

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Boot::System::Bootfile> bootfile;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Boot::System::Flash> flash;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Boot::System::Switch_> switch_;
        
}; // Native::Boot::System


class Native::Boot::System::Bootfile : public ydk::Entity
{
    public:
        Bootfile();
        ~Bootfile();

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

        class FilenameList; //type: Native::Boot::System::Bootfile::FilenameList

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Boot::System::Bootfile::FilenameList> > filename_list;
        
}; // Native::Boot::System::Bootfile


class Native::Boot::System::Bootfile::FilenameList : public ydk::Entity
{
    public:
        FilenameList();
        ~FilenameList();

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

        ydk::YLeaf filename; //type: string

}; // Native::Boot::System::Bootfile::FilenameList


class Native::Boot::System::Flash : public ydk::Entity
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

        class FlashList; //type: Native::Boot::System::Flash::FlashList

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Boot::System::Flash::FlashList> > flash_list;
        
}; // Native::Boot::System::Flash


class Native::Boot::System::Flash::FlashList : public ydk::Entity
{
    public:
        FlashList();
        ~FlashList();

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

        ydk::YLeaf flash_leaf; //type: string

}; // Native::Boot::System::Flash::FlashList


class Native::Boot::System::Switch_ : public ydk::Entity
{
    public:
        Switch_();
        ~Switch_();

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

        class SwitchNumber; //type: Native::Boot::System::Switch_::SwitchNumber
        class All; //type: Native::Boot::System::Switch_::All

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Boot::System::Switch_::All> all;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Boot::System::Switch_::SwitchNumber> > switch_number;
        
}; // Native::Boot::System::Switch_


class Native::Boot::System::Switch_::All : public ydk::Entity
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

        ydk::YLeaf flash_1; //type: string
        ydk::YLeaf flash; //type: string
        ydk::YLeaf tftp; //type: string

}; // Native::Boot::System::Switch_::All


class Native::Boot::System::Switch_::SwitchNumber : public ydk::Entity
{
    public:
        SwitchNumber();
        ~SwitchNumber();

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

        ydk::YLeaf range; //type: uint8
        ydk::YLeaf flash_1_path; //type: string
        ydk::YLeaf flash_path; //type: string
        ydk::YLeaf tftp_path; //type: string

}; // Native::Boot::System::Switch_::SwitchNumber


class Native::BridgeDomain : public ydk::Entity
{
    public:
        BridgeDomain();
        ~BridgeDomain();

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

        class BrdId; //type: Native::BridgeDomain::BrdId
        class CMac; //type: Native::BridgeDomain::CMac
        class Otv; //type: Native::BridgeDomain::Otv
        class Parameterized; //type: Native::BridgeDomain::Parameterized

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::BridgeDomain::BrdId> > brd_id;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::BridgeDomain::CMac> c_mac;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::BridgeDomain::Otv> otv;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::BridgeDomain::Parameterized> parameterized;
        
}; // Native::BridgeDomain


class Native::BridgeDomain::BrdId : public ydk::Entity
{
    public:
        BrdId();
        ~BrdId();

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

        ydk::YLeaf bridge_domain_id; //type: uint16
        ydk::YLeaf shutdown; //type: empty
        class Ip; //type: Native::BridgeDomain::BrdId::Ip
        class Mac; //type: Native::BridgeDomain::BrdId::Mac
        class Member; //type: Native::BridgeDomain::BrdId::Member

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::BridgeDomain::BrdId::Ip> ip;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::BridgeDomain::BrdId::Mac> mac;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::BridgeDomain::BrdId::Member> member;
        
}; // Native::BridgeDomain::BrdId


class Native::BridgeDomain::BrdId::Ip : public ydk::Entity
{
    public:
        Ip();
        ~Ip();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Igmp; //type: Native::BridgeDomain::BrdId::Ip::Igmp

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::BridgeDomain::BrdId::Ip::Igmp> igmp;
        
}; // Native::BridgeDomain::BrdId::Ip


class Native::BridgeDomain::BrdId::Ip::Igmp : public ydk::Entity
{
    public:
        Igmp();
        ~Igmp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Snooping; //type: Native::BridgeDomain::BrdId::Ip::Igmp::Snooping

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::BridgeDomain::BrdId::Ip::Igmp::Snooping> snooping; // presence node
        
}; // Native::BridgeDomain::BrdId::Ip::Igmp


class Native::BridgeDomain::BrdId::Ip::Igmp::Snooping : public ydk::Entity
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

        ydk::YLeaf immediate_leave; //type: empty
        ydk::YLeaf last_member_query_count; //type: uint8
        ydk::YLeaf last_member_query_interval; //type: uint16
        ydk::YLeaf report_suppression; //type: empty
        ydk::YLeaf robustness_variable; //type: uint8
        ydk::YLeaf static_; //type: string
        class Check; //type: Native::BridgeDomain::BrdId::Ip::Igmp::Snooping::Check
        class ExplicitTracking; //type: Native::BridgeDomain::BrdId::Ip::Igmp::Snooping::ExplicitTracking
        class Mrouter; //type: Native::BridgeDomain::BrdId::Ip::Igmp::Snooping::Mrouter
        class Querier; //type: Native::BridgeDomain::BrdId::Ip::Igmp::Snooping::Querier

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::BridgeDomain::BrdId::Ip::Igmp::Snooping::Check> check;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::BridgeDomain::BrdId::Ip::Igmp::Snooping::ExplicitTracking> explicit_tracking;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::BridgeDomain::BrdId::Ip::Igmp::Snooping::Mrouter> mrouter;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::BridgeDomain::BrdId::Ip::Igmp::Snooping::Querier> querier; // presence node
        
}; // Native::BridgeDomain::BrdId::Ip::Igmp::Snooping


class Native::BridgeDomain::BrdId::Ip::Igmp::Snooping::Check : public ydk::Entity
{
    public:
        Check();
        ~Check();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf rtr_alert_option; //type: empty
        ydk::YLeaf ttl; //type: empty

}; // Native::BridgeDomain::BrdId::Ip::Igmp::Snooping::Check


class Native::BridgeDomain::BrdId::Ip::Igmp::Snooping::ExplicitTracking : public ydk::Entity
{
    public:
        ExplicitTracking();
        ~ExplicitTracking();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf limit; //type: empty

}; // Native::BridgeDomain::BrdId::Ip::Igmp::Snooping::ExplicitTracking


class Native::BridgeDomain::BrdId::Ip::Igmp::Snooping::Mrouter : public ydk::Entity
{
    public:
        Mrouter();
        ~Mrouter();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf interface; //type: empty

}; // Native::BridgeDomain::BrdId::Ip::Igmp::Snooping::Mrouter


class Native::BridgeDomain::BrdId::Ip::Igmp::Snooping::Querier : public ydk::Entity
{
    public:
        Querier();
        ~Querier();

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
        ydk::YLeaf max_response_time; //type: empty
        ydk::YLeaf query_interval; //type: empty
        ydk::YLeaf tcn; //type: empty
        ydk::YLeaf timer; //type: empty
        ydk::YLeaf version; //type: empty

}; // Native::BridgeDomain::BrdId::Ip::Igmp::Snooping::Querier


class Native::BridgeDomain::BrdId::Mac : public ydk::Entity
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

        ydk::YLeaf aging_time; //type: uint16
        ydk::YLeaf learning; //type: empty
        class Limit; //type: Native::BridgeDomain::BrdId::Mac::Limit

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::BridgeDomain::BrdId::Mac::Limit> limit;
        
}; // Native::BridgeDomain::BrdId::Mac


class Native::BridgeDomain::BrdId::Mac::Limit : public ydk::Entity
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

        class Action; //type: Native::BridgeDomain::BrdId::Mac::Limit::Action
        class Maximum; //type: Native::BridgeDomain::BrdId::Mac::Limit::Maximum

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::BridgeDomain::BrdId::Mac::Limit::Action> action;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::BridgeDomain::BrdId::Mac::Limit::Maximum> maximum;
        
}; // Native::BridgeDomain::BrdId::Mac::Limit


class Native::BridgeDomain::BrdId::Mac::Limit::Action : public ydk::Entity
{
    public:
        Action();
        ~Action();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Flooding; //type: Native::BridgeDomain::BrdId::Mac::Limit::Action::Flooding

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::BridgeDomain::BrdId::Mac::Limit::Action::Flooding> flooding;
        
}; // Native::BridgeDomain::BrdId::Mac::Limit::Action


class Native::BridgeDomain::BrdId::Mac::Limit::Action::Flooding : public ydk::Entity
{
    public:
        Flooding();
        ~Flooding();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf disable; //type: empty

}; // Native::BridgeDomain::BrdId::Mac::Limit::Action::Flooding


class Native::BridgeDomain::BrdId::Mac::Limit::Maximum : public ydk::Entity
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

        ydk::YLeaf addresses; //type: uint32

}; // Native::BridgeDomain::BrdId::Mac::Limit::Maximum


class Native::BridgeDomain::BrdId::Member : public ydk::Entity
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

        ydk::YLeaf analysis_module; //type: uint8
        ydk::YLeaf fcpa; //type: uint8
        ydk::YLeaf sbc; //type: uint32
        ydk::YLeaf sonet_acr; //type: uint8
        ydk::YLeaf y_controller; //type: string
        ydk::YLeaf service_engine; //type: uint8
        ydk::YLeaf tunnel_tp; //type: uint16
        ydk::YLeaf vpn; //type: uint32
        ydk::YLeaf virtual_tokenring; //type: uint32
        ydk::YLeaf ucse; //type: uint8
        ydk::YLeaf vasileft; //type: uint16
        ydk::YLeaf vasiright; //type: uint16
        ydk::YLeaf vfi; //type: string
        ydk::YLeaf vni; //type: uint32
        class MemIpv4; //type: Native::BridgeDomain::BrdId::Member::MemIpv4
        class ACR; //type: Native::BridgeDomain::BrdId::Member::ACR
        class MemberInterface; //type: Native::BridgeDomain::BrdId::Member::MemberInterface

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::BridgeDomain::BrdId::Member::ACR> > acr;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::BridgeDomain::BrdId::Member::MemIpv4> > mem_ipv4;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::BridgeDomain::BrdId::Member::MemberInterface> > member_interface;
        
}; // Native::BridgeDomain::BrdId::Member


class Native::BridgeDomain::BrdId::Member::ACR : public ydk::Entity
{
    public:
        ACR();
        ~ACR();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf acr_int; //type: string
        class ServiceInstance; //type: Native::BridgeDomain::BrdId::Member::ACR::ServiceInstance

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::BridgeDomain::BrdId::Member::ACR::ServiceInstance> service_instance;
        
}; // Native::BridgeDomain::BrdId::Member::ACR


class Native::BridgeDomain::BrdId::Member::ACR::ServiceInstance : public ydk::Entity
{
    public:
        ServiceInstance();
        ~ServiceInstance();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Id; //type: Native::BridgeDomain::BrdId::Member::ACR::ServiceInstance::Id

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::BridgeDomain::BrdId::Member::ACR::ServiceInstance::Id> > id;
        
}; // Native::BridgeDomain::BrdId::Member::ACR::ServiceInstance


class Native::BridgeDomain::BrdId::Member::ACR::ServiceInstance::Id : public ydk::Entity
{
    public:
        Id();
        ~Id();

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
        ydk::YLeaf split_horizon; //type: empty

}; // Native::BridgeDomain::BrdId::Member::ACR::ServiceInstance::Id


class Native::BridgeDomain::BrdId::Member::MemIpv4 : public ydk::Entity
{
    public:
        MemIpv4();
        ~MemIpv4();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf mem_ipv4; //type: string
        ydk::YLeaf template_; //type: string
        class MemVcid; //type: Native::BridgeDomain::BrdId::Member::MemIpv4::MemVcid
        class Encapsulation; //type: Native::BridgeDomain::BrdId::Member::MemIpv4::Encapsulation

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::BridgeDomain::BrdId::Member::MemIpv4::Encapsulation> encapsulation;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::BridgeDomain::BrdId::Member::MemIpv4::MemVcid> > mem_vcid;
        
}; // Native::BridgeDomain::BrdId::Member::MemIpv4


class Native::BridgeDomain::BrdId::Member::MemIpv4::Encapsulation : public ydk::Entity
{
    public:
        Encapsulation();
        ~Encapsulation();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf mpls; //type: empty

}; // Native::BridgeDomain::BrdId::Member::MemIpv4::Encapsulation


class Native::BridgeDomain::BrdId::Member::MemIpv4::MemVcid : public ydk::Entity
{
    public:
        MemVcid();
        ~MemVcid();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf mem_vcid; //type: uint32
        class Encapsulation; //type: Native::BridgeDomain::BrdId::Member::MemIpv4::MemVcid::Encapsulation
        class Template_; //type: Native::BridgeDomain::BrdId::Member::MemIpv4::MemVcid::Template_

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::BridgeDomain::BrdId::Member::MemIpv4::MemVcid::Encapsulation> encapsulation; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::BridgeDomain::BrdId::Member::MemIpv4::MemVcid::Template_> template_; // presence node
        
}; // Native::BridgeDomain::BrdId::Member::MemIpv4::MemVcid


class Native::BridgeDomain::BrdId::Member::MemIpv4::MemVcid::Encapsulation : public ydk::Entity
{
    public:
        Encapsulation();
        ~Encapsulation();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf mpls; //type: empty

}; // Native::BridgeDomain::BrdId::Member::MemIpv4::MemVcid::Encapsulation


class Native::BridgeDomain::BrdId::Member::MemIpv4::MemVcid::Template_ : public ydk::Entity
{
    public:
        Template_();
        ~Template_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf template_; //type: string

}; // Native::BridgeDomain::BrdId::Member::MemIpv4::MemVcid::Template_


class Native::BridgeDomain::BrdId::Member::MemberInterface : public ydk::Entity
{
    public:
        MemberInterface();
        ~MemberInterface();

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
        ydk::YLeaf interface_id; //type: one of string, uint32
        ydk::YLeaf service_instance; //type: uint32
        class SplitHorizon; //type: Native::BridgeDomain::BrdId::Member::MemberInterface::SplitHorizon

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::BridgeDomain::BrdId::Member::MemberInterface::SplitHorizon> split_horizon;
        
}; // Native::BridgeDomain::BrdId::Member::MemberInterface


class Native::BridgeDomain::BrdId::Member::MemberInterface::SplitHorizon : public ydk::Entity
{
    public:
        SplitHorizon();
        ~SplitHorizon();

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

}; // Native::BridgeDomain::BrdId::Member::MemberInterface::SplitHorizon


class Native::BridgeDomain::CMac : public ydk::Entity
{
    public:
        CMac();
        ~CMac();

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

        ydk::YLeaf aging_time; //type: uint16

}; // Native::BridgeDomain::CMac


class Native::BridgeDomain::Otv : public ydk::Entity
{
    public:
        Otv();
        ~Otv();

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

        class Default_; //type: Native::BridgeDomain::Otv::Default_

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::BridgeDomain::Otv::Default_> default_;
        
}; // Native::BridgeDomain::Otv


class Native::BridgeDomain::Otv::Default_ : public ydk::Entity
{
    public:
        Default_();
        ~Default_();

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

        ydk::YLeaf age_time; //type: uint16

}; // Native::BridgeDomain::Otv::Default_


class Native::BridgeDomain::Parameterized : public ydk::Entity
{
    public:
        Parameterized();
        ~Parameterized();

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

        class Vlan; //type: Native::BridgeDomain::Parameterized::Vlan

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::BridgeDomain::Parameterized::Vlan> vlan; // presence node
        
}; // Native::BridgeDomain::Parameterized


class Native::BridgeDomain::Parameterized::Vlan : public ydk::Entity
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

        ydk::YLeaf shutdown; //type: empty
        class Ip; //type: Native::BridgeDomain::Parameterized::Vlan::Ip
        class Mac; //type: Native::BridgeDomain::Parameterized::Vlan::Mac
        class Member; //type: Native::BridgeDomain::Parameterized::Vlan::Member

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::BridgeDomain::Parameterized::Vlan::Ip> ip;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::BridgeDomain::Parameterized::Vlan::Mac> mac;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::BridgeDomain::Parameterized::Vlan::Member> member;
        
}; // Native::BridgeDomain::Parameterized::Vlan


class Native::BridgeDomain::Parameterized::Vlan::Ip : public ydk::Entity
{
    public:
        Ip();
        ~Ip();

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

        class Igmp; //type: Native::BridgeDomain::Parameterized::Vlan::Ip::Igmp

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::BridgeDomain::Parameterized::Vlan::Ip::Igmp> igmp;
        
}; // Native::BridgeDomain::Parameterized::Vlan::Ip


class Native::BridgeDomain::Parameterized::Vlan::Ip::Igmp : public ydk::Entity
{
    public:
        Igmp();
        ~Igmp();

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

        class Snooping; //type: Native::BridgeDomain::Parameterized::Vlan::Ip::Igmp::Snooping

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::BridgeDomain::Parameterized::Vlan::Ip::Igmp::Snooping> snooping; // presence node
        
}; // Native::BridgeDomain::Parameterized::Vlan::Ip::Igmp


class Native::BridgeDomain::Parameterized::Vlan::Ip::Igmp::Snooping : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf immediate_leave; //type: empty
        ydk::YLeaf last_member_query_count; //type: uint8
        ydk::YLeaf last_member_query_interval; //type: uint16
        ydk::YLeaf report_suppression; //type: empty
        ydk::YLeaf robustness_variable; //type: uint8
        ydk::YLeaf static_; //type: string
        class Check; //type: Native::BridgeDomain::Parameterized::Vlan::Ip::Igmp::Snooping::Check
        class ExplicitTracking; //type: Native::BridgeDomain::Parameterized::Vlan::Ip::Igmp::Snooping::ExplicitTracking
        class Mrouter; //type: Native::BridgeDomain::Parameterized::Vlan::Ip::Igmp::Snooping::Mrouter
        class Querier; //type: Native::BridgeDomain::Parameterized::Vlan::Ip::Igmp::Snooping::Querier

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::BridgeDomain::Parameterized::Vlan::Ip::Igmp::Snooping::Check> check;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::BridgeDomain::Parameterized::Vlan::Ip::Igmp::Snooping::ExplicitTracking> explicit_tracking;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::BridgeDomain::Parameterized::Vlan::Ip::Igmp::Snooping::Mrouter> mrouter;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::BridgeDomain::Parameterized::Vlan::Ip::Igmp::Snooping::Querier> querier; // presence node
        
}; // Native::BridgeDomain::Parameterized::Vlan::Ip::Igmp::Snooping


class Native::BridgeDomain::Parameterized::Vlan::Ip::Igmp::Snooping::Check : public ydk::Entity
{
    public:
        Check();
        ~Check();

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

        ydk::YLeaf rtr_alert_option; //type: empty
        ydk::YLeaf ttl; //type: empty

}; // Native::BridgeDomain::Parameterized::Vlan::Ip::Igmp::Snooping::Check


class Native::BridgeDomain::Parameterized::Vlan::Ip::Igmp::Snooping::ExplicitTracking : public ydk::Entity
{
    public:
        ExplicitTracking();
        ~ExplicitTracking();

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

        ydk::YLeaf limit; //type: empty

}; // Native::BridgeDomain::Parameterized::Vlan::Ip::Igmp::Snooping::ExplicitTracking


class Native::BridgeDomain::Parameterized::Vlan::Ip::Igmp::Snooping::Mrouter : public ydk::Entity
{
    public:
        Mrouter();
        ~Mrouter();

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

        ydk::YLeaf interface; //type: empty

}; // Native::BridgeDomain::Parameterized::Vlan::Ip::Igmp::Snooping::Mrouter


class Native::BridgeDomain::Parameterized::Vlan::Ip::Igmp::Snooping::Querier : public ydk::Entity
{
    public:
        Querier();
        ~Querier();

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

        ydk::YLeaf address; //type: empty
        ydk::YLeaf max_response_time; //type: empty
        ydk::YLeaf query_interval; //type: empty
        ydk::YLeaf tcn; //type: empty
        ydk::YLeaf timer; //type: empty
        ydk::YLeaf version; //type: empty

}; // Native::BridgeDomain::Parameterized::Vlan::Ip::Igmp::Snooping::Querier


class Native::BridgeDomain::Parameterized::Vlan::Mac : public ydk::Entity
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

        ydk::YLeaf aging_time; //type: uint16
        ydk::YLeaf learning; //type: empty
        class Limit; //type: Native::BridgeDomain::Parameterized::Vlan::Mac::Limit

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::BridgeDomain::Parameterized::Vlan::Mac::Limit> limit;
        
}; // Native::BridgeDomain::Parameterized::Vlan::Mac


class Native::BridgeDomain::Parameterized::Vlan::Mac::Limit : public ydk::Entity
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
        std::string get_absolute_path() const override;

        class Action; //type: Native::BridgeDomain::Parameterized::Vlan::Mac::Limit::Action
        class Maximum; //type: Native::BridgeDomain::Parameterized::Vlan::Mac::Limit::Maximum

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::BridgeDomain::Parameterized::Vlan::Mac::Limit::Action> action;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::BridgeDomain::Parameterized::Vlan::Mac::Limit::Maximum> maximum;
        
}; // Native::BridgeDomain::Parameterized::Vlan::Mac::Limit


class Native::BridgeDomain::Parameterized::Vlan::Mac::Limit::Action : public ydk::Entity
{
    public:
        Action();
        ~Action();

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

        class Flooding; //type: Native::BridgeDomain::Parameterized::Vlan::Mac::Limit::Action::Flooding

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::BridgeDomain::Parameterized::Vlan::Mac::Limit::Action::Flooding> flooding;
        
}; // Native::BridgeDomain::Parameterized::Vlan::Mac::Limit::Action


class Native::BridgeDomain::Parameterized::Vlan::Mac::Limit::Action::Flooding : public ydk::Entity
{
    public:
        Flooding();
        ~Flooding();

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

        ydk::YLeaf disable; //type: empty

}; // Native::BridgeDomain::Parameterized::Vlan::Mac::Limit::Action::Flooding


class Native::BridgeDomain::Parameterized::Vlan::Mac::Limit::Maximum : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf addresses; //type: uint32

}; // Native::BridgeDomain::Parameterized::Vlan::Mac::Limit::Maximum


class Native::BridgeDomain::Parameterized::Vlan::Member : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf analysis_module; //type: uint8
        ydk::YLeaf fcpa; //type: uint8
        ydk::YLeaf sbc; //type: uint32
        ydk::YLeaf sonet_acr; //type: uint8
        ydk::YLeaf y_controller; //type: string
        ydk::YLeaf service_engine; //type: uint8
        ydk::YLeaf tunnel_tp; //type: uint16
        ydk::YLeaf vpn; //type: uint32
        ydk::YLeaf virtual_tokenring; //type: uint32
        ydk::YLeaf ucse; //type: uint8
        ydk::YLeaf vasileft; //type: uint16
        ydk::YLeaf vasiright; //type: uint16
        ydk::YLeaf vfi; //type: string
        ydk::YLeaf vni; //type: uint32
        class MemIpv4; //type: Native::BridgeDomain::Parameterized::Vlan::Member::MemIpv4
        class ACR; //type: Native::BridgeDomain::Parameterized::Vlan::Member::ACR
        class MemberInterface; //type: Native::BridgeDomain::Parameterized::Vlan::Member::MemberInterface

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::BridgeDomain::Parameterized::Vlan::Member::ACR> > acr;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::BridgeDomain::Parameterized::Vlan::Member::MemIpv4> > mem_ipv4;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::BridgeDomain::Parameterized::Vlan::Member::MemberInterface> > member_interface;
        
}; // Native::BridgeDomain::Parameterized::Vlan::Member


class Native::BridgeDomain::Parameterized::Vlan::Member::ACR : public ydk::Entity
{
    public:
        ACR();
        ~ACR();

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

        ydk::YLeaf acr_int; //type: string
        class ServiceInstance; //type: Native::BridgeDomain::Parameterized::Vlan::Member::ACR::ServiceInstance

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::BridgeDomain::Parameterized::Vlan::Member::ACR::ServiceInstance> service_instance;
        
}; // Native::BridgeDomain::Parameterized::Vlan::Member::ACR


class Native::BridgeDomain::Parameterized::Vlan::Member::ACR::ServiceInstance : public ydk::Entity
{
    public:
        ServiceInstance();
        ~ServiceInstance();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Id; //type: Native::BridgeDomain::Parameterized::Vlan::Member::ACR::ServiceInstance::Id

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::BridgeDomain::Parameterized::Vlan::Member::ACR::ServiceInstance::Id> > id;
        
}; // Native::BridgeDomain::Parameterized::Vlan::Member::ACR::ServiceInstance


class Native::BridgeDomain::Parameterized::Vlan::Member::ACR::ServiceInstance::Id : public ydk::Entity
{
    public:
        Id();
        ~Id();

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
        ydk::YLeaf split_horizon; //type: empty

}; // Native::BridgeDomain::Parameterized::Vlan::Member::ACR::ServiceInstance::Id


class Native::BridgeDomain::Parameterized::Vlan::Member::MemIpv4 : public ydk::Entity
{
    public:
        MemIpv4();
        ~MemIpv4();

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

        ydk::YLeaf mem_ipv4; //type: string
        ydk::YLeaf template_; //type: string
        class MemVcid; //type: Native::BridgeDomain::Parameterized::Vlan::Member::MemIpv4::MemVcid
        class Encapsulation; //type: Native::BridgeDomain::Parameterized::Vlan::Member::MemIpv4::Encapsulation

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::BridgeDomain::Parameterized::Vlan::Member::MemIpv4::Encapsulation> encapsulation;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::BridgeDomain::Parameterized::Vlan::Member::MemIpv4::MemVcid> > mem_vcid;
        
}; // Native::BridgeDomain::Parameterized::Vlan::Member::MemIpv4


class Native::BridgeDomain::Parameterized::Vlan::Member::MemIpv4::Encapsulation : public ydk::Entity
{
    public:
        Encapsulation();
        ~Encapsulation();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf mpls; //type: empty

}; // Native::BridgeDomain::Parameterized::Vlan::Member::MemIpv4::Encapsulation


class Native::BridgeDomain::Parameterized::Vlan::Member::MemIpv4::MemVcid : public ydk::Entity
{
    public:
        MemVcid();
        ~MemVcid();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf mem_vcid; //type: uint32
        class Encapsulation; //type: Native::BridgeDomain::Parameterized::Vlan::Member::MemIpv4::MemVcid::Encapsulation
        class Template_; //type: Native::BridgeDomain::Parameterized::Vlan::Member::MemIpv4::MemVcid::Template_

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::BridgeDomain::Parameterized::Vlan::Member::MemIpv4::MemVcid::Encapsulation> encapsulation; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::BridgeDomain::Parameterized::Vlan::Member::MemIpv4::MemVcid::Template_> template_; // presence node
        
}; // Native::BridgeDomain::Parameterized::Vlan::Member::MemIpv4::MemVcid


class Native::BridgeDomain::Parameterized::Vlan::Member::MemIpv4::MemVcid::Encapsulation : public ydk::Entity
{
    public:
        Encapsulation();
        ~Encapsulation();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf mpls; //type: empty

}; // Native::BridgeDomain::Parameterized::Vlan::Member::MemIpv4::MemVcid::Encapsulation


class Native::BridgeDomain::Parameterized::Vlan::Member::MemIpv4::MemVcid::Template_ : public ydk::Entity
{
    public:
        Template_();
        ~Template_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf template_; //type: string

}; // Native::BridgeDomain::Parameterized::Vlan::Member::MemIpv4::MemVcid::Template_


class Native::BridgeDomain::Parameterized::Vlan::Member::MemberInterface : public ydk::Entity
{
    public:
        MemberInterface();
        ~MemberInterface();

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
        ydk::YLeaf interface_id; //type: one of string, uint32
        ydk::YLeaf service_instance; //type: uint32
        class SplitHorizon; //type: Native::BridgeDomain::Parameterized::Vlan::Member::MemberInterface::SplitHorizon

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::BridgeDomain::Parameterized::Vlan::Member::MemberInterface::SplitHorizon> split_horizon;
        
}; // Native::BridgeDomain::Parameterized::Vlan::Member::MemberInterface


class Native::BridgeDomain::Parameterized::Vlan::Member::MemberInterface::SplitHorizon : public ydk::Entity
{
    public:
        SplitHorizon();
        ~SplitHorizon();

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

}; // Native::BridgeDomain::Parameterized::Vlan::Member::MemberInterface::SplitHorizon


class Native::CallHome : public ydk::Entity
{
    public:
        CallHome();
        ~CallHome();

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

        ydk::YLeaf contact_email_addr; //type: string
        class SourceInterface; //type: Native::CallHome::SourceInterface
        class HttpProxy; //type: Native::CallHome::HttpProxy
        class Profile; //type: Native::CallHome::Profile

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::CallHome::HttpProxy> http_proxy;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::CallHome::Profile> > profile;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::CallHome::SourceInterface> source_interface;
        
}; // Native::CallHome


class Native::CallHome::HttpProxy : public ydk::Entity
{
    public:
        HttpProxy();
        ~HttpProxy();

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

        class ProxyServers; //type: Native::CallHome::HttpProxy::ProxyServers

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::CallHome::HttpProxy::ProxyServers> > proxy_servers;
        
}; // Native::CallHome::HttpProxy


class Native::CallHome::HttpProxy::ProxyServers : public ydk::Entity
{
    public:
        ProxyServers();
        ~ProxyServers();

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

        ydk::YLeaf proxy_server; //type: string
        ydk::YLeaf port; //type: uint16

}; // Native::CallHome::HttpProxy::ProxyServers


class Native::CallHome::Profile : public ydk::Entity
{
    public:
        Profile();
        ~Profile();

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

        ydk::YLeaf profile_name; //type: string
        ydk::YLeaf active; //type: boolean
        class Destination; //type: Native::CallHome::Profile::Destination
        class SubscribeToAlertGroup; //type: Native::CallHome::Profile::SubscribeToAlertGroup

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::CallHome::Profile::Destination> destination;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::CallHome::Profile::SubscribeToAlertGroup> subscribe_to_alert_group;
        
}; // Native::CallHome::Profile


class Native::CallHome::Profile::Destination : public ydk::Entity
{
    public:
        Destination();
        ~Destination();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf transport_method; //type: TransportMethod
        class Address; //type: Native::CallHome::Profile::Destination::Address

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::CallHome::Profile::Destination::Address> address;
                class TransportMethod;

}; // Native::CallHome::Profile::Destination


class Native::CallHome::Profile::Destination::Address : public ydk::Entity
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

        ydk::YLeaf email; //type: string
        ydk::YLeaf http; //type: string

}; // Native::CallHome::Profile::Destination::Address


class Native::CallHome::Profile::SubscribeToAlertGroup : public ydk::Entity
{
    public:
        SubscribeToAlertGroup();
        ~SubscribeToAlertGroup();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Diagnostic; //type: Native::CallHome::Profile::SubscribeToAlertGroup::Diagnostic
        class Environment; //type: Native::CallHome::Profile::SubscribeToAlertGroup::Environment
        class Inventory; //type: Native::CallHome::Profile::SubscribeToAlertGroup::Inventory
        class Syslog; //type: Native::CallHome::Profile::SubscribeToAlertGroup::Syslog
        class Configuration; //type: Native::CallHome::Profile::SubscribeToAlertGroup::Configuration

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::CallHome::Profile::SubscribeToAlertGroup::Configuration> configuration; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::CallHome::Profile::SubscribeToAlertGroup::Diagnostic> diagnostic; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::CallHome::Profile::SubscribeToAlertGroup::Environment> environment; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::CallHome::Profile::SubscribeToAlertGroup::Inventory> inventory; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::CallHome::Profile::SubscribeToAlertGroup::Syslog> syslog; // presence node
        
}; // Native::CallHome::Profile::SubscribeToAlertGroup


class Native::CallHome::Profile::SubscribeToAlertGroup::Configuration : public ydk::Entity
{
    public:
        Configuration();
        ~Configuration();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Periodic; //type: Native::CallHome::Profile::SubscribeToAlertGroup::Configuration::Periodic

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::CallHome::Profile::SubscribeToAlertGroup::Configuration::Periodic> periodic;
        
}; // Native::CallHome::Profile::SubscribeToAlertGroup::Configuration


class Native::CallHome::Profile::SubscribeToAlertGroup::Configuration::Periodic : public ydk::Entity
{
    public:
        Periodic();
        ~Periodic();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Daily; //type: Native::CallHome::Profile::SubscribeToAlertGroup::Configuration::Periodic::Daily
        class Monthly; //type: Native::CallHome::Profile::SubscribeToAlertGroup::Configuration::Periodic::Monthly
        class Weekly; //type: Native::CallHome::Profile::SubscribeToAlertGroup::Configuration::Periodic::Weekly

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::CallHome::Profile::SubscribeToAlertGroup::Configuration::Periodic::Daily> daily;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::CallHome::Profile::SubscribeToAlertGroup::Configuration::Periodic::Monthly> monthly;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::CallHome::Profile::SubscribeToAlertGroup::Configuration::Periodic::Weekly> weekly;
        
}; // Native::CallHome::Profile::SubscribeToAlertGroup::Configuration::Periodic


class Native::CallHome::Profile::SubscribeToAlertGroup::Configuration::Periodic::Daily : public ydk::Entity
{
    public:
        Daily();
        ~Daily();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf begin_time; //type: string

}; // Native::CallHome::Profile::SubscribeToAlertGroup::Configuration::Periodic::Daily


class Native::CallHome::Profile::SubscribeToAlertGroup::Configuration::Periodic::Monthly : public ydk::Entity
{
    public:
        Monthly();
        ~Monthly();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf date; //type: uint8
        ydk::YLeaf begin_time; //type: string

}; // Native::CallHome::Profile::SubscribeToAlertGroup::Configuration::Periodic::Monthly


class Native::CallHome::Profile::SubscribeToAlertGroup::Configuration::Periodic::Weekly : public ydk::Entity
{
    public:
        Weekly();
        ~Weekly();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf day; //type: WeekdayType
        ydk::YLeaf begin_time; //type: string

}; // Native::CallHome::Profile::SubscribeToAlertGroup::Configuration::Periodic::Weekly


class Native::CallHome::Profile::SubscribeToAlertGroup::Diagnostic : public ydk::Entity
{
    public:
        Diagnostic();
        ~Diagnostic();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf severity; //type: Severity
        class Severity;

}; // Native::CallHome::Profile::SubscribeToAlertGroup::Diagnostic


class Native::CallHome::Profile::SubscribeToAlertGroup::Environment : public ydk::Entity
{
    public:
        Environment();
        ~Environment();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf severity; //type: Severity
        class Severity;

}; // Native::CallHome::Profile::SubscribeToAlertGroup::Environment


class Native::CallHome::Profile::SubscribeToAlertGroup::Inventory : public ydk::Entity
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

        class Periodic; //type: Native::CallHome::Profile::SubscribeToAlertGroup::Inventory::Periodic

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::CallHome::Profile::SubscribeToAlertGroup::Inventory::Periodic> periodic;
        
}; // Native::CallHome::Profile::SubscribeToAlertGroup::Inventory


class Native::CallHome::Profile::SubscribeToAlertGroup::Inventory::Periodic : public ydk::Entity
{
    public:
        Periodic();
        ~Periodic();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Daily; //type: Native::CallHome::Profile::SubscribeToAlertGroup::Inventory::Periodic::Daily
        class Monthly; //type: Native::CallHome::Profile::SubscribeToAlertGroup::Inventory::Periodic::Monthly
        class Weekly; //type: Native::CallHome::Profile::SubscribeToAlertGroup::Inventory::Periodic::Weekly

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::CallHome::Profile::SubscribeToAlertGroup::Inventory::Periodic::Daily> daily;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::CallHome::Profile::SubscribeToAlertGroup::Inventory::Periodic::Monthly> monthly;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::CallHome::Profile::SubscribeToAlertGroup::Inventory::Periodic::Weekly> weekly;
        
}; // Native::CallHome::Profile::SubscribeToAlertGroup::Inventory::Periodic


class Native::CallHome::Profile::SubscribeToAlertGroup::Inventory::Periodic::Daily : public ydk::Entity
{
    public:
        Daily();
        ~Daily();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf begin_time; //type: string

}; // Native::CallHome::Profile::SubscribeToAlertGroup::Inventory::Periodic::Daily


class Native::CallHome::Profile::SubscribeToAlertGroup::Inventory::Periodic::Monthly : public ydk::Entity
{
    public:
        Monthly();
        ~Monthly();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf date; //type: uint8
        ydk::YLeaf begin_time; //type: string

}; // Native::CallHome::Profile::SubscribeToAlertGroup::Inventory::Periodic::Monthly


class Native::CallHome::Profile::SubscribeToAlertGroup::Inventory::Periodic::Weekly : public ydk::Entity
{
    public:
        Weekly();
        ~Weekly();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf day; //type: WeekdayType
        ydk::YLeaf begin_time; //type: string

}; // Native::CallHome::Profile::SubscribeToAlertGroup::Inventory::Periodic::Weekly


class Native::CallHome::Profile::SubscribeToAlertGroup::Syslog : public ydk::Entity
{
    public:
        Syslog();
        ~Syslog();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Severity; //type: Native::CallHome::Profile::SubscribeToAlertGroup::Syslog::Severity

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::CallHome::Profile::SubscribeToAlertGroup::Syslog::Severity> > severity;
        
}; // Native::CallHome::Profile::SubscribeToAlertGroup::Syslog


class Native::CallHome::Profile::SubscribeToAlertGroup::Syslog::Severity : public ydk::Entity
{
    public:
        Severity();
        ~Severity();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf value_; //type: Value_
        ydk::YLeaf pattern; //type: string
        class Value_;

}; // Native::CallHome::Profile::SubscribeToAlertGroup::Syslog::Severity


class Native::CallHome::SourceInterface : public ydk::Entity
{
    public:
        SourceInterface();
        ~SourceInterface();

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
        class ATMSubinterface; //type: Native::CallHome::SourceInterface::ATMSubinterface
        class ATMACRsubinterface; //type: Native::CallHome::SourceInterface::ATMACRsubinterface
        class LISPSubinterface; //type: Native::CallHome::SourceInterface::LISPSubinterface
        class PortChannelSubinterface; //type: Native::CallHome::SourceInterface::PortChannelSubinterface

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::CallHome::SourceInterface::ATMACRsubinterface> atm_acrsubinterface;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::CallHome::SourceInterface::ATMSubinterface> atm_subinterface;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::CallHome::SourceInterface::LISPSubinterface> lisp_subinterface;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::CallHome::SourceInterface::PortChannelSubinterface> port_channel_subinterface;
        
}; // Native::CallHome::SourceInterface


class Native::CallHome::SourceInterface::ATMACRsubinterface : public ydk::Entity
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

}; // Native::CallHome::SourceInterface::ATMACRsubinterface


class Native::CallHome::SourceInterface::ATMSubinterface : public ydk::Entity
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

}; // Native::CallHome::SourceInterface::ATMSubinterface


class Native::CallHome::SourceInterface::LISPSubinterface : public ydk::Entity
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

}; // Native::CallHome::SourceInterface::LISPSubinterface


class Native::CallHome::SourceInterface::PortChannelSubinterface : public ydk::Entity
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

}; // Native::CallHome::SourceInterface::PortChannelSubinterface


class Native::Card : public ydk::Entity
{
    public:
        Card();
        ~Card();

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
        ydk::YLeaf slot; //type: uint32
        ydk::YLeaf bay; //type: uint32
        class Type;

}; // Native::Card


class Native::Cdp : public ydk::Entity
{
    public:
        Cdp();
        ~Cdp();

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

        ydk::YLeaf run; //type: empty

}; // Native::Cdp


class Native::Cef : public ydk::Entity
{
    public:
        Cef();
        ~Cef();

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

        class Table; //type: Native::Cef::Table

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Cef::Table> table;
        
}; // Native::Cef


class Native::Cef::Table : public ydk::Entity
{
    public:
        Table();
        ~Table();

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

        ydk::YLeaf rate_monitor_period; //type: uint8
        class OutputChain; //type: Native::Cef::Table::OutputChain
        class ConsistencyCheck; //type: Native::Cef::Table::ConsistencyCheck
        class Download; //type: Native::Cef::Table::Download

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Cef::Table::ConsistencyCheck> consistency_check;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Cef::Table::Download> download;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Cef::Table::OutputChain> output_chain;
        
}; // Native::Cef::Table


class Native::Cef::Table::ConsistencyCheck : public ydk::Entity
{
    public:
        ConsistencyCheck();
        ~ConsistencyCheck();

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

        class Ipv4; //type: Native::Cef::Table::ConsistencyCheck::Ipv4
        class Ipv6; //type: Native::Cef::Table::ConsistencyCheck::Ipv6

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Cef::Table::ConsistencyCheck::Ipv4> ipv4;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Cef::Table::ConsistencyCheck::Ipv6> ipv6;
        
}; // Native::Cef::Table::ConsistencyCheck


class Native::Cef::Table::ConsistencyCheck::Ipv4 : public ydk::Entity
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

        ydk::YLeaf data_checking; //type: empty
        ydk::YLeaf error_message; //type: empty
        class AutoRepair; //type: Native::Cef::Table::ConsistencyCheck::Ipv4::AutoRepair
        class Type; //type: Native::Cef::Table::ConsistencyCheck::Ipv4::Type

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Cef::Table::ConsistencyCheck::Ipv4::AutoRepair> auto_repair;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Cef::Table::ConsistencyCheck::Ipv4::Type> type;
        
}; // Native::Cef::Table::ConsistencyCheck::Ipv4


class Native::Cef::Table::ConsistencyCheck::Ipv4::AutoRepair : public ydk::Entity
{
    public:
        AutoRepair();
        ~AutoRepair();

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

        ydk::YLeaf delay; //type: uint16
        ydk::YLeaf holddown; //type: uint16

}; // Native::Cef::Table::ConsistencyCheck::Ipv4::AutoRepair


class Native::Cef::Table::ConsistencyCheck::Ipv4::Type : public ydk::Entity
{
    public:
        Type();
        ~Type();

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

        ydk::YLeaf lc_detect; //type: empty
        class ScanIosRib; //type: Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanIosRib
        class ScanRibIos; //type: Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanRibIos
        class ScanLcRp; //type: Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanLcRp
        class ScanRpLc; //type: Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanRpLc

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanIosRib> scan_ios_rib;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanLcRp> scan_lc_rp;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanRibIos> scan_rib_ios;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanRpLc> scan_rp_lc;
        
}; // Native::Cef::Table::ConsistencyCheck::Ipv4::Type


class Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanIosRib : public ydk::Entity
{
    public:
        ScanIosRib();
        ~ScanIosRib();

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

        class ScanOpt; //type: Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanIosRib::ScanOpt

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanIosRib::ScanOpt> scan_opt;
        
}; // Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanIosRib


class Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanIosRib::ScanOpt : public ydk::Entity
{
    public:
        ScanOpt();
        ~ScanOpt();

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

        ydk::YLeaf count; //type: uint16
        ydk::YLeaf period; //type: uint16

}; // Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanIosRib::ScanOpt


class Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanLcRp : public ydk::Entity
{
    public:
        ScanLcRp();
        ~ScanLcRp();

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

        class ScanOpt; //type: Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanLcRp::ScanOpt

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanLcRp::ScanOpt> scan_opt;
        
}; // Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanLcRp


class Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanLcRp::ScanOpt : public ydk::Entity
{
    public:
        ScanOpt();
        ~ScanOpt();

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

        ydk::YLeaf count; //type: uint16
        ydk::YLeaf period; //type: uint16

}; // Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanLcRp::ScanOpt


class Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanRibIos : public ydk::Entity
{
    public:
        ScanRibIos();
        ~ScanRibIos();

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

        class ScanOpt; //type: Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanRibIos::ScanOpt

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanRibIos::ScanOpt> scan_opt;
        
}; // Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanRibIos


class Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanRibIos::ScanOpt : public ydk::Entity
{
    public:
        ScanOpt();
        ~ScanOpt();

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

        ydk::YLeaf count; //type: uint16
        ydk::YLeaf period; //type: uint16

}; // Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanRibIos::ScanOpt


class Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanRpLc : public ydk::Entity
{
    public:
        ScanRpLc();
        ~ScanRpLc();

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

        class ScanOpt; //type: Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanRpLc::ScanOpt

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanRpLc::ScanOpt> scan_opt;
        
}; // Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanRpLc


class Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanRpLc::ScanOpt : public ydk::Entity
{
    public:
        ScanOpt();
        ~ScanOpt();

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

        ydk::YLeaf count; //type: uint16
        ydk::YLeaf period; //type: uint16

}; // Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanRpLc::ScanOpt


class Native::Cef::Table::ConsistencyCheck::Ipv6 : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf data_checking; //type: empty
        ydk::YLeaf error_message; //type: empty
        class AutoRepair; //type: Native::Cef::Table::ConsistencyCheck::Ipv6::AutoRepair
        class Type; //type: Native::Cef::Table::ConsistencyCheck::Ipv6::Type

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Cef::Table::ConsistencyCheck::Ipv6::AutoRepair> auto_repair;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Cef::Table::ConsistencyCheck::Ipv6::Type> type;
        
}; // Native::Cef::Table::ConsistencyCheck::Ipv6


class Native::Cef::Table::ConsistencyCheck::Ipv6::AutoRepair : public ydk::Entity
{
    public:
        AutoRepair();
        ~AutoRepair();

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

        ydk::YLeaf delay; //type: uint16
        ydk::YLeaf holddown; //type: uint16

}; // Native::Cef::Table::ConsistencyCheck::Ipv6::AutoRepair


class Native::Cef::Table::ConsistencyCheck::Ipv6::Type : public ydk::Entity
{
    public:
        Type();
        ~Type();

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

        ydk::YLeaf lc_detect; //type: empty
        class ScanIosRib; //type: Native::Cef::Table::ConsistencyCheck::Ipv6::Type::ScanIosRib
        class ScanLcRp; //type: Native::Cef::Table::ConsistencyCheck::Ipv6::Type::ScanLcRp
        class ScanRpLc; //type: Native::Cef::Table::ConsistencyCheck::Ipv6::Type::ScanRpLc

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Cef::Table::ConsistencyCheck::Ipv6::Type::ScanIosRib> scan_ios_rib;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Cef::Table::ConsistencyCheck::Ipv6::Type::ScanLcRp> scan_lc_rp;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Cef::Table::ConsistencyCheck::Ipv6::Type::ScanRpLc> scan_rp_lc;
        
}; // Native::Cef::Table::ConsistencyCheck::Ipv6::Type


class Native::Cef::Table::ConsistencyCheck::Ipv6::Type::ScanIosRib : public ydk::Entity
{
    public:
        ScanIosRib();
        ~ScanIosRib();

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

        class ScanOpt; //type: Native::Cef::Table::ConsistencyCheck::Ipv6::Type::ScanIosRib::ScanOpt

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Cef::Table::ConsistencyCheck::Ipv6::Type::ScanIosRib::ScanOpt> scan_opt;
        
}; // Native::Cef::Table::ConsistencyCheck::Ipv6::Type::ScanIosRib


class Native::Cef::Table::ConsistencyCheck::Ipv6::Type::ScanIosRib::ScanOpt : public ydk::Entity
{
    public:
        ScanOpt();
        ~ScanOpt();

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

        ydk::YLeaf count; //type: uint16
        ydk::YLeaf period; //type: uint16

}; // Native::Cef::Table::ConsistencyCheck::Ipv6::Type::ScanIosRib::ScanOpt


class Native::Cef::Table::ConsistencyCheck::Ipv6::Type::ScanLcRp : public ydk::Entity
{
    public:
        ScanLcRp();
        ~ScanLcRp();

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

        class ScanOpt; //type: Native::Cef::Table::ConsistencyCheck::Ipv6::Type::ScanLcRp::ScanOpt

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Cef::Table::ConsistencyCheck::Ipv6::Type::ScanLcRp::ScanOpt> scan_opt;
        
}; // Native::Cef::Table::ConsistencyCheck::Ipv6::Type::ScanLcRp


class Native::Cef::Table::ConsistencyCheck::Ipv6::Type::ScanLcRp::ScanOpt : public ydk::Entity
{
    public:
        ScanOpt();
        ~ScanOpt();

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

        ydk::YLeaf count; //type: uint16
        ydk::YLeaf period; //type: uint16

}; // Native::Cef::Table::ConsistencyCheck::Ipv6::Type::ScanLcRp::ScanOpt


class Native::Cef::Table::ConsistencyCheck::Ipv6::Type::ScanRpLc : public ydk::Entity
{
    public:
        ScanRpLc();
        ~ScanRpLc();

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

        class ScanOpt; //type: Native::Cef::Table::ConsistencyCheck::Ipv6::Type::ScanRpLc::ScanOpt

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Cef::Table::ConsistencyCheck::Ipv6::Type::ScanRpLc::ScanOpt> scan_opt;
        
}; // Native::Cef::Table::ConsistencyCheck::Ipv6::Type::ScanRpLc


class Native::Cef::Table::ConsistencyCheck::Ipv6::Type::ScanRpLc::ScanOpt : public ydk::Entity
{
    public:
        ScanOpt();
        ~ScanOpt();

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

        ydk::YLeaf count; //type: uint16
        ydk::YLeaf period; //type: uint16

}; // Native::Cef::Table::ConsistencyCheck::Ipv6::Type::ScanRpLc::ScanOpt


class Native::Cef::Table::Download : public ydk::Entity
{
    public:
        Download();
        ~Download();

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

        class CatchAll; //type: Native::Cef::Table::Download::CatchAll
        class ConnectedRoute; //type: Native::Cef::Table::Download::ConnectedRoute
        class DefaultRoute; //type: Native::Cef::Table::Download::DefaultRoute
        class ReceiveRoute; //type: Native::Cef::Table::Download::ReceiveRoute
        class RecursiveDependents; //type: Native::Cef::Table::Download::RecursiveDependents
        class RouteInVrf; //type: Native::Cef::Table::Download::RouteInVrf

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Cef::Table::Download::CatchAll> catch_all;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Cef::Table::Download::ConnectedRoute> connected_route;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Cef::Table::Download::DefaultRoute> default_route;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Cef::Table::Download::ReceiveRoute> receive_route;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Cef::Table::Download::RecursiveDependents> recursive_dependents;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Cef::Table::Download::RouteInVrf> route_in_vrf;
        
}; // Native::Cef::Table::Download


class Native::Cef::Table::Download::CatchAll : public ydk::Entity
{
    public:
        CatchAll();
        ~CatchAll();

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

        class Priority; //type: Native::Cef::Table::Download::CatchAll::Priority

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Cef::Table::Download::CatchAll::Priority> priority;
        
}; // Native::Cef::Table::Download::CatchAll


class Native::Cef::Table::Download::CatchAll::Priority : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf priority1; //type: empty
        ydk::YLeaf priority2; //type: empty
        ydk::YLeaf priority3; //type: empty
        ydk::YLeaf priority4; //type: empty

}; // Native::Cef::Table::Download::CatchAll::Priority


class Native::Cef::Table::Download::ConnectedRoute : public ydk::Entity
{
    public:
        ConnectedRoute();
        ~ConnectedRoute();

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

        class Priority; //type: Native::Cef::Table::Download::ConnectedRoute::Priority

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Cef::Table::Download::ConnectedRoute::Priority> priority;
        
}; // Native::Cef::Table::Download::ConnectedRoute


class Native::Cef::Table::Download::ConnectedRoute::Priority : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf priority1; //type: empty
        ydk::YLeaf priority2; //type: empty
        ydk::YLeaf priority3; //type: empty
        ydk::YLeaf priority4; //type: empty

}; // Native::Cef::Table::Download::ConnectedRoute::Priority


class Native::Cef::Table::Download::DefaultRoute : public ydk::Entity
{
    public:
        DefaultRoute();
        ~DefaultRoute();

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

        class Priority; //type: Native::Cef::Table::Download::DefaultRoute::Priority

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Cef::Table::Download::DefaultRoute::Priority> priority;
        
}; // Native::Cef::Table::Download::DefaultRoute


class Native::Cef::Table::Download::DefaultRoute::Priority : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf priority1; //type: empty
        ydk::YLeaf priority2; //type: empty
        ydk::YLeaf priority3; //type: empty
        ydk::YLeaf priority4; //type: empty

}; // Native::Cef::Table::Download::DefaultRoute::Priority


class Native::Cef::Table::Download::ReceiveRoute : public ydk::Entity
{
    public:
        ReceiveRoute();
        ~ReceiveRoute();

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

        class Priority; //type: Native::Cef::Table::Download::ReceiveRoute::Priority

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Cef::Table::Download::ReceiveRoute::Priority> priority;
        
}; // Native::Cef::Table::Download::ReceiveRoute


class Native::Cef::Table::Download::ReceiveRoute::Priority : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf priority1; //type: empty
        ydk::YLeaf priority2; //type: empty
        ydk::YLeaf priority3; //type: empty
        ydk::YLeaf priority4; //type: empty

}; // Native::Cef::Table::Download::ReceiveRoute::Priority


class Native::Cef::Table::Download::RecursiveDependents : public ydk::Entity
{
    public:
        RecursiveDependents();
        ~RecursiveDependents();

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

        class Priority; //type: Native::Cef::Table::Download::RecursiveDependents::Priority

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Cef::Table::Download::RecursiveDependents::Priority> priority;
        
}; // Native::Cef::Table::Download::RecursiveDependents


class Native::Cef::Table::Download::RecursiveDependents::Priority : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf priority1; //type: empty
        ydk::YLeaf priority2; //type: empty
        ydk::YLeaf priority3; //type: empty
        ydk::YLeaf priority4; //type: empty

}; // Native::Cef::Table::Download::RecursiveDependents::Priority


class Native::Cef::Table::Download::RouteInVrf : public ydk::Entity
{
    public:
        RouteInVrf();
        ~RouteInVrf();

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

        class Priority; //type: Native::Cef::Table::Download::RouteInVrf::Priority

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Cef::Table::Download::RouteInVrf::Priority> priority;
        
}; // Native::Cef::Table::Download::RouteInVrf


class Native::Cef::Table::Download::RouteInVrf::Priority : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf priority1; //type: empty
        ydk::YLeaf priority2; //type: empty
        ydk::YLeaf priority3; //type: empty
        ydk::YLeaf priority4; //type: empty

}; // Native::Cef::Table::Download::RouteInVrf::Priority


class Native::Cef::Table::OutputChain : public ydk::Entity
{
    public:
        OutputChain();
        ~OutputChain();

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

        class Build; //type: Native::Cef::Table::OutputChain::Build

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Cef::Table::OutputChain::Build> build;
        
}; // Native::Cef::Table::OutputChain


class Native::Cef::Table::OutputChain::Build : public ydk::Entity
{
    public:
        Build();
        ~Build();

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

        class Favor; //type: Native::Cef::Table::OutputChain::Build::Favor
        class Indirection; //type: Native::Cef::Table::OutputChain::Build::Indirection
        class InplaceModify; //type: Native::Cef::Table::OutputChain::Build::InplaceModify

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Cef::Table::OutputChain::Build::Favor> favor;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Cef::Table::OutputChain::Build::Indirection> indirection;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Cef::Table::OutputChain::Build::InplaceModify> inplace_modify;
        
}; // Native::Cef::Table::OutputChain::Build


class Native::Cef::Table::OutputChain::Build::Favor : public ydk::Entity
{
    public:
        Favor();
        ~Favor();

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

        ydk::YLeaf convergence_speed; //type: empty
        ydk::YLeaf memory_utilization; //type: empty

}; // Native::Cef::Table::OutputChain::Build::Favor


class Native::Cef::Table::OutputChain::Build::Indirection : public ydk::Entity
{
    public:
        Indirection();
        ~Indirection();

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

        ydk::YLeaf ipv4_to_mpls; //type: empty
        ydk::YLeaf ipv6_to_mpls; //type: empty
        ydk::YLeaf mpls_end_of_stack; //type: empty
        ydk::YLeaf mpls_non_end_of_stack; //type: empty
        ydk::YLeaf non_recursive_prefix; //type: empty
        ydk::YLeaf recursive_prefix; //type: empty

}; // Native::Cef::Table::OutputChain::Build::Indirection


class Native::Cef::Table::OutputChain::Build::InplaceModify : public ydk::Entity
{
    public:
        InplaceModify();
        ~InplaceModify();

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

        ydk::YLeaf load_sharing; //type: empty
        ydk::YLeaf push_counter; //type: empty

}; // Native::Cef::Table::OutputChain::Build::InplaceModify


class Native::CiscoIOSXENativeTemplate : public ydk::Entity
{
    public:
        CiscoIOSXENativeTemplate();
        ~CiscoIOSXENativeTemplate();

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

        class TemplateDetails; //type: Native::CiscoIOSXENativeTemplate::TemplateDetails

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::CiscoIOSXENativeTemplate::TemplateDetails> > template_details;
        
}; // Native::CiscoIOSXENativeTemplate


class Native::CiscoIOSXENativeTemplate::TemplateDetails : public ydk::Entity
{
    public:
        TemplateDetails();
        ~TemplateDetails();

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

        ydk::YLeaf template_name; //type: string
        class Ethernet; //type: Native::CiscoIOSXENativeTemplate::TemplateDetails::Ethernet

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::CiscoIOSXENativeTemplate::TemplateDetails::Ethernet> ethernet;
        
}; // Native::CiscoIOSXENativeTemplate::TemplateDetails


class Native::CiscoIOSXENativeTemplate::TemplateDetails::Ethernet : public ydk::Entity
{
    public:
        Ethernet();
        ~Ethernet();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Oam; //type: Native::CiscoIOSXENativeTemplate::TemplateDetails::Ethernet::Oam

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::CiscoIOSXENativeTemplate::TemplateDetails::Ethernet::Oam> oam;
        
}; // Native::CiscoIOSXENativeTemplate::TemplateDetails::Ethernet


class Native::CiscoIOSXENativeTemplate::TemplateDetails::Ethernet::Oam : public ydk::Entity
{
    public:
        Oam();
        ~Oam();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class LinkMonitor; //type: Native::CiscoIOSXENativeTemplate::TemplateDetails::Ethernet::Oam::LinkMonitor
        class RemoteFailure; //type: Native::CiscoIOSXENativeTemplate::TemplateDetails::Ethernet::Oam::RemoteFailure

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::CiscoIOSXENativeTemplate::TemplateDetails::Ethernet::Oam::LinkMonitor> link_monitor;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::CiscoIOSXENativeTemplate::TemplateDetails::Ethernet::Oam::RemoteFailure> remote_failure;
        
}; // Native::CiscoIOSXENativeTemplate::TemplateDetails::Ethernet::Oam


class Native::CiscoIOSXENativeTemplate::TemplateDetails::Ethernet::Oam::LinkMonitor : public ydk::Entity
{
    public:
        LinkMonitor();
        ~LinkMonitor();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf window; //type: uint16
        class Frame; //type: Native::CiscoIOSXENativeTemplate::TemplateDetails::Ethernet::Oam::LinkMonitor::Frame
        class FramePeriod; //type: Native::CiscoIOSXENativeTemplate::TemplateDetails::Ethernet::Oam::LinkMonitor::FramePeriod
        class FrameSeconds; //type: Native::CiscoIOSXENativeTemplate::TemplateDetails::Ethernet::Oam::LinkMonitor::FrameSeconds
        class HighThreshold; //type: Native::CiscoIOSXENativeTemplate::TemplateDetails::Ethernet::Oam::LinkMonitor::HighThreshold
        class ReceiveCrc; //type: Native::CiscoIOSXENativeTemplate::TemplateDetails::Ethernet::Oam::LinkMonitor::ReceiveCrc
        class SymbolPeriod; //type: Native::CiscoIOSXENativeTemplate::TemplateDetails::Ethernet::Oam::LinkMonitor::SymbolPeriod
        class TransmitCrc; //type: Native::CiscoIOSXENativeTemplate::TemplateDetails::Ethernet::Oam::LinkMonitor::TransmitCrc

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::CiscoIOSXENativeTemplate::TemplateDetails::Ethernet::Oam::LinkMonitor::Frame> frame;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::CiscoIOSXENativeTemplate::TemplateDetails::Ethernet::Oam::LinkMonitor::FramePeriod> frame_period;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::CiscoIOSXENativeTemplate::TemplateDetails::Ethernet::Oam::LinkMonitor::FrameSeconds> frame_seconds;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::CiscoIOSXENativeTemplate::TemplateDetails::Ethernet::Oam::LinkMonitor::HighThreshold> high_threshold;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::CiscoIOSXENativeTemplate::TemplateDetails::Ethernet::Oam::LinkMonitor::ReceiveCrc> receive_crc;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::CiscoIOSXENativeTemplate::TemplateDetails::Ethernet::Oam::LinkMonitor::SymbolPeriod> symbol_period;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::CiscoIOSXENativeTemplate::TemplateDetails::Ethernet::Oam::LinkMonitor::TransmitCrc> transmit_crc;
        
}; // Native::CiscoIOSXENativeTemplate::TemplateDetails::Ethernet::Oam::LinkMonitor

class Native::CallHome::Profile::Destination::TransportMethod : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf http;
        static const ydk::Enum::YLeaf email;

};

class Native::CallHome::Profile::SubscribeToAlertGroup::Diagnostic::Severity : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf catastrophic;
        static const ydk::Enum::YLeaf critical;
        static const ydk::Enum::YLeaf debugging;
        static const ydk::Enum::YLeaf disaster;
        static const ydk::Enum::YLeaf fatal;
        static const ydk::Enum::YLeaf major;
        static const ydk::Enum::YLeaf minor;
        static const ydk::Enum::YLeaf normal;
        static const ydk::Enum::YLeaf notification;
        static const ydk::Enum::YLeaf warning;

};

class Native::CallHome::Profile::SubscribeToAlertGroup::Environment::Severity : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf catastrophic;
        static const ydk::Enum::YLeaf critical;
        static const ydk::Enum::YLeaf debugging;
        static const ydk::Enum::YLeaf disaster;
        static const ydk::Enum::YLeaf fatal;
        static const ydk::Enum::YLeaf major;
        static const ydk::Enum::YLeaf minor;
        static const ydk::Enum::YLeaf normal;
        static const ydk::Enum::YLeaf notification;
        static const ydk::Enum::YLeaf warning;

};

class Native::CallHome::Profile::SubscribeToAlertGroup::Syslog::Severity::Value_ : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf catastrophic;
        static const ydk::Enum::YLeaf critical;
        static const ydk::Enum::YLeaf debugging;
        static const ydk::Enum::YLeaf disaster;
        static const ydk::Enum::YLeaf fatal;
        static const ydk::Enum::YLeaf major;
        static const ydk::Enum::YLeaf minor;
        static const ydk::Enum::YLeaf normal;
        static const ydk::Enum::YLeaf notification;
        static const ydk::Enum::YLeaf warning;

};

class Native::Card::Type : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf t1;
        static const ydk::Enum::YLeaf e1;

};


}
}

#endif /* _CISCO_IOS_XE_NATIVE_4_ */

