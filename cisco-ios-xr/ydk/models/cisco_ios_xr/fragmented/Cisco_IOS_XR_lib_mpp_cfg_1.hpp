#ifndef _CISCO_IOS_XR_LIB_MPP_CFG_1_
#define _CISCO_IOS_XR_LIB_MPP_CFG_1_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XR_lib_mpp_cfg_0.hpp"

namespace ydk {
namespace Cisco_IOS_XR_lib_mpp_cfg {


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::XrXml::PeerClass::PeerV6::PeerPrefixes::PeerPrefix : public Entity
{
    public:
        PeerPrefix();
        ~PeerPrefix();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf address_prefix; //type: string



}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::XrXml::PeerClass::PeerV6::PeerPrefixes::PeerPrefix


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SshProtocol : public Entity
{
    public:
        SshProtocol();
        ~SshProtocol();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class PeerClass; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass

        std::shared_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass> peer_class;


}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SshProtocol


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass : public Entity
{
    public:
        PeerClass();
        ~PeerClass();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf peer_all; //type: empty

        class PeerV4; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV4
        class PeerV6; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV6

        std::shared_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV4> peer_v4;
        std::shared_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV6> peer_v6;


}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV4 : public Entity
{
    public:
        PeerV4();
        ~PeerV4();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Peers; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV4::Peers
        class PeerPrefixes; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV4::PeerPrefixes

        std::shared_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV4::PeerPrefixes> peer_prefixes;
        std::shared_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV4::Peers> peers;


}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV4


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV4::Peers : public Entity
{
    public:
        Peers();
        ~Peers();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Peer; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV4::Peers::Peer

        std::vector<std::shared_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV4::Peers::Peer> > peer;


}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV4::Peers


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV4::Peers::Peer : public Entity
{
    public:
        Peer();
        ~Peer();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf address; //type: string



}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV4::Peers::Peer


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV4::PeerPrefixes : public Entity
{
    public:
        PeerPrefixes();
        ~PeerPrefixes();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class PeerPrefix; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix

        std::vector<std::shared_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix> > peer_prefix;


}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV4::PeerPrefixes


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix : public Entity
{
    public:
        PeerPrefix();
        ~PeerPrefix();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf address_prefix; //type: string



}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV6 : public Entity
{
    public:
        PeerV6();
        ~PeerV6();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Peers; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV6::Peers
        class PeerPrefixes; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV6::PeerPrefixes

        std::shared_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV6::PeerPrefixes> peer_prefixes;
        std::shared_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV6::Peers> peers;


}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV6


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV6::Peers : public Entity
{
    public:
        Peers();
        ~Peers();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Peer; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV6::Peers::Peer

        std::vector<std::shared_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV6::Peers::Peer> > peer;


}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV6::Peers


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV6::Peers::Peer : public Entity
{
    public:
        Peer();
        ~Peer();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf address; //type: string



}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV6::Peers::Peer


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV6::PeerPrefixes : public Entity
{
    public:
        PeerPrefixes();
        ~PeerPrefixes();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class PeerPrefix; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix

        std::vector<std::shared_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix> > peer_prefix;


}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV6::PeerPrefixes


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix : public Entity
{
    public:
        PeerPrefix();
        ~PeerPrefix();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf address_prefix; //type: string



}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SnmpProtocol : public Entity
{
    public:
        SnmpProtocol();
        ~SnmpProtocol();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class PeerClass; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass

        std::shared_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass> peer_class;


}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SnmpProtocol


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass : public Entity
{
    public:
        PeerClass();
        ~PeerClass();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf peer_all; //type: empty

        class PeerV4; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV4
        class PeerV6; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV6

        std::shared_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV4> peer_v4;
        std::shared_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV6> peer_v6;


}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV4 : public Entity
{
    public:
        PeerV4();
        ~PeerV4();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Peers; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV4::Peers
        class PeerPrefixes; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV4::PeerPrefixes

        std::shared_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV4::PeerPrefixes> peer_prefixes;
        std::shared_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV4::Peers> peers;


}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV4


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV4::Peers : public Entity
{
    public:
        Peers();
        ~Peers();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Peer; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV4::Peers::Peer

        std::vector<std::shared_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV4::Peers::Peer> > peer;


}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV4::Peers


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV4::Peers::Peer : public Entity
{
    public:
        Peer();
        ~Peer();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf address; //type: string



}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV4::Peers::Peer


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV4::PeerPrefixes : public Entity
{
    public:
        PeerPrefixes();
        ~PeerPrefixes();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class PeerPrefix; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix

        std::vector<std::shared_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix> > peer_prefix;


}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV4::PeerPrefixes


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix : public Entity
{
    public:
        PeerPrefix();
        ~PeerPrefix();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf address_prefix; //type: string



}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV6 : public Entity
{
    public:
        PeerV6();
        ~PeerV6();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Peers; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV6::Peers
        class PeerPrefixes; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV6::PeerPrefixes

        std::shared_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV6::PeerPrefixes> peer_prefixes;
        std::shared_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV6::Peers> peers;


}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV6


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV6::Peers : public Entity
{
    public:
        Peers();
        ~Peers();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Peer; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV6::Peers::Peer

        std::vector<std::shared_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV6::Peers::Peer> > peer;


}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV6::Peers


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV6::Peers::Peer : public Entity
{
    public:
        Peer();
        ~Peer();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf address; //type: string



}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV6::Peers::Peer


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV6::PeerPrefixes : public Entity
{
    public:
        PeerPrefixes();
        ~PeerPrefixes();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class PeerPrefix; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix

        std::vector<std::shared_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix> > peer_prefix;


}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV6::PeerPrefixes


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix : public Entity
{
    public:
        PeerPrefix();
        ~PeerPrefix();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf address_prefix; //type: string



}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TelnetProtocol : public Entity
{
    public:
        TelnetProtocol();
        ~TelnetProtocol();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class PeerClass; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass

        std::shared_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass> peer_class;


}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TelnetProtocol


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass : public Entity
{
    public:
        PeerClass();
        ~PeerClass();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf peer_all; //type: empty

        class PeerV4; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV4
        class PeerV6; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV6

        std::shared_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV4> peer_v4;
        std::shared_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV6> peer_v6;


}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV4 : public Entity
{
    public:
        PeerV4();
        ~PeerV4();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Peers; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV4::Peers
        class PeerPrefixes; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV4::PeerPrefixes

        std::shared_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV4::PeerPrefixes> peer_prefixes;
        std::shared_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV4::Peers> peers;


}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV4


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV4::Peers : public Entity
{
    public:
        Peers();
        ~Peers();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Peer; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV4::Peers::Peer

        std::vector<std::shared_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV4::Peers::Peer> > peer;


}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV4::Peers


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV4::Peers::Peer : public Entity
{
    public:
        Peer();
        ~Peer();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf address; //type: string



}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV4::Peers::Peer


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV4::PeerPrefixes : public Entity
{
    public:
        PeerPrefixes();
        ~PeerPrefixes();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class PeerPrefix; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix

        std::vector<std::shared_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix> > peer_prefix;


}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV4::PeerPrefixes


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix : public Entity
{
    public:
        PeerPrefix();
        ~PeerPrefix();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf address_prefix; //type: string



}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV6 : public Entity
{
    public:
        PeerV6();
        ~PeerV6();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Peers; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV6::Peers
        class PeerPrefixes; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV6::PeerPrefixes

        std::shared_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV6::PeerPrefixes> peer_prefixes;
        std::shared_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV6::Peers> peers;


}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV6


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV6::Peers : public Entity
{
    public:
        Peers();
        ~Peers();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Peer; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV6::Peers::Peer

        std::vector<std::shared_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV6::Peers::Peer> > peer;


}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV6::Peers


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV6::Peers::Peer : public Entity
{
    public:
        Peer();
        ~Peer();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf address; //type: string



}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV6::Peers::Peer


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV6::PeerPrefixes : public Entity
{
    public:
        PeerPrefixes();
        ~PeerPrefixes();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class PeerPrefix; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix

        std::vector<std::shared_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix> > peer_prefix;


}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV6::PeerPrefixes


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix : public Entity
{
    public:
        PeerPrefix();
        ~PeerPrefix();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf address_prefix; //type: string



}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::AllProtocols : public Entity
{
    public:
        AllProtocols();
        ~AllProtocols();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class PeerClass; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass

        std::shared_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass> peer_class;


}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::AllProtocols


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass : public Entity
{
    public:
        PeerClass();
        ~PeerClass();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf peer_all; //type: empty

        class PeerV4; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV4
        class PeerV6; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV6

        std::shared_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV4> peer_v4;
        std::shared_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV6> peer_v6;


}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV4 : public Entity
{
    public:
        PeerV4();
        ~PeerV4();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Peers; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV4::Peers
        class PeerPrefixes; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV4::PeerPrefixes

        std::shared_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV4::PeerPrefixes> peer_prefixes;
        std::shared_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV4::Peers> peers;


}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV4


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV4::Peers : public Entity
{
    public:
        Peers();
        ~Peers();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Peer; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV4::Peers::Peer

        std::vector<std::shared_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV4::Peers::Peer> > peer;


}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV4::Peers


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV4::Peers::Peer : public Entity
{
    public:
        Peer();
        ~Peer();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf address; //type: string



}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV4::Peers::Peer


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV4::PeerPrefixes : public Entity
{
    public:
        PeerPrefixes();
        ~PeerPrefixes();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class PeerPrefix; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV4::PeerPrefixes::PeerPrefix

        std::vector<std::shared_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV4::PeerPrefixes::PeerPrefix> > peer_prefix;


}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV4::PeerPrefixes


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV4::PeerPrefixes::PeerPrefix : public Entity
{
    public:
        PeerPrefix();
        ~PeerPrefix();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf address_prefix; //type: string



}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV4::PeerPrefixes::PeerPrefix


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV6 : public Entity
{
    public:
        PeerV6();
        ~PeerV6();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Peers; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV6::Peers
        class PeerPrefixes; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV6::PeerPrefixes

        std::shared_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV6::PeerPrefixes> peer_prefixes;
        std::shared_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV6::Peers> peers;


}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV6


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV6::Peers : public Entity
{
    public:
        Peers();
        ~Peers();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Peer; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV6::Peers::Peer

        std::vector<std::shared_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV6::Peers::Peer> > peer;


}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV6::Peers


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV6::Peers::Peer : public Entity
{
    public:
        Peer();
        ~Peer();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf address; //type: string



}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV6::Peers::Peer


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV6::PeerPrefixes : public Entity
{
    public:
        PeerPrefixes();
        ~PeerPrefixes();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class PeerPrefix; //type: ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV6::PeerPrefixes::PeerPrefix

        std::vector<std::shared_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV6::PeerPrefixes::PeerPrefix> > peer_prefix;


}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV6::PeerPrefixes


class ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV6::PeerPrefixes::PeerPrefix : public Entity
{
    public:
        PeerPrefix();
        ~PeerPrefix();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf address_prefix; //type: string



}; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV6::PeerPrefixes::PeerPrefix


class ControlPlane::ManagementPlaneProtection::Inband : public Entity
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



        class InterfaceSelection; //type: ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection

        std::shared_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection> interface_selection;


}; // ControlPlane::ManagementPlaneProtection::Inband


class ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection : public Entity
{
    public:
        InterfaceSelection();
        ~InterfaceSelection();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Interfaces; //type: ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces
        class AllInterfaces; //type: ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces

        std::shared_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces> all_interfaces;
        std::shared_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces> interfaces;


}; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection


class ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces : public Entity
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



        class Interface; //type: ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface

        std::vector<std::shared_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface> > interface;


}; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces


class ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface : public Entity
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

        class HttpProtocol; //type: ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::HttpProtocol
        class TftpProtocol; //type: ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TftpProtocol
        class NetconfProtocol; //type: ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::NetconfProtocol
        class XrXml; //type: ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::XrXml
        class SshProtocol; //type: ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SshProtocol
        class SnmpProtocol; //type: ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SnmpProtocol
        class TelnetProtocol; //type: ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TelnetProtocol
        class AllProtocols; //type: ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::AllProtocols

        std::shared_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::AllProtocols> all_protocols;
        std::shared_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::HttpProtocol> http_protocol;
        std::shared_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::NetconfProtocol> netconf_protocol;
        std::shared_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SnmpProtocol> snmp_protocol;
        std::shared_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SshProtocol> ssh_protocol;
        std::shared_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TelnetProtocol> telnet_protocol;
        std::shared_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TftpProtocol> tftp_protocol;
        std::shared_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::XrXml> xr_xml;


}; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface


class ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::HttpProtocol : public Entity
{
    public:
        HttpProtocol();
        ~HttpProtocol();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class PeerClass; //type: ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass

        std::shared_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass> peer_class;


}; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::HttpProtocol


class ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass : public Entity
{
    public:
        PeerClass();
        ~PeerClass();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf peer_all; //type: empty

        class PeerV4; //type: ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV4
        class PeerV6; //type: ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV6

        std::shared_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV4> peer_v4;
        std::shared_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV6> peer_v6;


}; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass


class ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV4 : public Entity
{
    public:
        PeerV4();
        ~PeerV4();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Peers; //type: ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV4::Peers
        class PeerPrefixes; //type: ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV4::PeerPrefixes

        std::shared_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV4::PeerPrefixes> peer_prefixes;
        std::shared_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV4::Peers> peers;


}; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV4


class ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV4::Peers : public Entity
{
    public:
        Peers();
        ~Peers();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Peer; //type: ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV4::Peers::Peer

        std::vector<std::shared_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV4::Peers::Peer> > peer;


}; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV4::Peers


class ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV4::Peers::Peer : public Entity
{
    public:
        Peer();
        ~Peer();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf address; //type: string



}; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV4::Peers::Peer


class ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV4::PeerPrefixes : public Entity
{
    public:
        PeerPrefixes();
        ~PeerPrefixes();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class PeerPrefix; //type: ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix

        std::vector<std::shared_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix> > peer_prefix;


}; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV4::PeerPrefixes


class ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix : public Entity
{
    public:
        PeerPrefix();
        ~PeerPrefix();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf address_prefix; //type: string



}; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix


class ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV6 : public Entity
{
    public:
        PeerV6();
        ~PeerV6();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Peers; //type: ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV6::Peers
        class PeerPrefixes; //type: ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV6::PeerPrefixes

        std::shared_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV6::PeerPrefixes> peer_prefixes;
        std::shared_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV6::Peers> peers;


}; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV6


class ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV6::Peers : public Entity
{
    public:
        Peers();
        ~Peers();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Peer; //type: ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV6::Peers::Peer

        std::vector<std::shared_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV6::Peers::Peer> > peer;


}; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV6::Peers


class ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV6::Peers::Peer : public Entity
{
    public:
        Peer();
        ~Peer();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf address; //type: string



}; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV6::Peers::Peer


class ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV6::PeerPrefixes : public Entity
{
    public:
        PeerPrefixes();
        ~PeerPrefixes();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class PeerPrefix; //type: ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix

        std::vector<std::shared_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix> > peer_prefix;


}; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV6::PeerPrefixes


class ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix : public Entity
{
    public:
        PeerPrefix();
        ~PeerPrefix();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf address_prefix; //type: string



}; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix


class ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TftpProtocol : public Entity
{
    public:
        TftpProtocol();
        ~TftpProtocol();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class PeerClass; //type: ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass

        std::shared_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass> peer_class;


}; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TftpProtocol


class ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass : public Entity
{
    public:
        PeerClass();
        ~PeerClass();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf peer_all; //type: empty

        class PeerV4; //type: ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV4
        class PeerV6; //type: ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV6

        std::shared_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV4> peer_v4;
        std::shared_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV6> peer_v6;


}; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass


class ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV4 : public Entity
{
    public:
        PeerV4();
        ~PeerV4();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Peers; //type: ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV4::Peers
        class PeerPrefixes; //type: ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV4::PeerPrefixes

        std::shared_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV4::PeerPrefixes> peer_prefixes;
        std::shared_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV4::Peers> peers;


}; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV4


class ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV4::Peers : public Entity
{
    public:
        Peers();
        ~Peers();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Peer; //type: ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV4::Peers::Peer

        std::vector<std::shared_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV4::Peers::Peer> > peer;


}; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV4::Peers


class ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV4::Peers::Peer : public Entity
{
    public:
        Peer();
        ~Peer();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf address; //type: string



}; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV4::Peers::Peer


class ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV4::PeerPrefixes : public Entity
{
    public:
        PeerPrefixes();
        ~PeerPrefixes();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class PeerPrefix; //type: ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix

        std::vector<std::shared_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix> > peer_prefix;


}; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV4::PeerPrefixes


class ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix : public Entity
{
    public:
        PeerPrefix();
        ~PeerPrefix();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf address_prefix; //type: string



}; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix


class ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV6 : public Entity
{
    public:
        PeerV6();
        ~PeerV6();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Peers; //type: ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV6::Peers
        class PeerPrefixes; //type: ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV6::PeerPrefixes

        std::shared_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV6::PeerPrefixes> peer_prefixes;
        std::shared_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV6::Peers> peers;


}; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV6


class ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV6::Peers : public Entity
{
    public:
        Peers();
        ~Peers();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Peer; //type: ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV6::Peers::Peer

        std::vector<std::shared_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV6::Peers::Peer> > peer;


}; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV6::Peers


class ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV6::Peers::Peer : public Entity
{
    public:
        Peer();
        ~Peer();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf address; //type: string



}; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV6::Peers::Peer


class ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV6::PeerPrefixes : public Entity
{
    public:
        PeerPrefixes();
        ~PeerPrefixes();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class PeerPrefix; //type: ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix

        std::vector<std::shared_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix> > peer_prefix;


}; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV6::PeerPrefixes


class ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix : public Entity
{
    public:
        PeerPrefix();
        ~PeerPrefix();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf address_prefix; //type: string



}; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix


class ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::NetconfProtocol : public Entity
{
    public:
        NetconfProtocol();
        ~NetconfProtocol();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class PeerClass; //type: ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass

        std::shared_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass> peer_class;


}; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::NetconfProtocol


class ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass : public Entity
{
    public:
        PeerClass();
        ~PeerClass();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf peer_all; //type: empty

        class PeerV4; //type: ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV4
        class PeerV6; //type: ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV6

        std::shared_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV4> peer_v4;
        std::shared_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV6> peer_v6;


}; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass


class ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV4 : public Entity
{
    public:
        PeerV4();
        ~PeerV4();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Peers; //type: ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV4::Peers
        class PeerPrefixes; //type: ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV4::PeerPrefixes

        std::shared_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV4::PeerPrefixes> peer_prefixes;
        std::shared_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV4::Peers> peers;


}; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV4


class ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV4::Peers : public Entity
{
    public:
        Peers();
        ~Peers();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Peer; //type: ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV4::Peers::Peer

        std::vector<std::shared_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV4::Peers::Peer> > peer;


}; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV4::Peers


class ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV4::Peers::Peer : public Entity
{
    public:
        Peer();
        ~Peer();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf address; //type: string



}; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV4::Peers::Peer


class ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV4::PeerPrefixes : public Entity
{
    public:
        PeerPrefixes();
        ~PeerPrefixes();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class PeerPrefix; //type: ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix

        std::vector<std::shared_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix> > peer_prefix;


}; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV4::PeerPrefixes


class ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix : public Entity
{
    public:
        PeerPrefix();
        ~PeerPrefix();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf address_prefix; //type: string



}; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix


class ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV6 : public Entity
{
    public:
        PeerV6();
        ~PeerV6();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Peers; //type: ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV6::Peers
        class PeerPrefixes; //type: ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV6::PeerPrefixes

        std::shared_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV6::PeerPrefixes> peer_prefixes;
        std::shared_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV6::Peers> peers;


}; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV6


class ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV6::Peers : public Entity
{
    public:
        Peers();
        ~Peers();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Peer; //type: ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV6::Peers::Peer

        std::vector<std::shared_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV6::Peers::Peer> > peer;


}; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV6::Peers


class ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV6::Peers::Peer : public Entity
{
    public:
        Peer();
        ~Peer();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf address; //type: string



}; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV6::Peers::Peer


class ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV6::PeerPrefixes : public Entity
{
    public:
        PeerPrefixes();
        ~PeerPrefixes();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class PeerPrefix; //type: ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix

        std::vector<std::shared_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix> > peer_prefix;


}; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV6::PeerPrefixes


class ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix : public Entity
{
    public:
        PeerPrefix();
        ~PeerPrefix();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf address_prefix; //type: string



}; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix


class ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::XrXml : public Entity
{
    public:
        XrXml();
        ~XrXml();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class PeerClass; //type: ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass

        std::shared_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass> peer_class;


}; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::XrXml


class ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass : public Entity
{
    public:
        PeerClass();
        ~PeerClass();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf peer_all; //type: empty

        class PeerV4; //type: ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV4
        class PeerV6; //type: ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV6

        std::shared_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV4> peer_v4;
        std::shared_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV6> peer_v6;


}; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass


class ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV4 : public Entity
{
    public:
        PeerV4();
        ~PeerV4();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Peers; //type: ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV4::Peers
        class PeerPrefixes; //type: ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV4::PeerPrefixes

        std::shared_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV4::PeerPrefixes> peer_prefixes;
        std::shared_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV4::Peers> peers;


}; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV4


class ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV4::Peers : public Entity
{
    public:
        Peers();
        ~Peers();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Peer; //type: ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV4::Peers::Peer

        std::vector<std::shared_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV4::Peers::Peer> > peer;


}; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV4::Peers


class ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV4::Peers::Peer : public Entity
{
    public:
        Peer();
        ~Peer();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf address; //type: string



}; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV4::Peers::Peer


class ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV4::PeerPrefixes : public Entity
{
    public:
        PeerPrefixes();
        ~PeerPrefixes();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class PeerPrefix; //type: ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV4::PeerPrefixes::PeerPrefix

        std::vector<std::shared_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV4::PeerPrefixes::PeerPrefix> > peer_prefix;


}; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV4::PeerPrefixes


class ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV4::PeerPrefixes::PeerPrefix : public Entity
{
    public:
        PeerPrefix();
        ~PeerPrefix();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf address_prefix; //type: string



}; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV4::PeerPrefixes::PeerPrefix


class ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV6 : public Entity
{
    public:
        PeerV6();
        ~PeerV6();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Peers; //type: ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV6::Peers
        class PeerPrefixes; //type: ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV6::PeerPrefixes

        std::shared_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV6::PeerPrefixes> peer_prefixes;
        std::shared_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV6::Peers> peers;


}; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV6


class ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV6::Peers : public Entity
{
    public:
        Peers();
        ~Peers();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Peer; //type: ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV6::Peers::Peer

        std::vector<std::shared_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV6::Peers::Peer> > peer;


}; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV6::Peers


class ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV6::Peers::Peer : public Entity
{
    public:
        Peer();
        ~Peer();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf address; //type: string



}; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV6::Peers::Peer


class ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV6::PeerPrefixes : public Entity
{
    public:
        PeerPrefixes();
        ~PeerPrefixes();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class PeerPrefix; //type: ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV6::PeerPrefixes::PeerPrefix

        std::vector<std::shared_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV6::PeerPrefixes::PeerPrefix> > peer_prefix;


}; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV6::PeerPrefixes


class ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV6::PeerPrefixes::PeerPrefix : public Entity
{
    public:
        PeerPrefix();
        ~PeerPrefix();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf address_prefix; //type: string



}; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV6::PeerPrefixes::PeerPrefix


class ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SshProtocol : public Entity
{
    public:
        SshProtocol();
        ~SshProtocol();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class PeerClass; //type: ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass

        std::shared_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass> peer_class;


}; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SshProtocol


class ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass : public Entity
{
    public:
        PeerClass();
        ~PeerClass();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf peer_all; //type: empty

        class PeerV4; //type: ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV4
        class PeerV6; //type: ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV6

        std::shared_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV4> peer_v4;
        std::shared_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV6> peer_v6;


}; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass


class ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV4 : public Entity
{
    public:
        PeerV4();
        ~PeerV4();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Peers; //type: ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV4::Peers
        class PeerPrefixes; //type: ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV4::PeerPrefixes

        std::shared_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV4::PeerPrefixes> peer_prefixes;
        std::shared_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV4::Peers> peers;


}; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV4


class ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV4::Peers : public Entity
{
    public:
        Peers();
        ~Peers();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Peer; //type: ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV4::Peers::Peer

        std::vector<std::shared_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV4::Peers::Peer> > peer;


}; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV4::Peers


class ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV4::Peers::Peer : public Entity
{
    public:
        Peer();
        ~Peer();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf address; //type: string



}; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV4::Peers::Peer


class ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV4::PeerPrefixes : public Entity
{
    public:
        PeerPrefixes();
        ~PeerPrefixes();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class PeerPrefix; //type: ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix

        std::vector<std::shared_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix> > peer_prefix;


}; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV4::PeerPrefixes


class ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix : public Entity
{
    public:
        PeerPrefix();
        ~PeerPrefix();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf address_prefix; //type: string



}; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix


class ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV6 : public Entity
{
    public:
        PeerV6();
        ~PeerV6();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Peers; //type: ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV6::Peers
        class PeerPrefixes; //type: ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV6::PeerPrefixes

        std::shared_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV6::PeerPrefixes> peer_prefixes;
        std::shared_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV6::Peers> peers;


}; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV6


class ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV6::Peers : public Entity
{
    public:
        Peers();
        ~Peers();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Peer; //type: ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV6::Peers::Peer

        std::vector<std::shared_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV6::Peers::Peer> > peer;


}; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV6::Peers


class ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV6::Peers::Peer : public Entity
{
    public:
        Peer();
        ~Peer();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf address; //type: string



}; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV6::Peers::Peer


class ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV6::PeerPrefixes : public Entity
{
    public:
        PeerPrefixes();
        ~PeerPrefixes();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class PeerPrefix; //type: ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix

        std::vector<std::shared_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix> > peer_prefix;


}; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV6::PeerPrefixes


class ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix : public Entity
{
    public:
        PeerPrefix();
        ~PeerPrefix();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf address_prefix; //type: string



}; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix


class ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SnmpProtocol : public Entity
{
    public:
        SnmpProtocol();
        ~SnmpProtocol();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class PeerClass; //type: ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass

        std::shared_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass> peer_class;


}; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SnmpProtocol


class ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass : public Entity
{
    public:
        PeerClass();
        ~PeerClass();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf peer_all; //type: empty

        class PeerV4; //type: ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV4
        class PeerV6; //type: ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV6

        std::shared_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV4> peer_v4;
        std::shared_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV6> peer_v6;


}; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass


class ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV4 : public Entity
{
    public:
        PeerV4();
        ~PeerV4();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Peers; //type: ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV4::Peers
        class PeerPrefixes; //type: ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV4::PeerPrefixes

        std::shared_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV4::PeerPrefixes> peer_prefixes;
        std::shared_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV4::Peers> peers;


}; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV4


class ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV4::Peers : public Entity
{
    public:
        Peers();
        ~Peers();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Peer; //type: ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV4::Peers::Peer

        std::vector<std::shared_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV4::Peers::Peer> > peer;


}; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV4::Peers


class ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV4::Peers::Peer : public Entity
{
    public:
        Peer();
        ~Peer();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf address; //type: string



}; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV4::Peers::Peer


class ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV4::PeerPrefixes : public Entity
{
    public:
        PeerPrefixes();
        ~PeerPrefixes();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class PeerPrefix; //type: ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix

        std::vector<std::shared_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix> > peer_prefix;


}; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV4::PeerPrefixes


class ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix : public Entity
{
    public:
        PeerPrefix();
        ~PeerPrefix();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf address_prefix; //type: string



}; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix


class ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV6 : public Entity
{
    public:
        PeerV6();
        ~PeerV6();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Peers; //type: ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV6::Peers
        class PeerPrefixes; //type: ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV6::PeerPrefixes

        std::shared_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV6::PeerPrefixes> peer_prefixes;
        std::shared_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV6::Peers> peers;


}; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV6


class ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV6::Peers : public Entity
{
    public:
        Peers();
        ~Peers();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Peer; //type: ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV6::Peers::Peer

        std::vector<std::shared_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV6::Peers::Peer> > peer;


}; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV6::Peers


class ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV6::Peers::Peer : public Entity
{
    public:
        Peer();
        ~Peer();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf address; //type: string



}; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV6::Peers::Peer


class ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV6::PeerPrefixes : public Entity
{
    public:
        PeerPrefixes();
        ~PeerPrefixes();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class PeerPrefix; //type: ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix

        std::vector<std::shared_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix> > peer_prefix;


}; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV6::PeerPrefixes


class ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix : public Entity
{
    public:
        PeerPrefix();
        ~PeerPrefix();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf address_prefix; //type: string



}; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix


class ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TelnetProtocol : public Entity
{
    public:
        TelnetProtocol();
        ~TelnetProtocol();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class PeerClass; //type: ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass

        std::shared_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass> peer_class;


}; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TelnetProtocol


class ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass : public Entity
{
    public:
        PeerClass();
        ~PeerClass();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf peer_all; //type: empty

        class PeerV4; //type: ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV4
        class PeerV6; //type: ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV6

        std::shared_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV4> peer_v4;
        std::shared_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV6> peer_v6;


}; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass


class ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV4 : public Entity
{
    public:
        PeerV4();
        ~PeerV4();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Peers; //type: ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV4::Peers
        class PeerPrefixes; //type: ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV4::PeerPrefixes

        std::shared_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV4::PeerPrefixes> peer_prefixes;
        std::shared_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV4::Peers> peers;


}; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV4


class ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV4::Peers : public Entity
{
    public:
        Peers();
        ~Peers();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Peer; //type: ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV4::Peers::Peer

        std::vector<std::shared_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV4::Peers::Peer> > peer;


}; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV4::Peers


class ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV4::Peers::Peer : public Entity
{
    public:
        Peer();
        ~Peer();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf address; //type: string



}; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV4::Peers::Peer


class ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV4::PeerPrefixes : public Entity
{
    public:
        PeerPrefixes();
        ~PeerPrefixes();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class PeerPrefix; //type: ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix

        std::vector<std::shared_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix> > peer_prefix;


}; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV4::PeerPrefixes


class ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix : public Entity
{
    public:
        PeerPrefix();
        ~PeerPrefix();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf address_prefix; //type: string



}; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix


class ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV6 : public Entity
{
    public:
        PeerV6();
        ~PeerV6();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Peers; //type: ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV6::Peers
        class PeerPrefixes; //type: ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV6::PeerPrefixes

        std::shared_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV6::PeerPrefixes> peer_prefixes;
        std::shared_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV6::Peers> peers;


}; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV6


class ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV6::Peers : public Entity
{
    public:
        Peers();
        ~Peers();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Peer; //type: ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV6::Peers::Peer

        std::vector<std::shared_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV6::Peers::Peer> > peer;


}; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV6::Peers


class ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV6::Peers::Peer : public Entity
{
    public:
        Peer();
        ~Peer();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf address; //type: string



}; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV6::Peers::Peer


class ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV6::PeerPrefixes : public Entity
{
    public:
        PeerPrefixes();
        ~PeerPrefixes();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class PeerPrefix; //type: ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix

        std::vector<std::shared_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix> > peer_prefix;


}; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV6::PeerPrefixes


class ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix : public Entity
{
    public:
        PeerPrefix();
        ~PeerPrefix();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf address_prefix; //type: string



}; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix


class ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::AllProtocols : public Entity
{
    public:
        AllProtocols();
        ~AllProtocols();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class PeerClass; //type: ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass

        std::shared_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass> peer_class;


}; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::AllProtocols


class ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass : public Entity
{
    public:
        PeerClass();
        ~PeerClass();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf peer_all; //type: empty

        class PeerV4; //type: ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV4
        class PeerV6; //type: ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV6

        std::shared_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV4> peer_v4;
        std::shared_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV6> peer_v6;


}; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass


class ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV4 : public Entity
{
    public:
        PeerV4();
        ~PeerV4();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Peers; //type: ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV4::Peers
        class PeerPrefixes; //type: ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV4::PeerPrefixes

        std::shared_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV4::PeerPrefixes> peer_prefixes;
        std::shared_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV4::Peers> peers;


}; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV4


class ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV4::Peers : public Entity
{
    public:
        Peers();
        ~Peers();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Peer; //type: ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV4::Peers::Peer

        std::vector<std::shared_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV4::Peers::Peer> > peer;


}; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV4::Peers


class ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV4::Peers::Peer : public Entity
{
    public:
        Peer();
        ~Peer();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf address; //type: string



}; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV4::Peers::Peer


class ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV4::PeerPrefixes : public Entity
{
    public:
        PeerPrefixes();
        ~PeerPrefixes();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class PeerPrefix; //type: ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV4::PeerPrefixes::PeerPrefix

        std::vector<std::shared_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV4::PeerPrefixes::PeerPrefix> > peer_prefix;


}; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV4::PeerPrefixes


class ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV4::PeerPrefixes::PeerPrefix : public Entity
{
    public:
        PeerPrefix();
        ~PeerPrefix();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf address_prefix; //type: string



}; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV4::PeerPrefixes::PeerPrefix


class ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV6 : public Entity
{
    public:
        PeerV6();
        ~PeerV6();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Peers; //type: ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV6::Peers
        class PeerPrefixes; //type: ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV6::PeerPrefixes

        std::shared_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV6::PeerPrefixes> peer_prefixes;
        std::shared_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV6::Peers> peers;


}; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV6


class ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV6::Peers : public Entity
{
    public:
        Peers();
        ~Peers();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Peer; //type: ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV6::Peers::Peer

        std::vector<std::shared_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV6::Peers::Peer> > peer;


}; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV6::Peers


class ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV6::Peers::Peer : public Entity
{
    public:
        Peer();
        ~Peer();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf address; //type: string



}; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV6::Peers::Peer


class ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV6::PeerPrefixes : public Entity
{
    public:
        PeerPrefixes();
        ~PeerPrefixes();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class PeerPrefix; //type: ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV6::PeerPrefixes::PeerPrefix

        std::vector<std::shared_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV6::PeerPrefixes::PeerPrefix> > peer_prefix;


}; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV6::PeerPrefixes


class ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV6::PeerPrefixes::PeerPrefix : public Entity
{
    public:
        PeerPrefix();
        ~PeerPrefix();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf address_prefix; //type: string



}; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV6::PeerPrefixes::PeerPrefix


class ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces : public Entity
{
    public:
        AllInterfaces();
        ~AllInterfaces();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class HttpProtocol; //type: ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::HttpProtocol
        class TftpProtocol; //type: ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::TftpProtocol
        class NetconfProtocol; //type: ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::NetconfProtocol
        class XrXml; //type: ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::XrXml
        class SshProtocol; //type: ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::SshProtocol
        class SnmpProtocol; //type: ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::SnmpProtocol
        class TelnetProtocol; //type: ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::TelnetProtocol
        class AllProtocols; //type: ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::AllProtocols

        std::shared_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::AllProtocols> all_protocols;
        std::shared_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::HttpProtocol> http_protocol;
        std::shared_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::NetconfProtocol> netconf_protocol;
        std::shared_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::SnmpProtocol> snmp_protocol;
        std::shared_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::SshProtocol> ssh_protocol;
        std::shared_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::TelnetProtocol> telnet_protocol;
        std::shared_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::TftpProtocol> tftp_protocol;
        std::shared_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::XrXml> xr_xml;


}; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces


}
}

#endif /* _CISCO_IOS_XR_LIB_MPP_CFG_1_ */

