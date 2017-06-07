#ifndef _CISCO_IOS_XE_NATIVE_19_
#define _CISCO_IOS_XE_NATIVE_19_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XE_native_0.hpp"
#include "Cisco_IOS_XE_native_16.hpp"
#include "Cisco_IOS_XE_native_18.hpp"

namespace ydk {
namespace Cisco_IOS_XE_native {


class Native::Interface::AppnavUncompress::PriorityQueue : public Entity
{
    public:
        PriorityQueue();
        ~PriorityQueue();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf out; //type: empty
        class CosMap; //type: Native::Interface::AppnavUncompress::PriorityQueue::CosMap

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::AppnavUncompress::PriorityQueue::CosMap> cos_map;
        
}; // Native::Interface::AppnavUncompress::PriorityQueue


class Native::Interface::AppnavUncompress::PriorityQueue::CosMap : public Entity
{
    public:
        CosMap();
        ~CosMap();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf id; //type: uint8
        YLeafList cos_values; //type: list of  uint8

}; // Native::Interface::AppnavUncompress::PriorityQueue::CosMap


class Native::Interface::AppnavUncompress::RcvQueue : public Entity
{
    public:
        RcvQueue();
        ~RcvQueue();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class CosMap; //type: Native::Interface::AppnavUncompress::RcvQueue::CosMap

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::AppnavUncompress::RcvQueue::CosMap> > cos_map;
        
}; // Native::Interface::AppnavUncompress::RcvQueue


class Native::Interface::AppnavUncompress::RcvQueue::CosMap : public Entity
{
    public:
        CosMap();
        ~CosMap();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf queue_id; //type: uint8
        YLeaf threshold_id; //type: uint8
        YLeafList cos_values; //type: list of  uint8

}; // Native::Interface::AppnavUncompress::RcvQueue::CosMap


class Native::Interface::AppnavUncompress::Peer : public Entity
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

        class Default_; //type: Native::Interface::AppnavUncompress::Peer::Default_

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::AppnavUncompress::Peer::Default_> default_;
        
}; // Native::Interface::AppnavUncompress::Peer


class Native::Interface::AppnavUncompress::Peer::Default_ : public Entity
{
    public:
        Default_();
        ~Default_();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Ip; //type: Native::Interface::AppnavUncompress::Peer::Default_::Ip

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::AppnavUncompress::Peer::Default_::Ip> ip;
        
}; // Native::Interface::AppnavUncompress::Peer::Default_


class Native::Interface::AppnavUncompress::Peer::Default_::Ip : public Entity
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

        class Address; //type: Native::Interface::AppnavUncompress::Peer::Default_::Ip::Address

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::AppnavUncompress::Peer::Default_::Ip::Address> address;
        
}; // Native::Interface::AppnavUncompress::Peer::Default_::Ip


class Native::Interface::AppnavUncompress::Peer::Default_::Ip::Address : public Entity
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

        YLeaf dhcp; //type: empty
        class DhcpPool; //type: Native::Interface::AppnavUncompress::Peer::Default_::Ip::Address::DhcpPool
        class Pool; //type: Native::Interface::AppnavUncompress::Peer::Default_::Ip::Address::Pool

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::AppnavUncompress::Peer::Default_::Ip::Address::DhcpPool> dhcp_pool; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::AppnavUncompress::Peer::Default_::Ip::Address::Pool> pool; // presence node
        
}; // Native::Interface::AppnavUncompress::Peer::Default_::Ip::Address


class Native::Interface::AppnavUncompress::Peer::Default_::Ip::Address::DhcpPool : public Entity
{
    public:
        DhcpPool();
        ~DhcpPool();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf pools; //type: string

}; // Native::Interface::AppnavUncompress::Peer::Default_::Ip::Address::DhcpPool


class Native::Interface::AppnavUncompress::Peer::Default_::Ip::Address::Pool : public Entity
{
    public:
        Pool();
        ~Pool();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf pools; //type: string

}; // Native::Interface::AppnavUncompress::Peer::Default_::Ip::Address::Pool


class Native::Interface::AppnavUncompress::PmPath : public Entity
{
    public:
        PmPath();
        ~PmPath();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf name; //type: string
        YLeaf interface_id; //type: uint8

}; // Native::Interface::AppnavUncompress::PmPath


class Native::Interface::Atm : public Entity
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

        YLeaf name; //type: string
        YLeaf load_interval; //type: uint32
        class Ip; //type: Native::Interface::Atm::Ip
        class Atm_; //type: Native::Interface::Atm::Atm_
        class Cem; //type: Native::Interface::Atm::Cem
        class Pvc; //type: Native::Interface::Atm::Pvc

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Atm::Atm_> atm;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Atm::Cem> > cem;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Atm::Ip> ip;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Atm::Pvc> > pvc;
        
}; // Native::Interface::Atm


class Native::Interface::Atm::Ip : public Entity
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

}; // Native::Interface::Atm::Ip


class Native::Interface::Atm::Atm_ : public Entity
{
    public:
        Atm_();
        ~Atm_();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf bandwidth; //type: BandwidthEnum
        YLeaf enable_ilmi_trap; //type: boolean
        class Pvp; //type: Native::Interface::Atm::Atm_::Pvp

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Atm::Atm_::Pvp> > pvp;
                class BandwidthEnum;

}; // Native::Interface::Atm::Atm_


class Native::Interface::Atm::Atm_::Pvp : public Entity
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
        class Xconnect; //type: Native::Interface::Atm::Atm_::Pvp::Xconnect
        class XconnectPwClass; //type: Native::Interface::Atm::Atm_::Pvp::XconnectPwClass

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Atm::Atm_::Pvp::Xconnect> xconnect;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Atm::Atm_::Pvp::XconnectPwClass> xconnect_pw_class;
        
}; // Native::Interface::Atm::Atm_::Pvp


class Native::Interface::Atm::Atm_::Pvp::Xconnect : public Entity
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
        class Backup; //type: Native::Interface::Atm::Atm_::Pvp::Xconnect::Backup

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Atm::Atm_::Pvp::Xconnect::Backup> backup;
                class EncapsulationEnum;
        class SequencingEnum;

}; // Native::Interface::Atm::Atm_::Pvp::Xconnect


class Native::Interface::Atm::Atm_::Pvp::Xconnect::Backup : public Entity
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

        class Peer; //type: Native::Interface::Atm::Atm_::Pvp::Xconnect::Backup::Peer
        class Delay; //type: Native::Interface::Atm::Atm_::Pvp::Xconnect::Backup::Delay

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Atm::Atm_::Pvp::Xconnect::Backup::Delay> delay;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Atm::Atm_::Pvp::Xconnect::Backup::Peer> peer;
        
}; // Native::Interface::Atm::Atm_::Pvp::Xconnect::Backup


class Native::Interface::Atm::Atm_::Pvp::Xconnect::Backup::Peer : public Entity
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

}; // Native::Interface::Atm::Atm_::Pvp::Xconnect::Backup::Peer


class Native::Interface::Atm::Atm_::Pvp::Xconnect::Backup::Delay : public Entity
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

}; // Native::Interface::Atm::Atm_::Pvp::Xconnect::Backup::Delay


class Native::Interface::Atm::Atm_::Pvp::XconnectPwClass : public Entity
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

        class Xconnect; //type: Native::Interface::Atm::Atm_::Pvp::XconnectPwClass::Xconnect

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Atm::Atm_::Pvp::XconnectPwClass::Xconnect> xconnect;
        
}; // Native::Interface::Atm::Atm_::Pvp::XconnectPwClass


class Native::Interface::Atm::Atm_::Pvp::XconnectPwClass::Xconnect : public Entity
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
        class Udp; //type: Native::Interface::Atm::Atm_::Pvp::XconnectPwClass::Xconnect::Udp

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Atm::Atm_::Pvp::XconnectPwClass::Xconnect::Udp> udp;
        
}; // Native::Interface::Atm::Atm_::Pvp::XconnectPwClass::Xconnect


class Native::Interface::Atm::Atm_::Pvp::XconnectPwClass::Xconnect::Udp : public Entity
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

        class Port; //type: Native::Interface::Atm::Atm_::Pvp::XconnectPwClass::Xconnect::Udp::Port

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Atm::Atm_::Pvp::XconnectPwClass::Xconnect::Udp::Port> port;
        
}; // Native::Interface::Atm::Atm_::Pvp::XconnectPwClass::Xconnect::Udp


class Native::Interface::Atm::Atm_::Pvp::XconnectPwClass::Xconnect::Udp::Port : public Entity
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

}; // Native::Interface::Atm::Atm_::Pvp::XconnectPwClass::Xconnect::Udp::Port


class Native::Interface::Atm::Cem : public Entity
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
        class Xconnect; //type: Native::Interface::Atm::Cem::Xconnect
        class XconnectPwClass; //type: Native::Interface::Atm::Cem::XconnectPwClass

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Atm::Cem::Xconnect> xconnect;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Atm::Cem::XconnectPwClass> xconnect_pw_class;
        
}; // Native::Interface::Atm::Cem


class Native::Interface::Atm::Cem::Xconnect : public Entity
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
        class Backup; //type: Native::Interface::Atm::Cem::Xconnect::Backup

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Atm::Cem::Xconnect::Backup> backup;
                class EncapsulationEnum;
        class SequencingEnum;

}; // Native::Interface::Atm::Cem::Xconnect


class Native::Interface::Atm::Cem::Xconnect::Backup : public Entity
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

        class Peer; //type: Native::Interface::Atm::Cem::Xconnect::Backup::Peer
        class Delay; //type: Native::Interface::Atm::Cem::Xconnect::Backup::Delay

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Atm::Cem::Xconnect::Backup::Delay> delay;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Atm::Cem::Xconnect::Backup::Peer> peer;
        
}; // Native::Interface::Atm::Cem::Xconnect::Backup


class Native::Interface::Atm::Cem::Xconnect::Backup::Peer : public Entity
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

}; // Native::Interface::Atm::Cem::Xconnect::Backup::Peer


class Native::Interface::Atm::Cem::Xconnect::Backup::Delay : public Entity
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

}; // Native::Interface::Atm::Cem::Xconnect::Backup::Delay


class Native::Interface::Atm::Cem::XconnectPwClass : public Entity
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

        class Xconnect; //type: Native::Interface::Atm::Cem::XconnectPwClass::Xconnect

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Atm::Cem::XconnectPwClass::Xconnect> xconnect;
        
}; // Native::Interface::Atm::Cem::XconnectPwClass


class Native::Interface::Atm::Cem::XconnectPwClass::Xconnect : public Entity
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
        class Udp; //type: Native::Interface::Atm::Cem::XconnectPwClass::Xconnect::Udp

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Atm::Cem::XconnectPwClass::Xconnect::Udp> udp;
        
}; // Native::Interface::Atm::Cem::XconnectPwClass::Xconnect


class Native::Interface::Atm::Cem::XconnectPwClass::Xconnect::Udp : public Entity
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

        class Port; //type: Native::Interface::Atm::Cem::XconnectPwClass::Xconnect::Udp::Port

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Atm::Cem::XconnectPwClass::Xconnect::Udp::Port> port;
        
}; // Native::Interface::Atm::Cem::XconnectPwClass::Xconnect::Udp


class Native::Interface::Atm::Cem::XconnectPwClass::Xconnect::Udp::Port : public Entity
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

}; // Native::Interface::Atm::Cem::XconnectPwClass::Xconnect::Udp::Port


class Native::Interface::Atm::Pvc : public Entity
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
        class Xconnect; //type: Native::Interface::Atm::Pvc::Xconnect
        class XconnectPwClass; //type: Native::Interface::Atm::Pvc::XconnectPwClass

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Atm::Pvc::Xconnect> xconnect;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Atm::Pvc::XconnectPwClass> xconnect_pw_class;
        
}; // Native::Interface::Atm::Pvc


class Native::Interface::Atm::Pvc::Xconnect : public Entity
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
        class Backup; //type: Native::Interface::Atm::Pvc::Xconnect::Backup

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Atm::Pvc::Xconnect::Backup> backup;
                class EncapsulationEnum;
        class SequencingEnum;

}; // Native::Interface::Atm::Pvc::Xconnect


class Native::Interface::Atm::Pvc::Xconnect::Backup : public Entity
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

        class Peer; //type: Native::Interface::Atm::Pvc::Xconnect::Backup::Peer
        class Delay; //type: Native::Interface::Atm::Pvc::Xconnect::Backup::Delay

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Atm::Pvc::Xconnect::Backup::Delay> delay;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Atm::Pvc::Xconnect::Backup::Peer> peer;
        
}; // Native::Interface::Atm::Pvc::Xconnect::Backup


class Native::Interface::Atm::Pvc::Xconnect::Backup::Peer : public Entity
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

}; // Native::Interface::Atm::Pvc::Xconnect::Backup::Peer


class Native::Interface::Atm::Pvc::Xconnect::Backup::Delay : public Entity
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

}; // Native::Interface::Atm::Pvc::Xconnect::Backup::Delay


class Native::Interface::Atm::Pvc::XconnectPwClass : public Entity
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

        class Xconnect; //type: Native::Interface::Atm::Pvc::XconnectPwClass::Xconnect

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Atm::Pvc::XconnectPwClass::Xconnect> xconnect;
        
}; // Native::Interface::Atm::Pvc::XconnectPwClass


class Native::Interface::Atm::Pvc::XconnectPwClass::Xconnect : public Entity
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
        class Udp; //type: Native::Interface::Atm::Pvc::XconnectPwClass::Xconnect::Udp

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Atm::Pvc::XconnectPwClass::Xconnect::Udp> udp;
        
}; // Native::Interface::Atm::Pvc::XconnectPwClass::Xconnect


class Native::Interface::Atm::Pvc::XconnectPwClass::Xconnect::Udp : public Entity
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

        class Port; //type: Native::Interface::Atm::Pvc::XconnectPwClass::Xconnect::Udp::Port

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Atm::Pvc::XconnectPwClass::Xconnect::Udp::Port> port;
        
}; // Native::Interface::Atm::Pvc::XconnectPwClass::Xconnect::Udp


class Native::Interface::Atm::Pvc::XconnectPwClass::Xconnect::Udp::Port : public Entity
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

}; // Native::Interface::Atm::Pvc::XconnectPwClass::Xconnect::Udp::Port


class Native::Interface::AtmSubinterface : public Entity
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

        class Atm; //type: Native::Interface::AtmSubinterface::Atm

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::AtmSubinterface::Atm> > atm;
        
}; // Native::Interface::AtmSubinterface


class Native::Interface::AtmSubinterface::Atm : public Entity
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

        YLeaf name; //type: string
        YLeaf load_interval; //type: uint32
        class Ip; //type: Native::Interface::AtmSubinterface::Atm::Ip
        class Atm_; //type: Native::Interface::AtmSubinterface::Atm::Atm_
        class Cem; //type: Native::Interface::AtmSubinterface::Atm::Cem
        class Pvc; //type: Native::Interface::AtmSubinterface::Atm::Pvc

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::AtmSubinterface::Atm::Atm_> atm;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::AtmSubinterface::Atm::Cem> > cem;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::AtmSubinterface::Atm::Ip> ip;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::AtmSubinterface::Atm::Pvc> > pvc;
        
}; // Native::Interface::AtmSubinterface::Atm


class Native::Interface::AtmSubinterface::Atm::Ip : public Entity
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

}; // Native::Interface::AtmSubinterface::Atm::Ip


class Native::Interface::AtmSubinterface::Atm::Atm_ : public Entity
{
    public:
        Atm_();
        ~Atm_();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf bandwidth; //type: BandwidthEnum
        YLeaf enable_ilmi_trap; //type: boolean
        class Pvp; //type: Native::Interface::AtmSubinterface::Atm::Atm_::Pvp

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::AtmSubinterface::Atm::Atm_::Pvp> > pvp;
                class BandwidthEnum;

}; // Native::Interface::AtmSubinterface::Atm::Atm_


class Native::Interface::AtmSubinterface::Atm::Atm_::Pvp : public Entity
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
        class Xconnect; //type: Native::Interface::AtmSubinterface::Atm::Atm_::Pvp::Xconnect
        class XconnectPwClass; //type: Native::Interface::AtmSubinterface::Atm::Atm_::Pvp::XconnectPwClass

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::AtmSubinterface::Atm::Atm_::Pvp::Xconnect> xconnect;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::AtmSubinterface::Atm::Atm_::Pvp::XconnectPwClass> xconnect_pw_class;
        
}; // Native::Interface::AtmSubinterface::Atm::Atm_::Pvp


class Native::Interface::AtmSubinterface::Atm::Atm_::Pvp::Xconnect : public Entity
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
        class Backup; //type: Native::Interface::AtmSubinterface::Atm::Atm_::Pvp::Xconnect::Backup

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::AtmSubinterface::Atm::Atm_::Pvp::Xconnect::Backup> backup;
                class EncapsulationEnum;
        class SequencingEnum;

}; // Native::Interface::AtmSubinterface::Atm::Atm_::Pvp::Xconnect


class Native::Interface::AtmSubinterface::Atm::Atm_::Pvp::Xconnect::Backup : public Entity
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

        class Peer; //type: Native::Interface::AtmSubinterface::Atm::Atm_::Pvp::Xconnect::Backup::Peer
        class Delay; //type: Native::Interface::AtmSubinterface::Atm::Atm_::Pvp::Xconnect::Backup::Delay

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::AtmSubinterface::Atm::Atm_::Pvp::Xconnect::Backup::Delay> delay;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::AtmSubinterface::Atm::Atm_::Pvp::Xconnect::Backup::Peer> peer;
        
}; // Native::Interface::AtmSubinterface::Atm::Atm_::Pvp::Xconnect::Backup


class Native::Interface::AtmSubinterface::Atm::Atm_::Pvp::Xconnect::Backup::Peer : public Entity
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

}; // Native::Interface::AtmSubinterface::Atm::Atm_::Pvp::Xconnect::Backup::Peer


class Native::Interface::AtmSubinterface::Atm::Atm_::Pvp::Xconnect::Backup::Delay : public Entity
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

}; // Native::Interface::AtmSubinterface::Atm::Atm_::Pvp::Xconnect::Backup::Delay


class Native::Interface::AtmSubinterface::Atm::Atm_::Pvp::XconnectPwClass : public Entity
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

        class Xconnect; //type: Native::Interface::AtmSubinterface::Atm::Atm_::Pvp::XconnectPwClass::Xconnect

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::AtmSubinterface::Atm::Atm_::Pvp::XconnectPwClass::Xconnect> xconnect;
        
}; // Native::Interface::AtmSubinterface::Atm::Atm_::Pvp::XconnectPwClass


class Native::Interface::AtmSubinterface::Atm::Atm_::Pvp::XconnectPwClass::Xconnect : public Entity
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
        class Udp; //type: Native::Interface::AtmSubinterface::Atm::Atm_::Pvp::XconnectPwClass::Xconnect::Udp

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::AtmSubinterface::Atm::Atm_::Pvp::XconnectPwClass::Xconnect::Udp> udp;
        
}; // Native::Interface::AtmSubinterface::Atm::Atm_::Pvp::XconnectPwClass::Xconnect


class Native::Interface::AtmSubinterface::Atm::Atm_::Pvp::XconnectPwClass::Xconnect::Udp : public Entity
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

        class Port; //type: Native::Interface::AtmSubinterface::Atm::Atm_::Pvp::XconnectPwClass::Xconnect::Udp::Port

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::AtmSubinterface::Atm::Atm_::Pvp::XconnectPwClass::Xconnect::Udp::Port> port;
        
}; // Native::Interface::AtmSubinterface::Atm::Atm_::Pvp::XconnectPwClass::Xconnect::Udp


class Native::Interface::AtmSubinterface::Atm::Atm_::Pvp::XconnectPwClass::Xconnect::Udp::Port : public Entity
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

}; // Native::Interface::AtmSubinterface::Atm::Atm_::Pvp::XconnectPwClass::Xconnect::Udp::Port


class Native::Interface::AtmSubinterface::Atm::Cem : public Entity
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
        class Xconnect; //type: Native::Interface::AtmSubinterface::Atm::Cem::Xconnect
        class XconnectPwClass; //type: Native::Interface::AtmSubinterface::Atm::Cem::XconnectPwClass

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::AtmSubinterface::Atm::Cem::Xconnect> xconnect;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::AtmSubinterface::Atm::Cem::XconnectPwClass> xconnect_pw_class;
        
}; // Native::Interface::AtmSubinterface::Atm::Cem


class Native::Interface::AtmSubinterface::Atm::Cem::Xconnect : public Entity
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
        class Backup; //type: Native::Interface::AtmSubinterface::Atm::Cem::Xconnect::Backup

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::AtmSubinterface::Atm::Cem::Xconnect::Backup> backup;
                class EncapsulationEnum;
        class SequencingEnum;

}; // Native::Interface::AtmSubinterface::Atm::Cem::Xconnect


class Native::Interface::AtmSubinterface::Atm::Cem::Xconnect::Backup : public Entity
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

        class Peer; //type: Native::Interface::AtmSubinterface::Atm::Cem::Xconnect::Backup::Peer
        class Delay; //type: Native::Interface::AtmSubinterface::Atm::Cem::Xconnect::Backup::Delay

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::AtmSubinterface::Atm::Cem::Xconnect::Backup::Delay> delay;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::AtmSubinterface::Atm::Cem::Xconnect::Backup::Peer> peer;
        
}; // Native::Interface::AtmSubinterface::Atm::Cem::Xconnect::Backup


class Native::Interface::AtmSubinterface::Atm::Cem::Xconnect::Backup::Peer : public Entity
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

}; // Native::Interface::AtmSubinterface::Atm::Cem::Xconnect::Backup::Peer


class Native::Interface::AtmSubinterface::Atm::Cem::Xconnect::Backup::Delay : public Entity
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

}; // Native::Interface::AtmSubinterface::Atm::Cem::Xconnect::Backup::Delay


class Native::Interface::AtmSubinterface::Atm::Cem::XconnectPwClass : public Entity
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

        class Xconnect; //type: Native::Interface::AtmSubinterface::Atm::Cem::XconnectPwClass::Xconnect

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::AtmSubinterface::Atm::Cem::XconnectPwClass::Xconnect> xconnect;
        
}; // Native::Interface::AtmSubinterface::Atm::Cem::XconnectPwClass


class Native::Interface::AtmSubinterface::Atm::Cem::XconnectPwClass::Xconnect : public Entity
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
        class Udp; //type: Native::Interface::AtmSubinterface::Atm::Cem::XconnectPwClass::Xconnect::Udp

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::AtmSubinterface::Atm::Cem::XconnectPwClass::Xconnect::Udp> udp;
        
}; // Native::Interface::AtmSubinterface::Atm::Cem::XconnectPwClass::Xconnect


class Native::Interface::AtmSubinterface::Atm::Cem::XconnectPwClass::Xconnect::Udp : public Entity
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

        class Port; //type: Native::Interface::AtmSubinterface::Atm::Cem::XconnectPwClass::Xconnect::Udp::Port

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::AtmSubinterface::Atm::Cem::XconnectPwClass::Xconnect::Udp::Port> port;
        
}; // Native::Interface::AtmSubinterface::Atm::Cem::XconnectPwClass::Xconnect::Udp


class Native::Interface::AtmSubinterface::Atm::Cem::XconnectPwClass::Xconnect::Udp::Port : public Entity
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

}; // Native::Interface::AtmSubinterface::Atm::Cem::XconnectPwClass::Xconnect::Udp::Port


class Native::Interface::AtmSubinterface::Atm::Pvc : public Entity
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
        class Xconnect; //type: Native::Interface::AtmSubinterface::Atm::Pvc::Xconnect
        class XconnectPwClass; //type: Native::Interface::AtmSubinterface::Atm::Pvc::XconnectPwClass

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::AtmSubinterface::Atm::Pvc::Xconnect> xconnect;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::AtmSubinterface::Atm::Pvc::XconnectPwClass> xconnect_pw_class;
        
}; // Native::Interface::AtmSubinterface::Atm::Pvc


class Native::Interface::AtmSubinterface::Atm::Pvc::Xconnect : public Entity
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
        class Backup; //type: Native::Interface::AtmSubinterface::Atm::Pvc::Xconnect::Backup

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::AtmSubinterface::Atm::Pvc::Xconnect::Backup> backup;
                class EncapsulationEnum;
        class SequencingEnum;

}; // Native::Interface::AtmSubinterface::Atm::Pvc::Xconnect


class Native::Interface::AtmSubinterface::Atm::Pvc::Xconnect::Backup : public Entity
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

        class Peer; //type: Native::Interface::AtmSubinterface::Atm::Pvc::Xconnect::Backup::Peer
        class Delay; //type: Native::Interface::AtmSubinterface::Atm::Pvc::Xconnect::Backup::Delay

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::AtmSubinterface::Atm::Pvc::Xconnect::Backup::Delay> delay;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::AtmSubinterface::Atm::Pvc::Xconnect::Backup::Peer> peer;
        
}; // Native::Interface::AtmSubinterface::Atm::Pvc::Xconnect::Backup


class Native::Interface::AtmSubinterface::Atm::Pvc::Xconnect::Backup::Peer : public Entity
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

}; // Native::Interface::AtmSubinterface::Atm::Pvc::Xconnect::Backup::Peer


class Native::Interface::AtmSubinterface::Atm::Pvc::Xconnect::Backup::Delay : public Entity
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

}; // Native::Interface::AtmSubinterface::Atm::Pvc::Xconnect::Backup::Delay


class Native::Interface::AtmSubinterface::Atm::Pvc::XconnectPwClass : public Entity
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

        class Xconnect; //type: Native::Interface::AtmSubinterface::Atm::Pvc::XconnectPwClass::Xconnect

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::AtmSubinterface::Atm::Pvc::XconnectPwClass::Xconnect> xconnect;
        
}; // Native::Interface::AtmSubinterface::Atm::Pvc::XconnectPwClass


class Native::Interface::AtmSubinterface::Atm::Pvc::XconnectPwClass::Xconnect : public Entity
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
        class Udp; //type: Native::Interface::AtmSubinterface::Atm::Pvc::XconnectPwClass::Xconnect::Udp

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::AtmSubinterface::Atm::Pvc::XconnectPwClass::Xconnect::Udp> udp;
        
}; // Native::Interface::AtmSubinterface::Atm::Pvc::XconnectPwClass::Xconnect


class Native::Interface::AtmSubinterface::Atm::Pvc::XconnectPwClass::Xconnect::Udp : public Entity
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

        class Port; //type: Native::Interface::AtmSubinterface::Atm::Pvc::XconnectPwClass::Xconnect::Udp::Port

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::AtmSubinterface::Atm::Pvc::XconnectPwClass::Xconnect::Udp::Port> port;
        
}; // Native::Interface::AtmSubinterface::Atm::Pvc::XconnectPwClass::Xconnect::Udp


class Native::Interface::AtmSubinterface::Atm::Pvc::XconnectPwClass::Xconnect::Udp::Port : public Entity
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

}; // Native::Interface::AtmSubinterface::Atm::Pvc::XconnectPwClass::Xconnect::Udp::Port


class Native::Interface::AtmAcr : public Entity
{
    public:
        AtmAcr();
        ~AtmAcr();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf name; //type: string
        YLeaf load_interval; //type: uint32
        class Ip; //type: Native::Interface::AtmAcr::Ip
        class Atm; //type: Native::Interface::AtmAcr::Atm
        class Cem; //type: Native::Interface::AtmAcr::Cem
        class Pvc; //type: Native::Interface::AtmAcr::Pvc

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::AtmAcr::Atm> atm;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::AtmAcr::Cem> > cem;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::AtmAcr::Ip> ip;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::AtmAcr::Pvc> > pvc;
        
}; // Native::Interface::AtmAcr


class Native::Interface::AtmAcr::Ip : public Entity
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

}; // Native::Interface::AtmAcr::Ip


class Native::Interface::AtmAcr::Atm : public Entity
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
        class Pvp; //type: Native::Interface::AtmAcr::Atm::Pvp

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::AtmAcr::Atm::Pvp> > pvp;
                class BandwidthEnum;

}; // Native::Interface::AtmAcr::Atm


class Native::Interface::AtmAcr::Atm::Pvp : public Entity
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
        class Xconnect; //type: Native::Interface::AtmAcr::Atm::Pvp::Xconnect
        class XconnectPwClass; //type: Native::Interface::AtmAcr::Atm::Pvp::XconnectPwClass

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::AtmAcr::Atm::Pvp::Xconnect> xconnect;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::AtmAcr::Atm::Pvp::XconnectPwClass> xconnect_pw_class;
        
}; // Native::Interface::AtmAcr::Atm::Pvp


class Native::Interface::AtmAcr::Atm::Pvp::Xconnect : public Entity
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
        class Backup; //type: Native::Interface::AtmAcr::Atm::Pvp::Xconnect::Backup

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::AtmAcr::Atm::Pvp::Xconnect::Backup> backup;
                class EncapsulationEnum;
        class SequencingEnum;

}; // Native::Interface::AtmAcr::Atm::Pvp::Xconnect


class Native::Interface::AtmAcr::Atm::Pvp::Xconnect::Backup : public Entity
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

        class Peer; //type: Native::Interface::AtmAcr::Atm::Pvp::Xconnect::Backup::Peer
        class Delay; //type: Native::Interface::AtmAcr::Atm::Pvp::Xconnect::Backup::Delay

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::AtmAcr::Atm::Pvp::Xconnect::Backup::Delay> delay;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::AtmAcr::Atm::Pvp::Xconnect::Backup::Peer> peer;
        
}; // Native::Interface::AtmAcr::Atm::Pvp::Xconnect::Backup


class Native::Interface::AtmAcr::Atm::Pvp::Xconnect::Backup::Peer : public Entity
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

}; // Native::Interface::AtmAcr::Atm::Pvp::Xconnect::Backup::Peer


class Native::Interface::AtmAcr::Atm::Pvp::Xconnect::Backup::Delay : public Entity
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

}; // Native::Interface::AtmAcr::Atm::Pvp::Xconnect::Backup::Delay


class Native::Interface::AtmAcr::Atm::Pvp::XconnectPwClass : public Entity
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

        class Xconnect; //type: Native::Interface::AtmAcr::Atm::Pvp::XconnectPwClass::Xconnect

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::AtmAcr::Atm::Pvp::XconnectPwClass::Xconnect> xconnect;
        
}; // Native::Interface::AtmAcr::Atm::Pvp::XconnectPwClass


class Native::Interface::AtmAcr::Atm::Pvp::XconnectPwClass::Xconnect : public Entity
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
        class Udp; //type: Native::Interface::AtmAcr::Atm::Pvp::XconnectPwClass::Xconnect::Udp

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::AtmAcr::Atm::Pvp::XconnectPwClass::Xconnect::Udp> udp;
        
}; // Native::Interface::AtmAcr::Atm::Pvp::XconnectPwClass::Xconnect


class Native::Interface::AtmAcr::Atm::Pvp::XconnectPwClass::Xconnect::Udp : public Entity
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

        class Port; //type: Native::Interface::AtmAcr::Atm::Pvp::XconnectPwClass::Xconnect::Udp::Port

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::AtmAcr::Atm::Pvp::XconnectPwClass::Xconnect::Udp::Port> port;
        
}; // Native::Interface::AtmAcr::Atm::Pvp::XconnectPwClass::Xconnect::Udp


class Native::Interface::AtmAcr::Atm::Pvp::XconnectPwClass::Xconnect::Udp::Port : public Entity
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

}; // Native::Interface::AtmAcr::Atm::Pvp::XconnectPwClass::Xconnect::Udp::Port


class Native::Interface::AtmAcr::Cem : public Entity
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
        class Xconnect; //type: Native::Interface::AtmAcr::Cem::Xconnect
        class XconnectPwClass; //type: Native::Interface::AtmAcr::Cem::XconnectPwClass

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::AtmAcr::Cem::Xconnect> xconnect;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::AtmAcr::Cem::XconnectPwClass> xconnect_pw_class;
        
}; // Native::Interface::AtmAcr::Cem


class Native::Interface::AtmAcr::Cem::Xconnect : public Entity
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
        class Backup; //type: Native::Interface::AtmAcr::Cem::Xconnect::Backup

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::AtmAcr::Cem::Xconnect::Backup> backup;
                class EncapsulationEnum;
        class SequencingEnum;

}; // Native::Interface::AtmAcr::Cem::Xconnect


class Native::Interface::AtmAcr::Cem::Xconnect::Backup : public Entity
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

        class Peer; //type: Native::Interface::AtmAcr::Cem::Xconnect::Backup::Peer
        class Delay; //type: Native::Interface::AtmAcr::Cem::Xconnect::Backup::Delay

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::AtmAcr::Cem::Xconnect::Backup::Delay> delay;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::AtmAcr::Cem::Xconnect::Backup::Peer> peer;
        
}; // Native::Interface::AtmAcr::Cem::Xconnect::Backup


class Native::Interface::AtmAcr::Cem::Xconnect::Backup::Peer : public Entity
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

}; // Native::Interface::AtmAcr::Cem::Xconnect::Backup::Peer


class Native::Interface::AtmAcr::Cem::Xconnect::Backup::Delay : public Entity
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

}; // Native::Interface::AtmAcr::Cem::Xconnect::Backup::Delay


class Native::Interface::AtmAcr::Cem::XconnectPwClass : public Entity
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

        class Xconnect; //type: Native::Interface::AtmAcr::Cem::XconnectPwClass::Xconnect

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::AtmAcr::Cem::XconnectPwClass::Xconnect> xconnect;
        
}; // Native::Interface::AtmAcr::Cem::XconnectPwClass


class Native::Interface::AtmAcr::Cem::XconnectPwClass::Xconnect : public Entity
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
        class Udp; //type: Native::Interface::AtmAcr::Cem::XconnectPwClass::Xconnect::Udp

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::AtmAcr::Cem::XconnectPwClass::Xconnect::Udp> udp;
        
}; // Native::Interface::AtmAcr::Cem::XconnectPwClass::Xconnect


class Native::Interface::AtmAcr::Cem::XconnectPwClass::Xconnect::Udp : public Entity
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

        class Port; //type: Native::Interface::AtmAcr::Cem::XconnectPwClass::Xconnect::Udp::Port

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::AtmAcr::Cem::XconnectPwClass::Xconnect::Udp::Port> port;
        
}; // Native::Interface::AtmAcr::Cem::XconnectPwClass::Xconnect::Udp


class Native::Interface::AtmAcr::Cem::XconnectPwClass::Xconnect::Udp::Port : public Entity
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

}; // Native::Interface::AtmAcr::Cem::XconnectPwClass::Xconnect::Udp::Port


class Native::Interface::AtmAcr::Pvc : public Entity
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
        class Xconnect; //type: Native::Interface::AtmAcr::Pvc::Xconnect
        class XconnectPwClass; //type: Native::Interface::AtmAcr::Pvc::XconnectPwClass

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::AtmAcr::Pvc::Xconnect> xconnect;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::AtmAcr::Pvc::XconnectPwClass> xconnect_pw_class;
        
}; // Native::Interface::AtmAcr::Pvc


class Native::Interface::AtmAcr::Pvc::Xconnect : public Entity
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
        class Backup; //type: Native::Interface::AtmAcr::Pvc::Xconnect::Backup

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::AtmAcr::Pvc::Xconnect::Backup> backup;
                class EncapsulationEnum;
        class SequencingEnum;

}; // Native::Interface::AtmAcr::Pvc::Xconnect


class Native::Interface::AtmAcr::Pvc::Xconnect::Backup : public Entity
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

        class Peer; //type: Native::Interface::AtmAcr::Pvc::Xconnect::Backup::Peer
        class Delay; //type: Native::Interface::AtmAcr::Pvc::Xconnect::Backup::Delay

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::AtmAcr::Pvc::Xconnect::Backup::Delay> delay;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::AtmAcr::Pvc::Xconnect::Backup::Peer> peer;
        
}; // Native::Interface::AtmAcr::Pvc::Xconnect::Backup


class Native::Interface::AtmAcr::Pvc::Xconnect::Backup::Peer : public Entity
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

}; // Native::Interface::AtmAcr::Pvc::Xconnect::Backup::Peer


class Native::Interface::AtmAcr::Pvc::Xconnect::Backup::Delay : public Entity
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

}; // Native::Interface::AtmAcr::Pvc::Xconnect::Backup::Delay


class Native::Interface::AtmAcr::Pvc::XconnectPwClass : public Entity
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

        class Xconnect; //type: Native::Interface::AtmAcr::Pvc::XconnectPwClass::Xconnect

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::AtmAcr::Pvc::XconnectPwClass::Xconnect> xconnect;
        
}; // Native::Interface::AtmAcr::Pvc::XconnectPwClass


class Native::Interface::AtmAcr::Pvc::XconnectPwClass::Xconnect : public Entity
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
        class Udp; //type: Native::Interface::AtmAcr::Pvc::XconnectPwClass::Xconnect::Udp

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::AtmAcr::Pvc::XconnectPwClass::Xconnect::Udp> udp;
        
}; // Native::Interface::AtmAcr::Pvc::XconnectPwClass::Xconnect


class Native::Interface::AtmAcr::Pvc::XconnectPwClass::Xconnect::Udp : public Entity
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

        class Port; //type: Native::Interface::AtmAcr::Pvc::XconnectPwClass::Xconnect::Udp::Port

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::AtmAcr::Pvc::XconnectPwClass::Xconnect::Udp::Port> port;
        
}; // Native::Interface::AtmAcr::Pvc::XconnectPwClass::Xconnect::Udp


class Native::Interface::AtmAcr::Pvc::XconnectPwClass::Xconnect::Udp::Port : public Entity
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

}; // Native::Interface::AtmAcr::Pvc::XconnectPwClass::Xconnect::Udp::Port


class Native::Interface::AtmAcrsubinterface : public Entity
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

        class AtmAcr; //type: Native::Interface::AtmAcrsubinterface::AtmAcr

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::AtmAcrsubinterface::AtmAcr> > atm_acr;
        
}; // Native::Interface::AtmAcrsubinterface


class Native::Interface::AtmAcrsubinterface::AtmAcr : public Entity
{
    public:
        AtmAcr();
        ~AtmAcr();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf name; //type: string
        YLeaf load_interval; //type: uint32
        class Ip; //type: Native::Interface::AtmAcrsubinterface::AtmAcr::Ip
        class Atm; //type: Native::Interface::AtmAcrsubinterface::AtmAcr::Atm
        class Cem; //type: Native::Interface::AtmAcrsubinterface::AtmAcr::Cem
        class Pvc; //type: Native::Interface::AtmAcrsubinterface::AtmAcr::Pvc

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::AtmAcrsubinterface::AtmAcr::Atm> atm;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::AtmAcrsubinterface::AtmAcr::Cem> > cem;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::AtmAcrsubinterface::AtmAcr::Ip> ip;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::AtmAcrsubinterface::AtmAcr::Pvc> > pvc;
        
}; // Native::Interface::AtmAcrsubinterface::AtmAcr


class Native::Interface::AtmAcrsubinterface::AtmAcr::Ip : public Entity
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

}; // Native::Interface::AtmAcrsubinterface::AtmAcr::Ip


class Native::Interface::AtmAcrsubinterface::AtmAcr::Atm : public Entity
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
        class Pvp; //type: Native::Interface::AtmAcrsubinterface::AtmAcr::Atm::Pvp

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::AtmAcrsubinterface::AtmAcr::Atm::Pvp> > pvp;
                class BandwidthEnum;

}; // Native::Interface::AtmAcrsubinterface::AtmAcr::Atm


class Native::Interface::AtmAcrsubinterface::AtmAcr::Atm::Pvp : public Entity
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
        class Xconnect; //type: Native::Interface::AtmAcrsubinterface::AtmAcr::Atm::Pvp::Xconnect
        class XconnectPwClass; //type: Native::Interface::AtmAcrsubinterface::AtmAcr::Atm::Pvp::XconnectPwClass

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::AtmAcrsubinterface::AtmAcr::Atm::Pvp::Xconnect> xconnect;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::AtmAcrsubinterface::AtmAcr::Atm::Pvp::XconnectPwClass> xconnect_pw_class;
        
}; // Native::Interface::AtmAcrsubinterface::AtmAcr::Atm::Pvp


class Native::Interface::AtmAcrsubinterface::AtmAcr::Atm::Pvp::Xconnect : public Entity
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
        class Backup; //type: Native::Interface::AtmAcrsubinterface::AtmAcr::Atm::Pvp::Xconnect::Backup

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::AtmAcrsubinterface::AtmAcr::Atm::Pvp::Xconnect::Backup> backup;
                class EncapsulationEnum;
        class SequencingEnum;

}; // Native::Interface::AtmAcrsubinterface::AtmAcr::Atm::Pvp::Xconnect


class Native::Interface::AtmAcrsubinterface::AtmAcr::Atm::Pvp::Xconnect::Backup : public Entity
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

        class Peer; //type: Native::Interface::AtmAcrsubinterface::AtmAcr::Atm::Pvp::Xconnect::Backup::Peer
        class Delay; //type: Native::Interface::AtmAcrsubinterface::AtmAcr::Atm::Pvp::Xconnect::Backup::Delay

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::AtmAcrsubinterface::AtmAcr::Atm::Pvp::Xconnect::Backup::Delay> delay;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::AtmAcrsubinterface::AtmAcr::Atm::Pvp::Xconnect::Backup::Peer> peer;
        
}; // Native::Interface::AtmAcrsubinterface::AtmAcr::Atm::Pvp::Xconnect::Backup


class Native::Interface::AtmAcrsubinterface::AtmAcr::Atm::Pvp::Xconnect::Backup::Peer : public Entity
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

}; // Native::Interface::AtmAcrsubinterface::AtmAcr::Atm::Pvp::Xconnect::Backup::Peer


class Native::Interface::AtmAcrsubinterface::AtmAcr::Atm::Pvp::Xconnect::Backup::Delay : public Entity
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

}; // Native::Interface::AtmAcrsubinterface::AtmAcr::Atm::Pvp::Xconnect::Backup::Delay


class Native::Interface::AtmAcrsubinterface::AtmAcr::Atm::Pvp::XconnectPwClass : public Entity
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

        class Xconnect; //type: Native::Interface::AtmAcrsubinterface::AtmAcr::Atm::Pvp::XconnectPwClass::Xconnect

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::AtmAcrsubinterface::AtmAcr::Atm::Pvp::XconnectPwClass::Xconnect> xconnect;
        
}; // Native::Interface::AtmAcrsubinterface::AtmAcr::Atm::Pvp::XconnectPwClass


class Native::Interface::AtmAcrsubinterface::AtmAcr::Atm::Pvp::XconnectPwClass::Xconnect : public Entity
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
        class Udp; //type: Native::Interface::AtmAcrsubinterface::AtmAcr::Atm::Pvp::XconnectPwClass::Xconnect::Udp

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::AtmAcrsubinterface::AtmAcr::Atm::Pvp::XconnectPwClass::Xconnect::Udp> udp;
        
}; // Native::Interface::AtmAcrsubinterface::AtmAcr::Atm::Pvp::XconnectPwClass::Xconnect


class Native::Interface::AtmAcrsubinterface::AtmAcr::Atm::Pvp::XconnectPwClass::Xconnect::Udp : public Entity
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

        class Port; //type: Native::Interface::AtmAcrsubinterface::AtmAcr::Atm::Pvp::XconnectPwClass::Xconnect::Udp::Port

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::AtmAcrsubinterface::AtmAcr::Atm::Pvp::XconnectPwClass::Xconnect::Udp::Port> port;
        
}; // Native::Interface::AtmAcrsubinterface::AtmAcr::Atm::Pvp::XconnectPwClass::Xconnect::Udp


class Native::Interface::AtmAcrsubinterface::AtmAcr::Atm::Pvp::XconnectPwClass::Xconnect::Udp::Port : public Entity
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

}; // Native::Interface::AtmAcrsubinterface::AtmAcr::Atm::Pvp::XconnectPwClass::Xconnect::Udp::Port


class Native::Interface::AtmAcrsubinterface::AtmAcr::Cem : public Entity
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
        class Xconnect; //type: Native::Interface::AtmAcrsubinterface::AtmAcr::Cem::Xconnect
        class XconnectPwClass; //type: Native::Interface::AtmAcrsubinterface::AtmAcr::Cem::XconnectPwClass

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::AtmAcrsubinterface::AtmAcr::Cem::Xconnect> xconnect;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::AtmAcrsubinterface::AtmAcr::Cem::XconnectPwClass> xconnect_pw_class;
        
}; // Native::Interface::AtmAcrsubinterface::AtmAcr::Cem


class Native::Interface::AtmAcrsubinterface::AtmAcr::Cem::Xconnect : public Entity
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
        class Backup; //type: Native::Interface::AtmAcrsubinterface::AtmAcr::Cem::Xconnect::Backup

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::AtmAcrsubinterface::AtmAcr::Cem::Xconnect::Backup> backup;
                class EncapsulationEnum;
        class SequencingEnum;

}; // Native::Interface::AtmAcrsubinterface::AtmAcr::Cem::Xconnect


class Native::Interface::AtmAcrsubinterface::AtmAcr::Cem::Xconnect::Backup : public Entity
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

        class Peer; //type: Native::Interface::AtmAcrsubinterface::AtmAcr::Cem::Xconnect::Backup::Peer
        class Delay; //type: Native::Interface::AtmAcrsubinterface::AtmAcr::Cem::Xconnect::Backup::Delay

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::AtmAcrsubinterface::AtmAcr::Cem::Xconnect::Backup::Delay> delay;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::AtmAcrsubinterface::AtmAcr::Cem::Xconnect::Backup::Peer> peer;
        
}; // Native::Interface::AtmAcrsubinterface::AtmAcr::Cem::Xconnect::Backup


class Native::Interface::AtmAcrsubinterface::AtmAcr::Cem::Xconnect::Backup::Peer : public Entity
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

}; // Native::Interface::AtmAcrsubinterface::AtmAcr::Cem::Xconnect::Backup::Peer


class Native::Interface::AtmAcrsubinterface::AtmAcr::Cem::Xconnect::Backup::Delay : public Entity
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

}; // Native::Interface::AtmAcrsubinterface::AtmAcr::Cem::Xconnect::Backup::Delay


class Native::Interface::AtmAcrsubinterface::AtmAcr::Cem::XconnectPwClass : public Entity
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

        class Xconnect; //type: Native::Interface::AtmAcrsubinterface::AtmAcr::Cem::XconnectPwClass::Xconnect

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::AtmAcrsubinterface::AtmAcr::Cem::XconnectPwClass::Xconnect> xconnect;
        
}; // Native::Interface::AtmAcrsubinterface::AtmAcr::Cem::XconnectPwClass


class Native::Interface::AtmAcrsubinterface::AtmAcr::Cem::XconnectPwClass::Xconnect : public Entity
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
        class Udp; //type: Native::Interface::AtmAcrsubinterface::AtmAcr::Cem::XconnectPwClass::Xconnect::Udp

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::AtmAcrsubinterface::AtmAcr::Cem::XconnectPwClass::Xconnect::Udp> udp;
        
}; // Native::Interface::AtmAcrsubinterface::AtmAcr::Cem::XconnectPwClass::Xconnect


class Native::Interface::AtmAcrsubinterface::AtmAcr::Cem::XconnectPwClass::Xconnect::Udp : public Entity
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

        class Port; //type: Native::Interface::AtmAcrsubinterface::AtmAcr::Cem::XconnectPwClass::Xconnect::Udp::Port

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::AtmAcrsubinterface::AtmAcr::Cem::XconnectPwClass::Xconnect::Udp::Port> port;
        
}; // Native::Interface::AtmAcrsubinterface::AtmAcr::Cem::XconnectPwClass::Xconnect::Udp


class Native::Interface::AtmAcrsubinterface::AtmAcr::Cem::XconnectPwClass::Xconnect::Udp::Port : public Entity
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

}; // Native::Interface::AtmAcrsubinterface::AtmAcr::Cem::XconnectPwClass::Xconnect::Udp::Port


class Native::Interface::AtmAcrsubinterface::AtmAcr::Pvc : public Entity
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
        class Xconnect; //type: Native::Interface::AtmAcrsubinterface::AtmAcr::Pvc::Xconnect
        class XconnectPwClass; //type: Native::Interface::AtmAcrsubinterface::AtmAcr::Pvc::XconnectPwClass

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::AtmAcrsubinterface::AtmAcr::Pvc::Xconnect> xconnect;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::AtmAcrsubinterface::AtmAcr::Pvc::XconnectPwClass> xconnect_pw_class;
        
}; // Native::Interface::AtmAcrsubinterface::AtmAcr::Pvc


class Native::Interface::AtmAcrsubinterface::AtmAcr::Pvc::Xconnect : public Entity
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
        class Backup; //type: Native::Interface::AtmAcrsubinterface::AtmAcr::Pvc::Xconnect::Backup

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::AtmAcrsubinterface::AtmAcr::Pvc::Xconnect::Backup> backup;
                class EncapsulationEnum;
        class SequencingEnum;

}; // Native::Interface::AtmAcrsubinterface::AtmAcr::Pvc::Xconnect


class Native::Interface::AtmAcrsubinterface::AtmAcr::Pvc::Xconnect::Backup : public Entity
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

        class Peer; //type: Native::Interface::AtmAcrsubinterface::AtmAcr::Pvc::Xconnect::Backup::Peer
        class Delay; //type: Native::Interface::AtmAcrsubinterface::AtmAcr::Pvc::Xconnect::Backup::Delay

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::AtmAcrsubinterface::AtmAcr::Pvc::Xconnect::Backup::Delay> delay;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::AtmAcrsubinterface::AtmAcr::Pvc::Xconnect::Backup::Peer> peer;
        
}; // Native::Interface::AtmAcrsubinterface::AtmAcr::Pvc::Xconnect::Backup


class Native::Interface::AtmAcrsubinterface::AtmAcr::Pvc::Xconnect::Backup::Peer : public Entity
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

}; // Native::Interface::AtmAcrsubinterface::AtmAcr::Pvc::Xconnect::Backup::Peer


class Native::Interface::AtmAcrsubinterface::AtmAcr::Pvc::Xconnect::Backup::Delay : public Entity
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

}; // Native::Interface::AtmAcrsubinterface::AtmAcr::Pvc::Xconnect::Backup::Delay


class Native::Interface::AtmAcrsubinterface::AtmAcr::Pvc::XconnectPwClass : public Entity
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

        class Xconnect; //type: Native::Interface::AtmAcrsubinterface::AtmAcr::Pvc::XconnectPwClass::Xconnect

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::AtmAcrsubinterface::AtmAcr::Pvc::XconnectPwClass::Xconnect> xconnect;
        
}; // Native::Interface::AtmAcrsubinterface::AtmAcr::Pvc::XconnectPwClass


class Native::Interface::AtmAcrsubinterface::AtmAcr::Pvc::XconnectPwClass::Xconnect : public Entity
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
        class Udp; //type: Native::Interface::AtmAcrsubinterface::AtmAcr::Pvc::XconnectPwClass::Xconnect::Udp

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::AtmAcrsubinterface::AtmAcr::Pvc::XconnectPwClass::Xconnect::Udp> udp;
        
}; // Native::Interface::AtmAcrsubinterface::AtmAcr::Pvc::XconnectPwClass::Xconnect


class Native::Interface::AtmAcrsubinterface::AtmAcr::Pvc::XconnectPwClass::Xconnect::Udp : public Entity
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

        class Port; //type: Native::Interface::AtmAcrsubinterface::AtmAcr::Pvc::XconnectPwClass::Xconnect::Udp::Port

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::AtmAcrsubinterface::AtmAcr::Pvc::XconnectPwClass::Xconnect::Udp::Port> port;
        
}; // Native::Interface::AtmAcrsubinterface::AtmAcr::Pvc::XconnectPwClass::Xconnect::Udp


class Native::Interface::AtmAcrsubinterface::AtmAcr::Pvc::XconnectPwClass::Xconnect::Udp::Port : public Entity
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

}; // Native::Interface::AtmAcrsubinterface::AtmAcr::Pvc::XconnectPwClass::Xconnect::Udp::Port


class Native::Interface::Bdi : public Entity
{
    public:
        Bdi();
        ~Bdi();

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
        class SwitchportConf; //type: Native::Interface::Bdi::SwitchportConf
        class Switchport; //type: Native::Interface::Bdi::Switchport
        class Arp; //type: Native::Interface::Bdi::Arp
        class Backup; //type: Native::Interface::Bdi::Backup
        class Cemoudp; //type: Native::Interface::Bdi::Cemoudp
        class CwsTunnel; //type: Native::Interface::Bdi::CwsTunnel
        class L2ProtocolTunnel; //type: Native::Interface::Bdi::L2ProtocolTunnel
        class Encapsulation; //type: Native::Interface::Bdi::Encapsulation
        class FairQueueConf; //type: Native::Interface::Bdi::FairQueueConf
        class FairQueue; //type: Native::Interface::Bdi::FairQueue
        class Flowcontrol; //type: Native::Interface::Bdi::Flowcontrol
        class Isis; //type: Native::Interface::Bdi::Isis
        class KeepaliveSettings; //type: Native::Interface::Bdi::KeepaliveSettings
        class Bfd; //type: Native::Interface::Bdi::Bfd
        class Bandwidth; //type: Native::Interface::Bdi::Bandwidth
        class Dampening; //type: Native::Interface::Bdi::Dampening
        class Domain; //type: Native::Interface::Bdi::Domain
        class HoldQueue; //type: Native::Interface::Bdi::HoldQueue
        class Mpls; //type: Native::Interface::Bdi::Mpls
        class IpVrf; //type: Native::Interface::Bdi::IpVrf
        class Vrf; //type: Native::Interface::Bdi::Vrf
        class Ip; //type: Native::Interface::Bdi::Ip
        class Ipv6; //type: Native::Interface::Bdi::Ipv6
        class Logging; //type: Native::Interface::Bdi::Logging
        class Mdix; //type: Native::Interface::Bdi::Mdix
        class Mop; //type: Native::Interface::Bdi::Mop
        class Interface_Qos; //type: Native::Interface::Bdi::Interface_Qos
        class Standby; //type: Native::Interface::Bdi::Standby
        class AccessSession; //type: Native::Interface::Bdi::AccessSession
        class StormControl; //type: Native::Interface::Bdi::StormControl
        class Trust; //type: Native::Interface::Bdi::Trust
        class Utd; //type: Native::Interface::Bdi::Utd
        class PriorityQueue; //type: Native::Interface::Bdi::PriorityQueue
        class RcvQueue; //type: Native::Interface::Bdi::RcvQueue
        class Peer; //type: Native::Interface::Bdi::Peer
        class PmPath; //type: Native::Interface::Bdi::PmPath
        class ServicePolicy; //type: Native::Interface::Bdi::ServicePolicy

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Bdi::AccessSession> access_session;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Bdi::Arp> arp;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Bdi::Backup> backup;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Bdi::Bandwidth> bandwidth;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Bdi::Bfd> bfd;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Bdi::Cemoudp> cemoudp;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Bdi::CwsTunnel> cws_tunnel;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Bdi::Dampening> dampening; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Bdi::Domain> domain;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Bdi::Encapsulation> encapsulation;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Bdi::FairQueue> fair_queue;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Bdi::FairQueueConf> fair_queue_conf;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Bdi::Flowcontrol> flowcontrol;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Bdi::HoldQueue> hold_queue;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Bdi::Interface_Qos> interface_qos;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Bdi::Ip> ip;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Bdi::IpVrf> ip_vrf;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Bdi::Ipv6> ipv6;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Bdi::Isis> isis;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Bdi::KeepaliveSettings> keepalive_settings;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Bdi::L2ProtocolTunnel> l2protocol_tunnel; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Bdi::Logging> logging;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Bdi::Mdix> mdix;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Bdi::Mop> mop;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Bdi::Mpls> mpls;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Bdi::Peer> peer;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Bdi::PmPath> pm_path;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Bdi::PriorityQueue> priority_queue;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Bdi::RcvQueue> rcv_queue;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Bdi::ServicePolicy> service_policy;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Bdi::Standby> standby;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Bdi::StormControl> storm_control;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Bdi::Switchport> switchport;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Bdi::SwitchportConf> switchport_conf;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Bdi::Trust> trust;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Bdi::Utd> utd;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Bdi::Vrf> vrf;
                class IfStateEnum;
        class ServiceInsertionEnum;

}; // Native::Interface::Bdi


class Native::Interface::Bdi::SwitchportConf : public Entity
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

}; // Native::Interface::Bdi::SwitchportConf


class Native::Interface::Bdi::Switchport : public Entity
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


}; // Native::Interface::Bdi::Switchport


class Native::Interface::Bdi::Arp : public Entity
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

}; // Native::Interface::Bdi::Arp


class Native::Interface::Bdi::Backup : public Entity
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

        class Delay; //type: Native::Interface::Bdi::Backup::Delay
        class Interface_; //type: Native::Interface::Bdi::Backup::Interface_
        class Load; //type: Native::Interface::Bdi::Backup::Load

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Bdi::Backup::Delay> delay;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Bdi::Backup::Interface_> interface;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Bdi::Backup::Load> load;
        
}; // Native::Interface::Bdi::Backup


class Native::Interface::Bdi::Backup::Delay : public Entity
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

}; // Native::Interface::Bdi::Backup::Delay


class Native::Interface::Bdi::Backup::Interface_ : public Entity
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
        class AtmSubinterface; //type: Native::Interface::Bdi::Backup::Interface_::AtmSubinterface
        class AtmAcrsubinterface; //type: Native::Interface::Bdi::Backup::Interface_::AtmAcrsubinterface
        class LispSubinterface; //type: Native::Interface::Bdi::Backup::Interface_::LispSubinterface
        class PortChannelSubinterface; //type: Native::Interface::Bdi::Backup::Interface_::PortChannelSubinterface

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Bdi::Backup::Interface_::AtmAcrsubinterface> atm_acrsubinterface;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Bdi::Backup::Interface_::AtmSubinterface> atm_subinterface;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Bdi::Backup::Interface_::LispSubinterface> lisp_subinterface;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Bdi::Backup::Interface_::PortChannelSubinterface> port_channel_subinterface;
        
}; // Native::Interface::Bdi::Backup::Interface_


class Native::Interface::Bdi::Backup::Interface_::AtmSubinterface : public Entity
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

}; // Native::Interface::Bdi::Backup::Interface_::AtmSubinterface


class Native::Interface::Bdi::Backup::Interface_::AtmAcrsubinterface : public Entity
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

}; // Native::Interface::Bdi::Backup::Interface_::AtmAcrsubinterface


class Native::Interface::Bdi::Backup::Interface_::LispSubinterface : public Entity
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

}; // Native::Interface::Bdi::Backup::Interface_::LispSubinterface


class Native::Interface::Bdi::Backup::Interface_::PortChannelSubinterface : public Entity
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

}; // Native::Interface::Bdi::Backup::Interface_::PortChannelSubinterface


class Native::Interface::Bdi::Backup::Load : public Entity
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

}; // Native::Interface::Bdi::Backup::Load


class Native::Interface::Bdi::Cemoudp : public Entity
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

        class Reserve; //type: Native::Interface::Bdi::Cemoudp::Reserve

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Bdi::Cemoudp::Reserve> reserve;
        
}; // Native::Interface::Bdi::Cemoudp


class Native::Interface::Bdi::Cemoudp::Reserve : public Entity
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

}; // Native::Interface::Bdi::Cemoudp::Reserve


class Native::Interface::Bdi::CwsTunnel : public Entity
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
        class Out; //type: Native::Interface::Bdi::CwsTunnel::Out

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Bdi::CwsTunnel::Out> out;
        
}; // Native::Interface::Bdi::CwsTunnel


class Native::Interface::Bdi::CwsTunnel::Out : public Entity
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

}; // Native::Interface::Bdi::CwsTunnel::Out


class Native::Interface::Bdi::L2ProtocolTunnel : public Entity
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
        class DropThreshold; //type: Native::Interface::Bdi::L2ProtocolTunnel::DropThreshold
        class ShutdownThreshold; //type: Native::Interface::Bdi::L2ProtocolTunnel::ShutdownThreshold

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Bdi::L2ProtocolTunnel::DropThreshold> drop_threshold;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Bdi::L2ProtocolTunnel::ShutdownThreshold> shutdown_threshold;
        
}; // Native::Interface::Bdi::L2ProtocolTunnel

class Native::Interface::Atm::Atm_::BandwidthEnum : public Enum
{
    public:
        static const Enum::YLeaf dynamic;

};

class Native::Interface::Atm::Atm_::Pvp::Xconnect::EncapsulationEnum : public Enum
{
    public:
        static const Enum::YLeaf mpls;
        static const Enum::YLeaf l2tpv3;

};

class Native::Interface::Atm::Atm_::Pvp::Xconnect::SequencingEnum : public Enum
{
    public:
        static const Enum::YLeaf both;
        static const Enum::YLeaf receive;
        static const Enum::YLeaf transmit;

};

class Native::Interface::Atm::Cem::Xconnect::EncapsulationEnum : public Enum
{
    public:
        static const Enum::YLeaf mpls;
        static const Enum::YLeaf l2tpv3;

};

class Native::Interface::Atm::Cem::Xconnect::SequencingEnum : public Enum
{
    public:
        static const Enum::YLeaf both;
        static const Enum::YLeaf receive;
        static const Enum::YLeaf transmit;

};

class Native::Interface::Atm::Pvc::Xconnect::EncapsulationEnum : public Enum
{
    public:
        static const Enum::YLeaf mpls;
        static const Enum::YLeaf l2tpv3;

};

class Native::Interface::Atm::Pvc::Xconnect::SequencingEnum : public Enum
{
    public:
        static const Enum::YLeaf both;
        static const Enum::YLeaf receive;
        static const Enum::YLeaf transmit;

};

class Native::Interface::AtmSubinterface::Atm::Atm_::BandwidthEnum : public Enum
{
    public:
        static const Enum::YLeaf dynamic;

};

class Native::Interface::AtmSubinterface::Atm::Atm_::Pvp::Xconnect::EncapsulationEnum : public Enum
{
    public:
        static const Enum::YLeaf mpls;
        static const Enum::YLeaf l2tpv3;

};

class Native::Interface::AtmSubinterface::Atm::Atm_::Pvp::Xconnect::SequencingEnum : public Enum
{
    public:
        static const Enum::YLeaf both;
        static const Enum::YLeaf receive;
        static const Enum::YLeaf transmit;

};

class Native::Interface::AtmSubinterface::Atm::Cem::Xconnect::EncapsulationEnum : public Enum
{
    public:
        static const Enum::YLeaf mpls;
        static const Enum::YLeaf l2tpv3;

};

class Native::Interface::AtmSubinterface::Atm::Cem::Xconnect::SequencingEnum : public Enum
{
    public:
        static const Enum::YLeaf both;
        static const Enum::YLeaf receive;
        static const Enum::YLeaf transmit;

};

class Native::Interface::AtmSubinterface::Atm::Pvc::Xconnect::EncapsulationEnum : public Enum
{
    public:
        static const Enum::YLeaf mpls;
        static const Enum::YLeaf l2tpv3;

};

class Native::Interface::AtmSubinterface::Atm::Pvc::Xconnect::SequencingEnum : public Enum
{
    public:
        static const Enum::YLeaf both;
        static const Enum::YLeaf receive;
        static const Enum::YLeaf transmit;

};

class Native::Interface::AtmAcr::Atm::BandwidthEnum : public Enum
{
    public:
        static const Enum::YLeaf dynamic;

};

class Native::Interface::AtmAcr::Atm::Pvp::Xconnect::EncapsulationEnum : public Enum
{
    public:
        static const Enum::YLeaf mpls;
        static const Enum::YLeaf l2tpv3;

};

class Native::Interface::AtmAcr::Atm::Pvp::Xconnect::SequencingEnum : public Enum
{
    public:
        static const Enum::YLeaf both;
        static const Enum::YLeaf receive;
        static const Enum::YLeaf transmit;

};

class Native::Interface::AtmAcr::Cem::Xconnect::EncapsulationEnum : public Enum
{
    public:
        static const Enum::YLeaf mpls;
        static const Enum::YLeaf l2tpv3;

};

class Native::Interface::AtmAcr::Cem::Xconnect::SequencingEnum : public Enum
{
    public:
        static const Enum::YLeaf both;
        static const Enum::YLeaf receive;
        static const Enum::YLeaf transmit;

};

class Native::Interface::AtmAcr::Pvc::Xconnect::EncapsulationEnum : public Enum
{
    public:
        static const Enum::YLeaf mpls;
        static const Enum::YLeaf l2tpv3;

};

class Native::Interface::AtmAcr::Pvc::Xconnect::SequencingEnum : public Enum
{
    public:
        static const Enum::YLeaf both;
        static const Enum::YLeaf receive;
        static const Enum::YLeaf transmit;

};

class Native::Interface::AtmAcrsubinterface::AtmAcr::Atm::BandwidthEnum : public Enum
{
    public:
        static const Enum::YLeaf dynamic;

};

class Native::Interface::AtmAcrsubinterface::AtmAcr::Atm::Pvp::Xconnect::EncapsulationEnum : public Enum
{
    public:
        static const Enum::YLeaf mpls;
        static const Enum::YLeaf l2tpv3;

};

class Native::Interface::AtmAcrsubinterface::AtmAcr::Atm::Pvp::Xconnect::SequencingEnum : public Enum
{
    public:
        static const Enum::YLeaf both;
        static const Enum::YLeaf receive;
        static const Enum::YLeaf transmit;

};

class Native::Interface::AtmAcrsubinterface::AtmAcr::Cem::Xconnect::EncapsulationEnum : public Enum
{
    public:
        static const Enum::YLeaf mpls;
        static const Enum::YLeaf l2tpv3;

};

class Native::Interface::AtmAcrsubinterface::AtmAcr::Cem::Xconnect::SequencingEnum : public Enum
{
    public:
        static const Enum::YLeaf both;
        static const Enum::YLeaf receive;
        static const Enum::YLeaf transmit;

};

class Native::Interface::AtmAcrsubinterface::AtmAcr::Pvc::Xconnect::EncapsulationEnum : public Enum
{
    public:
        static const Enum::YLeaf mpls;
        static const Enum::YLeaf l2tpv3;

};

class Native::Interface::AtmAcrsubinterface::AtmAcr::Pvc::Xconnect::SequencingEnum : public Enum
{
    public:
        static const Enum::YLeaf both;
        static const Enum::YLeaf receive;
        static const Enum::YLeaf transmit;

};

class Native::Interface::Bdi::IfStateEnum : public Enum
{
    public:
        static const Enum::YLeaf nhrp;

};

class Native::Interface::Bdi::ServiceInsertionEnum : public Enum
{
    public:
        static const Enum::YLeaf waas;

};

class Native::Interface::Bdi::Backup::Delay::FailureEnum : public Enum
{
    public:
        static const Enum::YLeaf never;

};

class Native::Interface::Bdi::Backup::Delay::SecondaryDisableEnum : public Enum
{
    public:
        static const Enum::YLeaf never;

};

class Native::Interface::Bdi::Backup::Load::KickinEnum : public Enum
{
    public:
        static const Enum::YLeaf never;

};

class Native::Interface::Bdi::Backup::Load::KickoutEnum : public Enum
{
    public:
        static const Enum::YLeaf never;

};


}
}

#endif /* _CISCO_IOS_XE_NATIVE_19_ */

