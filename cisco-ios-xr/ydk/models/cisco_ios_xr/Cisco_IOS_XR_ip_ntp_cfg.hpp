#ifndef _CISCO_IOS_XR_IP_NTP_CFG_
#define _CISCO_IOS_XR_IP_NTP_CFG_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace ydk {
namespace Cisco_IOS_XR_ip_ntp_cfg {

class Ntp : public Entity
{
    public:
        Ntp();
        ~Ntp();

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


        YLeaf max_associations; //type: int32
        YLeaf master; //type: uint32
        YLeaf broadcast_delay; //type: uint32
        YLeaf log_internal_sync; //type: empty
        YLeaf update_calendar; //type: empty

        class PeerVrfs; //type: Ntp::PeerVrfs
        class DscpIpv4; //type: Ntp::DscpIpv4
        class DscpIpv6; //type: Ntp::DscpIpv6
        class Sources; //type: Ntp::Sources
        class Authentication; //type: Ntp::Authentication
        class Passive; //type: Ntp::Passive
        class InterfaceTables; //type: Ntp::InterfaceTables
        class AccessGroupTables; //type: Ntp::AccessGroupTables

        std::shared_ptr<Cisco_IOS_XR_ip_ntp_cfg::Ntp::AccessGroupTables> access_group_tables;
        std::shared_ptr<Cisco_IOS_XR_ip_ntp_cfg::Ntp::Authentication> authentication;
        std::shared_ptr<Cisco_IOS_XR_ip_ntp_cfg::Ntp::DscpIpv4> dscp_ipv4; // presence node
        std::shared_ptr<Cisco_IOS_XR_ip_ntp_cfg::Ntp::DscpIpv6> dscp_ipv6; // presence node
        std::shared_ptr<Cisco_IOS_XR_ip_ntp_cfg::Ntp::InterfaceTables> interface_tables;
        std::shared_ptr<Cisco_IOS_XR_ip_ntp_cfg::Ntp::Passive> passive;
        std::shared_ptr<Cisco_IOS_XR_ip_ntp_cfg::Ntp::PeerVrfs> peer_vrfs;
        std::shared_ptr<Cisco_IOS_XR_ip_ntp_cfg::Ntp::Sources> sources;


}; // Ntp


class Ntp::PeerVrfs : public Entity
{
    public:
        PeerVrfs();
        ~PeerVrfs();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class PeerVrf; //type: Ntp::PeerVrfs::PeerVrf

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_ntp_cfg::Ntp::PeerVrfs::PeerVrf> > peer_vrf;


}; // Ntp::PeerVrfs


class Ntp::PeerVrfs::PeerVrf : public Entity
{
    public:
        PeerVrf();
        ~PeerVrf();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf vrf_name; //type: string

        class PeerIpv4S; //type: Ntp::PeerVrfs::PeerVrf::PeerIpv4S
        class PeerIpv6S; //type: Ntp::PeerVrfs::PeerVrf::PeerIpv6S

        std::shared_ptr<Cisco_IOS_XR_ip_ntp_cfg::Ntp::PeerVrfs::PeerVrf::PeerIpv4S> peer_ipv4s;
        std::shared_ptr<Cisco_IOS_XR_ip_ntp_cfg::Ntp::PeerVrfs::PeerVrf::PeerIpv6S> peer_ipv6s;


}; // Ntp::PeerVrfs::PeerVrf


class Ntp::PeerVrfs::PeerVrf::PeerIpv4S : public Entity
{
    public:
        PeerIpv4S();
        ~PeerIpv4S();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class PeerIpv4; //type: Ntp::PeerVrfs::PeerVrf::PeerIpv4S::PeerIpv4

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_ntp_cfg::Ntp::PeerVrfs::PeerVrf::PeerIpv4S::PeerIpv4> > peer_ipv4;


}; // Ntp::PeerVrfs::PeerVrf::PeerIpv4S


class Ntp::PeerVrfs::PeerVrf::PeerIpv4S::PeerIpv4 : public Entity
{
    public:
        PeerIpv4();
        ~PeerIpv4();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf address_ipv4; //type: string

        class PeerTypeIpv4; //type: Ntp::PeerVrfs::PeerVrf::PeerIpv4S::PeerIpv4::PeerTypeIpv4

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_ntp_cfg::Ntp::PeerVrfs::PeerVrf::PeerIpv4S::PeerIpv4::PeerTypeIpv4> > peer_type_ipv4;


}; // Ntp::PeerVrfs::PeerVrf::PeerIpv4S::PeerIpv4


class Ntp::PeerVrfs::PeerVrf::PeerIpv4S::PeerIpv4::PeerTypeIpv4 : public Entity
{
    public:
        PeerTypeIpv4();
        ~PeerTypeIpv4();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf peer_type; //type: NtpPeerEnum
        YLeaf ntp_version; //type: uint32
        YLeaf authentication_key; //type: uint32
        YLeaf min_poll; //type: uint32
        YLeaf max_poll; //type: uint32
        YLeaf preferred_peer; //type: empty
        YLeaf source_interface; //type: string
        YLeaf burst; //type: empty
        YLeaf iburst; //type: empty



}; // Ntp::PeerVrfs::PeerVrf::PeerIpv4S::PeerIpv4::PeerTypeIpv4


class Ntp::PeerVrfs::PeerVrf::PeerIpv6S : public Entity
{
    public:
        PeerIpv6S();
        ~PeerIpv6S();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class PeerIpv6; //type: Ntp::PeerVrfs::PeerVrf::PeerIpv6S::PeerIpv6

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_ntp_cfg::Ntp::PeerVrfs::PeerVrf::PeerIpv6S::PeerIpv6> > peer_ipv6;


}; // Ntp::PeerVrfs::PeerVrf::PeerIpv6S


class Ntp::PeerVrfs::PeerVrf::PeerIpv6S::PeerIpv6 : public Entity
{
    public:
        PeerIpv6();
        ~PeerIpv6();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf address_ipv6; //type: string

        class PeerTypeIpv6; //type: Ntp::PeerVrfs::PeerVrf::PeerIpv6S::PeerIpv6::PeerTypeIpv6

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_ntp_cfg::Ntp::PeerVrfs::PeerVrf::PeerIpv6S::PeerIpv6::PeerTypeIpv6> > peer_type_ipv6;


}; // Ntp::PeerVrfs::PeerVrf::PeerIpv6S::PeerIpv6


class Ntp::PeerVrfs::PeerVrf::PeerIpv6S::PeerIpv6::PeerTypeIpv6 : public Entity
{
    public:
        PeerTypeIpv6();
        ~PeerTypeIpv6();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf peer_type; //type: NtpPeerEnum
        YLeaf ntp_version; //type: uint32
        YLeaf authentication_key; //type: uint32
        YLeaf min_poll; //type: uint32
        YLeaf max_poll; //type: uint32
        YLeaf preferred_peer; //type: empty
        YLeaf source_interface; //type: string
        YLeaf burst; //type: empty
        YLeaf iburst; //type: empty
        YLeaf address_ipv6; //type: string



}; // Ntp::PeerVrfs::PeerVrf::PeerIpv6S::PeerIpv6::PeerTypeIpv6


class Ntp::DscpIpv4 : public Entity
{
    public:
        DscpIpv4();
        ~DscpIpv4();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf mode; //type: NtpdscpEnum
        YLeaf dscp_or_precedence_value; //type: uint32



}; // Ntp::DscpIpv4


class Ntp::DscpIpv6 : public Entity
{
    public:
        DscpIpv6();
        ~DscpIpv6();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf mode; //type: NtpdscpEnum
        YLeaf dscp_or_precedence_value; //type: uint32



}; // Ntp::DscpIpv6


class Ntp::Sources : public Entity
{
    public:
        Sources();
        ~Sources();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Source; //type: Ntp::Sources::Source

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_ntp_cfg::Ntp::Sources::Source> > source;


}; // Ntp::Sources


class Ntp::Sources::Source : public Entity
{
    public:
        Source();
        ~Source();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf vrf_name; //type: string
        YLeaf source_interface; //type: string



}; // Ntp::Sources::Source


class Ntp::Authentication : public Entity
{
    public:
        Authentication();
        ~Authentication();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf enable; //type: empty

        class Keies; //type: Ntp::Authentication::Keies
        class TrustedKeies; //type: Ntp::Authentication::TrustedKeies

        std::shared_ptr<Cisco_IOS_XR_ip_ntp_cfg::Ntp::Authentication::Keies> keies;
        std::shared_ptr<Cisco_IOS_XR_ip_ntp_cfg::Ntp::Authentication::TrustedKeies> trusted_keies;


}; // Ntp::Authentication


class Ntp::Authentication::Keies : public Entity
{
    public:
        Keies();
        ~Keies();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Key; //type: Ntp::Authentication::Keies::Key

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_ntp_cfg::Ntp::Authentication::Keies::Key> > key;


}; // Ntp::Authentication::Keies


class Ntp::Authentication::Keies::Key : public Entity
{
    public:
        Key();
        ~Key();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf key_number; //type: uint32
        YLeaf authentication_key; //type: string



}; // Ntp::Authentication::Keies::Key


class Ntp::Authentication::TrustedKeies : public Entity
{
    public:
        TrustedKeies();
        ~TrustedKeies();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class TrustedKey; //type: Ntp::Authentication::TrustedKeies::TrustedKey

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_ntp_cfg::Ntp::Authentication::TrustedKeies::TrustedKey> > trusted_key;


}; // Ntp::Authentication::TrustedKeies


class Ntp::Authentication::TrustedKeies::TrustedKey : public Entity
{
    public:
        TrustedKey();
        ~TrustedKey();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf key_number; //type: uint32



}; // Ntp::Authentication::TrustedKeies::TrustedKey


class Ntp::Passive : public Entity
{
    public:
        Passive();
        ~Passive();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf enable; //type: empty



}; // Ntp::Passive


class Ntp::InterfaceTables : public Entity
{
    public:
        InterfaceTables();
        ~InterfaceTables();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class InterfaceTable; //type: Ntp::InterfaceTables::InterfaceTable

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_ntp_cfg::Ntp::InterfaceTables::InterfaceTable> > interface_table;


}; // Ntp::InterfaceTables


class Ntp::InterfaceTables::InterfaceTable : public Entity
{
    public:
        InterfaceTable();
        ~InterfaceTable();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf vrf_name; //type: string

        class Interface; //type: Ntp::InterfaceTables::InterfaceTable::Interface

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_ntp_cfg::Ntp::InterfaceTables::InterfaceTable::Interface> > interface;


}; // Ntp::InterfaceTables::InterfaceTable


class Ntp::InterfaceTables::InterfaceTable::Interface : public Entity
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


        YLeaf interface; //type: string
        YLeaf disable; //type: empty

        class InterfaceMulticast; //type: Ntp::InterfaceTables::InterfaceTable::Interface::InterfaceMulticast
        class InterfaceBroadcast; //type: Ntp::InterfaceTables::InterfaceTable::Interface::InterfaceBroadcast

        std::shared_ptr<Cisco_IOS_XR_ip_ntp_cfg::Ntp::InterfaceTables::InterfaceTable::Interface::InterfaceBroadcast> interface_broadcast;
        std::shared_ptr<Cisco_IOS_XR_ip_ntp_cfg::Ntp::InterfaceTables::InterfaceTable::Interface::InterfaceMulticast> interface_multicast;


}; // Ntp::InterfaceTables::InterfaceTable::Interface


class Ntp::InterfaceTables::InterfaceTable::Interface::InterfaceMulticast : public Entity
{
    public:
        InterfaceMulticast();
        ~InterfaceMulticast();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class MulticastClients; //type: Ntp::InterfaceTables::InterfaceTable::Interface::InterfaceMulticast::MulticastClients
        class MulticastServers; //type: Ntp::InterfaceTables::InterfaceTable::Interface::InterfaceMulticast::MulticastServers

        std::shared_ptr<Cisco_IOS_XR_ip_ntp_cfg::Ntp::InterfaceTables::InterfaceTable::Interface::InterfaceMulticast::MulticastClients> multicast_clients;
        std::shared_ptr<Cisco_IOS_XR_ip_ntp_cfg::Ntp::InterfaceTables::InterfaceTable::Interface::InterfaceMulticast::MulticastServers> multicast_servers;


}; // Ntp::InterfaceTables::InterfaceTable::Interface::InterfaceMulticast


class Ntp::InterfaceTables::InterfaceTable::Interface::InterfaceMulticast::MulticastClients : public Entity
{
    public:
        MulticastClients();
        ~MulticastClients();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class MulticastClient; //type: Ntp::InterfaceTables::InterfaceTable::Interface::InterfaceMulticast::MulticastClients::MulticastClient

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_ntp_cfg::Ntp::InterfaceTables::InterfaceTable::Interface::InterfaceMulticast::MulticastClients::MulticastClient> > multicast_client;


}; // Ntp::InterfaceTables::InterfaceTable::Interface::InterfaceMulticast::MulticastClients


class Ntp::InterfaceTables::InterfaceTable::Interface::InterfaceMulticast::MulticastClients::MulticastClient : public Entity
{
    public:
        MulticastClient();
        ~MulticastClient();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf ip_address; //type: string



}; // Ntp::InterfaceTables::InterfaceTable::Interface::InterfaceMulticast::MulticastClients::MulticastClient


class Ntp::InterfaceTables::InterfaceTable::Interface::InterfaceMulticast::MulticastServers : public Entity
{
    public:
        MulticastServers();
        ~MulticastServers();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class MulticastServer; //type: Ntp::InterfaceTables::InterfaceTable::Interface::InterfaceMulticast::MulticastServers::MulticastServer

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_ntp_cfg::Ntp::InterfaceTables::InterfaceTable::Interface::InterfaceMulticast::MulticastServers::MulticastServer> > multicast_server;


}; // Ntp::InterfaceTables::InterfaceTable::Interface::InterfaceMulticast::MulticastServers


class Ntp::InterfaceTables::InterfaceTable::Interface::InterfaceMulticast::MulticastServers::MulticastServer : public Entity
{
    public:
        MulticastServer();
        ~MulticastServer();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf ip_address; //type: string
        YLeaf authentication_key; //type: uint32
        YLeaf version; //type: uint32
        YLeaf ttl; //type: uint32



}; // Ntp::InterfaceTables::InterfaceTable::Interface::InterfaceMulticast::MulticastServers::MulticastServer


class Ntp::InterfaceTables::InterfaceTable::Interface::InterfaceBroadcast : public Entity
{
    public:
        InterfaceBroadcast();
        ~InterfaceBroadcast();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf broadcast_client; //type: empty

        class Broadcast; //type: Ntp::InterfaceTables::InterfaceTable::Interface::InterfaceBroadcast::Broadcast

        std::shared_ptr<Cisco_IOS_XR_ip_ntp_cfg::Ntp::InterfaceTables::InterfaceTable::Interface::InterfaceBroadcast::Broadcast> broadcast;


}; // Ntp::InterfaceTables::InterfaceTable::Interface::InterfaceBroadcast


class Ntp::InterfaceTables::InterfaceTable::Interface::InterfaceBroadcast::Broadcast : public Entity
{
    public:
        Broadcast();
        ~Broadcast();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf address; //type: string
        YLeaf authentication_key; //type: uint32
        YLeaf ntp_version; //type: uint32



}; // Ntp::InterfaceTables::InterfaceTable::Interface::InterfaceBroadcast::Broadcast


class Ntp::AccessGroupTables : public Entity
{
    public:
        AccessGroupTables();
        ~AccessGroupTables();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class AccessGroupTable; //type: Ntp::AccessGroupTables::AccessGroupTable

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_ntp_cfg::Ntp::AccessGroupTables::AccessGroupTable> > access_group_table;


}; // Ntp::AccessGroupTables


class Ntp::AccessGroupTables::AccessGroupTable : public Entity
{
    public:
        AccessGroupTable();
        ~AccessGroupTable();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf vrf_name; //type: string

        class AccessGroupAfTable; //type: Ntp::AccessGroupTables::AccessGroupTable::AccessGroupAfTable

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_ntp_cfg::Ntp::AccessGroupTables::AccessGroupTable::AccessGroupAfTable> > access_group_af_table;


}; // Ntp::AccessGroupTables::AccessGroupTable


class Ntp::AccessGroupTables::AccessGroupTable::AccessGroupAfTable : public Entity
{
    public:
        AccessGroupAfTable();
        ~AccessGroupAfTable();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf af; //type: NtpAccessAfEnum

        class AccessGroup; //type: Ntp::AccessGroupTables::AccessGroupTable::AccessGroupAfTable::AccessGroup

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_ntp_cfg::Ntp::AccessGroupTables::AccessGroupTable::AccessGroupAfTable::AccessGroup> > access_group;


}; // Ntp::AccessGroupTables::AccessGroupTable::AccessGroupAfTable


class Ntp::AccessGroupTables::AccessGroupTable::AccessGroupAfTable::AccessGroup : public Entity
{
    public:
        AccessGroup();
        ~AccessGroup();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf access_group_type; //type: NtpAccessEnum
        YLeaf access_list_name; //type: string



}; // Ntp::AccessGroupTables::AccessGroupTable::AccessGroupAfTable::AccessGroup

class NtpAccessAfEnum : public Enum
{
    public:
        static const Enum::YLeaf ipv4;
        static const Enum::YLeaf ipv6;

};

class NtpPeerEnum : public Enum
{
    public:
        static const Enum::YLeaf peer;
        static const Enum::YLeaf server;

};

class NtpdscpEnum : public Enum
{
    public:
        static const Enum::YLeaf ntp_precedence;
        static const Enum::YLeaf ntpdscp;

};

class NtpAccessEnum : public Enum
{
    public:
        static const Enum::YLeaf peer;
        static const Enum::YLeaf serve;
        static const Enum::YLeaf serve_only;
        static const Enum::YLeaf query_only;

};


}
}

#endif /* _CISCO_IOS_XR_IP_NTP_CFG_ */

