#ifndef _CISCO_IOS_XE_NATIVE_30_
#define _CISCO_IOS_XE_NATIVE_30_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XE_native_0.hpp"
#include "Cisco_IOS_XE_native_16.hpp"
#include "Cisco_IOS_XE_native_26.hpp"
#include "Cisco_IOS_XE_native_29.hpp"

namespace ydk {
namespace Cisco_IOS_XE_native {


class Native::Interface::Gigabitethernet::Cts::Manual::Sap : public Entity
{
    public:
        Sap();
        ~Sap();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Pmk; //type: Native::Interface::Gigabitethernet::Cts::Manual::Sap::Pmk

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Cts::Manual::Sap::Pmk> > pmk;
        
}; // Native::Interface::Gigabitethernet::Cts::Manual::Sap


class Native::Interface::Gigabitethernet::Cts::Manual::Sap::Pmk : public Entity
{
    public:
        Pmk();
        ~Pmk();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf word; //type: string
        class ModeList; //type: Native::Interface::Gigabitethernet::Cts::Manual::Sap::Pmk::ModeList

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Cts::Manual::Sap::Pmk::ModeList> mode_list;
        
}; // Native::Interface::Gigabitethernet::Cts::Manual::Sap::Pmk


class Native::Interface::Gigabitethernet::Cts::Manual::Sap::Pmk::ModeList : public Entity
{
    public:
        ModeList();
        ~ModeList();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class GcmEncrypt; //type: Native::Interface::Gigabitethernet::Cts::Manual::Sap::Pmk::ModeList::GcmEncrypt
        class NoEncap; //type: Native::Interface::Gigabitethernet::Cts::Manual::Sap::Pmk::ModeList::NoEncap

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Cts::Manual::Sap::Pmk::ModeList::GcmEncrypt> gcm_encrypt; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Cts::Manual::Sap::Pmk::ModeList::NoEncap> no_encap; // presence node
        
}; // Native::Interface::Gigabitethernet::Cts::Manual::Sap::Pmk::ModeList


class Native::Interface::Gigabitethernet::Cts::Manual::Sap::Pmk::ModeList::GcmEncrypt : public Entity
{
    public:
        GcmEncrypt();
        ~GcmEncrypt();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Gmac; //type: Native::Interface::Gigabitethernet::Cts::Manual::Sap::Pmk::ModeList::GcmEncrypt::Gmac

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Cts::Manual::Sap::Pmk::ModeList::GcmEncrypt::Gmac> gmac; // presence node
        
}; // Native::Interface::Gigabitethernet::Cts::Manual::Sap::Pmk::ModeList::GcmEncrypt


class Native::Interface::Gigabitethernet::Cts::Manual::Sap::Pmk::ModeList::GcmEncrypt::Gmac : public Entity
{
    public:
        Gmac();
        ~Gmac();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf null; //type: empty

}; // Native::Interface::Gigabitethernet::Cts::Manual::Sap::Pmk::ModeList::GcmEncrypt::Gmac


class Native::Interface::Gigabitethernet::Cts::Manual::Sap::Pmk::ModeList::NoEncap : public Entity
{
    public:
        NoEncap();
        ~NoEncap();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Gmac; //type: Native::Interface::Gigabitethernet::Cts::Manual::Sap::Pmk::ModeList::NoEncap::Gmac

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Cts::Manual::Sap::Pmk::ModeList::NoEncap::Gmac> gmac; // presence node
        
}; // Native::Interface::Gigabitethernet::Cts::Manual::Sap::Pmk::ModeList::NoEncap


class Native::Interface::Gigabitethernet::Cts::Manual::Sap::Pmk::ModeList::NoEncap::Gmac : public Entity
{
    public:
        Gmac();
        ~Gmac();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf gcm_encrypt; //type: empty

}; // Native::Interface::Gigabitethernet::Cts::Manual::Sap::Pmk::ModeList::NoEncap::Gmac


class Native::Interface::Gigabitethernet::Cts::Manual::Propagate : public Entity
{
    public:
        Propagate();
        ~Propagate();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf sgt; //type: boolean

}; // Native::Interface::Gigabitethernet::Cts::Manual::Propagate


class Native::Interface::Gigabitethernet::Dot1X : public Entity
{
    public:
        Dot1X();
        ~Dot1X();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf credentials; //type: string
        YLeaf max_reauth_req; //type: uint8
        YLeaf max_req; //type: uint8
        YLeaf max_start; //type: uint8
        YLeaf pae; //type: PaeEnum
        class Authenticator; //type: Native::Interface::Gigabitethernet::Dot1X::Authenticator
        class Supplicant; //type: Native::Interface::Gigabitethernet::Dot1X::Supplicant
        class Timeout; //type: Native::Interface::Gigabitethernet::Dot1X::Timeout

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Dot1X::Authenticator> authenticator;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Dot1X::Supplicant> supplicant;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Dot1X::Timeout> timeout;
                class PaeEnum;

}; // Native::Interface::Gigabitethernet::Dot1X


class Native::Interface::Gigabitethernet::Dot1X::Authenticator : public Entity
{
    public:
        Authenticator();
        ~Authenticator();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Eap; //type: Native::Interface::Gigabitethernet::Dot1X::Authenticator::Eap

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Dot1X::Authenticator::Eap> eap;
        
}; // Native::Interface::Gigabitethernet::Dot1X::Authenticator


class Native::Interface::Gigabitethernet::Dot1X::Authenticator::Eap : public Entity
{
    public:
        Eap();
        ~Eap();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf profile; //type: string

}; // Native::Interface::Gigabitethernet::Dot1X::Authenticator::Eap


class Native::Interface::Gigabitethernet::Dot1X::Supplicant : public Entity
{
    public:
        Supplicant();
        ~Supplicant();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Eap; //type: Native::Interface::Gigabitethernet::Dot1X::Supplicant::Eap

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Dot1X::Supplicant::Eap> eap;
        
}; // Native::Interface::Gigabitethernet::Dot1X::Supplicant


class Native::Interface::Gigabitethernet::Dot1X::Supplicant::Eap : public Entity
{
    public:
        Eap();
        ~Eap();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf profile; //type: string

}; // Native::Interface::Gigabitethernet::Dot1X::Supplicant::Eap


class Native::Interface::Gigabitethernet::Dot1X::Timeout : public Entity
{
    public:
        Timeout();
        ~Timeout();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf auth_period; //type: uint16
        YLeaf held_period; //type: uint16
        YLeaf quiet_period; //type: uint16
        YLeaf ratelimit_period; //type: uint16
        YLeaf server_timeout; //type: uint16
        YLeaf start_period; //type: uint16
        YLeaf supp_timeout; //type: uint16
        YLeaf tx_period; //type: uint16

}; // Native::Interface::Gigabitethernet::Dot1X::Timeout


class Native::Interface::Gigabitethernet::Performance : public Entity
{
    public:
        Performance();
        ~Performance();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Monitor; //type: Native::Interface::Gigabitethernet::Performance::Monitor

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Performance::Monitor> monitor;
        
}; // Native::Interface::Gigabitethernet::Performance


class Native::Interface::Gigabitethernet::Performance::Monitor : public Entity
{
    public:
        Monitor();
        ~Monitor();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeafList context; //type: list of  string

}; // Native::Interface::Gigabitethernet::Performance::Monitor


class Native::Interface::Gigabitethernet::ServicePolicy : public Entity
{
    public:
        ServicePolicy();
        ~ServicePolicy();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf history; //type: empty
        YLeaf input; //type: string
        YLeaf output; //type: string
        class Type; //type: Native::Interface::Gigabitethernet::ServicePolicy::Type

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::ServicePolicy::Type> type;
        
}; // Native::Interface::Gigabitethernet::ServicePolicy


class Native::Interface::Gigabitethernet::ServicePolicy::Type : public Entity
{
    public:
        Type();
        ~Type();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Control; //type: Native::Interface::Gigabitethernet::ServicePolicy::Type::Control
        class PerformanceMonitor; //type: Native::Interface::Gigabitethernet::ServicePolicy::Type::PerformanceMonitor
        class ServiceChain; //type: Native::Interface::Gigabitethernet::ServicePolicy::Type::ServiceChain

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::ServicePolicy::Type::Control> control;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::ServicePolicy::Type::PerformanceMonitor> performance_monitor;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::ServicePolicy::Type::ServiceChain> service_chain;
        
}; // Native::Interface::Gigabitethernet::ServicePolicy::Type


class Native::Interface::Gigabitethernet::ServicePolicy::Type::Control : public Entity
{
    public:
        Control();
        ~Control();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf subscriber; //type: string

}; // Native::Interface::Gigabitethernet::ServicePolicy::Type::Control


class Native::Interface::Gigabitethernet::ServicePolicy::Type::PerformanceMonitor : public Entity
{
    public:
        PerformanceMonitor();
        ~PerformanceMonitor();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf direction; //type: DirectionEnum
        YLeaf name; //type: string
        class DirectionEnum;

}; // Native::Interface::Gigabitethernet::ServicePolicy::Type::PerformanceMonitor


class Native::Interface::Gigabitethernet::ServicePolicy::Type::ServiceChain : public Entity
{
    public:
        ServiceChain();
        ~ServiceChain();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Input; //type: Native::Interface::Gigabitethernet::ServicePolicy::Type::ServiceChain::Input
        class Output; //type: Native::Interface::Gigabitethernet::ServicePolicy::Type::ServiceChain::Output

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::ServicePolicy::Type::ServiceChain::Input> input;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::ServicePolicy::Type::ServiceChain::Output> output;
        
}; // Native::Interface::Gigabitethernet::ServicePolicy::Type::ServiceChain


class Native::Interface::Gigabitethernet::ServicePolicy::Type::ServiceChain::Input : public Entity
{
    public:
        Input();
        ~Input();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf name; //type: string

}; // Native::Interface::Gigabitethernet::ServicePolicy::Type::ServiceChain::Input


class Native::Interface::Gigabitethernet::ServicePolicy::Type::ServiceChain::Output : public Entity
{
    public:
        Output();
        ~Output();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf name; //type: string

}; // Native::Interface::Gigabitethernet::ServicePolicy::Type::ServiceChain::Output


class Native::Interface::Gigabitethernet::Snmp : public Entity
{
    public:
        Snmp();
        ~Snmp();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Ifindex; //type: Native::Interface::Gigabitethernet::Snmp::Ifindex
        class Trap; //type: Native::Interface::Gigabitethernet::Snmp::Trap

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Snmp::Ifindex> ifindex;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Snmp::Trap> trap;
        
}; // Native::Interface::Gigabitethernet::Snmp


class Native::Interface::Gigabitethernet::Snmp::Ifindex : public Entity
{
    public:
        Ifindex();
        ~Ifindex();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf persist; //type: empty
        YLeaf clear; //type: boolean

}; // Native::Interface::Gigabitethernet::Snmp::Ifindex


class Native::Interface::Gigabitethernet::Snmp::Trap : public Entity
{
    public:
        Trap();
        ~Trap();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf link_status; //type: boolean
        class LinkStatusCapas; //type: Native::Interface::Gigabitethernet::Snmp::Trap::LinkStatusCapas

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Snmp::Trap::LinkStatusCapas> link_status_capas;
        
}; // Native::Interface::Gigabitethernet::Snmp::Trap


class Native::Interface::Gigabitethernet::Snmp::Trap::LinkStatusCapas : public Entity
{
    public:
        LinkStatusCapas();
        ~LinkStatusCapas();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class LinkStatus; //type: Native::Interface::Gigabitethernet::Snmp::Trap::LinkStatusCapas::LinkStatus

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Snmp::Trap::LinkStatusCapas::LinkStatus> link_status;
        
}; // Native::Interface::Gigabitethernet::Snmp::Trap::LinkStatusCapas


class Native::Interface::Gigabitethernet::Snmp::Trap::LinkStatusCapas::LinkStatus : public Entity
{
    public:
        LinkStatus();
        ~LinkStatus();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Permit; //type: Native::Interface::Gigabitethernet::Snmp::Trap::LinkStatusCapas::LinkStatus::Permit

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Snmp::Trap::LinkStatusCapas::LinkStatus::Permit> permit;
        
}; // Native::Interface::Gigabitethernet::Snmp::Trap::LinkStatusCapas::LinkStatus


class Native::Interface::Gigabitethernet::Snmp::Trap::LinkStatusCapas::LinkStatus::Permit : public Entity
{
    public:
        Permit();
        ~Permit();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf duplicates; //type: empty

}; // Native::Interface::Gigabitethernet::Snmp::Trap::LinkStatusCapas::LinkStatus::Permit


class Native::Interface::Gigabitethernet::Lisp : public Entity
{
    public:
        Lisp();
        ~Lisp();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf extended_subnet_mode; //type: empty
        class Mobility; //type: Native::Interface::Gigabitethernet::Lisp::Mobility

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Lisp::Mobility> mobility;
        
}; // Native::Interface::Gigabitethernet::Lisp


class Native::Interface::Gigabitethernet::Lisp::Mobility : public Entity
{
    public:
        Mobility();
        ~Mobility();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class DynamicEid; //type: Native::Interface::Gigabitethernet::Lisp::Mobility::DynamicEid
        class Discover; //type: Native::Interface::Gigabitethernet::Lisp::Mobility::Discover
        class Liveness; //type: Native::Interface::Gigabitethernet::Lisp::Mobility::Liveness

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Lisp::Mobility::Discover> discover;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Lisp::Mobility::DynamicEid> dynamic_eid;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Lisp::Mobility::Liveness> liveness;
        
}; // Native::Interface::Gigabitethernet::Lisp::Mobility


class Native::Interface::Gigabitethernet::Lisp::Mobility::DynamicEid : public Entity
{
    public:
        DynamicEid();
        ~DynamicEid();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf dynamic_eid_name; //type: string
        YLeaf nbr_proxy_reply; //type: empty
        YLeaf requests; //type: uint8

}; // Native::Interface::Gigabitethernet::Lisp::Mobility::DynamicEid


class Native::Interface::Gigabitethernet::Lisp::Mobility::Discover : public Entity
{
    public:
        Discover();
        ~Discover();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf arp; //type: boolean

}; // Native::Interface::Gigabitethernet::Lisp::Mobility::Discover


class Native::Interface::Gigabitethernet::Lisp::Mobility::Liveness : public Entity
{
    public:
        Liveness();
        ~Liveness();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf test; //type: boolean
        YLeaf ttl; //type: uint8

}; // Native::Interface::Gigabitethernet::Lisp::Mobility::Liveness


class Native::Interface::Gigabitethernet::Mka : public Entity
{
    public:
        Mka();
        ~Mka();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class PreSharedKey; //type: Native::Interface::Gigabitethernet::Mka::PreSharedKey

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Mka::PreSharedKey> pre_shared_key;
        
}; // Native::Interface::Gigabitethernet::Mka


class Native::Interface::Gigabitethernet::Mka::PreSharedKey : public Entity
{
    public:
        PreSharedKey();
        ~PreSharedKey();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class KeyChain; //type: Native::Interface::Gigabitethernet::Mka::PreSharedKey::KeyChain

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Mka::PreSharedKey::KeyChain> key_chain;
        
}; // Native::Interface::Gigabitethernet::Mka::PreSharedKey


class Native::Interface::Gigabitethernet::Mka::PreSharedKey::KeyChain : public Entity
{
    public:
        KeyChain();
        ~KeyChain();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf name; //type: string

}; // Native::Interface::Gigabitethernet::Mka::PreSharedKey::KeyChain


class Native::Interface::Gigabitethernet::Ospfv3 : public Entity
{
    public:
        Ospfv3();
        ~Ospfv3();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf dead_interval; //type: uint16
        YLeaf flood_reduction; //type: empty
        YLeaf hello_interval; //type: uint32
        YLeaf mtu_ignore; //type: empty
        YLeaf priority; //type: uint8
        YLeaf retransmit_interval; //type: uint32
        YLeaf shutdown; //type: empty
        YLeaf transmit_delay; //type: uint32
        class ProcessId; //type: Native::Interface::Gigabitethernet::Ospfv3::ProcessId
        class Authentication; //type: Native::Interface::Gigabitethernet::Ospfv3::Authentication
        class Bfd; //type: Native::Interface::Gigabitethernet::Ospfv3::Bfd
        class Cost; //type: Native::Interface::Gigabitethernet::Ospfv3::Cost
        class DatabaseFilter; //type: Native::Interface::Gigabitethernet::Ospfv3::DatabaseFilter
        class DemandCircuit; //type: Native::Interface::Gigabitethernet::Ospfv3::DemandCircuit
        class Encryption; //type: Native::Interface::Gigabitethernet::Ospfv3::Encryption
        class Manet; //type: Native::Interface::Gigabitethernet::Ospfv3::Manet
        class MultiArea; //type: Native::Interface::Gigabitethernet::Ospfv3::MultiArea
        class Neighbor; //type: Native::Interface::Gigabitethernet::Ospfv3::Neighbor
        class Network; //type: Native::Interface::Gigabitethernet::Ospfv3::Network
        class PrefixSuppression; //type: Native::Interface::Gigabitethernet::Ospfv3::PrefixSuppression

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Ospfv3::Authentication> authentication;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Ospfv3::Bfd> bfd; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Ospfv3::Cost> cost;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Ospfv3::DatabaseFilter> database_filter;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Ospfv3::DemandCircuit> demand_circuit; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Ospfv3::Encryption> encryption;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Ospfv3::Manet> manet;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Ospfv3::MultiArea> multi_area;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Ospfv3::Neighbor> > neighbor;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Ospfv3::Network> network;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Ospfv3::PrefixSuppression> prefix_suppression; // presence node
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Ospfv3::ProcessId> > process_id;
        
}; // Native::Interface::Gigabitethernet::Ospfv3


class Native::Interface::Gigabitethernet::Ospfv3::ProcessId : public Entity
{
    public:
        ProcessId();
        ~ProcessId();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf id; //type: uint16
        YLeaf dead_interval; //type: uint16
        YLeaf hello_interval; //type: uint32
        YLeaf priority; //type: uint8
        YLeaf retransmit_interval; //type: uint32
        YLeaf transmit_delay; //type: uint32
        class Authentication; //type: Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Authentication
        class Bfd; //type: Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Bfd
        class Cost; //type: Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Cost
        class DatabaseFilter; //type: Native::Interface::Gigabitethernet::Ospfv3::ProcessId::DatabaseFilter
        class DemandCircuit; //type: Native::Interface::Gigabitethernet::Ospfv3::ProcessId::DemandCircuit
        class FloodReduction; //type: Native::Interface::Gigabitethernet::Ospfv3::ProcessId::FloodReduction
        class Manet; //type: Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Manet
        class MtuIgnore; //type: Native::Interface::Gigabitethernet::Ospfv3::ProcessId::MtuIgnore
        class MultiArea; //type: Native::Interface::Gigabitethernet::Ospfv3::ProcessId::MultiArea
        class Neighbor; //type: Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Neighbor
        class Network; //type: Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Network
        class PrefixSuppression; //type: Native::Interface::Gigabitethernet::Ospfv3::ProcessId::PrefixSuppression
        class Shutdown; //type: Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Shutdown
        class Ipv4; //type: Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv4
        class Ipv6; //type: Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv6

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Authentication> authentication;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Bfd> bfd; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Cost> cost;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Ospfv3::ProcessId::DatabaseFilter> database_filter;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Ospfv3::ProcessId::DemandCircuit> demand_circuit; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Ospfv3::ProcessId::FloodReduction> flood_reduction; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv4> ipv4;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv6> ipv6;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Manet> manet;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Ospfv3::ProcessId::MtuIgnore> mtu_ignore; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Ospfv3::ProcessId::MultiArea> multi_area;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Neighbor> > neighbor;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Network> network;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Ospfv3::ProcessId::PrefixSuppression> prefix_suppression; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Shutdown> shutdown; // presence node
        
}; // Native::Interface::Gigabitethernet::Ospfv3::ProcessId


class Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Authentication : public Entity
{
    public:
        Authentication();
        ~Authentication();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf key_chain; //type: string
        YLeaf null; //type: empty

}; // Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Authentication


class Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Bfd : public Entity
{
    public:
        Bfd();
        ~Bfd();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf disable; //type: empty

}; // Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Bfd


class Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Cost : public Entity
{
    public:
        Cost();
        ~Cost();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf value_; //type: uint32
        class Dynamic; //type: Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Cost::Dynamic

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Cost::Dynamic> dynamic; // presence node
        
}; // Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Cost


class Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Cost::Dynamic : public Entity
{
    public:
        Dynamic();
        ~Dynamic();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf default_; //type: uint32
        class Hysteresis; //type: Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Cost::Dynamic::Hysteresis
        class Weight; //type: Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Cost::Dynamic::Weight

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Cost::Dynamic::Hysteresis> hysteresis; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Cost::Dynamic::Weight> weight;
        
}; // Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Cost::Dynamic


class Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Cost::Dynamic::Hysteresis : public Entity
{
    public:
        Hysteresis();
        ~Hysteresis();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf percent; //type: uint8
        YLeaf threshold; //type: uint32

}; // Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Cost::Dynamic::Hysteresis


class Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Cost::Dynamic::Weight : public Entity
{
    public:
        Weight();
        ~Weight();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class L2Factor; //type: Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Cost::Dynamic::Weight::L2Factor
        class Latency; //type: Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Cost::Dynamic::Weight::Latency
        class Resources; //type: Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Cost::Dynamic::Weight::Resources
        class Throughput; //type: Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Cost::Dynamic::Weight::Throughput

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Cost::Dynamic::Weight::L2Factor> l2_factor; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Cost::Dynamic::Weight::Latency> latency; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Cost::Dynamic::Weight::Resources> resources; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Cost::Dynamic::Weight::Throughput> throughput; // presence node
        
}; // Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Cost::Dynamic::Weight


class Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Cost::Dynamic::Weight::L2Factor : public Entity
{
    public:
        L2Factor();
        ~L2Factor();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf value_; //type: uint8

}; // Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Cost::Dynamic::Weight::L2Factor


class Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Cost::Dynamic::Weight::Latency : public Entity
{
    public:
        Latency();
        ~Latency();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf value_; //type: uint8

}; // Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Cost::Dynamic::Weight::Latency


class Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Cost::Dynamic::Weight::Resources : public Entity
{
    public:
        Resources();
        ~Resources();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf value_; //type: uint8

}; // Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Cost::Dynamic::Weight::Resources


class Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Cost::Dynamic::Weight::Throughput : public Entity
{
    public:
        Throughput();
        ~Throughput();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf value_; //type: uint8

}; // Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Cost::Dynamic::Weight::Throughput


class Native::Interface::Gigabitethernet::Ospfv3::ProcessId::DatabaseFilter : public Entity
{
    public:
        DatabaseFilter();
        ~DatabaseFilter();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf all; //type: AllEnum
        YLeaf disable; //type: empty
        class AllEnum;

}; // Native::Interface::Gigabitethernet::Ospfv3::ProcessId::DatabaseFilter


class Native::Interface::Gigabitethernet::Ospfv3::ProcessId::DemandCircuit : public Entity
{
    public:
        DemandCircuit();
        ~DemandCircuit();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf disable; //type: empty
        YLeaf ignore; //type: empty

}; // Native::Interface::Gigabitethernet::Ospfv3::ProcessId::DemandCircuit


class Native::Interface::Gigabitethernet::Ospfv3::ProcessId::FloodReduction : public Entity
{
    public:
        FloodReduction();
        ~FloodReduction();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf disable; //type: empty

}; // Native::Interface::Gigabitethernet::Ospfv3::ProcessId::FloodReduction


class Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Manet : public Entity
{
    public:
        Manet();
        ~Manet();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Peering; //type: Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Manet::Peering

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Manet::Peering> peering;
        
}; // Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Manet


class Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Manet::Peering : public Entity
{
    public:
        Peering();
        ~Peering();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf link_metrics; //type: uint32
        class Cost; //type: Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Manet::Peering::Cost

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Manet::Peering::Cost> cost;
        
}; // Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Manet::Peering


class Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Manet::Peering::Cost : public Entity
{
    public:
        Cost();
        ~Cost();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf percent; //type: uint8
        YLeaf threshold; //type: uint32

}; // Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Manet::Peering::Cost


class Native::Interface::Gigabitethernet::Ospfv3::ProcessId::MtuIgnore : public Entity
{
    public:
        MtuIgnore();
        ~MtuIgnore();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf disable; //type: empty

}; // Native::Interface::Gigabitethernet::Ospfv3::ProcessId::MtuIgnore


class Native::Interface::Gigabitethernet::Ospfv3::ProcessId::MultiArea : public Entity
{
    public:
        MultiArea();
        ~MultiArea();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf id; //type: one of uint32, string
        YLeaf cost; //type: uint32
        YLeaf disable; //type: empty

}; // Native::Interface::Gigabitethernet::Ospfv3::ProcessId::MultiArea


class Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Neighbor : public Entity
{
    public:
        Neighbor();
        ~Neighbor();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf id; //type: string
        YLeaf cost; //type: uint16
        YLeaf poll_interval; //type: uint32
        YLeaf priority; //type: uint8
        class DatabaseFilter; //type: Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Neighbor::DatabaseFilter

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Neighbor::DatabaseFilter> database_filter;
        
}; // Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Neighbor


class Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Neighbor::DatabaseFilter : public Entity
{
    public:
        DatabaseFilter();
        ~DatabaseFilter();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf all; //type: AllEnum
        class AllEnum;

}; // Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Neighbor::DatabaseFilter


class Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Network : public Entity
{
    public:
        Network();
        ~Network();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf broadcast; //type: empty
        YLeaf manet; //type: empty
        YLeaf non_broadcast; //type: empty
        YLeaf point_to_point; //type: empty
        class PointToMultipoint; //type: Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Network::PointToMultipoint

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Network::PointToMultipoint> point_to_multipoint; // presence node
        
}; // Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Network


class Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Network::PointToMultipoint : public Entity
{
    public:
        PointToMultipoint();
        ~PointToMultipoint();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf non_broadcast; //type: empty

}; // Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Network::PointToMultipoint


class Native::Interface::Gigabitethernet::Ospfv3::ProcessId::PrefixSuppression : public Entity
{
    public:
        PrefixSuppression();
        ~PrefixSuppression();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf disable; //type: empty

}; // Native::Interface::Gigabitethernet::Ospfv3::ProcessId::PrefixSuppression


class Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Shutdown : public Entity
{
    public:
        Shutdown();
        ~Shutdown();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf disable; //type: empty

}; // Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Shutdown


class Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv4 : public Entity
{
    public:
        Ipv4();
        ~Ipv4();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf dead_interval; //type: uint16
        YLeaf hello_interval; //type: uint32
        YLeaf priority; //type: uint8
        YLeaf retransmit_interval; //type: uint32
        YLeaf transmit_delay; //type: uint32
        class Area; //type: Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv4::Area
        class Authentication; //type: Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv4::Authentication
        class Bfd; //type: Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv4::Bfd
        class Cost; //type: Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv4::Cost
        class DatabaseFilter; //type: Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv4::DatabaseFilter
        class DemandCircuit; //type: Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv4::DemandCircuit
        class FloodReduction; //type: Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv4::FloodReduction
        class Manet; //type: Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv4::Manet
        class MtuIgnore; //type: Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv4::MtuIgnore
        class MultiArea; //type: Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv4::MultiArea
        class Neighbor; //type: Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv4::Neighbor
        class Network; //type: Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv4::Network
        class PrefixSuppression; //type: Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv4::PrefixSuppression
        class Shutdown; //type: Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv4::Shutdown

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv4::Area> > area;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv4::Authentication> authentication;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv4::Bfd> bfd; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv4::Cost> cost;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv4::DatabaseFilter> database_filter;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv4::DemandCircuit> demand_circuit; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv4::FloodReduction> flood_reduction; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv4::Manet> manet;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv4::MtuIgnore> mtu_ignore; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv4::MultiArea> multi_area;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv4::Neighbor> > neighbor;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv4::Network> network;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv4::PrefixSuppression> prefix_suppression; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv4::Shutdown> shutdown; // presence node
        
}; // Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv4


class Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv4::Area : public Entity
{
    public:
        Area();
        ~Area();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf id; //type: one of uint32, string
        YLeaf instance; //type: uint8

}; // Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv4::Area


class Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv4::Authentication : public Entity
{
    public:
        Authentication();
        ~Authentication();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf key_chain; //type: string
        YLeaf null; //type: empty

}; // Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv4::Authentication


class Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv4::Bfd : public Entity
{
    public:
        Bfd();
        ~Bfd();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf disable; //type: empty

}; // Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv4::Bfd


class Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv4::Cost : public Entity
{
    public:
        Cost();
        ~Cost();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf value_; //type: uint32
        class Dynamic; //type: Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv4::Cost::Dynamic

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv4::Cost::Dynamic> dynamic; // presence node
        
}; // Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv4::Cost


class Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv4::Cost::Dynamic : public Entity
{
    public:
        Dynamic();
        ~Dynamic();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf default_; //type: uint32
        class Hysteresis; //type: Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Hysteresis
        class Weight; //type: Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Hysteresis> hysteresis; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight> weight;
        
}; // Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv4::Cost::Dynamic


class Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Hysteresis : public Entity
{
    public:
        Hysteresis();
        ~Hysteresis();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf percent; //type: uint8
        YLeaf threshold; //type: uint32

}; // Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Hysteresis


class Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight : public Entity
{
    public:
        Weight();
        ~Weight();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class L2Factor; //type: Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight::L2Factor
        class Latency; //type: Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight::Latency
        class Resources; //type: Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight::Resources
        class Throughput; //type: Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight::Throughput

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight::L2Factor> l2_factor; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight::Latency> latency; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight::Resources> resources; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight::Throughput> throughput; // presence node
        
}; // Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight


class Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight::L2Factor : public Entity
{
    public:
        L2Factor();
        ~L2Factor();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf value_; //type: uint8

}; // Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight::L2Factor


class Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight::Latency : public Entity
{
    public:
        Latency();
        ~Latency();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf value_; //type: uint8

}; // Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight::Latency


class Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight::Resources : public Entity
{
    public:
        Resources();
        ~Resources();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf value_; //type: uint8

}; // Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight::Resources


class Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight::Throughput : public Entity
{
    public:
        Throughput();
        ~Throughput();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf value_; //type: uint8

}; // Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight::Throughput


class Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv4::DatabaseFilter : public Entity
{
    public:
        DatabaseFilter();
        ~DatabaseFilter();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf all; //type: AllEnum
        YLeaf disable; //type: empty
        class AllEnum;

}; // Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv4::DatabaseFilter


class Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv4::DemandCircuit : public Entity
{
    public:
        DemandCircuit();
        ~DemandCircuit();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf disable; //type: empty
        YLeaf ignore; //type: empty

}; // Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv4::DemandCircuit


class Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv4::FloodReduction : public Entity
{
    public:
        FloodReduction();
        ~FloodReduction();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf disable; //type: empty

}; // Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv4::FloodReduction


class Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv4::Manet : public Entity
{
    public:
        Manet();
        ~Manet();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Peering; //type: Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv4::Manet::Peering

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv4::Manet::Peering> peering;
        
}; // Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv4::Manet


class Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv4::Manet::Peering : public Entity
{
    public:
        Peering();
        ~Peering();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf link_metrics; //type: uint32
        class Cost; //type: Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv4::Manet::Peering::Cost

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv4::Manet::Peering::Cost> cost;
        
}; // Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv4::Manet::Peering


class Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv4::Manet::Peering::Cost : public Entity
{
    public:
        Cost();
        ~Cost();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf percent; //type: uint8
        YLeaf threshold; //type: uint32

}; // Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv4::Manet::Peering::Cost


class Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv4::MtuIgnore : public Entity
{
    public:
        MtuIgnore();
        ~MtuIgnore();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf disable; //type: empty

}; // Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv4::MtuIgnore


class Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv4::MultiArea : public Entity
{
    public:
        MultiArea();
        ~MultiArea();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf id; //type: one of uint32, string
        YLeaf cost; //type: uint32
        YLeaf disable; //type: empty

}; // Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv4::MultiArea


class Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv4::Neighbor : public Entity
{
    public:
        Neighbor();
        ~Neighbor();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf id; //type: string
        YLeaf cost; //type: uint16
        YLeaf poll_interval; //type: uint32
        YLeaf priority; //type: uint8
        class DatabaseFilter; //type: Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv4::Neighbor::DatabaseFilter

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv4::Neighbor::DatabaseFilter> database_filter;
        
}; // Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv4::Neighbor


class Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv4::Neighbor::DatabaseFilter : public Entity
{
    public:
        DatabaseFilter();
        ~DatabaseFilter();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf all; //type: AllEnum
        class AllEnum;

}; // Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv4::Neighbor::DatabaseFilter


class Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv4::Network : public Entity
{
    public:
        Network();
        ~Network();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf broadcast; //type: empty
        YLeaf manet; //type: empty
        YLeaf non_broadcast; //type: empty
        YLeaf point_to_point; //type: empty
        class PointToMultipoint; //type: Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv4::Network::PointToMultipoint

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv4::Network::PointToMultipoint> point_to_multipoint; // presence node
        
}; // Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv4::Network


class Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv4::Network::PointToMultipoint : public Entity
{
    public:
        PointToMultipoint();
        ~PointToMultipoint();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf non_broadcast; //type: empty

}; // Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv4::Network::PointToMultipoint


class Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv4::PrefixSuppression : public Entity
{
    public:
        PrefixSuppression();
        ~PrefixSuppression();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf disable; //type: empty

}; // Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv4::PrefixSuppression


class Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv4::Shutdown : public Entity
{
    public:
        Shutdown();
        ~Shutdown();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf disable; //type: empty

}; // Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv4::Shutdown


class Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv6 : public Entity
{
    public:
        Ipv6();
        ~Ipv6();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf dead_interval; //type: uint16
        YLeaf hello_interval; //type: uint32
        YLeaf priority; //type: uint8
        YLeaf retransmit_interval; //type: uint32
        YLeaf transmit_delay; //type: uint32
        class Area; //type: Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv6::Area
        class Authentication; //type: Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv6::Authentication
        class Bfd; //type: Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv6::Bfd
        class Cost; //type: Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv6::Cost
        class DatabaseFilter; //type: Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv6::DatabaseFilter
        class DemandCircuit; //type: Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv6::DemandCircuit
        class FloodReduction; //type: Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv6::FloodReduction
        class Manet; //type: Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv6::Manet
        class MtuIgnore; //type: Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv6::MtuIgnore
        class MultiArea; //type: Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv6::MultiArea
        class Neighbor; //type: Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv6::Neighbor
        class Network; //type: Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv6::Network
        class PrefixSuppression; //type: Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv6::PrefixSuppression
        class Shutdown; //type: Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv6::Shutdown

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv6::Area> > area;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv6::Authentication> authentication;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv6::Bfd> bfd; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv6::Cost> cost;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv6::DatabaseFilter> database_filter;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv6::DemandCircuit> demand_circuit; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv6::FloodReduction> flood_reduction; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv6::Manet> manet;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv6::MtuIgnore> mtu_ignore; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv6::MultiArea> multi_area;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv6::Neighbor> > neighbor;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv6::Network> network;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv6::PrefixSuppression> prefix_suppression; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv6::Shutdown> shutdown; // presence node
        
}; // Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv6


class Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv6::Area : public Entity
{
    public:
        Area();
        ~Area();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf id; //type: one of uint32, string
        YLeaf instance; //type: uint8

}; // Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv6::Area


class Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv6::Authentication : public Entity
{
    public:
        Authentication();
        ~Authentication();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf key_chain; //type: string
        YLeaf null; //type: empty

}; // Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv6::Authentication


class Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv6::Bfd : public Entity
{
    public:
        Bfd();
        ~Bfd();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf disable; //type: empty

}; // Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv6::Bfd


class Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv6::Cost : public Entity
{
    public:
        Cost();
        ~Cost();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf value_; //type: uint32
        class Dynamic; //type: Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv6::Cost::Dynamic

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv6::Cost::Dynamic> dynamic; // presence node
        
}; // Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv6::Cost


class Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv6::Cost::Dynamic : public Entity
{
    public:
        Dynamic();
        ~Dynamic();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf default_; //type: uint32
        class Hysteresis; //type: Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::Hysteresis
        class Weight; //type: Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::Weight

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::Hysteresis> hysteresis; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::Weight> weight;
        
}; // Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv6::Cost::Dynamic


class Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::Hysteresis : public Entity
{
    public:
        Hysteresis();
        ~Hysteresis();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf percent; //type: uint8
        YLeaf threshold; //type: uint32

}; // Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::Hysteresis


class Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::Weight : public Entity
{
    public:
        Weight();
        ~Weight();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class L2Factor; //type: Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::Weight::L2Factor
        class Latency; //type: Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::Weight::Latency
        class Resources; //type: Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::Weight::Resources
        class Throughput; //type: Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::Weight::Throughput

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::Weight::L2Factor> l2_factor; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::Weight::Latency> latency; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::Weight::Resources> resources; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::Weight::Throughput> throughput; // presence node
        
}; // Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::Weight


class Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::Weight::L2Factor : public Entity
{
    public:
        L2Factor();
        ~L2Factor();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf value_; //type: uint8

}; // Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::Weight::L2Factor


class Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::Weight::Latency : public Entity
{
    public:
        Latency();
        ~Latency();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf value_; //type: uint8

}; // Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::Weight::Latency


class Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::Weight::Resources : public Entity
{
    public:
        Resources();
        ~Resources();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf value_; //type: uint8

}; // Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::Weight::Resources


class Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::Weight::Throughput : public Entity
{
    public:
        Throughput();
        ~Throughput();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf value_; //type: uint8

}; // Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::Weight::Throughput


class Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv6::DatabaseFilter : public Entity
{
    public:
        DatabaseFilter();
        ~DatabaseFilter();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf all; //type: AllEnum
        YLeaf disable; //type: empty
        class AllEnum;

}; // Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv6::DatabaseFilter


class Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv6::DemandCircuit : public Entity
{
    public:
        DemandCircuit();
        ~DemandCircuit();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf disable; //type: empty
        YLeaf ignore; //type: empty

}; // Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv6::DemandCircuit


class Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv6::FloodReduction : public Entity
{
    public:
        FloodReduction();
        ~FloodReduction();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf disable; //type: empty

}; // Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv6::FloodReduction


class Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv6::Manet : public Entity
{
    public:
        Manet();
        ~Manet();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Peering; //type: Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv6::Manet::Peering

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv6::Manet::Peering> peering;
        
}; // Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv6::Manet


class Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv6::Manet::Peering : public Entity
{
    public:
        Peering();
        ~Peering();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf link_metrics; //type: uint32
        class Cost; //type: Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv6::Manet::Peering::Cost

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv6::Manet::Peering::Cost> cost;
        
}; // Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv6::Manet::Peering


class Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv6::Manet::Peering::Cost : public Entity
{
    public:
        Cost();
        ~Cost();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf percent; //type: uint8
        YLeaf threshold; //type: uint32

}; // Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv6::Manet::Peering::Cost


class Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv6::MtuIgnore : public Entity
{
    public:
        MtuIgnore();
        ~MtuIgnore();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf disable; //type: empty

}; // Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv6::MtuIgnore


class Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv6::MultiArea : public Entity
{
    public:
        MultiArea();
        ~MultiArea();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf id; //type: one of uint32, string
        YLeaf cost; //type: uint32
        YLeaf disable; //type: empty

}; // Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv6::MultiArea


class Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv6::Neighbor : public Entity
{
    public:
        Neighbor();
        ~Neighbor();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf id; //type: string
        YLeaf cost; //type: uint16
        YLeaf poll_interval; //type: uint32
        YLeaf priority; //type: uint8
        class DatabaseFilter; //type: Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv6::Neighbor::DatabaseFilter

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv6::Neighbor::DatabaseFilter> database_filter;
        
}; // Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv6::Neighbor


class Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv6::Neighbor::DatabaseFilter : public Entity
{
    public:
        DatabaseFilter();
        ~DatabaseFilter();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf all; //type: AllEnum
        class AllEnum;

}; // Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv6::Neighbor::DatabaseFilter


class Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv6::Network : public Entity
{
    public:
        Network();
        ~Network();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf broadcast; //type: empty
        YLeaf manet; //type: empty
        YLeaf non_broadcast; //type: empty
        YLeaf point_to_point; //type: empty
        class PointToMultipoint; //type: Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv6::Network::PointToMultipoint

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv6::Network::PointToMultipoint> point_to_multipoint; // presence node
        
}; // Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv6::Network


class Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv6::Network::PointToMultipoint : public Entity
{
    public:
        PointToMultipoint();
        ~PointToMultipoint();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf non_broadcast; //type: empty

}; // Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv6::Network::PointToMultipoint


class Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv6::PrefixSuppression : public Entity
{
    public:
        PrefixSuppression();
        ~PrefixSuppression();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf disable; //type: empty

}; // Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv6::PrefixSuppression


class Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv6::Shutdown : public Entity
{
    public:
        Shutdown();
        ~Shutdown();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf disable; //type: empty

}; // Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv6::Shutdown


class Native::Interface::Gigabitethernet::Ospfv3::Authentication : public Entity
{
    public:
        Authentication();
        ~Authentication();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf key_chain; //type: string
        YLeaf null; //type: empty
        class Ipsec; //type: Native::Interface::Gigabitethernet::Ospfv3::Authentication::Ipsec

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Ospfv3::Authentication::Ipsec> ipsec;
        
}; // Native::Interface::Gigabitethernet::Ospfv3::Authentication


class Native::Interface::Gigabitethernet::Ospfv3::Authentication::Ipsec : public Entity
{
    public:
        Ipsec();
        ~Ipsec();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf spi; //type: uint64
        class Md5; //type: Native::Interface::Gigabitethernet::Ospfv3::Authentication::Ipsec::Md5
        class Sha1; //type: Native::Interface::Gigabitethernet::Ospfv3::Authentication::Ipsec::Sha1

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Ospfv3::Authentication::Ipsec::Md5> md5;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Ospfv3::Authentication::Ipsec::Sha1> sha1;
        
}; // Native::Interface::Gigabitethernet::Ospfv3::Authentication::Ipsec


class Native::Interface::Gigabitethernet::Ospfv3::Authentication::Ipsec::Md5 : public Entity
{
    public:
        Md5();
        ~Md5();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class KeyString; //type: Native::Interface::Gigabitethernet::Ospfv3::Authentication::Ipsec::Md5::KeyString

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Ospfv3::Authentication::Ipsec::Md5::KeyString> key_string;
        
}; // Native::Interface::Gigabitethernet::Ospfv3::Authentication::Ipsec::Md5


class Native::Interface::Gigabitethernet::Ospfv3::Authentication::Ipsec::Md5::KeyString : public Entity
{
    public:
        KeyString();
        ~KeyString();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf encrypt; //type: EncryptEnum
        YLeaf string; //type: string
        class EncryptEnum;

}; // Native::Interface::Gigabitethernet::Ospfv3::Authentication::Ipsec::Md5::KeyString


class Native::Interface::Gigabitethernet::Ospfv3::Authentication::Ipsec::Sha1 : public Entity
{
    public:
        Sha1();
        ~Sha1();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class KeyString; //type: Native::Interface::Gigabitethernet::Ospfv3::Authentication::Ipsec::Sha1::KeyString

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Ospfv3::Authentication::Ipsec::Sha1::KeyString> key_string;
        
}; // Native::Interface::Gigabitethernet::Ospfv3::Authentication::Ipsec::Sha1


class Native::Interface::Gigabitethernet::Ospfv3::Authentication::Ipsec::Sha1::KeyString : public Entity
{
    public:
        KeyString();
        ~KeyString();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf encrypt; //type: EncryptEnum
        YLeaf string; //type: string
        class EncryptEnum;

}; // Native::Interface::Gigabitethernet::Ospfv3::Authentication::Ipsec::Sha1::KeyString


class Native::Interface::Gigabitethernet::Ospfv3::Bfd : public Entity
{
    public:
        Bfd();
        ~Bfd();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf disable; //type: empty

}; // Native::Interface::Gigabitethernet::Ospfv3::Bfd


class Native::Interface::Gigabitethernet::Ospfv3::Cost : public Entity
{
    public:
        Cost();
        ~Cost();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf value_; //type: uint32
        class Dynamic; //type: Native::Interface::Gigabitethernet::Ospfv3::Cost::Dynamic

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Ospfv3::Cost::Dynamic> dynamic; // presence node
        
}; // Native::Interface::Gigabitethernet::Ospfv3::Cost


class Native::Interface::Gigabitethernet::Ospfv3::Cost::Dynamic : public Entity
{
    public:
        Dynamic();
        ~Dynamic();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf default_; //type: uint32
        class Hysteresis; //type: Native::Interface::Gigabitethernet::Ospfv3::Cost::Dynamic::Hysteresis
        class Weight; //type: Native::Interface::Gigabitethernet::Ospfv3::Cost::Dynamic::Weight

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Ospfv3::Cost::Dynamic::Hysteresis> hysteresis; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Ospfv3::Cost::Dynamic::Weight> weight;
        
}; // Native::Interface::Gigabitethernet::Ospfv3::Cost::Dynamic


class Native::Interface::Gigabitethernet::Ospfv3::Cost::Dynamic::Hysteresis : public Entity
{
    public:
        Hysteresis();
        ~Hysteresis();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf percent; //type: uint8
        YLeaf threshold; //type: uint32

}; // Native::Interface::Gigabitethernet::Ospfv3::Cost::Dynamic::Hysteresis


class Native::Interface::Gigabitethernet::Ospfv3::Cost::Dynamic::Weight : public Entity
{
    public:
        Weight();
        ~Weight();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class L2Factor; //type: Native::Interface::Gigabitethernet::Ospfv3::Cost::Dynamic::Weight::L2Factor
        class Latency; //type: Native::Interface::Gigabitethernet::Ospfv3::Cost::Dynamic::Weight::Latency
        class Resources; //type: Native::Interface::Gigabitethernet::Ospfv3::Cost::Dynamic::Weight::Resources
        class Throughput; //type: Native::Interface::Gigabitethernet::Ospfv3::Cost::Dynamic::Weight::Throughput

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Ospfv3::Cost::Dynamic::Weight::L2Factor> l2_factor; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Ospfv3::Cost::Dynamic::Weight::Latency> latency; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Ospfv3::Cost::Dynamic::Weight::Resources> resources; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Ospfv3::Cost::Dynamic::Weight::Throughput> throughput; // presence node
        
}; // Native::Interface::Gigabitethernet::Ospfv3::Cost::Dynamic::Weight


class Native::Interface::Gigabitethernet::Ospfv3::Cost::Dynamic::Weight::L2Factor : public Entity
{
    public:
        L2Factor();
        ~L2Factor();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf value_; //type: uint8

}; // Native::Interface::Gigabitethernet::Ospfv3::Cost::Dynamic::Weight::L2Factor


class Native::Interface::Gigabitethernet::Ospfv3::Cost::Dynamic::Weight::Latency : public Entity
{
    public:
        Latency();
        ~Latency();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf value_; //type: uint8

}; // Native::Interface::Gigabitethernet::Ospfv3::Cost::Dynamic::Weight::Latency


class Native::Interface::Gigabitethernet::Ospfv3::Cost::Dynamic::Weight::Resources : public Entity
{
    public:
        Resources();
        ~Resources();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf value_; //type: uint8

}; // Native::Interface::Gigabitethernet::Ospfv3::Cost::Dynamic::Weight::Resources


class Native::Interface::Gigabitethernet::Ospfv3::Cost::Dynamic::Weight::Throughput : public Entity
{
    public:
        Throughput();
        ~Throughput();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf value_; //type: uint8

}; // Native::Interface::Gigabitethernet::Ospfv3::Cost::Dynamic::Weight::Throughput


class Native::Interface::Gigabitethernet::Ospfv3::DatabaseFilter : public Entity
{
    public:
        DatabaseFilter();
        ~DatabaseFilter();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf all; //type: AllEnum
        class AllEnum;

}; // Native::Interface::Gigabitethernet::Ospfv3::DatabaseFilter


class Native::Interface::Gigabitethernet::Ospfv3::DemandCircuit : public Entity
{
    public:
        DemandCircuit();
        ~DemandCircuit();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ignore; //type: empty

}; // Native::Interface::Gigabitethernet::Ospfv3::DemandCircuit


class Native::Interface::Gigabitethernet::Ospfv3::Encryption : public Entity
{
    public:
        Encryption();
        ~Encryption();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf null; //type: empty
        class Ipsec; //type: Native::Interface::Gigabitethernet::Ospfv3::Encryption::Ipsec

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Ospfv3::Encryption::Ipsec> ipsec;
        
}; // Native::Interface::Gigabitethernet::Ospfv3::Encryption


class Native::Interface::Gigabitethernet::Ospfv3::Encryption::Ipsec : public Entity
{
    public:
        Ipsec();
        ~Ipsec();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf spi; //type: uint64
        YLeaf esp; //type: empty
        class Ipsec_3Des; //type: Native::Interface::Gigabitethernet::Ospfv3::Encryption::Ipsec::Ipsec_3Des
        class AesCbc; //type: Native::Interface::Gigabitethernet::Ospfv3::Encryption::Ipsec::AesCbc

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Ospfv3::Encryption::Ipsec::AesCbc> aes_cbc;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Ospfv3::Encryption::Ipsec::Ipsec_3Des> ipsec_3des;
        
}; // Native::Interface::Gigabitethernet::Ospfv3::Encryption::Ipsec


class Native::Interface::Gigabitethernet::Ospfv3::Encryption::Ipsec::Ipsec_3Des : public Entity
{
    public:
        Ipsec_3Des();
        ~Ipsec_3Des();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class KeyString; //type: Native::Interface::Gigabitethernet::Ospfv3::Encryption::Ipsec::Ipsec_3Des::KeyString

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Ospfv3::Encryption::Ipsec::Ipsec_3Des::KeyString> key_string;
        
}; // Native::Interface::Gigabitethernet::Ospfv3::Encryption::Ipsec::Ipsec_3Des


class Native::Interface::Gigabitethernet::Ospfv3::Encryption::Ipsec::Ipsec_3Des::KeyString : public Entity
{
    public:
        KeyString();
        ~KeyString();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf encrypt; //type: EncryptEnum
        YLeaf string; //type: string
        class EncryptEnum;

}; // Native::Interface::Gigabitethernet::Ospfv3::Encryption::Ipsec::Ipsec_3Des::KeyString


class Native::Interface::Gigabitethernet::Ospfv3::Encryption::Ipsec::AesCbc : public Entity
{
    public:
        AesCbc();
        ~AesCbc();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class AesCbc128; //type: Native::Interface::Gigabitethernet::Ospfv3::Encryption::Ipsec::AesCbc::AesCbc128
        class Aes192; //type: Native::Interface::Gigabitethernet::Ospfv3::Encryption::Ipsec::AesCbc::Aes192
        class Aes256; //type: Native::Interface::Gigabitethernet::Ospfv3::Encryption::Ipsec::AesCbc::Aes256

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Ospfv3::Encryption::Ipsec::AesCbc::Aes192> aes_192;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Ospfv3::Encryption::Ipsec::AesCbc::Aes256> aes_256;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Ospfv3::Encryption::Ipsec::AesCbc::AesCbc128> aes_cbc_128;
        
}; // Native::Interface::Gigabitethernet::Ospfv3::Encryption::Ipsec::AesCbc


class Native::Interface::Gigabitethernet::Ospfv3::Encryption::Ipsec::AesCbc::AesCbc128 : public Entity
{
    public:
        AesCbc128();
        ~AesCbc128();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class KeyString; //type: Native::Interface::Gigabitethernet::Ospfv3::Encryption::Ipsec::AesCbc::AesCbc128::KeyString

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Ospfv3::Encryption::Ipsec::AesCbc::AesCbc128::KeyString> key_string;
        
}; // Native::Interface::Gigabitethernet::Ospfv3::Encryption::Ipsec::AesCbc::AesCbc128


class Native::Interface::Gigabitethernet::Ospfv3::Encryption::Ipsec::AesCbc::AesCbc128::KeyString : public Entity
{
    public:
        KeyString();
        ~KeyString();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf encrypt; //type: EncryptEnum
        YLeaf string; //type: string
        class EncryptEnum;

}; // Native::Interface::Gigabitethernet::Ospfv3::Encryption::Ipsec::AesCbc::AesCbc128::KeyString


class Native::Interface::Gigabitethernet::Ospfv3::Encryption::Ipsec::AesCbc::Aes192 : public Entity
{
    public:
        Aes192();
        ~Aes192();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class KeyString; //type: Native::Interface::Gigabitethernet::Ospfv3::Encryption::Ipsec::AesCbc::Aes192::KeyString

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Ospfv3::Encryption::Ipsec::AesCbc::Aes192::KeyString> key_string;
        
}; // Native::Interface::Gigabitethernet::Ospfv3::Encryption::Ipsec::AesCbc::Aes192


class Native::Interface::Gigabitethernet::Ospfv3::Encryption::Ipsec::AesCbc::Aes192::KeyString : public Entity
{
    public:
        KeyString();
        ~KeyString();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf encrypt; //type: EncryptEnum
        YLeaf string; //type: string
        class EncryptEnum;

}; // Native::Interface::Gigabitethernet::Ospfv3::Encryption::Ipsec::AesCbc::Aes192::KeyString


class Native::Interface::Gigabitethernet::Ospfv3::Encryption::Ipsec::AesCbc::Aes256 : public Entity
{
    public:
        Aes256();
        ~Aes256();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class KeyString; //type: Native::Interface::Gigabitethernet::Ospfv3::Encryption::Ipsec::AesCbc::Aes256::KeyString

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Ospfv3::Encryption::Ipsec::AesCbc::Aes256::KeyString> key_string;
        
}; // Native::Interface::Gigabitethernet::Ospfv3::Encryption::Ipsec::AesCbc::Aes256


class Native::Interface::Gigabitethernet::Ospfv3::Encryption::Ipsec::AesCbc::Aes256::KeyString : public Entity
{
    public:
        KeyString();
        ~KeyString();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf encrypt; //type: EncryptEnum
        YLeaf string; //type: string
        class EncryptEnum;

}; // Native::Interface::Gigabitethernet::Ospfv3::Encryption::Ipsec::AesCbc::Aes256::KeyString


class Native::Interface::Gigabitethernet::Ospfv3::Manet : public Entity
{
    public:
        Manet();
        ~Manet();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Peering; //type: Native::Interface::Gigabitethernet::Ospfv3::Manet::Peering

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Ospfv3::Manet::Peering> peering;
        
}; // Native::Interface::Gigabitethernet::Ospfv3::Manet


class Native::Interface::Gigabitethernet::Ospfv3::Manet::Peering : public Entity
{
    public:
        Peering();
        ~Peering();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf link_metrics; //type: uint32
        class Cost; //type: Native::Interface::Gigabitethernet::Ospfv3::Manet::Peering::Cost

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Ospfv3::Manet::Peering::Cost> cost;
        
}; // Native::Interface::Gigabitethernet::Ospfv3::Manet::Peering


class Native::Interface::Gigabitethernet::Ospfv3::Manet::Peering::Cost : public Entity
{
    public:
        Cost();
        ~Cost();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf percent; //type: uint8
        YLeaf threshold; //type: uint32

}; // Native::Interface::Gigabitethernet::Ospfv3::Manet::Peering::Cost


class Native::Interface::Gigabitethernet::Ospfv3::MultiArea : public Entity
{
    public:
        MultiArea();
        ~MultiArea();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf id; //type: one of uint32, string
        YLeaf cost; //type: uint32

}; // Native::Interface::Gigabitethernet::Ospfv3::MultiArea


class Native::Interface::Gigabitethernet::Ospfv3::Neighbor : public Entity
{
    public:
        Neighbor();
        ~Neighbor();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf id; //type: string
        YLeaf cost; //type: uint16
        YLeaf poll_interval; //type: uint32
        YLeaf priority; //type: uint8
        class DatabaseFilter; //type: Native::Interface::Gigabitethernet::Ospfv3::Neighbor::DatabaseFilter

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Ospfv3::Neighbor::DatabaseFilter> database_filter;
        
}; // Native::Interface::Gigabitethernet::Ospfv3::Neighbor


class Native::Interface::Gigabitethernet::Ospfv3::Neighbor::DatabaseFilter : public Entity
{
    public:
        DatabaseFilter();
        ~DatabaseFilter();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf all; //type: AllEnum
        class AllEnum;

}; // Native::Interface::Gigabitethernet::Ospfv3::Neighbor::DatabaseFilter


class Native::Interface::Gigabitethernet::Ospfv3::Network : public Entity
{
    public:
        Network();
        ~Network();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf broadcast; //type: empty
        YLeaf manet; //type: empty
        YLeaf non_broadcast; //type: empty
        YLeaf point_to_point; //type: empty
        class PointToMultipoint; //type: Native::Interface::Gigabitethernet::Ospfv3::Network::PointToMultipoint

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Ospfv3::Network::PointToMultipoint> point_to_multipoint; // presence node
        
}; // Native::Interface::Gigabitethernet::Ospfv3::Network

class Native::Interface::Gigabitethernet::Dot1X::PaeEnum : public Enum
{
    public:
        static const Enum::YLeaf authenticator;
        static const Enum::YLeaf supplicant;
        static const Enum::YLeaf both;

};

class Native::Interface::Gigabitethernet::ServicePolicy::Type::PerformanceMonitor::DirectionEnum : public Enum
{
    public:
        static const Enum::YLeaf input;
        static const Enum::YLeaf output;

};

class Native::Interface::Gigabitethernet::Ospfv3::ProcessId::DatabaseFilter::AllEnum : public Enum
{
    public:
        static const Enum::YLeaf out;

};

class Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Neighbor::DatabaseFilter::AllEnum : public Enum
{
    public:
        static const Enum::YLeaf out;

};

class Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv4::DatabaseFilter::AllEnum : public Enum
{
    public:
        static const Enum::YLeaf out;

};

class Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv4::Neighbor::DatabaseFilter::AllEnum : public Enum
{
    public:
        static const Enum::YLeaf out;

};

class Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv6::DatabaseFilter::AllEnum : public Enum
{
    public:
        static const Enum::YLeaf out;

};

class Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv6::Neighbor::DatabaseFilter::AllEnum : public Enum
{
    public:
        static const Enum::YLeaf out;

};

class Native::Interface::Gigabitethernet::Ospfv3::Authentication::Ipsec::Md5::KeyString::EncryptEnum : public Enum
{
    public:
        static const Enum::YLeaf Y_0;
        static const Enum::YLeaf Y_7;

};

class Native::Interface::Gigabitethernet::Ospfv3::Authentication::Ipsec::Sha1::KeyString::EncryptEnum : public Enum
{
    public:
        static const Enum::YLeaf Y_0;
        static const Enum::YLeaf Y_7;

};

class Native::Interface::Gigabitethernet::Ospfv3::DatabaseFilter::AllEnum : public Enum
{
    public:
        static const Enum::YLeaf out;

};

class Native::Interface::Gigabitethernet::Ospfv3::Encryption::Ipsec::Ipsec_3Des::KeyString::EncryptEnum : public Enum
{
    public:
        static const Enum::YLeaf Y_0;
        static const Enum::YLeaf Y_7;

};

class Native::Interface::Gigabitethernet::Ospfv3::Encryption::Ipsec::AesCbc::AesCbc128::KeyString::EncryptEnum : public Enum
{
    public:
        static const Enum::YLeaf Y_0;
        static const Enum::YLeaf Y_7;

};

class Native::Interface::Gigabitethernet::Ospfv3::Encryption::Ipsec::AesCbc::Aes192::KeyString::EncryptEnum : public Enum
{
    public:
        static const Enum::YLeaf Y_0;
        static const Enum::YLeaf Y_7;

};

class Native::Interface::Gigabitethernet::Ospfv3::Encryption::Ipsec::AesCbc::Aes256::KeyString::EncryptEnum : public Enum
{
    public:
        static const Enum::YLeaf Y_0;
        static const Enum::YLeaf Y_7;

};

class Native::Interface::Gigabitethernet::Ospfv3::Neighbor::DatabaseFilter::AllEnum : public Enum
{
    public:
        static const Enum::YLeaf out;

};


}
}

#endif /* _CISCO_IOS_XE_NATIVE_30_ */

