#ifndef _CISCO_IOS_XR_LIB_MPP_OPER_
#define _CISCO_IOS_XR_LIB_MPP_OPER_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_lib_mpp_oper {

class MppAfIdBase : public virtual ydk::Identity
{
    public:
        MppAfIdBase();
        ~MppAfIdBase();


}; // MppAfIdBase

class ManagementPlaneProtection : public ydk::Entity
{
    public:
        ManagementPlaneProtection();
        ~ManagementPlaneProtection();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
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

        class Outband; //type: ManagementPlaneProtection::Outband
        class Inband; //type: ManagementPlaneProtection::Inband

        std::shared_ptr<Cisco_IOS_XR_lib_mpp_oper::ManagementPlaneProtection::Inband> inband;
        std::shared_ptr<Cisco_IOS_XR_lib_mpp_oper::ManagementPlaneProtection::Outband> outband;
        
}; // ManagementPlaneProtection


class ManagementPlaneProtection::Outband : public ydk::Entity
{
    public:
        Outband();
        ~Outband();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Vrf; //type: ManagementPlaneProtection::Outband::Vrf
        class Interfaces; //type: ManagementPlaneProtection::Outband::Interfaces

        std::shared_ptr<Cisco_IOS_XR_lib_mpp_oper::ManagementPlaneProtection::Outband::Interfaces> interfaces;
        std::shared_ptr<Cisco_IOS_XR_lib_mpp_oper::ManagementPlaneProtection::Outband::Vrf> vrf;
        
}; // ManagementPlaneProtection::Outband


class ManagementPlaneProtection::Outband::Vrf : public ydk::Entity
{
    public:
        Vrf();
        ~Vrf();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf vrf_name; //type: string

}; // ManagementPlaneProtection::Outband::Vrf


class ManagementPlaneProtection::Outband::Interfaces : public ydk::Entity
{
    public:
        Interfaces();
        ~Interfaces();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Interface; //type: ManagementPlaneProtection::Outband::Interfaces::Interface

        std::vector<std::shared_ptr<Cisco_IOS_XR_lib_mpp_oper::ManagementPlaneProtection::Outband::Interfaces::Interface> > interface;
        
}; // ManagementPlaneProtection::Outband::Interfaces


class ManagementPlaneProtection::Outband::Interfaces::Interface : public ydk::Entity
{
    public:
        Interface();
        ~Interface();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf interface_name; //type: string
        class Protocol; //type: ManagementPlaneProtection::Outband::Interfaces::Interface::Protocol

        std::vector<std::shared_ptr<Cisco_IOS_XR_lib_mpp_oper::ManagementPlaneProtection::Outband::Interfaces::Interface::Protocol> > protocol;
        
}; // ManagementPlaneProtection::Outband::Interfaces::Interface


class ManagementPlaneProtection::Outband::Interfaces::Interface::Protocol : public ydk::Entity
{
    public:
        Protocol();
        ~Protocol();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf allow; //type: MppAllow
        ydk::YLeaf is_all_peers_allowed; //type: boolean
        class PeerAddress; //type: ManagementPlaneProtection::Outband::Interfaces::Interface::Protocol::PeerAddress

        std::vector<std::shared_ptr<Cisco_IOS_XR_lib_mpp_oper::ManagementPlaneProtection::Outband::Interfaces::Interface::Protocol::PeerAddress> > peer_address;
        
}; // ManagementPlaneProtection::Outband::Interfaces::Interface::Protocol


class ManagementPlaneProtection::Outband::Interfaces::Interface::Protocol::PeerAddress : public ydk::Entity
{
    public:
        PeerAddress();
        ~PeerAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf af_name; //type: MppAfIdBase
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv6_address; //type: string

}; // ManagementPlaneProtection::Outband::Interfaces::Interface::Protocol::PeerAddress


class ManagementPlaneProtection::Inband : public ydk::Entity
{
    public:
        Inband();
        ~Inband();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Interfaces; //type: ManagementPlaneProtection::Inband::Interfaces

        std::shared_ptr<Cisco_IOS_XR_lib_mpp_oper::ManagementPlaneProtection::Inband::Interfaces> interfaces;
        
}; // ManagementPlaneProtection::Inband


class ManagementPlaneProtection::Inband::Interfaces : public ydk::Entity
{
    public:
        Interfaces();
        ~Interfaces();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Interface; //type: ManagementPlaneProtection::Inband::Interfaces::Interface

        std::vector<std::shared_ptr<Cisco_IOS_XR_lib_mpp_oper::ManagementPlaneProtection::Inband::Interfaces::Interface> > interface;
        
}; // ManagementPlaneProtection::Inband::Interfaces


class ManagementPlaneProtection::Inband::Interfaces::Interface : public ydk::Entity
{
    public:
        Interface();
        ~Interface();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf interface_name; //type: string
        class Protocol; //type: ManagementPlaneProtection::Inband::Interfaces::Interface::Protocol

        std::vector<std::shared_ptr<Cisco_IOS_XR_lib_mpp_oper::ManagementPlaneProtection::Inband::Interfaces::Interface::Protocol> > protocol;
        
}; // ManagementPlaneProtection::Inband::Interfaces::Interface


class ManagementPlaneProtection::Inband::Interfaces::Interface::Protocol : public ydk::Entity
{
    public:
        Protocol();
        ~Protocol();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf allow; //type: MppAllow
        ydk::YLeaf is_all_peers_allowed; //type: boolean
        class PeerAddress; //type: ManagementPlaneProtection::Inband::Interfaces::Interface::Protocol::PeerAddress

        std::vector<std::shared_ptr<Cisco_IOS_XR_lib_mpp_oper::ManagementPlaneProtection::Inband::Interfaces::Interface::Protocol::PeerAddress> > peer_address;
        
}; // ManagementPlaneProtection::Inband::Interfaces::Interface::Protocol


class ManagementPlaneProtection::Inband::Interfaces::Interface::Protocol::PeerAddress : public ydk::Entity
{
    public:
        PeerAddress();
        ~PeerAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf af_name; //type: MppAfIdBase
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv6_address; //type: string

}; // ManagementPlaneProtection::Inband::Interfaces::Interface::Protocol::PeerAddress

class Ipv6 : public Cisco_IOS_XR_lib_mpp_oper::MppAfIdBase, virtual ydk::Identity
{
    public:
        Ipv6();
        ~Ipv6();


}; // Ipv6

class Ipv4 : public Cisco_IOS_XR_lib_mpp_oper::MppAfIdBase, virtual ydk::Identity
{
    public:
        Ipv4();
        ~Ipv4();


}; // Ipv4

class MppAllow : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ssh;
        static const ydk::Enum::YLeaf telnet;
        static const ydk::Enum::YLeaf snmp;
        static const ydk::Enum::YLeaf tftp;
        static const ydk::Enum::YLeaf http;
        static const ydk::Enum::YLeaf xr_xml;
        static const ydk::Enum::YLeaf netconf;
        static const ydk::Enum::YLeaf all;

};


}
}

#endif /* _CISCO_IOS_XR_LIB_MPP_OPER_ */

