#ifndef _CISCO_IOS_XR_INFRA_SERG_CFG_
#define _CISCO_IOS_XR_INFRA_SERG_CFG_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_infra_serg_cfg {

class SessionRedundancy : public ydk::Entity
{
    public:
        SessionRedundancy();
        ~SessionRedundancy();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::shared_ptr<ydk::Entity> clone_ptr() const override;
        ydk::augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;
        std::map<std::pair<std::string, std::string>, std::string> get_namespace_identity_lookup() const override;

        ydk::YLeaf redundancy_disable; //type: empty
        ydk::YLeaf enable; //type: empty
        ydk::YLeaf source_interface; //type: string
        ydk::YLeaf preferred_role; //type: SessionRedundancyGroupRole
        ydk::YLeaf hold_timer; //type: uint32
        class Groups; //type: SessionRedundancy::Groups
        class RevertiveTimer; //type: SessionRedundancy::RevertiveTimer

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_serg_cfg::SessionRedundancy::Groups> groups;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_serg_cfg::SessionRedundancy::RevertiveTimer> revertive_timer;
        
}; // SessionRedundancy


class SessionRedundancy::Groups : public ydk::Entity
{
    public:
        Groups();
        ~Groups();

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

        class Group; //type: SessionRedundancy::Groups::Group

        ydk::YList group;
        
}; // SessionRedundancy::Groups


class SessionRedundancy::Groups::Group : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf group_id; //type: uint32
        ydk::YLeaf core_tracking_object; //type: string
        ydk::YLeaf disable_tracking_object; //type: empty
        ydk::YLeaf redundancy_disable; //type: empty
        ydk::YLeaf enable; //type: empty
        ydk::YLeaf description; //type: string
        ydk::YLeaf access_tracking_object; //type: string
        ydk::YLeaf preferred_role; //type: SessionRedundancyGroupRole
        ydk::YLeaf hold_timer; //type: uint32
        class Peer; //type: SessionRedundancy::Groups::Group::Peer
        class RevertiveTimer; //type: SessionRedundancy::Groups::Group::RevertiveTimer
        class InterfaceList; //type: SessionRedundancy::Groups::Group::InterfaceList
        class PoolList; //type: SessionRedundancy::Groups::Group::PoolList

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_serg_cfg::SessionRedundancy::Groups::Group::Peer> peer;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_serg_cfg::SessionRedundancy::Groups::Group::RevertiveTimer> revertive_timer;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_serg_cfg::SessionRedundancy::Groups::Group::InterfaceList> interface_list;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_serg_cfg::SessionRedundancy::Groups::Group::PoolList> pool_list;
        
}; // SessionRedundancy::Groups::Group


class SessionRedundancy::Groups::Group::Peer : public ydk::Entity
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

        class Ipaddress; //type: SessionRedundancy::Groups::Group::Peer::Ipaddress

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_serg_cfg::SessionRedundancy::Groups::Group::Peer::Ipaddress> ipaddress;
        
}; // SessionRedundancy::Groups::Group::Peer


class SessionRedundancy::Groups::Group::Peer::Ipaddress : public ydk::Entity
{
    public:
        Ipaddress();
        ~Ipaddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address_family; //type: SergAddrFamily
        ydk::YLeaf prefix_string; //type: string

}; // SessionRedundancy::Groups::Group::Peer::Ipaddress


class SessionRedundancy::Groups::Group::RevertiveTimer : public ydk::Entity
{
    public:
        RevertiveTimer();
        ~RevertiveTimer();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf max_value; //type: uint32
        ydk::YLeaf value_; //type: uint32

}; // SessionRedundancy::Groups::Group::RevertiveTimer


class SessionRedundancy::Groups::Group::InterfaceList : public ydk::Entity
{
    public:
        InterfaceList();
        ~InterfaceList();

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
        class InterfaceRanges; //type: SessionRedundancy::Groups::Group::InterfaceList::InterfaceRanges
        class Interfaces; //type: SessionRedundancy::Groups::Group::InterfaceList::Interfaces

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_serg_cfg::SessionRedundancy::Groups::Group::InterfaceList::InterfaceRanges> interface_ranges;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_serg_cfg::SessionRedundancy::Groups::Group::InterfaceList::Interfaces> interfaces;
        
}; // SessionRedundancy::Groups::Group::InterfaceList


class SessionRedundancy::Groups::Group::InterfaceList::InterfaceRanges : public ydk::Entity
{
    public:
        InterfaceRanges();
        ~InterfaceRanges();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class InterfaceRange; //type: SessionRedundancy::Groups::Group::InterfaceList::InterfaceRanges::InterfaceRange

        ydk::YList interface_range;
        
}; // SessionRedundancy::Groups::Group::InterfaceList::InterfaceRanges


class SessionRedundancy::Groups::Group::InterfaceList::InterfaceRanges::InterfaceRange : public ydk::Entity
{
    public:
        InterfaceRange();
        ~InterfaceRange();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf interface_name; //type: string
        ydk::YLeaf sub_interface_range_start; //type: uint32
        ydk::YLeaf sub_interface_range_end; //type: uint32
        ydk::YLeaf interface_id_range_start; //type: uint32
        ydk::YLeaf interface_id_range_end; //type: uint32

}; // SessionRedundancy::Groups::Group::InterfaceList::InterfaceRanges::InterfaceRange


class SessionRedundancy::Groups::Group::InterfaceList::Interfaces : public ydk::Entity
{
    public:
        Interfaces();
        ~Interfaces();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Interface; //type: SessionRedundancy::Groups::Group::InterfaceList::Interfaces::Interface

        ydk::YList interface;
        
}; // SessionRedundancy::Groups::Group::InterfaceList::Interfaces


class SessionRedundancy::Groups::Group::InterfaceList::Interfaces::Interface : public ydk::Entity
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

        ydk::YLeaf interface_name; //type: string
        ydk::YLeaf interface_id; //type: uint32

}; // SessionRedundancy::Groups::Group::InterfaceList::Interfaces::Interface


class SessionRedundancy::Groups::Group::PoolList : public ydk::Entity
{
    public:
        PoolList();
        ~PoolList();

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
        class PoolNames; //type: SessionRedundancy::Groups::Group::PoolList::PoolNames

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_infra_serg_cfg::SessionRedundancy::Groups::Group::PoolList::PoolNames> pool_names;
        
}; // SessionRedundancy::Groups::Group::PoolList


class SessionRedundancy::Groups::Group::PoolList::PoolNames : public ydk::Entity
{
    public:
        PoolNames();
        ~PoolNames();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PoolName; //type: SessionRedundancy::Groups::Group::PoolList::PoolNames::PoolName

        ydk::YList pool_name;
        
}; // SessionRedundancy::Groups::Group::PoolList::PoolNames


class SessionRedundancy::Groups::Group::PoolList::PoolNames::PoolName : public ydk::Entity
{
    public:
        PoolName();
        ~PoolName();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf pool_name; //type: string

}; // SessionRedundancy::Groups::Group::PoolList::PoolNames::PoolName


class SessionRedundancy::RevertiveTimer : public ydk::Entity
{
    public:
        RevertiveTimer();
        ~RevertiveTimer();

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

        ydk::YLeaf max_value; //type: uint32
        ydk::YLeaf value_; //type: uint32

}; // SessionRedundancy::RevertiveTimer

class SergAddrFamily : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ipv4;
        static const ydk::Enum::YLeaf ipv6;

};

class SessionRedundancyGroupRole : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf master;
        static const ydk::Enum::YLeaf slave;

};


}
}

#endif /* _CISCO_IOS_XR_INFRA_SERG_CFG_ */

