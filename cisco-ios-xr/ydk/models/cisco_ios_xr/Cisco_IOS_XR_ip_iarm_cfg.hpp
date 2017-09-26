#ifndef _CISCO_IOS_XR_IP_IARM_CFG_
#define _CISCO_IOS_XR_IP_IARM_CFG_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_ip_iarm_cfg {

class IpArm : public ydk::Entity
{
    public:
        IpArm();
        ~IpArm();

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

        class Ipv4; //type: IpArm::Ipv4
        class Ipv6; //type: IpArm::Ipv6

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_iarm_cfg::IpArm::Ipv4> ipv4;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_iarm_cfg::IpArm::Ipv6> ipv6;
        
}; // IpArm


class IpArm::Ipv4 : public ydk::Entity
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

        class ConflictPolicyTable; //type: IpArm::Ipv4::ConflictPolicyTable
        class MulticastHost; //type: IpArm::Ipv4::MulticastHost

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_iarm_cfg::IpArm::Ipv4::ConflictPolicyTable> conflict_policy_table;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_iarm_cfg::IpArm::Ipv4::MulticastHost> multicast_host;
        
}; // IpArm::Ipv4


class IpArm::Ipv4::ConflictPolicyTable : public ydk::Entity
{
    public:
        ConflictPolicyTable();
        ~ConflictPolicyTable();

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

        ydk::YLeaf conflict_policy; //type: IpArmConflictPolicy

}; // IpArm::Ipv4::ConflictPolicyTable


class IpArm::Ipv4::MulticastHost : public ydk::Entity
{
    public:
        MulticastHost();
        ~MulticastHost();

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

        ydk::YLeaf multicast_host_interface; //type: string

}; // IpArm::Ipv4::MulticastHost


class IpArm::Ipv6 : public ydk::Entity
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

        class ConflictPolicyTable; //type: IpArm::Ipv6::ConflictPolicyTable
        class MulticastHost; //type: IpArm::Ipv6::MulticastHost

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_iarm_cfg::IpArm::Ipv6::ConflictPolicyTable> conflict_policy_table;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_iarm_cfg::IpArm::Ipv6::MulticastHost> multicast_host;
        
}; // IpArm::Ipv6


class IpArm::Ipv6::ConflictPolicyTable : public ydk::Entity
{
    public:
        ConflictPolicyTable();
        ~ConflictPolicyTable();

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

        ydk::YLeaf conflict_policy; //type: IpArmConflictPolicy

}; // IpArm::Ipv6::ConflictPolicyTable


class IpArm::Ipv6::MulticastHost : public ydk::Entity
{
    public:
        MulticastHost();
        ~MulticastHost();

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

        ydk::YLeaf multicast_host_interface; //type: string

}; // IpArm::Ipv6::MulticastHost

class IpArmConflictPolicy : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf lowest_rack_slot;
        static const ydk::Enum::YLeaf static_;
        static const ydk::Enum::YLeaf longest_prefix;
        static const ydk::Enum::YLeaf highest_ip;

};


}
}

#endif /* _CISCO_IOS_XR_IP_IARM_CFG_ */

