#ifndef _CISCO_IOS_XR_LIB_MPP_OPER_
#define _CISCO_IOS_XR_LIB_MPP_OPER_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace ydk {
namespace Cisco_IOS_XR_lib_mpp_oper {

class MppAfIdBaseIdentity : public virtual Identity
{
    public:
        MppAfIdBaseIdentity();
        ~MppAfIdBaseIdentity();





}; // MppAfIdBaseIdentity

class ManagementPlaneProtection : public Entity
{
    public:
        ManagementPlaneProtection();
        ~ManagementPlaneProtection();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;
        std::shared_ptr<Entity> clone_ptr() const override;
        augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;



        class Outband; //type: ManagementPlaneProtection::Outband
        class Inband; //type: ManagementPlaneProtection::Inband

        std::shared_ptr<Cisco_IOS_XR_lib_mpp_oper::ManagementPlaneProtection::Inband> inband;
        std::shared_ptr<Cisco_IOS_XR_lib_mpp_oper::ManagementPlaneProtection::Outband> outband;


}; // ManagementPlaneProtection


class ManagementPlaneProtection::Outband : public Entity
{
    public:
        Outband();
        ~Outband();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Vrf; //type: ManagementPlaneProtection::Outband::Vrf
        class Interfaces; //type: ManagementPlaneProtection::Outband::Interfaces

        std::shared_ptr<Cisco_IOS_XR_lib_mpp_oper::ManagementPlaneProtection::Outband::Interfaces> interfaces;
        std::shared_ptr<Cisco_IOS_XR_lib_mpp_oper::ManagementPlaneProtection::Outband::Vrf> vrf;


}; // ManagementPlaneProtection::Outband


class ManagementPlaneProtection::Outband::Vrf : public Entity
{
    public:
        Vrf();
        ~Vrf();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf vrf_name; //type: string



}; // ManagementPlaneProtection::Outband::Vrf


class ManagementPlaneProtection::Outband::Interfaces : public Entity
{
    public:
        Interfaces();
        ~Interfaces();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Interface; //type: ManagementPlaneProtection::Outband::Interfaces::Interface

        std::vector<std::shared_ptr<Cisco_IOS_XR_lib_mpp_oper::ManagementPlaneProtection::Outband::Interfaces::Interface> > interface;


}; // ManagementPlaneProtection::Outband::Interfaces


class ManagementPlaneProtection::Outband::Interfaces::Interface : public Entity
{
    public:
        Interface();
        ~Interface();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf interface_name; //type: string

        class Protocol; //type: ManagementPlaneProtection::Outband::Interfaces::Interface::Protocol

        std::vector<std::shared_ptr<Cisco_IOS_XR_lib_mpp_oper::ManagementPlaneProtection::Outband::Interfaces::Interface::Protocol> > protocol;


}; // ManagementPlaneProtection::Outband::Interfaces::Interface


class ManagementPlaneProtection::Outband::Interfaces::Interface::Protocol : public Entity
{
    public:
        Protocol();
        ~Protocol();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf allow; //type: MppAllowEnum
        YLeaf is_all_peers_allowed; //type: boolean

        class PeerAddress; //type: ManagementPlaneProtection::Outband::Interfaces::Interface::Protocol::PeerAddress

        std::vector<std::shared_ptr<Cisco_IOS_XR_lib_mpp_oper::ManagementPlaneProtection::Outband::Interfaces::Interface::Protocol::PeerAddress> > peer_address;


}; // ManagementPlaneProtection::Outband::Interfaces::Interface::Protocol


class ManagementPlaneProtection::Outband::Interfaces::Interface::Protocol::PeerAddress : public Entity
{
    public:
        PeerAddress();
        ~PeerAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf af_name; //type: MppAfIdBaseIdentity
        YLeaf ipv4_address; //type: string
        YLeaf ipv6_address; //type: string



}; // ManagementPlaneProtection::Outband::Interfaces::Interface::Protocol::PeerAddress


class ManagementPlaneProtection::Inband : public Entity
{
    public:
        Inband();
        ~Inband();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Interfaces; //type: ManagementPlaneProtection::Inband::Interfaces

        std::shared_ptr<Cisco_IOS_XR_lib_mpp_oper::ManagementPlaneProtection::Inband::Interfaces> interfaces;


}; // ManagementPlaneProtection::Inband


class ManagementPlaneProtection::Inband::Interfaces : public Entity
{
    public:
        Interfaces();
        ~Interfaces();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Interface; //type: ManagementPlaneProtection::Inband::Interfaces::Interface

        std::vector<std::shared_ptr<Cisco_IOS_XR_lib_mpp_oper::ManagementPlaneProtection::Inband::Interfaces::Interface> > interface;


}; // ManagementPlaneProtection::Inband::Interfaces


class ManagementPlaneProtection::Inband::Interfaces::Interface : public Entity
{
    public:
        Interface();
        ~Interface();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf interface_name; //type: string

        class Protocol; //type: ManagementPlaneProtection::Inband::Interfaces::Interface::Protocol

        std::vector<std::shared_ptr<Cisco_IOS_XR_lib_mpp_oper::ManagementPlaneProtection::Inband::Interfaces::Interface::Protocol> > protocol;


}; // ManagementPlaneProtection::Inband::Interfaces::Interface


class ManagementPlaneProtection::Inband::Interfaces::Interface::Protocol : public Entity
{
    public:
        Protocol();
        ~Protocol();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf allow; //type: MppAllowEnum
        YLeaf is_all_peers_allowed; //type: boolean

        class PeerAddress; //type: ManagementPlaneProtection::Inband::Interfaces::Interface::Protocol::PeerAddress

        std::vector<std::shared_ptr<Cisco_IOS_XR_lib_mpp_oper::ManagementPlaneProtection::Inband::Interfaces::Interface::Protocol::PeerAddress> > peer_address;


}; // ManagementPlaneProtection::Inband::Interfaces::Interface::Protocol


class ManagementPlaneProtection::Inband::Interfaces::Interface::Protocol::PeerAddress : public Entity
{
    public:
        PeerAddress();
        ~PeerAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf af_name; //type: MppAfIdBaseIdentity
        YLeaf ipv4_address; //type: string
        YLeaf ipv6_address; //type: string



}; // ManagementPlaneProtection::Inband::Interfaces::Interface::Protocol::PeerAddress

class Ipv4Identity : public Cisco_IOS_XR_lib_mpp_oper::MppAfIdBaseIdentity, virtual Identity
{
    public:
        Ipv4Identity();
        ~Ipv4Identity();




}; // Ipv4Identity

class Ipv6Identity : public Cisco_IOS_XR_lib_mpp_oper::MppAfIdBaseIdentity, virtual Identity
{
    public:
        Ipv6Identity();
        ~Ipv6Identity();




}; // Ipv6Identity

class MppAllowEnum : public Enum
{
    public:
        static const Enum::YLeaf ssh;
        static const Enum::YLeaf telnet;
        static const Enum::YLeaf snmp;
        static const Enum::YLeaf tftp;
        static const Enum::YLeaf http;
        static const Enum::YLeaf xr_xml;
        static const Enum::YLeaf netconf;
        static const Enum::YLeaf all;

};


}
}

#endif /* _CISCO_IOS_XR_LIB_MPP_OPER_ */

