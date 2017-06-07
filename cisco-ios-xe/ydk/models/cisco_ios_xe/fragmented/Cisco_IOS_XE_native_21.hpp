#ifndef _CISCO_IOS_XE_NATIVE_21_
#define _CISCO_IOS_XE_NATIVE_21_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XE_native_0.hpp"
#include "Cisco_IOS_XE_native_16.hpp"
#include "Cisco_IOS_XE_native_20.hpp"

namespace ydk {
namespace Cisco_IOS_XE_native {


class Native::Interface::Cem::Atm::Pvp : public Entity
{
    public:
        Pvp();
        ~Pvp();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf pvp_number; //type: uint16
        YLeaf l2transport; //type: empty
        class Xconnect; //type: Native::Interface::Cem::Atm::Pvp::Xconnect
        class XconnectPwClass; //type: Native::Interface::Cem::Atm::Pvp::XconnectPwClass

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Cem::Atm::Pvp::Xconnect> xconnect;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Cem::Atm::Pvp::XconnectPwClass> xconnect_pw_class;
        
}; // Native::Interface::Cem::Atm::Pvp


class Native::Interface::Cem::Atm::Pvp::Xconnect : public Entity
{
    public:
        Xconnect();
        ~Xconnect();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf address; //type: string
        YLeaf vcid; //type: uint32
        YLeaf encapsulation; //type: EncapsulationEnum
        YLeaf manual; //type: empty
        YLeaf pw_class; //type: string
        YLeaf sequencing; //type: SequencingEnum
        YLeaf mtu; //type: uint32
        class Backup; //type: Native::Interface::Cem::Atm::Pvp::Xconnect::Backup

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Cem::Atm::Pvp::Xconnect::Backup> backup;
                class EncapsulationEnum;
        class SequencingEnum;

}; // Native::Interface::Cem::Atm::Pvp::Xconnect


class Native::Interface::Cem::Atm::Pvp::Xconnect::Backup : public Entity
{
    public:
        Backup();
        ~Backup();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Peer; //type: Native::Interface::Cem::Atm::Pvp::Xconnect::Backup::Peer
        class Delay; //type: Native::Interface::Cem::Atm::Pvp::Xconnect::Backup::Delay

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Cem::Atm::Pvp::Xconnect::Backup::Delay> delay;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Cem::Atm::Pvp::Xconnect::Backup::Peer> peer;
        
}; // Native::Interface::Cem::Atm::Pvp::Xconnect::Backup


class Native::Interface::Cem::Atm::Pvp::Xconnect::Backup::Peer : public Entity
{
    public:
        Peer();
        ~Peer();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf peer_router_ip_addr; //type: string
        YLeaf vcid; //type: uint32
        YLeaf pw_class; //type: string
        YLeaf priority; //type: uint8

}; // Native::Interface::Cem::Atm::Pvp::Xconnect::Backup::Peer


class Native::Interface::Cem::Atm::Pvp::Xconnect::Backup::Delay : public Entity
{
    public:
        Delay();
        ~Delay();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf min; //type: uint32
        YLeaf max; //type: uint32

}; // Native::Interface::Cem::Atm::Pvp::Xconnect::Backup::Delay


class Native::Interface::Cem::Atm::Pvp::XconnectPwClass : public Entity
{
    public:
        XconnectPwClass();
        ~XconnectPwClass();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Xconnect; //type: Native::Interface::Cem::Atm::Pvp::XconnectPwClass::Xconnect

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Cem::Atm::Pvp::XconnectPwClass::Xconnect> xconnect;
        
}; // Native::Interface::Cem::Atm::Pvp::XconnectPwClass


class Native::Interface::Cem::Atm::Pvp::XconnectPwClass::Xconnect : public Entity
{
    public:
        Xconnect();
        ~Xconnect();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf address; //type: string
        YLeaf vcid; //type: uint32
        YLeaf pw_class; //type: string
        class Udp; //type: Native::Interface::Cem::Atm::Pvp::XconnectPwClass::Xconnect::Udp

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Cem::Atm::Pvp::XconnectPwClass::Xconnect::Udp> udp;
        
}; // Native::Interface::Cem::Atm::Pvp::XconnectPwClass::Xconnect


class Native::Interface::Cem::Atm::Pvp::XconnectPwClass::Xconnect::Udp : public Entity
{
    public:
        Udp();
        ~Udp();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Port; //type: Native::Interface::Cem::Atm::Pvp::XconnectPwClass::Xconnect::Udp::Port

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Cem::Atm::Pvp::XconnectPwClass::Xconnect::Udp::Port> port;
        
}; // Native::Interface::Cem::Atm::Pvp::XconnectPwClass::Xconnect::Udp


class Native::Interface::Cem::Atm::Pvp::XconnectPwClass::Xconnect::Udp::Port : public Entity
{
    public:
        Port();
        ~Port();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf local; //type: uint32
        YLeaf remote; //type: uint32

}; // Native::Interface::Cem::Atm::Pvp::XconnectPwClass::Xconnect::Udp::Port


class Native::Interface::Cem::Cem_ : public Entity
{
    public:
        Cem_();
        ~Cem_();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf number; //type: uint32
        class Xconnect; //type: Native::Interface::Cem::Cem_::Xconnect
        class XconnectPwClass; //type: Native::Interface::Cem::Cem_::XconnectPwClass

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Cem::Cem_::Xconnect> xconnect;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Cem::Cem_::XconnectPwClass> xconnect_pw_class;
        
}; // Native::Interface::Cem::Cem_


class Native::Interface::Cem::Cem_::Xconnect : public Entity
{
    public:
        Xconnect();
        ~Xconnect();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf address; //type: string
        YLeaf vcid; //type: uint32
        YLeaf encapsulation; //type: EncapsulationEnum
        YLeaf manual; //type: empty
        YLeaf pw_class; //type: string
        YLeaf sequencing; //type: SequencingEnum
        YLeaf mtu; //type: uint32
        class Backup; //type: Native::Interface::Cem::Cem_::Xconnect::Backup

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Cem::Cem_::Xconnect::Backup> backup;
                class EncapsulationEnum;
        class SequencingEnum;

}; // Native::Interface::Cem::Cem_::Xconnect


class Native::Interface::Cem::Cem_::Xconnect::Backup : public Entity
{
    public:
        Backup();
        ~Backup();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Peer; //type: Native::Interface::Cem::Cem_::Xconnect::Backup::Peer
        class Delay; //type: Native::Interface::Cem::Cem_::Xconnect::Backup::Delay

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Cem::Cem_::Xconnect::Backup::Delay> delay;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Cem::Cem_::Xconnect::Backup::Peer> peer;
        
}; // Native::Interface::Cem::Cem_::Xconnect::Backup


class Native::Interface::Cem::Cem_::Xconnect::Backup::Peer : public Entity
{
    public:
        Peer();
        ~Peer();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf peer_router_ip_addr; //type: string
        YLeaf vcid; //type: uint32
        YLeaf pw_class; //type: string
        YLeaf priority; //type: uint8

}; // Native::Interface::Cem::Cem_::Xconnect::Backup::Peer


class Native::Interface::Cem::Cem_::Xconnect::Backup::Delay : public Entity
{
    public:
        Delay();
        ~Delay();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf min; //type: uint32
        YLeaf max; //type: uint32

}; // Native::Interface::Cem::Cem_::Xconnect::Backup::Delay


class Native::Interface::Cem::Cem_::XconnectPwClass : public Entity
{
    public:
        XconnectPwClass();
        ~XconnectPwClass();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Xconnect; //type: Native::Interface::Cem::Cem_::XconnectPwClass::Xconnect

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Cem::Cem_::XconnectPwClass::Xconnect> xconnect;
        
}; // Native::Interface::Cem::Cem_::XconnectPwClass


class Native::Interface::Cem::Cem_::XconnectPwClass::Xconnect : public Entity
{
    public:
        Xconnect();
        ~Xconnect();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf address; //type: string
        YLeaf vcid; //type: uint32
        YLeaf pw_class; //type: string
        class Udp; //type: Native::Interface::Cem::Cem_::XconnectPwClass::Xconnect::Udp

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Cem::Cem_::XconnectPwClass::Xconnect::Udp> udp;
        
}; // Native::Interface::Cem::Cem_::XconnectPwClass::Xconnect


class Native::Interface::Cem::Cem_::XconnectPwClass::Xconnect::Udp : public Entity
{
    public:
        Udp();
        ~Udp();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Port; //type: Native::Interface::Cem::Cem_::XconnectPwClass::Xconnect::Udp::Port

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Cem::Cem_::XconnectPwClass::Xconnect::Udp::Port> port;
        
}; // Native::Interface::Cem::Cem_::XconnectPwClass::Xconnect::Udp


class Native::Interface::Cem::Cem_::XconnectPwClass::Xconnect::Udp::Port : public Entity
{
    public:
        Port();
        ~Port();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf local; //type: uint32
        YLeaf remote; //type: uint32

}; // Native::Interface::Cem::Cem_::XconnectPwClass::Xconnect::Udp::Port


class Native::Interface::Cem::Pvc : public Entity
{
    public:
        Pvc();
        ~Pvc();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf local_vpi_vci; //type: string
        YLeaf remote_vpi_vci; //type: string
        YLeaf l2transport; //type: empty
        YLeaf ubr; //type: uint32
        class Xconnect; //type: Native::Interface::Cem::Pvc::Xconnect
        class XconnectPwClass; //type: Native::Interface::Cem::Pvc::XconnectPwClass

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Cem::Pvc::Xconnect> xconnect;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Cem::Pvc::XconnectPwClass> xconnect_pw_class;
        
}; // Native::Interface::Cem::Pvc


class Native::Interface::Cem::Pvc::Xconnect : public Entity
{
    public:
        Xconnect();
        ~Xconnect();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf address; //type: string
        YLeaf vcid; //type: uint32
        YLeaf encapsulation; //type: EncapsulationEnum
        YLeaf manual; //type: empty
        YLeaf pw_class; //type: string
        YLeaf sequencing; //type: SequencingEnum
        YLeaf mtu; //type: uint32
        class Backup; //type: Native::Interface::Cem::Pvc::Xconnect::Backup

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Cem::Pvc::Xconnect::Backup> backup;
                class EncapsulationEnum;
        class SequencingEnum;

}; // Native::Interface::Cem::Pvc::Xconnect


class Native::Interface::Cem::Pvc::Xconnect::Backup : public Entity
{
    public:
        Backup();
        ~Backup();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Peer; //type: Native::Interface::Cem::Pvc::Xconnect::Backup::Peer
        class Delay; //type: Native::Interface::Cem::Pvc::Xconnect::Backup::Delay

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Cem::Pvc::Xconnect::Backup::Delay> delay;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Cem::Pvc::Xconnect::Backup::Peer> peer;
        
}; // Native::Interface::Cem::Pvc::Xconnect::Backup


class Native::Interface::Cem::Pvc::Xconnect::Backup::Peer : public Entity
{
    public:
        Peer();
        ~Peer();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf peer_router_ip_addr; //type: string
        YLeaf vcid; //type: uint32
        YLeaf pw_class; //type: string
        YLeaf priority; //type: uint8

}; // Native::Interface::Cem::Pvc::Xconnect::Backup::Peer


class Native::Interface::Cem::Pvc::Xconnect::Backup::Delay : public Entity
{
    public:
        Delay();
        ~Delay();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf min; //type: uint32
        YLeaf max; //type: uint32

}; // Native::Interface::Cem::Pvc::Xconnect::Backup::Delay


class Native::Interface::Cem::Pvc::XconnectPwClass : public Entity
{
    public:
        XconnectPwClass();
        ~XconnectPwClass();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Xconnect; //type: Native::Interface::Cem::Pvc::XconnectPwClass::Xconnect

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Cem::Pvc::XconnectPwClass::Xconnect> xconnect;
        
}; // Native::Interface::Cem::Pvc::XconnectPwClass


class Native::Interface::Cem::Pvc::XconnectPwClass::Xconnect : public Entity
{
    public:
        Xconnect();
        ~Xconnect();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf address; //type: string
        YLeaf vcid; //type: uint32
        YLeaf pw_class; //type: string
        class Udp; //type: Native::Interface::Cem::Pvc::XconnectPwClass::Xconnect::Udp

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Cem::Pvc::XconnectPwClass::Xconnect::Udp> udp;
        
}; // Native::Interface::Cem::Pvc::XconnectPwClass::Xconnect


class Native::Interface::Cem::Pvc::XconnectPwClass::Xconnect::Udp : public Entity
{
    public:
        Udp();
        ~Udp();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Port; //type: Native::Interface::Cem::Pvc::XconnectPwClass::Xconnect::Udp::Port

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Cem::Pvc::XconnectPwClass::Xconnect::Udp::Port> port;
        
}; // Native::Interface::Cem::Pvc::XconnectPwClass::Xconnect::Udp


class Native::Interface::Cem::Pvc::XconnectPwClass::Xconnect::Udp::Port : public Entity
{
    public:
        Port();
        ~Port();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf local; //type: uint32
        YLeaf remote; //type: uint32

}; // Native::Interface::Cem::Pvc::XconnectPwClass::Xconnect::Udp::Port


class Native::Interface::CemAcr : public Entity
{
    public:
        CemAcr();
        ~CemAcr();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf name; //type: uint8
        YLeaf load_interval; //type: uint32
        class Ip; //type: Native::Interface::CemAcr::Ip
        class Atm; //type: Native::Interface::CemAcr::Atm
        class Cem; //type: Native::Interface::CemAcr::Cem
        class Pvc; //type: Native::Interface::CemAcr::Pvc

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::CemAcr::Atm> atm;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::CemAcr::Cem> > cem;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::CemAcr::Ip> ip;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::CemAcr::Pvc> > pvc;
        
}; // Native::Interface::CemAcr


class Native::Interface::CemAcr::Ip : public Entity
{
    public:
        Ip();
        ~Ip();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf address; //type: string

}; // Native::Interface::CemAcr::Ip


class Native::Interface::CemAcr::Atm : public Entity
{
    public:
        Atm();
        ~Atm();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf bandwidth; //type: BandwidthEnum
        YLeaf enable_ilmi_trap; //type: boolean
        class Pvp; //type: Native::Interface::CemAcr::Atm::Pvp

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::CemAcr::Atm::Pvp> > pvp;
                class BandwidthEnum;

}; // Native::Interface::CemAcr::Atm


class Native::Interface::CemAcr::Atm::Pvp : public Entity
{
    public:
        Pvp();
        ~Pvp();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf pvp_number; //type: uint16
        YLeaf l2transport; //type: empty
        class Xconnect; //type: Native::Interface::CemAcr::Atm::Pvp::Xconnect
        class XconnectPwClass; //type: Native::Interface::CemAcr::Atm::Pvp::XconnectPwClass

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::CemAcr::Atm::Pvp::Xconnect> xconnect;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::CemAcr::Atm::Pvp::XconnectPwClass> xconnect_pw_class;
        
}; // Native::Interface::CemAcr::Atm::Pvp


class Native::Interface::CemAcr::Atm::Pvp::Xconnect : public Entity
{
    public:
        Xconnect();
        ~Xconnect();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf address; //type: string
        YLeaf vcid; //type: uint32
        YLeaf encapsulation; //type: EncapsulationEnum
        YLeaf manual; //type: empty
        YLeaf pw_class; //type: string
        YLeaf sequencing; //type: SequencingEnum
        YLeaf mtu; //type: uint32
        class Backup; //type: Native::Interface::CemAcr::Atm::Pvp::Xconnect::Backup

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::CemAcr::Atm::Pvp::Xconnect::Backup> backup;
                class EncapsulationEnum;
        class SequencingEnum;

}; // Native::Interface::CemAcr::Atm::Pvp::Xconnect


class Native::Interface::CemAcr::Atm::Pvp::Xconnect::Backup : public Entity
{
    public:
        Backup();
        ~Backup();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Peer; //type: Native::Interface::CemAcr::Atm::Pvp::Xconnect::Backup::Peer
        class Delay; //type: Native::Interface::CemAcr::Atm::Pvp::Xconnect::Backup::Delay

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::CemAcr::Atm::Pvp::Xconnect::Backup::Delay> delay;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::CemAcr::Atm::Pvp::Xconnect::Backup::Peer> peer;
        
}; // Native::Interface::CemAcr::Atm::Pvp::Xconnect::Backup


class Native::Interface::CemAcr::Atm::Pvp::Xconnect::Backup::Peer : public Entity
{
    public:
        Peer();
        ~Peer();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf peer_router_ip_addr; //type: string
        YLeaf vcid; //type: uint32
        YLeaf pw_class; //type: string
        YLeaf priority; //type: uint8

}; // Native::Interface::CemAcr::Atm::Pvp::Xconnect::Backup::Peer


class Native::Interface::CemAcr::Atm::Pvp::Xconnect::Backup::Delay : public Entity
{
    public:
        Delay();
        ~Delay();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf min; //type: uint32
        YLeaf max; //type: uint32

}; // Native::Interface::CemAcr::Atm::Pvp::Xconnect::Backup::Delay


class Native::Interface::CemAcr::Atm::Pvp::XconnectPwClass : public Entity
{
    public:
        XconnectPwClass();
        ~XconnectPwClass();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Xconnect; //type: Native::Interface::CemAcr::Atm::Pvp::XconnectPwClass::Xconnect

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::CemAcr::Atm::Pvp::XconnectPwClass::Xconnect> xconnect;
        
}; // Native::Interface::CemAcr::Atm::Pvp::XconnectPwClass


class Native::Interface::CemAcr::Atm::Pvp::XconnectPwClass::Xconnect : public Entity
{
    public:
        Xconnect();
        ~Xconnect();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf address; //type: string
        YLeaf vcid; //type: uint32
        YLeaf pw_class; //type: string
        class Udp; //type: Native::Interface::CemAcr::Atm::Pvp::XconnectPwClass::Xconnect::Udp

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::CemAcr::Atm::Pvp::XconnectPwClass::Xconnect::Udp> udp;
        
}; // Native::Interface::CemAcr::Atm::Pvp::XconnectPwClass::Xconnect


class Native::Interface::CemAcr::Atm::Pvp::XconnectPwClass::Xconnect::Udp : public Entity
{
    public:
        Udp();
        ~Udp();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Port; //type: Native::Interface::CemAcr::Atm::Pvp::XconnectPwClass::Xconnect::Udp::Port

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::CemAcr::Atm::Pvp::XconnectPwClass::Xconnect::Udp::Port> port;
        
}; // Native::Interface::CemAcr::Atm::Pvp::XconnectPwClass::Xconnect::Udp


class Native::Interface::CemAcr::Atm::Pvp::XconnectPwClass::Xconnect::Udp::Port : public Entity
{
    public:
        Port();
        ~Port();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf local; //type: uint32
        YLeaf remote; //type: uint32

}; // Native::Interface::CemAcr::Atm::Pvp::XconnectPwClass::Xconnect::Udp::Port


class Native::Interface::CemAcr::Cem : public Entity
{
    public:
        Cem();
        ~Cem();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf number; //type: uint32
        class Xconnect; //type: Native::Interface::CemAcr::Cem::Xconnect
        class XconnectPwClass; //type: Native::Interface::CemAcr::Cem::XconnectPwClass

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::CemAcr::Cem::Xconnect> xconnect;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::CemAcr::Cem::XconnectPwClass> xconnect_pw_class;
        
}; // Native::Interface::CemAcr::Cem


class Native::Interface::CemAcr::Cem::Xconnect : public Entity
{
    public:
        Xconnect();
        ~Xconnect();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf address; //type: string
        YLeaf vcid; //type: uint32
        YLeaf encapsulation; //type: EncapsulationEnum
        YLeaf manual; //type: empty
        YLeaf pw_class; //type: string
        YLeaf sequencing; //type: SequencingEnum
        YLeaf mtu; //type: uint32
        class Backup; //type: Native::Interface::CemAcr::Cem::Xconnect::Backup

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::CemAcr::Cem::Xconnect::Backup> backup;
                class EncapsulationEnum;
        class SequencingEnum;

}; // Native::Interface::CemAcr::Cem::Xconnect


class Native::Interface::CemAcr::Cem::Xconnect::Backup : public Entity
{
    public:
        Backup();
        ~Backup();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Peer; //type: Native::Interface::CemAcr::Cem::Xconnect::Backup::Peer
        class Delay; //type: Native::Interface::CemAcr::Cem::Xconnect::Backup::Delay

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::CemAcr::Cem::Xconnect::Backup::Delay> delay;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::CemAcr::Cem::Xconnect::Backup::Peer> peer;
        
}; // Native::Interface::CemAcr::Cem::Xconnect::Backup


class Native::Interface::CemAcr::Cem::Xconnect::Backup::Peer : public Entity
{
    public:
        Peer();
        ~Peer();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf peer_router_ip_addr; //type: string
        YLeaf vcid; //type: uint32
        YLeaf pw_class; //type: string
        YLeaf priority; //type: uint8

}; // Native::Interface::CemAcr::Cem::Xconnect::Backup::Peer


class Native::Interface::CemAcr::Cem::Xconnect::Backup::Delay : public Entity
{
    public:
        Delay();
        ~Delay();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf min; //type: uint32
        YLeaf max; //type: uint32

}; // Native::Interface::CemAcr::Cem::Xconnect::Backup::Delay


class Native::Interface::CemAcr::Cem::XconnectPwClass : public Entity
{
    public:
        XconnectPwClass();
        ~XconnectPwClass();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Xconnect; //type: Native::Interface::CemAcr::Cem::XconnectPwClass::Xconnect

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::CemAcr::Cem::XconnectPwClass::Xconnect> xconnect;
        
}; // Native::Interface::CemAcr::Cem::XconnectPwClass


class Native::Interface::CemAcr::Cem::XconnectPwClass::Xconnect : public Entity
{
    public:
        Xconnect();
        ~Xconnect();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf address; //type: string
        YLeaf vcid; //type: uint32
        YLeaf pw_class; //type: string
        class Udp; //type: Native::Interface::CemAcr::Cem::XconnectPwClass::Xconnect::Udp

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::CemAcr::Cem::XconnectPwClass::Xconnect::Udp> udp;
        
}; // Native::Interface::CemAcr::Cem::XconnectPwClass::Xconnect


class Native::Interface::CemAcr::Cem::XconnectPwClass::Xconnect::Udp : public Entity
{
    public:
        Udp();
        ~Udp();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Port; //type: Native::Interface::CemAcr::Cem::XconnectPwClass::Xconnect::Udp::Port

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::CemAcr::Cem::XconnectPwClass::Xconnect::Udp::Port> port;
        
}; // Native::Interface::CemAcr::Cem::XconnectPwClass::Xconnect::Udp


class Native::Interface::CemAcr::Cem::XconnectPwClass::Xconnect::Udp::Port : public Entity
{
    public:
        Port();
        ~Port();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf local; //type: uint32
        YLeaf remote; //type: uint32

}; // Native::Interface::CemAcr::Cem::XconnectPwClass::Xconnect::Udp::Port


class Native::Interface::CemAcr::Pvc : public Entity
{
    public:
        Pvc();
        ~Pvc();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf local_vpi_vci; //type: string
        YLeaf remote_vpi_vci; //type: string
        YLeaf l2transport; //type: empty
        YLeaf ubr; //type: uint32
        class Xconnect; //type: Native::Interface::CemAcr::Pvc::Xconnect
        class XconnectPwClass; //type: Native::Interface::CemAcr::Pvc::XconnectPwClass

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::CemAcr::Pvc::Xconnect> xconnect;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::CemAcr::Pvc::XconnectPwClass> xconnect_pw_class;
        
}; // Native::Interface::CemAcr::Pvc


class Native::Interface::CemAcr::Pvc::Xconnect : public Entity
{
    public:
        Xconnect();
        ~Xconnect();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf address; //type: string
        YLeaf vcid; //type: uint32
        YLeaf encapsulation; //type: EncapsulationEnum
        YLeaf manual; //type: empty
        YLeaf pw_class; //type: string
        YLeaf sequencing; //type: SequencingEnum
        YLeaf mtu; //type: uint32
        class Backup; //type: Native::Interface::CemAcr::Pvc::Xconnect::Backup

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::CemAcr::Pvc::Xconnect::Backup> backup;
                class EncapsulationEnum;
        class SequencingEnum;

}; // Native::Interface::CemAcr::Pvc::Xconnect


class Native::Interface::CemAcr::Pvc::Xconnect::Backup : public Entity
{
    public:
        Backup();
        ~Backup();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Peer; //type: Native::Interface::CemAcr::Pvc::Xconnect::Backup::Peer
        class Delay; //type: Native::Interface::CemAcr::Pvc::Xconnect::Backup::Delay

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::CemAcr::Pvc::Xconnect::Backup::Delay> delay;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::CemAcr::Pvc::Xconnect::Backup::Peer> peer;
        
}; // Native::Interface::CemAcr::Pvc::Xconnect::Backup


class Native::Interface::CemAcr::Pvc::Xconnect::Backup::Peer : public Entity
{
    public:
        Peer();
        ~Peer();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf peer_router_ip_addr; //type: string
        YLeaf vcid; //type: uint32
        YLeaf pw_class; //type: string
        YLeaf priority; //type: uint8

}; // Native::Interface::CemAcr::Pvc::Xconnect::Backup::Peer


class Native::Interface::CemAcr::Pvc::Xconnect::Backup::Delay : public Entity
{
    public:
        Delay();
        ~Delay();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf min; //type: uint32
        YLeaf max; //type: uint32

}; // Native::Interface::CemAcr::Pvc::Xconnect::Backup::Delay


class Native::Interface::CemAcr::Pvc::XconnectPwClass : public Entity
{
    public:
        XconnectPwClass();
        ~XconnectPwClass();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Xconnect; //type: Native::Interface::CemAcr::Pvc::XconnectPwClass::Xconnect

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::CemAcr::Pvc::XconnectPwClass::Xconnect> xconnect;
        
}; // Native::Interface::CemAcr::Pvc::XconnectPwClass


class Native::Interface::CemAcr::Pvc::XconnectPwClass::Xconnect : public Entity
{
    public:
        Xconnect();
        ~Xconnect();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf address; //type: string
        YLeaf vcid; //type: uint32
        YLeaf pw_class; //type: string
        class Udp; //type: Native::Interface::CemAcr::Pvc::XconnectPwClass::Xconnect::Udp

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::CemAcr::Pvc::XconnectPwClass::Xconnect::Udp> udp;
        
}; // Native::Interface::CemAcr::Pvc::XconnectPwClass::Xconnect


class Native::Interface::CemAcr::Pvc::XconnectPwClass::Xconnect::Udp : public Entity
{
    public:
        Udp();
        ~Udp();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Port; //type: Native::Interface::CemAcr::Pvc::XconnectPwClass::Xconnect::Udp::Port

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::CemAcr::Pvc::XconnectPwClass::Xconnect::Udp::Port> port;
        
}; // Native::Interface::CemAcr::Pvc::XconnectPwClass::Xconnect::Udp


class Native::Interface::CemAcr::Pvc::XconnectPwClass::Xconnect::Udp::Port : public Entity
{
    public:
        Port();
        ~Port();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf local; //type: uint32
        YLeaf remote; //type: uint32

}; // Native::Interface::CemAcr::Pvc::XconnectPwClass::Xconnect::Udp::Port


class Native::Interface::EmbeddedServiceEngine : public Entity
{
    public:
        EmbeddedServiceEngine();
        ~EmbeddedServiceEngine();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf name; //type: string
        YLeaf description; //type: string
        YLeaf shutdown; //type: empty
        YLeaf keepalive; //type: boolean
        YLeaf if_state; //type: IfStateEnum
        YLeaf delay; //type: uint32
        YLeaf load_interval; //type: uint16
        YLeaf max_reserved_bandwidth; //type: uint8
        YLeaf mtu; //type: uint16
        YLeaf service_insertion; //type: ServiceInsertionEnum
        class SwitchportConf; //type: Native::Interface::EmbeddedServiceEngine::SwitchportConf
        class Switchport; //type: Native::Interface::EmbeddedServiceEngine::Switchport
        class Arp; //type: Native::Interface::EmbeddedServiceEngine::Arp
        class Backup; //type: Native::Interface::EmbeddedServiceEngine::Backup
        class Cemoudp; //type: Native::Interface::EmbeddedServiceEngine::Cemoudp
        class CwsTunnel; //type: Native::Interface::EmbeddedServiceEngine::CwsTunnel
        class L2ProtocolTunnel; //type: Native::Interface::EmbeddedServiceEngine::L2ProtocolTunnel
        class Encapsulation; //type: Native::Interface::EmbeddedServiceEngine::Encapsulation
        class FairQueueConf; //type: Native::Interface::EmbeddedServiceEngine::FairQueueConf
        class FairQueue; //type: Native::Interface::EmbeddedServiceEngine::FairQueue
        class Flowcontrol; //type: Native::Interface::EmbeddedServiceEngine::Flowcontrol
        class Isis; //type: Native::Interface::EmbeddedServiceEngine::Isis
        class KeepaliveSettings; //type: Native::Interface::EmbeddedServiceEngine::KeepaliveSettings
        class Bfd; //type: Native::Interface::EmbeddedServiceEngine::Bfd
        class Bandwidth; //type: Native::Interface::EmbeddedServiceEngine::Bandwidth
        class Dampening; //type: Native::Interface::EmbeddedServiceEngine::Dampening
        class Domain; //type: Native::Interface::EmbeddedServiceEngine::Domain
        class HoldQueue; //type: Native::Interface::EmbeddedServiceEngine::HoldQueue
        class Mpls; //type: Native::Interface::EmbeddedServiceEngine::Mpls
        class IpVrf; //type: Native::Interface::EmbeddedServiceEngine::IpVrf
        class Vrf; //type: Native::Interface::EmbeddedServiceEngine::Vrf
        class Ip; //type: Native::Interface::EmbeddedServiceEngine::Ip
        class Ipv6; //type: Native::Interface::EmbeddedServiceEngine::Ipv6
        class Logging; //type: Native::Interface::EmbeddedServiceEngine::Logging
        class Mdix; //type: Native::Interface::EmbeddedServiceEngine::Mdix
        class Mop; //type: Native::Interface::EmbeddedServiceEngine::Mop
        class Interface_Qos; //type: Native::Interface::EmbeddedServiceEngine::Interface_Qos
        class Standby; //type: Native::Interface::EmbeddedServiceEngine::Standby
        class AccessSession; //type: Native::Interface::EmbeddedServiceEngine::AccessSession
        class StormControl; //type: Native::Interface::EmbeddedServiceEngine::StormControl
        class Trust; //type: Native::Interface::EmbeddedServiceEngine::Trust
        class Utd; //type: Native::Interface::EmbeddedServiceEngine::Utd
        class PriorityQueue; //type: Native::Interface::EmbeddedServiceEngine::PriorityQueue
        class RcvQueue; //type: Native::Interface::EmbeddedServiceEngine::RcvQueue
        class Peer; //type: Native::Interface::EmbeddedServiceEngine::Peer
        class PmPath; //type: Native::Interface::EmbeddedServiceEngine::PmPath

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::EmbeddedServiceEngine::AccessSession> access_session;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::EmbeddedServiceEngine::Arp> arp;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::EmbeddedServiceEngine::Backup> backup;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::EmbeddedServiceEngine::Bandwidth> bandwidth;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::EmbeddedServiceEngine::Bfd> bfd;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::EmbeddedServiceEngine::Cemoudp> cemoudp;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::EmbeddedServiceEngine::CwsTunnel> cws_tunnel;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::EmbeddedServiceEngine::Dampening> dampening; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::EmbeddedServiceEngine::Domain> domain;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::EmbeddedServiceEngine::Encapsulation> encapsulation;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::EmbeddedServiceEngine::FairQueue> fair_queue;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::EmbeddedServiceEngine::FairQueueConf> fair_queue_conf;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::EmbeddedServiceEngine::Flowcontrol> flowcontrol;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::EmbeddedServiceEngine::HoldQueue> hold_queue;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::EmbeddedServiceEngine::Interface_Qos> interface_qos;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::EmbeddedServiceEngine::Ip> ip;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::EmbeddedServiceEngine::IpVrf> ip_vrf;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::EmbeddedServiceEngine::Ipv6> ipv6;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::EmbeddedServiceEngine::Isis> isis;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::EmbeddedServiceEngine::KeepaliveSettings> keepalive_settings;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::EmbeddedServiceEngine::L2ProtocolTunnel> l2protocol_tunnel; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::EmbeddedServiceEngine::Logging> logging;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::EmbeddedServiceEngine::Mdix> mdix;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::EmbeddedServiceEngine::Mop> mop;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::EmbeddedServiceEngine::Mpls> mpls;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::EmbeddedServiceEngine::Peer> peer;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::EmbeddedServiceEngine::PmPath> pm_path;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::EmbeddedServiceEngine::PriorityQueue> priority_queue;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::EmbeddedServiceEngine::RcvQueue> rcv_queue;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::EmbeddedServiceEngine::Standby> standby;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::EmbeddedServiceEngine::StormControl> storm_control;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::EmbeddedServiceEngine::Switchport> switchport;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::EmbeddedServiceEngine::SwitchportConf> switchport_conf;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::EmbeddedServiceEngine::Trust> trust;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::EmbeddedServiceEngine::Utd> utd;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::EmbeddedServiceEngine::Vrf> vrf;
                class IfStateEnum;
        class ServiceInsertionEnum;

}; // Native::Interface::EmbeddedServiceEngine


class Native::Interface::EmbeddedServiceEngine::SwitchportConf : public Entity
{
    public:
        SwitchportConf();
        ~SwitchportConf();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf switchport; //type: boolean

}; // Native::Interface::EmbeddedServiceEngine::SwitchportConf


class Native::Interface::EmbeddedServiceEngine::Switchport : public Entity
{
    public:
        Switchport();
        ~Switchport();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;


}; // Native::Interface::EmbeddedServiceEngine::Switchport


class Native::Interface::EmbeddedServiceEngine::Arp : public Entity
{
    public:
        Arp();
        ~Arp();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf timeout; //type: uint32

}; // Native::Interface::EmbeddedServiceEngine::Arp


class Native::Interface::EmbeddedServiceEngine::Backup : public Entity
{
    public:
        Backup();
        ~Backup();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Delay; //type: Native::Interface::EmbeddedServiceEngine::Backup::Delay
        class Interface_; //type: Native::Interface::EmbeddedServiceEngine::Backup::Interface_
        class Load; //type: Native::Interface::EmbeddedServiceEngine::Backup::Load

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::EmbeddedServiceEngine::Backup::Delay> delay;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::EmbeddedServiceEngine::Backup::Interface_> interface;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::EmbeddedServiceEngine::Backup::Load> load;
        
}; // Native::Interface::EmbeddedServiceEngine::Backup


class Native::Interface::EmbeddedServiceEngine::Backup::Delay : public Entity
{
    public:
        Delay();
        ~Delay();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf failure; //type: one of uint32, enumeration
        YLeaf secondary_disable; //type: one of uint32, enumeration
        class FailureEnum;
        class SecondaryDisableEnum;

}; // Native::Interface::EmbeddedServiceEngine::Backup::Delay


class Native::Interface::EmbeddedServiceEngine::Backup::Interface_ : public Entity
{
    public:
        Interface_();
        ~Interface_();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf appnav_compress; //type: uint16
        YLeaf appnav_uncompress; //type: uint16
        YLeaf atm; //type: string
        YLeaf atm_acr; //type: string
        YLeaf bdi; //type: string
        YLeaf cem; //type: string
        YLeaf cem_acr; //type: uint8
        YLeaf embedded_service_engine; //type: string
        YLeaf fastethernet; //type: string
        YLeaf gigabitethernet; //type: string
        YLeaf lisp; //type: uint16
        YLeaf loopback; //type: uint32
        YLeaf multilink; //type: uint16
        YLeaf nve; //type: uint16
        YLeaf overlay; //type: uint16
        YLeaf port_channel; //type: uint32
        YLeaf pseudowire; //type: uint32
        YLeaf sm; //type: string
        YLeaf cellular; //type: string
        YLeaf serial; //type: string
        YLeaf tengigabitethernet; //type: string
        YLeaf tunnel; //type: uint32
        YLeaf virtual_template; //type: uint16
        YLeaf vlan; //type: uint16
        YLeaf virtualportgroup; //type: uint16
        YLeaf vasileft; //type: uint16
        YLeaf vasiright; //type: uint16
        class AtmSubinterface; //type: Native::Interface::EmbeddedServiceEngine::Backup::Interface_::AtmSubinterface
        class AtmAcrsubinterface; //type: Native::Interface::EmbeddedServiceEngine::Backup::Interface_::AtmAcrsubinterface
        class LispSubinterface; //type: Native::Interface::EmbeddedServiceEngine::Backup::Interface_::LispSubinterface
        class PortChannelSubinterface; //type: Native::Interface::EmbeddedServiceEngine::Backup::Interface_::PortChannelSubinterface

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::EmbeddedServiceEngine::Backup::Interface_::AtmAcrsubinterface> atm_acrsubinterface;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::EmbeddedServiceEngine::Backup::Interface_::AtmSubinterface> atm_subinterface;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::EmbeddedServiceEngine::Backup::Interface_::LispSubinterface> lisp_subinterface;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::EmbeddedServiceEngine::Backup::Interface_::PortChannelSubinterface> port_channel_subinterface;
        
}; // Native::Interface::EmbeddedServiceEngine::Backup::Interface_


class Native::Interface::EmbeddedServiceEngine::Backup::Interface_::AtmSubinterface : public Entity
{
    public:
        AtmSubinterface();
        ~AtmSubinterface();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf atm; //type: string

}; // Native::Interface::EmbeddedServiceEngine::Backup::Interface_::AtmSubinterface


class Native::Interface::EmbeddedServiceEngine::Backup::Interface_::AtmAcrsubinterface : public Entity
{
    public:
        AtmAcrsubinterface();
        ~AtmAcrsubinterface();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf atm_acr; //type: string

}; // Native::Interface::EmbeddedServiceEngine::Backup::Interface_::AtmAcrsubinterface


class Native::Interface::EmbeddedServiceEngine::Backup::Interface_::LispSubinterface : public Entity
{
    public:
        LispSubinterface();
        ~LispSubinterface();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf lisp; //type: string

}; // Native::Interface::EmbeddedServiceEngine::Backup::Interface_::LispSubinterface


class Native::Interface::EmbeddedServiceEngine::Backup::Interface_::PortChannelSubinterface : public Entity
{
    public:
        PortChannelSubinterface();
        ~PortChannelSubinterface();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf port_channel; //type: string

}; // Native::Interface::EmbeddedServiceEngine::Backup::Interface_::PortChannelSubinterface


class Native::Interface::EmbeddedServiceEngine::Backup::Load : public Entity
{
    public:
        Load();
        ~Load();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf kickin; //type: one of uint32, enumeration
        YLeaf kickout; //type: one of uint32, enumeration
        class KickinEnum;
        class KickoutEnum;

}; // Native::Interface::EmbeddedServiceEngine::Backup::Load


class Native::Interface::EmbeddedServiceEngine::Cemoudp : public Entity
{
    public:
        Cemoudp();
        ~Cemoudp();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Reserve; //type: Native::Interface::EmbeddedServiceEngine::Cemoudp::Reserve

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::EmbeddedServiceEngine::Cemoudp::Reserve> reserve;
        
}; // Native::Interface::EmbeddedServiceEngine::Cemoudp


class Native::Interface::EmbeddedServiceEngine::Cemoudp::Reserve : public Entity
{
    public:
        Reserve();
        ~Reserve();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf acr; //type: uint8

}; // Native::Interface::EmbeddedServiceEngine::Cemoudp::Reserve


class Native::Interface::EmbeddedServiceEngine::CwsTunnel : public Entity
{
    public:
        CwsTunnel();
        ~CwsTunnel();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf in; //type: empty
        class Out; //type: Native::Interface::EmbeddedServiceEngine::CwsTunnel::Out

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::EmbeddedServiceEngine::CwsTunnel::Out> out;
        
}; // Native::Interface::EmbeddedServiceEngine::CwsTunnel


class Native::Interface::EmbeddedServiceEngine::CwsTunnel::Out : public Entity
{
    public:
        Out();
        ~Out();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf tunnel_number; //type: uint16

}; // Native::Interface::EmbeddedServiceEngine::CwsTunnel::Out


class Native::Interface::EmbeddedServiceEngine::L2ProtocolTunnel : public Entity
{
    public:
        L2ProtocolTunnel();
        ~L2ProtocolTunnel();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf cdp; //type: empty
        YLeaf stp; //type: empty
        YLeaf vtp; //type: empty
        class DropThreshold; //type: Native::Interface::EmbeddedServiceEngine::L2ProtocolTunnel::DropThreshold
        class ShutdownThreshold; //type: Native::Interface::EmbeddedServiceEngine::L2ProtocolTunnel::ShutdownThreshold

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::EmbeddedServiceEngine::L2ProtocolTunnel::DropThreshold> drop_threshold;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::EmbeddedServiceEngine::L2ProtocolTunnel::ShutdownThreshold> shutdown_threshold;
        
}; // Native::Interface::EmbeddedServiceEngine::L2ProtocolTunnel


class Native::Interface::EmbeddedServiceEngine::L2ProtocolTunnel::DropThreshold : public Entity
{
    public:
        DropThreshold();
        ~DropThreshold();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf packet_rate; //type: uint16
        YLeaf cdp; //type: uint16
        YLeaf stp; //type: uint16
        YLeaf vtp; //type: uint16

}; // Native::Interface::EmbeddedServiceEngine::L2ProtocolTunnel::DropThreshold


class Native::Interface::EmbeddedServiceEngine::L2ProtocolTunnel::ShutdownThreshold : public Entity
{
    public:
        ShutdownThreshold();
        ~ShutdownThreshold();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf packet_rate; //type: uint16
        YLeaf cdp; //type: uint16
        YLeaf stp; //type: uint16
        YLeaf vtp; //type: uint16

}; // Native::Interface::EmbeddedServiceEngine::L2ProtocolTunnel::ShutdownThreshold


class Native::Interface::EmbeddedServiceEngine::Encapsulation : public Entity
{
    public:
        Encapsulation();
        ~Encapsulation();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Dot1Q; //type: Native::Interface::EmbeddedServiceEngine::Encapsulation::Dot1Q
        class Isl; //type: Native::Interface::EmbeddedServiceEngine::Encapsulation::Isl
        class Ppp; //type: Native::Interface::EmbeddedServiceEngine::Encapsulation::Ppp
        class Slip; //type: Native::Interface::EmbeddedServiceEngine::Encapsulation::Slip
        class FrameRelay; //type: Native::Interface::EmbeddedServiceEngine::Encapsulation::FrameRelay

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::EmbeddedServiceEngine::Encapsulation::Dot1Q> dot1q;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::EmbeddedServiceEngine::Encapsulation::FrameRelay> frame_relay; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::EmbeddedServiceEngine::Encapsulation::Isl> isl;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::EmbeddedServiceEngine::Encapsulation::Ppp> ppp; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::EmbeddedServiceEngine::Encapsulation::Slip> slip; // presence node
        
}; // Native::Interface::EmbeddedServiceEngine::Encapsulation


class Native::Interface::EmbeddedServiceEngine::Encapsulation::Dot1Q : public Entity
{
    public:
        Dot1Q();
        ~Dot1Q();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf vlan_id; //type: uint16
        YLeaf native; //type: empty

}; // Native::Interface::EmbeddedServiceEngine::Encapsulation::Dot1Q


class Native::Interface::EmbeddedServiceEngine::Encapsulation::Isl : public Entity
{
    public:
        Isl();
        ~Isl();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf vlan_id; //type: uint16

}; // Native::Interface::EmbeddedServiceEngine::Encapsulation::Isl


class Native::Interface::EmbeddedServiceEngine::Encapsulation::Ppp : public Entity
{
    public:
        Ppp();
        ~Ppp();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;


}; // Native::Interface::EmbeddedServiceEngine::Encapsulation::Ppp


class Native::Interface::EmbeddedServiceEngine::Encapsulation::Slip : public Entity
{
    public:
        Slip();
        ~Slip();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;


}; // Native::Interface::EmbeddedServiceEngine::Encapsulation::Slip


class Native::Interface::EmbeddedServiceEngine::Encapsulation::FrameRelay : public Entity
{
    public:
        FrameRelay();
        ~FrameRelay();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ietf; //type: empty

}; // Native::Interface::EmbeddedServiceEngine::Encapsulation::FrameRelay


class Native::Interface::EmbeddedServiceEngine::FairQueueConf : public Entity
{
    public:
        FairQueueConf();
        ~FairQueueConf();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf fair_queue; //type: boolean

}; // Native::Interface::EmbeddedServiceEngine::FairQueueConf


class Native::Interface::EmbeddedServiceEngine::FairQueue : public Entity
{
    public:
        FairQueue();
        ~FairQueue();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf incomplete; //type: empty

}; // Native::Interface::EmbeddedServiceEngine::FairQueue


class Native::Interface::EmbeddedServiceEngine::Flowcontrol : public Entity
{
    public:
        Flowcontrol();
        ~Flowcontrol();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf receive; //type: ReceiveEnum
        YLeaf send; //type: SendEnum
        class ReceiveEnum;
        class SendEnum;

}; // Native::Interface::EmbeddedServiceEngine::Flowcontrol


class Native::Interface::EmbeddedServiceEngine::Isis : public Entity
{
    public:
        Isis();
        ~Isis();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;


}; // Native::Interface::EmbeddedServiceEngine::Isis


class Native::Interface::EmbeddedServiceEngine::KeepaliveSettings : public Entity
{
    public:
        KeepaliveSettings();
        ~KeepaliveSettings();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Keepalive; //type: Native::Interface::EmbeddedServiceEngine::KeepaliveSettings::Keepalive

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::EmbeddedServiceEngine::KeepaliveSettings::Keepalive> keepalive; // presence node
        
}; // Native::Interface::EmbeddedServiceEngine::KeepaliveSettings


class Native::Interface::EmbeddedServiceEngine::KeepaliveSettings::Keepalive : public Entity
{
    public:
        Keepalive();
        ~Keepalive();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf period; //type: uint16
        YLeaf retries; //type: uint8

}; // Native::Interface::EmbeddedServiceEngine::KeepaliveSettings::Keepalive


class Native::Interface::EmbeddedServiceEngine::Bfd : public Entity
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


}; // Native::Interface::EmbeddedServiceEngine::Bfd


class Native::Interface::EmbeddedServiceEngine::Bandwidth : public Entity
{
    public:
        Bandwidth();
        ~Bandwidth();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf qos_reference; //type: uint32
        YLeaf kilobits; //type: uint32
        class Receive; //type: Native::Interface::EmbeddedServiceEngine::Bandwidth::Receive
        class Inherit; //type: Native::Interface::EmbeddedServiceEngine::Bandwidth::Inherit

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::EmbeddedServiceEngine::Bandwidth::Inherit> inherit; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::EmbeddedServiceEngine::Bandwidth::Receive> receive;
        
}; // Native::Interface::EmbeddedServiceEngine::Bandwidth


class Native::Interface::EmbeddedServiceEngine::Bandwidth::Receive : public Entity
{
    public:
        Receive();
        ~Receive();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf inherit; //type: empty
        YLeaf kilobits; //type: uint32

}; // Native::Interface::EmbeddedServiceEngine::Bandwidth::Receive


class Native::Interface::EmbeddedServiceEngine::Bandwidth::Inherit : public Entity
{
    public:
        Inherit();
        ~Inherit();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf kilobits; //type: uint32

}; // Native::Interface::EmbeddedServiceEngine::Bandwidth::Inherit


class Native::Interface::EmbeddedServiceEngine::Dampening : public Entity
{
    public:
        Dampening();
        ~Dampening();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf dampening_time; //type: uint16
        YLeaf start_reusing_time; //type: uint16
        YLeaf start_supressing_time; //type: uint16
        YLeaf maximum_supressing_time; //type: uint16
        class Restart; //type: Native::Interface::EmbeddedServiceEngine::Dampening::Restart

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::EmbeddedServiceEngine::Dampening::Restart> restart;
        
}; // Native::Interface::EmbeddedServiceEngine::Dampening


class Native::Interface::EmbeddedServiceEngine::Dampening::Restart : public Entity
{
    public:
        Restart();
        ~Restart();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf restart; //type: empty
        YLeaf restart_penalty; //type: uint16

}; // Native::Interface::EmbeddedServiceEngine::Dampening::Restart


class Native::Interface::EmbeddedServiceEngine::Domain : public Entity
{
    public:
        Domain();
        ~Domain();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf name; //type: string
        YLeaf path; //type: string
        YLeaf internet_bound; //type: empty
        YLeaf path_id; //type: uint8
        YLeaf path_last_resort; //type: empty
        YLeaf zero_sla; //type: empty

}; // Native::Interface::EmbeddedServiceEngine::Domain


class Native::Interface::EmbeddedServiceEngine::HoldQueue : public Entity
{
    public:
        HoldQueue();
        ~HoldQueue();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf queue_length; //type: uint16
        YLeaf direction; //type: DirectionEnum
        class DirectionEnum;

}; // Native::Interface::EmbeddedServiceEngine::HoldQueue


class Native::Interface::EmbeddedServiceEngine::Mpls : public Entity
{
    public:
        Mpls();
        ~Mpls();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;


}; // Native::Interface::EmbeddedServiceEngine::Mpls


class Native::Interface::EmbeddedServiceEngine::IpVrf : public Entity
{
    public:
        IpVrf();
        ~IpVrf();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Ip; //type: Native::Interface::EmbeddedServiceEngine::IpVrf::Ip

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::EmbeddedServiceEngine::IpVrf::Ip> ip;
        
}; // Native::Interface::EmbeddedServiceEngine::IpVrf


class Native::Interface::EmbeddedServiceEngine::IpVrf::Ip : public Entity
{
    public:
        Ip();
        ~Ip();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Vrf; //type: Native::Interface::EmbeddedServiceEngine::IpVrf::Ip::Vrf

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::EmbeddedServiceEngine::IpVrf::Ip::Vrf> vrf;
        
}; // Native::Interface::EmbeddedServiceEngine::IpVrf::Ip


class Native::Interface::EmbeddedServiceEngine::IpVrf::Ip::Vrf : public Entity
{
    public:
        Vrf();
        ~Vrf();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf forwarding; //type: string

}; // Native::Interface::EmbeddedServiceEngine::IpVrf::Ip::Vrf


class Native::Interface::EmbeddedServiceEngine::Vrf : public Entity
{
    public:
        Vrf();
        ~Vrf();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf forwarding; //type: string

}; // Native::Interface::EmbeddedServiceEngine::Vrf


class Native::Interface::EmbeddedServiceEngine::Ip : public Entity
{
    public:
        Ip();
        ~Ip();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf admission; //type: string
        YLeaf unnumbered; //type: string
        YLeaf directed_broadcast; //type: one of uint16, string
        YLeaf local_proxy_arp; //type: empty
        YLeaf proxy_arp; //type: boolean
        YLeaf redirects; //type: boolean
        YLeaf mtu; //type: uint16
        YLeaf mroute_cache; //type: boolean
        class AccessGroup; //type: Native::Interface::EmbeddedServiceEngine::Ip::AccessGroup
        class Arp; //type: Native::Interface::EmbeddedServiceEngine::Ip::Arp
        class Vrf; //type: Native::Interface::EmbeddedServiceEngine::Ip::Vrf
        class NoAddress; //type: Native::Interface::EmbeddedServiceEngine::Ip::NoAddress
        class Address; //type: Native::Interface::EmbeddedServiceEngine::Ip::Address
        class HelloInterval; //type: Native::Interface::EmbeddedServiceEngine::Ip::HelloInterval
        class Authentication; //type: Native::Interface::EmbeddedServiceEngine::Ip::Authentication
        class HoldTime; //type: Native::Interface::EmbeddedServiceEngine::Ip::HoldTime
        class HelperAddress; //type: Native::Interface::EmbeddedServiceEngine::Ip::HelperAddress
        class Pim; //type: Native::Interface::EmbeddedServiceEngine::Ip::Pim
        class Policy; //type: Native::Interface::EmbeddedServiceEngine::Ip::Policy
        class RouteCacheConf; //type: Native::Interface::EmbeddedServiceEngine::Ip::RouteCacheConf
        class RouteCache; //type: Native::Interface::EmbeddedServiceEngine::Ip::RouteCache
        class Router; //type: Native::Interface::EmbeddedServiceEngine::Ip::Router
        class Tcp; //type: Native::Interface::EmbeddedServiceEngine::Ip::Tcp
        class VirtualReassembly; //type: Native::Interface::EmbeddedServiceEngine::Ip::VirtualReassembly
        class Dhcp; //type: Native::Interface::EmbeddedServiceEngine::Ip::Dhcp
        class SummaryAddress; //type: Native::Interface::EmbeddedServiceEngine::Ip::SummaryAddress
        class Verify; //type: Native::Interface::EmbeddedServiceEngine::Ip::Verify

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::EmbeddedServiceEngine::Ip::AccessGroup> access_group;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::EmbeddedServiceEngine::Ip::Address> address;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::EmbeddedServiceEngine::Ip::Arp> arp;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::EmbeddedServiceEngine::Ip::Authentication> authentication;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::EmbeddedServiceEngine::Ip::Dhcp> dhcp;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::EmbeddedServiceEngine::Ip::HelloInterval> hello_interval;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::EmbeddedServiceEngine::Ip::HelperAddress> > helper_address;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::EmbeddedServiceEngine::Ip::HoldTime> hold_time;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::EmbeddedServiceEngine::Ip::NoAddress> no_address;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::EmbeddedServiceEngine::Ip::Pim> pim;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::EmbeddedServiceEngine::Ip::Policy> policy;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::EmbeddedServiceEngine::Ip::RouteCache> route_cache; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::EmbeddedServiceEngine::Ip::RouteCacheConf> route_cache_conf;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::EmbeddedServiceEngine::Ip::Router> router;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::EmbeddedServiceEngine::Ip::SummaryAddress> summary_address;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::EmbeddedServiceEngine::Ip::Tcp> tcp;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::EmbeddedServiceEngine::Ip::Verify> verify;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::EmbeddedServiceEngine::Ip::VirtualReassembly> virtual_reassembly;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::EmbeddedServiceEngine::Ip::Vrf> vrf;
        
}; // Native::Interface::EmbeddedServiceEngine::Ip


class Native::Interface::EmbeddedServiceEngine::Ip::AccessGroup : public Entity
{
    public:
        AccessGroup();
        ~AccessGroup();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class In; //type: Native::Interface::EmbeddedServiceEngine::Ip::AccessGroup::In
        class Out; //type: Native::Interface::EmbeddedServiceEngine::Ip::AccessGroup::Out

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::EmbeddedServiceEngine::Ip::AccessGroup::In> in;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::EmbeddedServiceEngine::Ip::AccessGroup::Out> out;
        
}; // Native::Interface::EmbeddedServiceEngine::Ip::AccessGroup


class Native::Interface::EmbeddedServiceEngine::Ip::AccessGroup::In : public Entity
{
    public:
        In();
        ~In();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class CommonAcl; //type: Native::Interface::EmbeddedServiceEngine::Ip::AccessGroup::In::CommonAcl
        class Acl; //type: Native::Interface::EmbeddedServiceEngine::Ip::AccessGroup::In::Acl

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::EmbeddedServiceEngine::Ip::AccessGroup::In::Acl> acl;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::EmbeddedServiceEngine::Ip::AccessGroup::In::CommonAcl> common_acl;
        
}; // Native::Interface::EmbeddedServiceEngine::Ip::AccessGroup::In


class Native::Interface::EmbeddedServiceEngine::Ip::AccessGroup::In::CommonAcl : public Entity
{
    public:
        CommonAcl();
        ~CommonAcl();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf common; //type: one of uint16, string
        YLeaf in; //type: empty

}; // Native::Interface::EmbeddedServiceEngine::Ip::AccessGroup::In::CommonAcl


class Native::Interface::EmbeddedServiceEngine::Ip::AccessGroup::In::Acl : public Entity
{
    public:
        Acl();
        ~Acl();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf acl_name; //type: one of uint16, string
        YLeaf in; //type: empty

}; // Native::Interface::EmbeddedServiceEngine::Ip::AccessGroup::In::Acl


class Native::Interface::EmbeddedServiceEngine::Ip::AccessGroup::Out : public Entity
{
    public:
        Out();
        ~Out();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class CommonAcl; //type: Native::Interface::EmbeddedServiceEngine::Ip::AccessGroup::Out::CommonAcl
        class Acl; //type: Native::Interface::EmbeddedServiceEngine::Ip::AccessGroup::Out::Acl

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::EmbeddedServiceEngine::Ip::AccessGroup::Out::Acl> acl;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::EmbeddedServiceEngine::Ip::AccessGroup::Out::CommonAcl> common_acl;
        
}; // Native::Interface::EmbeddedServiceEngine::Ip::AccessGroup::Out


class Native::Interface::EmbeddedServiceEngine::Ip::AccessGroup::Out::CommonAcl : public Entity
{
    public:
        CommonAcl();
        ~CommonAcl();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf common; //type: one of uint16, string
        YLeaf out; //type: empty

}; // Native::Interface::EmbeddedServiceEngine::Ip::AccessGroup::Out::CommonAcl


class Native::Interface::EmbeddedServiceEngine::Ip::AccessGroup::Out::Acl : public Entity
{
    public:
        Acl();
        ~Acl();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf acl_name; //type: one of uint16, string
        YLeaf out; //type: empty

}; // Native::Interface::EmbeddedServiceEngine::Ip::AccessGroup::Out::Acl


class Native::Interface::EmbeddedServiceEngine::Ip::Arp : public Entity
{
    public:
        Arp();
        ~Arp();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Inspection; //type: Native::Interface::EmbeddedServiceEngine::Ip::Arp::Inspection

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::EmbeddedServiceEngine::Ip::Arp::Inspection> inspection;
        
}; // Native::Interface::EmbeddedServiceEngine::Ip::Arp


class Native::Interface::EmbeddedServiceEngine::Ip::Arp::Inspection : public Entity
{
    public:
        Inspection();
        ~Inspection();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf trust; //type: empty
        class Limit; //type: Native::Interface::EmbeddedServiceEngine::Ip::Arp::Inspection::Limit

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::EmbeddedServiceEngine::Ip::Arp::Inspection::Limit> limit;
        
}; // Native::Interface::EmbeddedServiceEngine::Ip::Arp::Inspection


class Native::Interface::EmbeddedServiceEngine::Ip::Arp::Inspection::Limit : public Entity
{
    public:
        Limit();
        ~Limit();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf none; //type: empty
        YLeaf rate; //type: uint32

}; // Native::Interface::EmbeddedServiceEngine::Ip::Arp::Inspection::Limit


class Native::Interface::EmbeddedServiceEngine::Ip::Vrf : public Entity
{
    public:
        Vrf();
        ~Vrf();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf receive; //type: string
        YLeaf sitemap; //type: string
        class Forwarding; //type: Native::Interface::EmbeddedServiceEngine::Ip::Vrf::Forwarding

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::EmbeddedServiceEngine::Ip::Vrf::Forwarding> forwarding;
        
}; // Native::Interface::EmbeddedServiceEngine::Ip::Vrf


class Native::Interface::EmbeddedServiceEngine::Ip::Vrf::Forwarding : public Entity
{
    public:
        Forwarding();
        ~Forwarding();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf liin_vrf; //type: empty
        YLeaf mgmtvrf; //type: empty
        YLeaf word; //type: string

}; // Native::Interface::EmbeddedServiceEngine::Ip::Vrf::Forwarding


class Native::Interface::EmbeddedServiceEngine::Ip::NoAddress : public Entity
{
    public:
        NoAddress();
        ~NoAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf address; //type: boolean

}; // Native::Interface::EmbeddedServiceEngine::Ip::NoAddress


class Native::Interface::EmbeddedServiceEngine::Ip::Address : public Entity
{
    public:
        Address();
        ~Address();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf negotiated; //type: empty
        class Primary; //type: Native::Interface::EmbeddedServiceEngine::Ip::Address::Primary
        class Secondary; //type: Native::Interface::EmbeddedServiceEngine::Ip::Address::Secondary
        class Dhcp; //type: Native::Interface::EmbeddedServiceEngine::Ip::Address::Dhcp

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::EmbeddedServiceEngine::Ip::Address::Dhcp> dhcp; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::EmbeddedServiceEngine::Ip::Address::Primary> primary;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::EmbeddedServiceEngine::Ip::Address::Secondary> > secondary;
        
}; // Native::Interface::EmbeddedServiceEngine::Ip::Address


class Native::Interface::EmbeddedServiceEngine::Ip::Address::Primary : public Entity
{
    public:
        Primary();
        ~Primary();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf address; //type: string
        YLeaf mask; //type: string

}; // Native::Interface::EmbeddedServiceEngine::Ip::Address::Primary


class Native::Interface::EmbeddedServiceEngine::Ip::Address::Secondary : public Entity
{
    public:
        Secondary();
        ~Secondary();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf address; //type: string
        YLeaf mask; //type: string
        YLeaf secondary; //type: empty

}; // Native::Interface::EmbeddedServiceEngine::Ip::Address::Secondary


class Native::Interface::EmbeddedServiceEngine::Ip::Address::Dhcp : public Entity
{
    public:
        Dhcp();
        ~Dhcp();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf hostname; //type: string
        class ClientId; //type: Native::Interface::EmbeddedServiceEngine::Ip::Address::Dhcp::ClientId

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::EmbeddedServiceEngine::Ip::Address::Dhcp::ClientId> client_id;
        
}; // Native::Interface::EmbeddedServiceEngine::Ip::Address::Dhcp


class Native::Interface::EmbeddedServiceEngine::Ip::Address::Dhcp::ClientId : public Entity
{
    public:
        ClientId();
        ~ClientId();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf fastethernet; //type: string
        YLeaf gigabitethernet; //type: string
        YLeaf port_channel; //type: uint32
        YLeaf tengigabitethernet; //type: string
        YLeaf fortygigabitethernet; //type: string
        YLeaf vlan; //type: uint16

}; // Native::Interface::EmbeddedServiceEngine::Ip::Address::Dhcp::ClientId


class Native::Interface::EmbeddedServiceEngine::Ip::HelloInterval : public Entity
{
    public:
        HelloInterval();
        ~HelloInterval();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf eigrp; //type: uint16
        YLeaf seconds; //type: uint16

}; // Native::Interface::EmbeddedServiceEngine::Ip::HelloInterval


class Native::Interface::EmbeddedServiceEngine::Ip::Authentication : public Entity
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

        class KeyChain; //type: Native::Interface::EmbeddedServiceEngine::Ip::Authentication::KeyChain
        class Mode; //type: Native::Interface::EmbeddedServiceEngine::Ip::Authentication::Mode

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::EmbeddedServiceEngine::Ip::Authentication::KeyChain> key_chain;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::EmbeddedServiceEngine::Ip::Authentication::Mode> mode;
        
}; // Native::Interface::EmbeddedServiceEngine::Ip::Authentication


class Native::Interface::EmbeddedServiceEngine::Ip::Authentication::KeyChain : public Entity
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

        YLeaf eigrp; //type: uint16
        YLeaf name; //type: string

}; // Native::Interface::EmbeddedServiceEngine::Ip::Authentication::KeyChain


class Native::Interface::EmbeddedServiceEngine::Ip::Authentication::Mode : public Entity
{
    public:
        Mode();
        ~Mode();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf eigrp; //type: uint16
        YLeaf md5; //type: empty

}; // Native::Interface::EmbeddedServiceEngine::Ip::Authentication::Mode


class Native::Interface::EmbeddedServiceEngine::Ip::HoldTime : public Entity
{
    public:
        HoldTime();
        ~HoldTime();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf eigrp; //type: uint16
        YLeaf seconds; //type: uint16

}; // Native::Interface::EmbeddedServiceEngine::Ip::HoldTime


class Native::Interface::EmbeddedServiceEngine::Ip::HelperAddress : public Entity
{
    public:
        HelperAddress();
        ~HelperAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf address; //type: string
        YLeaf global; //type: empty
        YLeaf vrf; //type: string

}; // Native::Interface::EmbeddedServiceEngine::Ip::HelperAddress


class Native::Interface::EmbeddedServiceEngine::Ip::Pim : public Entity
{
    public:
        Pim();
        ~Pim();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;


}; // Native::Interface::EmbeddedServiceEngine::Ip::Pim


class Native::Interface::EmbeddedServiceEngine::Ip::Policy : public Entity
{
    public:
        Policy();
        ~Policy();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf route_map; //type: string

}; // Native::Interface::EmbeddedServiceEngine::Ip::Policy


class Native::Interface::EmbeddedServiceEngine::Ip::RouteCacheConf : public Entity
{
    public:
        RouteCacheConf();
        ~RouteCacheConf();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf route_cache; //type: boolean

}; // Native::Interface::EmbeddedServiceEngine::Ip::RouteCacheConf


class Native::Interface::EmbeddedServiceEngine::Ip::RouteCache : public Entity
{
    public:
        RouteCache();
        ~RouteCache();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf cef; //type: boolean
        YLeaf flow; //type: boolean
        YLeaf policy; //type: boolean
        YLeaf same_interface; //type: boolean

}; // Native::Interface::EmbeddedServiceEngine::Ip::RouteCache


class Native::Interface::EmbeddedServiceEngine::Ip::Router : public Entity
{
    public:
        Router();
        ~Router();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Isis; //type: Native::Interface::EmbeddedServiceEngine::Ip::Router::Isis

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::EmbeddedServiceEngine::Ip::Router::Isis> isis; // presence node
        
}; // Native::Interface::EmbeddedServiceEngine::Ip::Router


class Native::Interface::EmbeddedServiceEngine::Ip::Router::Isis : public Entity
{
    public:
        Isis();
        ~Isis();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf tag; //type: string

}; // Native::Interface::EmbeddedServiceEngine::Ip::Router::Isis


class Native::Interface::EmbeddedServiceEngine::Ip::Tcp : public Entity
{
    public:
        Tcp();
        ~Tcp();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf adjust_mss; //type: uint16

}; // Native::Interface::EmbeddedServiceEngine::Ip::Tcp


class Native::Interface::EmbeddedServiceEngine::Ip::VirtualReassembly : public Entity
{
    public:
        VirtualReassembly();
        ~VirtualReassembly();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf max_reassemblies; //type: uint32
        YLeaf max_fragments; //type: uint32
        YLeaf timeout; //type: uint32
        YLeaf drop_fragments; //type: empty
        YLeaf in; //type: empty

}; // Native::Interface::EmbeddedServiceEngine::Ip::VirtualReassembly


class Native::Interface::EmbeddedServiceEngine::Ip::Dhcp : public Entity
{
    public:
        Dhcp();
        ~Dhcp();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;


}; // Native::Interface::EmbeddedServiceEngine::Ip::Dhcp


class Native::Interface::EmbeddedServiceEngine::Ip::SummaryAddress : public Entity
{
    public:
        SummaryAddress();
        ~SummaryAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Eigrp; //type: Native::Interface::EmbeddedServiceEngine::Ip::SummaryAddress::Eigrp

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::EmbeddedServiceEngine::Ip::SummaryAddress::Eigrp> > eigrp;
        
}; // Native::Interface::EmbeddedServiceEngine::Ip::SummaryAddress


class Native::Interface::EmbeddedServiceEngine::Ip::SummaryAddress::Eigrp : public Entity
{
    public:
        Eigrp();
        ~Eigrp();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf id; //type: string
        YLeaf ip; //type: string
        YLeaf mask; //type: string
        YLeaf metric; //type: uint32

}; // Native::Interface::EmbeddedServiceEngine::Ip::SummaryAddress::Eigrp


class Native::Interface::EmbeddedServiceEngine::Ip::Verify : public Entity
{
    public:
        Verify();
        ~Verify();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Source; //type: Native::Interface::EmbeddedServiceEngine::Ip::Verify::Source
        class Unicast; //type: Native::Interface::EmbeddedServiceEngine::Ip::Verify::Unicast

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::EmbeddedServiceEngine::Ip::Verify::Source> source; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::EmbeddedServiceEngine::Ip::Verify::Unicast> unicast;
        
}; // Native::Interface::EmbeddedServiceEngine::Ip::Verify


class Native::Interface::EmbeddedServiceEngine::Ip::Verify::Source : public Entity
{
    public:
        Source();
        ~Source();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Vlan; //type: Native::Interface::EmbeddedServiceEngine::Ip::Verify::Source::Vlan

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::EmbeddedServiceEngine::Ip::Verify::Source::Vlan> vlan;
        
}; // Native::Interface::EmbeddedServiceEngine::Ip::Verify::Source


class Native::Interface::EmbeddedServiceEngine::Ip::Verify::Source::Vlan : public Entity
{
    public:
        Vlan();
        ~Vlan();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class DhcpSnooping; //type: Native::Interface::EmbeddedServiceEngine::Ip::Verify::Source::Vlan::DhcpSnooping

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::EmbeddedServiceEngine::Ip::Verify::Source::Vlan::DhcpSnooping> dhcp_snooping; // presence node
        
}; // Native::Interface::EmbeddedServiceEngine::Ip::Verify::Source::Vlan


class Native::Interface::EmbeddedServiceEngine::Ip::Verify::Source::Vlan::DhcpSnooping : public Entity
{
    public:
        DhcpSnooping();
        ~DhcpSnooping();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf port_security; //type: empty

}; // Native::Interface::EmbeddedServiceEngine::Ip::Verify::Source::Vlan::DhcpSnooping


class Native::Interface::EmbeddedServiceEngine::Ip::Verify::Unicast : public Entity
{
    public:
        Unicast();
        ~Unicast();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class ReversePath; //type: Native::Interface::EmbeddedServiceEngine::Ip::Verify::Unicast::ReversePath
        class Source; //type: Native::Interface::EmbeddedServiceEngine::Ip::Verify::Unicast::Source

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::EmbeddedServiceEngine::Ip::Verify::Unicast::ReversePath> reverse_path; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::EmbeddedServiceEngine::Ip::Verify::Unicast::Source> source;
        
}; // Native::Interface::EmbeddedServiceEngine::Ip::Verify::Unicast


class Native::Interface::EmbeddedServiceEngine::Ip::Verify::Unicast::ReversePath : public Entity
{
    public:
        ReversePath();
        ~ReversePath();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;


}; // Native::Interface::EmbeddedServiceEngine::Ip::Verify::Unicast::ReversePath


class Native::Interface::EmbeddedServiceEngine::Ip::Verify::Unicast::Source : public Entity
{
    public:
        Source();
        ~Source();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf reachable_via; //type: ReachableViaEnum
        YLeaf allow_self_ping; //type: empty
        YLeaf allow_default; //type: empty
        class ReachableViaEnum;

}; // Native::Interface::EmbeddedServiceEngine::Ip::Verify::Unicast::Source


class Native::Interface::EmbeddedServiceEngine::Ipv6 : public Entity
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

        YLeaf enable; //type: empty
        YLeaf mtu; //type: uint16
        YLeaf redirects; //type: boolean
        class DestinationGuard; //type: Native::Interface::EmbeddedServiceEngine::Ipv6::DestinationGuard
        class Dhcp; //type: Native::Interface::EmbeddedServiceEngine::Ipv6::Dhcp
        class Address; //type: Native::Interface::EmbeddedServiceEngine::Ipv6::Address
        class Nd; //type: Native::Interface::EmbeddedServiceEngine::Ipv6::Nd
        class TrafficFilter; //type: Native::Interface::EmbeddedServiceEngine::Ipv6::TrafficFilter

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::EmbeddedServiceEngine::Ipv6::Address> address;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::EmbeddedServiceEngine::Ipv6::DestinationGuard> destination_guard; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::EmbeddedServiceEngine::Ipv6::Dhcp> dhcp;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::EmbeddedServiceEngine::Ipv6::Nd> nd;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::EmbeddedServiceEngine::Ipv6::TrafficFilter> > traffic_filter;
        
}; // Native::Interface::EmbeddedServiceEngine::Ipv6


class Native::Interface::EmbeddedServiceEngine::Ipv6::DestinationGuard : public Entity
{
    public:
        DestinationGuard();
        ~DestinationGuard();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf attach_policy; //type: string

}; // Native::Interface::EmbeddedServiceEngine::Ipv6::DestinationGuard


class Native::Interface::EmbeddedServiceEngine::Ipv6::Dhcp : public Entity
{
    public:
        Dhcp();
        ~Dhcp();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;


}; // Native::Interface::EmbeddedServiceEngine::Ipv6::Dhcp


class Native::Interface::EmbeddedServiceEngine::Ipv6::Address : public Entity
{
    public:
        Address();
        ~Address();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Dhcp; //type: Native::Interface::EmbeddedServiceEngine::Ipv6::Address::Dhcp
        class Autoconfig; //type: Native::Interface::EmbeddedServiceEngine::Ipv6::Address::Autoconfig
        class PrefixList; //type: Native::Interface::EmbeddedServiceEngine::Ipv6::Address::PrefixList
        class LinkLocalAddress; //type: Native::Interface::EmbeddedServiceEngine::Ipv6::Address::LinkLocalAddress

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::EmbeddedServiceEngine::Ipv6::Address::Autoconfig> autoconfig; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::EmbeddedServiceEngine::Ipv6::Address::Dhcp> dhcp; // presence node
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::EmbeddedServiceEngine::Ipv6::Address::LinkLocalAddress> > link_local_address;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::EmbeddedServiceEngine::Ipv6::Address::PrefixList> > prefix_list;
        
}; // Native::Interface::EmbeddedServiceEngine::Ipv6::Address


class Native::Interface::EmbeddedServiceEngine::Ipv6::Address::Dhcp : public Entity
{
    public:
        Dhcp();
        ~Dhcp();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf rapid_commit; //type: empty

}; // Native::Interface::EmbeddedServiceEngine::Ipv6::Address::Dhcp


class Native::Interface::EmbeddedServiceEngine::Ipv6::Address::Autoconfig : public Entity
{
    public:
        Autoconfig();
        ~Autoconfig();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf default_; //type: empty

}; // Native::Interface::EmbeddedServiceEngine::Ipv6::Address::Autoconfig

class Native::Interface::Cem::Atm::Pvp::Xconnect::EncapsulationEnum : public Enum
{
    public:
        static const Enum::YLeaf mpls;
        static const Enum::YLeaf l2tpv3;

};

class Native::Interface::Cem::Atm::Pvp::Xconnect::SequencingEnum : public Enum
{
    public:
        static const Enum::YLeaf both;
        static const Enum::YLeaf receive;
        static const Enum::YLeaf transmit;

};

class Native::Interface::Cem::Cem_::Xconnect::EncapsulationEnum : public Enum
{
    public:
        static const Enum::YLeaf mpls;
        static const Enum::YLeaf l2tpv3;

};

class Native::Interface::Cem::Cem_::Xconnect::SequencingEnum : public Enum
{
    public:
        static const Enum::YLeaf both;
        static const Enum::YLeaf receive;
        static const Enum::YLeaf transmit;

};

class Native::Interface::Cem::Pvc::Xconnect::EncapsulationEnum : public Enum
{
    public:
        static const Enum::YLeaf mpls;
        static const Enum::YLeaf l2tpv3;

};

class Native::Interface::Cem::Pvc::Xconnect::SequencingEnum : public Enum
{
    public:
        static const Enum::YLeaf both;
        static const Enum::YLeaf receive;
        static const Enum::YLeaf transmit;

};

class Native::Interface::CemAcr::Atm::BandwidthEnum : public Enum
{
    public:
        static const Enum::YLeaf dynamic;

};

class Native::Interface::CemAcr::Atm::Pvp::Xconnect::EncapsulationEnum : public Enum
{
    public:
        static const Enum::YLeaf mpls;
        static const Enum::YLeaf l2tpv3;

};

class Native::Interface::CemAcr::Atm::Pvp::Xconnect::SequencingEnum : public Enum
{
    public:
        static const Enum::YLeaf both;
        static const Enum::YLeaf receive;
        static const Enum::YLeaf transmit;

};

class Native::Interface::CemAcr::Cem::Xconnect::EncapsulationEnum : public Enum
{
    public:
        static const Enum::YLeaf mpls;
        static const Enum::YLeaf l2tpv3;

};

class Native::Interface::CemAcr::Cem::Xconnect::SequencingEnum : public Enum
{
    public:
        static const Enum::YLeaf both;
        static const Enum::YLeaf receive;
        static const Enum::YLeaf transmit;

};

class Native::Interface::CemAcr::Pvc::Xconnect::EncapsulationEnum : public Enum
{
    public:
        static const Enum::YLeaf mpls;
        static const Enum::YLeaf l2tpv3;

};

class Native::Interface::CemAcr::Pvc::Xconnect::SequencingEnum : public Enum
{
    public:
        static const Enum::YLeaf both;
        static const Enum::YLeaf receive;
        static const Enum::YLeaf transmit;

};

class Native::Interface::EmbeddedServiceEngine::IfStateEnum : public Enum
{
    public:
        static const Enum::YLeaf nhrp;

};

class Native::Interface::EmbeddedServiceEngine::ServiceInsertionEnum : public Enum
{
    public:
        static const Enum::YLeaf waas;

};

class Native::Interface::EmbeddedServiceEngine::Backup::Delay::FailureEnum : public Enum
{
    public:
        static const Enum::YLeaf never;

};

class Native::Interface::EmbeddedServiceEngine::Backup::Delay::SecondaryDisableEnum : public Enum
{
    public:
        static const Enum::YLeaf never;

};

class Native::Interface::EmbeddedServiceEngine::Backup::Load::KickinEnum : public Enum
{
    public:
        static const Enum::YLeaf never;

};

class Native::Interface::EmbeddedServiceEngine::Backup::Load::KickoutEnum : public Enum
{
    public:
        static const Enum::YLeaf never;

};

class Native::Interface::EmbeddedServiceEngine::Flowcontrol::ReceiveEnum : public Enum
{
    public:
        static const Enum::YLeaf desired;
        static const Enum::YLeaf off;
        static const Enum::YLeaf on;

};

class Native::Interface::EmbeddedServiceEngine::Flowcontrol::SendEnum : public Enum
{
    public:
        static const Enum::YLeaf desired;
        static const Enum::YLeaf off;
        static const Enum::YLeaf on;

};

class Native::Interface::EmbeddedServiceEngine::HoldQueue::DirectionEnum : public Enum
{
    public:
        static const Enum::YLeaf in;
        static const Enum::YLeaf out;

};

class Native::Interface::EmbeddedServiceEngine::Ip::Verify::Unicast::Source::ReachableViaEnum : public Enum
{
    public:
        static const Enum::YLeaf any;
        static const Enum::YLeaf rx;

};


}
}

#endif /* _CISCO_IOS_XE_NATIVE_21_ */

