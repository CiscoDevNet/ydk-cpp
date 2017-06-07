#ifndef _CISCO_IOS_XE_NATIVE_150_
#define _CISCO_IOS_XE_NATIVE_150_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XE_native_0.hpp"
#include "Cisco_IOS_XE_native_149.hpp"

namespace ydk {
namespace Cisco_IOS_XE_native {


class Native::Otv::Isis::Site::LogAdjacencyChanges : public Entity
{
    public:
        LogAdjacencyChanges();
        ~LogAdjacencyChanges();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf all; //type: empty

}; // Native::Otv::Isis::Site::LogAdjacencyChanges


class Native::Otv::Isis::Site::Skeptical : public Entity
{
    public:
        Skeptical();
        ~Skeptical();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf interval; //type: uint32

}; // Native::Otv::Isis::Site::Skeptical


class Native::Otv::Site : public Entity
{
    public:
        Site();
        ~Site();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf bridge_domain; //type: uint16
        class Default_; //type: Native::Otv::Site::Default_
        class Otv_; //type: Native::Otv::Site::Otv_

        std::shared_ptr<Cisco_IOS_XE_native::Native::Otv::Site::Default_> default_;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Otv::Site::Otv_> otv;
        
}; // Native::Otv::Site


class Native::Otv::Site::Default_ : public Entity
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

        class Otv_; //type: Native::Otv::Site::Default_::Otv_

        std::shared_ptr<Cisco_IOS_XE_native::Native::Otv::Site::Default_::Otv_> otv;
        
}; // Native::Otv::Site::Default_


class Native::Otv::Site::Default_::Otv_ : public Entity
{
    public:
        Otv_();
        ~Otv_();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Isis; //type: Native::Otv::Site::Default_::Otv_::Isis

        std::shared_ptr<Cisco_IOS_XE_native::Native::Otv::Site::Default_::Otv_::Isis> isis;
        
}; // Native::Otv::Site::Default_::Otv_


class Native::Otv::Site::Default_::Otv_::Isis : public Entity
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

        YLeaf bfd; //type: empty
        YLeaf hello_multiplier; //type: uint16
        YLeaf priority; //type: uint8
        class Authentication; //type: Native::Otv::Site::Default_::Otv_::Isis::Authentication
        class Hello; //type: Native::Otv::Site::Default_::Otv_::Isis::Hello
        class HelloInterval; //type: Native::Otv::Site::Default_::Otv_::Isis::HelloInterval

        std::shared_ptr<Cisco_IOS_XE_native::Native::Otv::Site::Default_::Otv_::Isis::Authentication> authentication;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Otv::Site::Default_::Otv_::Isis::Hello> hello;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Otv::Site::Default_::Otv_::Isis::HelloInterval> hello_interval;
        
}; // Native::Otv::Site::Default_::Otv_::Isis


class Native::Otv::Site::Default_::Otv_::Isis::Authentication : public Entity
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
        YLeaf mode; //type: ModeEnum
        YLeaf send_only; //type: empty
        class ModeEnum;

}; // Native::Otv::Site::Default_::Otv_::Isis::Authentication


class Native::Otv::Site::Default_::Otv_::Isis::Hello : public Entity
{
    public:
        Hello();
        ~Hello();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Padding; //type: Native::Otv::Site::Default_::Otv_::Isis::Hello::Padding

        std::shared_ptr<Cisco_IOS_XE_native::Native::Otv::Site::Default_::Otv_::Isis::Hello::Padding> padding; // presence node
        
}; // Native::Otv::Site::Default_::Otv_::Isis::Hello


class Native::Otv::Site::Default_::Otv_::Isis::Hello::Padding : public Entity
{
    public:
        Padding();
        ~Padding();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf always; //type: empty

}; // Native::Otv::Site::Default_::Otv_::Isis::Hello::Padding


class Native::Otv::Site::Default_::Otv_::Isis::HelloInterval : public Entity
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

        YLeaf value_; //type: uint16
        YLeaf minimal; //type: empty

}; // Native::Otv::Site::Default_::Otv_::Isis::HelloInterval


class Native::Otv::Site::Otv_ : public Entity
{
    public:
        Otv_();
        ~Otv_();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Isis; //type: Native::Otv::Site::Otv_::Isis

        std::shared_ptr<Cisco_IOS_XE_native::Native::Otv::Site::Otv_::Isis> isis;
        
}; // Native::Otv::Site::Otv_


class Native::Otv::Site::Otv_::Isis : public Entity
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

        YLeaf bfd; //type: empty
        YLeaf hello_multiplier; //type: uint16
        YLeaf priority; //type: uint8
        class Authentication; //type: Native::Otv::Site::Otv_::Isis::Authentication
        class Hello; //type: Native::Otv::Site::Otv_::Isis::Hello
        class HelloInterval; //type: Native::Otv::Site::Otv_::Isis::HelloInterval

        std::shared_ptr<Cisco_IOS_XE_native::Native::Otv::Site::Otv_::Isis::Authentication> authentication;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Otv::Site::Otv_::Isis::Hello> hello;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Otv::Site::Otv_::Isis::HelloInterval> hello_interval;
        
}; // Native::Otv::Site::Otv_::Isis


class Native::Otv::Site::Otv_::Isis::Authentication : public Entity
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
        YLeaf mode; //type: ModeEnum
        YLeaf send_only; //type: empty
        class ModeEnum;

}; // Native::Otv::Site::Otv_::Isis::Authentication


class Native::Otv::Site::Otv_::Isis::Hello : public Entity
{
    public:
        Hello();
        ~Hello();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Padding; //type: Native::Otv::Site::Otv_::Isis::Hello::Padding

        std::shared_ptr<Cisco_IOS_XE_native::Native::Otv::Site::Otv_::Isis::Hello::Padding> padding; // presence node
        
}; // Native::Otv::Site::Otv_::Isis::Hello


class Native::Otv::Site::Otv_::Isis::Hello::Padding : public Entity
{
    public:
        Padding();
        ~Padding();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf always; //type: empty

}; // Native::Otv::Site::Otv_::Isis::Hello::Padding


class Native::Otv::Site::Otv_::Isis::HelloInterval : public Entity
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

        YLeaf value_; //type: uint16
        YLeaf minimal; //type: empty

}; // Native::Otv::Site::Otv_::Isis::HelloInterval


class Native::RemoteManagement : public Entity
{
    public:
        RemoteManagement();
        ~RemoteManagement();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf dmi; //type: empty
        YLeaf restful_api; //type: boolean

}; // Native::RemoteManagement


class Native::VirtualService : public Entity
{
    public:
        VirtualService();
        ~VirtualService();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf name; //type: string
        YLeaf activate; //type: empty
        YLeaf profile; //type: string
        class Ip; //type: Native::VirtualService::Ip
        class Vnic; //type: Native::VirtualService::Vnic

        std::shared_ptr<Cisco_IOS_XE_native::Native::VirtualService::Ip> ip;
        std::shared_ptr<Cisco_IOS_XE_native::Native::VirtualService::Vnic> vnic;
        
}; // Native::VirtualService


class Native::VirtualService::Ip : public Entity
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

        class Shared; //type: Native::VirtualService::Ip::Shared

        std::shared_ptr<Cisco_IOS_XE_native::Native::VirtualService::Ip::Shared> shared;
        
}; // Native::VirtualService::Ip


class Native::VirtualService::Ip::Shared : public Entity
{
    public:
        Shared();
        ~Shared();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class HostInterface; //type: Native::VirtualService::Ip::Shared::HostInterface

        std::shared_ptr<Cisco_IOS_XE_native::Native::VirtualService::Ip::Shared::HostInterface> host_interface;
        
}; // Native::VirtualService::Ip::Shared


class Native::VirtualService::Ip::Shared::HostInterface : public Entity
{
    public:
        HostInterface();
        ~HostInterface();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf fastethernet; //type: string
        YLeaf tengigabitethernet; //type: string
        YLeaf loopback; //type: uint64
        YLeaf vlan; //type: uint16

}; // Native::VirtualService::Ip::Shared::HostInterface


class Native::VirtualService::Vnic : public Entity
{
    public:
        Vnic();
        ~Vnic();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Gateway; //type: Native::VirtualService::Vnic::Gateway
        class Management; //type: Native::VirtualService::Vnic::Management

        std::shared_ptr<Cisco_IOS_XE_native::Native::VirtualService::Vnic::Gateway> gateway;
        std::shared_ptr<Cisco_IOS_XE_native::Native::VirtualService::Vnic::Management> management;
        
}; // Native::VirtualService::Vnic


class Native::VirtualService::Vnic::Gateway : public Entity
{
    public:
        Gateway();
        ~Gateway();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Virtualportgroup; //type: Native::VirtualService::Vnic::Gateway::Virtualportgroup

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::VirtualService::Vnic::Gateway::Virtualportgroup> > virtualportgroup;
        
}; // Native::VirtualService::Vnic::Gateway


class Native::VirtualService::Vnic::Gateway::Virtualportgroup : public Entity
{
    public:
        Virtualportgroup();
        ~Virtualportgroup();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf number; //type: uint16
        class Guest; //type: Native::VirtualService::Vnic::Gateway::Virtualportgroup::Guest

        std::shared_ptr<Cisco_IOS_XE_native::Native::VirtualService::Vnic::Gateway::Virtualportgroup::Guest> guest;
        
}; // Native::VirtualService::Vnic::Gateway::Virtualportgroup


class Native::VirtualService::Vnic::Gateway::Virtualportgroup::Guest : public Entity
{
    public:
        Guest();
        ~Guest();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Ip; //type: Native::VirtualService::Vnic::Gateway::Virtualportgroup::Guest::Ip
        class Ipv6; //type: Native::VirtualService::Vnic::Gateway::Virtualportgroup::Guest::Ipv6

        std::shared_ptr<Cisco_IOS_XE_native::Native::VirtualService::Vnic::Gateway::Virtualportgroup::Guest::Ip> ip;
        std::shared_ptr<Cisco_IOS_XE_native::Native::VirtualService::Vnic::Gateway::Virtualportgroup::Guest::Ipv6> ipv6;
        
}; // Native::VirtualService::Vnic::Gateway::Virtualportgroup::Guest


class Native::VirtualService::Vnic::Gateway::Virtualportgroup::Guest::Ip : public Entity
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

}; // Native::VirtualService::Vnic::Gateway::Virtualportgroup::Guest::Ip


class Native::VirtualService::Vnic::Gateway::Virtualportgroup::Guest::Ipv6 : public Entity
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

        YLeaf address; //type: string

}; // Native::VirtualService::Vnic::Gateway::Virtualportgroup::Guest::Ipv6


class Native::VirtualService::Vnic::Management : public Entity
{
    public:
        Management();
        ~Management();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf gigabitethernet0; //type: empty
        class Guest; //type: Native::VirtualService::Vnic::Management::Guest

        std::shared_ptr<Cisco_IOS_XE_native::Native::VirtualService::Vnic::Management::Guest> guest;
        
}; // Native::VirtualService::Vnic::Management


class Native::VirtualService::Vnic::Management::Guest : public Entity
{
    public:
        Guest();
        ~Guest();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Ip; //type: Native::VirtualService::Vnic::Management::Guest::Ip
        class Ipv6; //type: Native::VirtualService::Vnic::Management::Guest::Ipv6

        std::shared_ptr<Cisco_IOS_XE_native::Native::VirtualService::Vnic::Management::Guest::Ip> ip;
        std::shared_ptr<Cisco_IOS_XE_native::Native::VirtualService::Vnic::Management::Guest::Ipv6> ipv6;
        
}; // Native::VirtualService::Vnic::Management::Guest


class Native::VirtualService::Vnic::Management::Guest::Ip : public Entity
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

}; // Native::VirtualService::Vnic::Management::Guest::Ip


class Native::VirtualService::Vnic::Management::Guest::Ipv6 : public Entity
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

        YLeaf address; //type: string

}; // Native::VirtualService::Vnic::Management::Guest::Ipv6


class Native::Snmp : public Entity
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

        class Ifmib; //type: Native::Snmp::Ifmib
        class Mib; //type: Native::Snmp::Mib

        std::shared_ptr<Cisco_IOS_XE_native::Native::Snmp::Ifmib> ifmib;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Snmp::Mib> mib;
        
}; // Native::Snmp


class Native::Snmp::Ifmib : public Entity
{
    public:
        Ifmib();
        ~Ifmib();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Ifindex; //type: Native::Snmp::Ifmib::Ifindex
        class Ifalias; //type: Native::Snmp::Ifmib::Ifalias

        std::shared_ptr<Cisco_IOS_XE_native::Native::Snmp::Ifmib::Ifalias> ifalias;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Snmp::Ifmib::Ifindex> ifindex;
        
}; // Native::Snmp::Ifmib


class Native::Snmp::Ifmib::Ifindex : public Entity
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

}; // Native::Snmp::Ifmib::Ifindex


class Native::Snmp::Ifmib::Ifalias : public Entity
{
    public:
        Ifalias();
        ~Ifalias();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf long_; //type: empty

}; // Native::Snmp::Ifmib::Ifalias


class Native::Snmp::Mib : public Entity
{
    public:
        Mib();
        ~Mib();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class CommunityMap; //type: Native::Snmp::Mib::CommunityMap
        class Bulkstat; //type: Native::Snmp::Mib::Bulkstat
        class Persist; //type: Native::Snmp::Mib::Persist

        std::shared_ptr<Cisco_IOS_XE_native::Native::Snmp::Mib::Bulkstat> bulkstat;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Snmp::Mib::CommunityMap> community_map;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Snmp::Mib::Persist> persist; // presence node
        
}; // Native::Snmp::Mib


class Native::Snmp::Mib::CommunityMap : public Entity
{
    public:
        CommunityMap();
        ~CommunityMap();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class CommunityMapList; //type: Native::Snmp::Mib::CommunityMap::CommunityMapList

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Snmp::Mib::CommunityMap::CommunityMapList> > community_map_list;
        
}; // Native::Snmp::Mib::CommunityMap


class Native::Snmp::Mib::CommunityMap::CommunityMapList : public Entity
{
    public:
        CommunityMapList();
        ~CommunityMapList();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf name; //type: string
        YLeaf engineid; //type: string

}; // Native::Snmp::Mib::CommunityMap::CommunityMapList


class Native::Snmp::Mib::Bulkstat : public Entity
{
    public:
        Bulkstat();
        ~Bulkstat();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class ObjectList; //type: Native::Snmp::Mib::Bulkstat::ObjectList

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Snmp::Mib::Bulkstat::ObjectList> > object_list;
        
}; // Native::Snmp::Mib::Bulkstat


class Native::Snmp::Mib::Bulkstat::ObjectList : public Entity
{
    public:
        ObjectList();
        ~ObjectList();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf name; //type: string

}; // Native::Snmp::Mib::Bulkstat::ObjectList


class Native::Snmp::Mib::Persist : public Entity
{
    public:
        Persist();
        ~Persist();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf persist_enum; //type: PersistEnumEnum
        class PersistEnumEnum;

}; // Native::Snmp::Mib::Persist


class Native::SnmpServer : public Entity
{
    public:
        SnmpServer();
        ~SnmpServer();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf chassis_id; //type: string
        YLeaf contact; //type: string
        YLeaf location; //type: string
        YLeaf packetsize; //type: uint32
        YLeaf queue_length; //type: uint16
        YLeaf system_shutdown; //type: empty
        YLeaf tftp_server_list; //type: one of uint8, string
        class Community; //type: Native::SnmpServer::Community
        class Context; //type: Native::SnmpServer::Context
        class Enable; //type: Native::SnmpServer::Enable
        class Engineid; //type: Native::SnmpServer::Engineid
        class Group; //type: Native::SnmpServer::Group
        class Host; //type: Native::SnmpServer::Host
        class Ip; //type: Native::SnmpServer::Ip
        class Ifindex; //type: Native::SnmpServer::Ifindex
        class Manager; //type: Native::SnmpServer::Manager
        class SourceInterface; //type: Native::SnmpServer::SourceInterface
        class Trap; //type: Native::SnmpServer::Trap
        class TrapSource; //type: Native::SnmpServer::TrapSource
        class User; //type: Native::SnmpServer::User
        class View; //type: Native::SnmpServer::View

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::SnmpServer::Community> > community;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::SnmpServer::Context> > context;
        std::shared_ptr<Cisco_IOS_XE_native::Native::SnmpServer::Enable> enable;
        std::shared_ptr<Cisco_IOS_XE_native::Native::SnmpServer::Engineid> engineid;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::SnmpServer::Group> > group;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::SnmpServer::Host> > host;
        std::shared_ptr<Cisco_IOS_XE_native::Native::SnmpServer::Ifindex> ifindex;
        std::shared_ptr<Cisco_IOS_XE_native::Native::SnmpServer::Ip> ip;
        std::shared_ptr<Cisco_IOS_XE_native::Native::SnmpServer::Manager> manager; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::SnmpServer::SourceInterface> source_interface;
        std::shared_ptr<Cisco_IOS_XE_native::Native::SnmpServer::Trap> trap;
        std::shared_ptr<Cisco_IOS_XE_native::Native::SnmpServer::TrapSource> trap_source;
        std::shared_ptr<Cisco_IOS_XE_native::Native::SnmpServer::User> user;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::SnmpServer::View> > view;
        
}; // Native::SnmpServer


class Native::SnmpServer::Community : public Entity
{
    public:
        Community();
        ~Community();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf name; //type: string
        YLeaf view; //type: string
        YLeaf ro; //type: empty
        YLeaf rw; //type: empty
        YLeaf ipv6; //type: string
        YLeaf access_list_name; //type: one of uint16, string

}; // Native::SnmpServer::Community


class Native::SnmpServer::Context : public Entity
{
    public:
        Context();
        ~Context();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf name; //type: string

}; // Native::SnmpServer::Context


class Native::SnmpServer::Enable : public Entity
{
    public:
        Enable();
        ~Enable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class EnableChoice; //type: Native::SnmpServer::Enable::EnableChoice

        std::shared_ptr<Cisco_IOS_XE_native::Native::SnmpServer::Enable::EnableChoice> enable_choice;
        
}; // Native::SnmpServer::Enable


class Native::SnmpServer::Enable::EnableChoice : public Entity
{
    public:
        EnableChoice();
        ~EnableChoice();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf informs; //type: empty
        class Traps; //type: Native::SnmpServer::Enable::EnableChoice::Traps

        std::shared_ptr<Cisco_IOS_XE_native::Native::SnmpServer::Enable::EnableChoice::Traps> traps; // presence node
        
}; // Native::SnmpServer::Enable::EnableChoice


class Native::SnmpServer::Enable::EnableChoice::Traps : public Entity
{
    public:
        Traps();
        ~Traps();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf aaa_server; //type: empty
        YLeaf local_auth; //type: empty
        YLeaf authenticate_fail; //type: empty
        YLeaf bfd; //type: empty
        YLeaf bgp; //type: empty
        YLeaf bstun; //type: empty
        YLeaf c2900; //type: empty
        YLeaf casa; //type: empty
        YLeaf ccme; //type: empty
        YLeaf cluster; //type: empty
        YLeaf channel; //type: empty
        YLeaf chassis; //type: empty
        YLeaf cnpd; //type: empty
        YLeaf config; //type: empty
        YLeaf copy_config; //type: empty
        YLeaf config_copy; //type: empty
        YLeaf config_ctid; //type: empty
        YLeaf cpu_threshold; //type: empty
        YLeaf dial; //type: empty
        YLeaf director; //type: empty
        YLeaf dlsw; //type: empty
        YLeaf deauthenticate; //type: empty
        YLeaf disassociate; //type: empty
        YLeaf dnis; //type: empty
        YLeaf dot11_qos; //type: empty
        YLeaf ds0_busyout; //type: empty
        YLeaf ds1; //type: empty
        YLeaf ds1_loopback; //type: empty
        YLeaf ds3; //type: empty
        YLeaf eigrp; //type: empty
        YLeaf entity_; //type: empty
        YLeaf ether_oam; //type: empty
        YLeaf event_manager; //type: empty
        YLeaf flowmon; //type: empty
        YLeaf fru_ctrl; //type: empty
        YLeaf gatekeeper; //type: empty
        YLeaf hsrp; //type: empty
        YLeaf icsudsu; //type: empty
        YLeaf ima; //type: empty
        YLeaf ipmobile; //type: empty
        YLeaf ipmulticast; //type: empty
        YLeaf ipsla; //type: empty
        YLeaf isis; //type: empty
        YLeaf module; //type: empty
        YLeaf msdp; //type: empty
        YLeaf mvpn; //type: empty
        YLeaf pppoe; //type: empty
        YLeaf rep; //type: empty
        YLeaf resource_policy; //type: empty
        YLeaf rf; //type: empty
        YLeaf rogue_ap; //type: empty
        YLeaf rsvp; //type: empty
        YLeaf rtr; //type: empty
        YLeaf sonet; //type: empty
        YLeaf srst; //type: empty
        YLeaf srp; //type: empty
        YLeaf stun; //type: empty
        YLeaf switch_over; //type: empty
        YLeaf syslog; //type: empty
        YLeaf tty; //type: empty
        YLeaf vlancreate; //type: empty
        YLeaf vlandelete; //type: empty
        YLeaf vlan_mac_limit; //type: empty
        YLeaf vlan_membership; //type: empty
        YLeaf voice; //type: empty
        YLeaf vrrp; //type: empty
        YLeaf vsimaster; //type: empty
        YLeaf vtp; //type: empty
        YLeaf wlan_wep; //type: empty
        YLeaf xgcp; //type: empty
        class TrustsecSxp; //type: Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecSxp
        class Vswitch; //type: Native::SnmpServer::Enable::EnableChoice::Traps::Vswitch
        class TrustsecServer; //type: Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecServer
        class Trustsec; //type: Native::SnmpServer::Enable::EnableChoice::Traps::Trustsec
        class TrustsecInterface; //type: Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecInterface
        class TrustsecPolicy; //type: Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecPolicy
        class Ospfv3; //type: Native::SnmpServer::Enable::EnableChoice::Traps::Ospfv3
        class Ike; //type: Native::SnmpServer::Enable::EnableChoice::Traps::Ike
        class Alarms; //type: Native::SnmpServer::Enable::EnableChoice::Traps::Alarms
        class Atm; //type: Native::SnmpServer::Enable::EnableChoice::Traps::Atm
        class AuthFramework; //type: Native::SnmpServer::Enable::EnableChoice::Traps::AuthFramework
        class BgpConf; //type: Native::SnmpServer::Enable::EnableChoice::Traps::BgpConf
        class Bridge; //type: Native::SnmpServer::Enable::EnableChoice::Traps::Bridge
        class Bulkstat; //type: Native::SnmpServer::Enable::EnableChoice::Traps::Bulkstat
        class CallHome; //type: Native::SnmpServer::Enable::EnableChoice::Traps::CallHome
        class C6Kxbar; //type: Native::SnmpServer::Enable::EnableChoice::Traps::C6Kxbar
        class Cef; //type: Native::SnmpServer::Enable::EnableChoice::Traps::Cef
        class Cpu; //type: Native::SnmpServer::Enable::EnableChoice::Traps::Cpu
        class Csg; //type: Native::SnmpServer::Enable::EnableChoice::Traps::Csg
        class Dot1X; //type: Native::SnmpServer::Enable::EnableChoice::Traps::Dot1X
        class Dsp; //type: Native::SnmpServer::Enable::EnableChoice::Traps::Dsp
        class Energywise; //type: Native::SnmpServer::Enable::EnableChoice::Traps::Energywise
        class EntityDiag; //type: Native::SnmpServer::Enable::EnableChoice::Traps::EntityDiag
        class Envmon; //type: Native::SnmpServer::Enable::EnableChoice::Traps::Envmon
        class Errdisable; //type: Native::SnmpServer::Enable::EnableChoice::Traps::Errdisable
        class Ethernet; //type: Native::SnmpServer::Enable::EnableChoice::Traps::Ethernet
        class Firewall; //type: Native::SnmpServer::Enable::EnableChoice::Traps::Firewall
        class Flash; //type: Native::SnmpServer::Enable::EnableChoice::Traps::Flash
        class FlexLinks; //type: Native::SnmpServer::Enable::EnableChoice::Traps::FlexLinks
        class FrameRelay; //type: Native::SnmpServer::Enable::EnableChoice::Traps::FrameRelay
        class Ipsec; //type: Native::SnmpServer::Enable::EnableChoice::Traps::Ipsec
        class Isakmp; //type: Native::SnmpServer::Enable::EnableChoice::Traps::Isakmp
        class Isdn; //type: Native::SnmpServer::Enable::EnableChoice::Traps::Isdn
        class L2Tc; //type: Native::SnmpServer::Enable::EnableChoice::Traps::L2Tc
        class L2Tun; //type: Native::SnmpServer::Enable::EnableChoice::Traps::L2Tun
        class License; //type: Native::SnmpServer::Enable::EnableChoice::Traps::License
        class MacNotification; //type: Native::SnmpServer::Enable::EnableChoice::Traps::MacNotification
        class MacNotification2; //type: Native::SnmpServer::Enable::EnableChoice::Traps::MacNotification2
        class Memory; //type: Native::SnmpServer::Enable::EnableChoice::Traps::Memory
        class Mpls; //type: Native::SnmpServer::Enable::EnableChoice::Traps::Mpls
        class Nhrp; //type: Native::SnmpServer::Enable::EnableChoice::Traps::Nhrp
        class Ospf; //type: Native::SnmpServer::Enable::EnableChoice::Traps::Ospf
        class Pim; //type: Native::SnmpServer::Enable::EnableChoice::Traps::Pim
        class Plogd; //type: Native::SnmpServer::Enable::EnableChoice::Traps::Plogd
        class PortSecurity; //type: Native::SnmpServer::Enable::EnableChoice::Traps::PortSecurity
        class PowerEthernet; //type: Native::SnmpServer::Enable::EnableChoice::Traps::PowerEthernet
        class Pw; //type: Native::SnmpServer::Enable::EnableChoice::Traps::Pw
        class Slb; //type: Native::SnmpServer::Enable::EnableChoice::Traps::Slb
        class Snmp; //type: Native::SnmpServer::Enable::EnableChoice::Traps::Snmp
        class Stackwise; //type: Native::SnmpServer::Enable::EnableChoice::Traps::Stackwise
        class Stpx; //type: Native::SnmpServer::Enable::EnableChoice::Traps::Stpx
        class Transceiver; //type: Native::SnmpServer::Enable::EnableChoice::Traps::Transceiver
        class Udld; //type: Native::SnmpServer::Enable::EnableChoice::Traps::Udld
        class Vrfmib; //type: Native::SnmpServer::Enable::EnableChoice::Traps::Vrfmib
        class Vstack; //type: Native::SnmpServer::Enable::EnableChoice::Traps::Vstack
        class Wireless; //type: Native::SnmpServer::Enable::EnableChoice::Traps::Wireless

        std::shared_ptr<Cisco_IOS_XE_native::Native::SnmpServer::Enable::EnableChoice::Traps::Alarms> alarms; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::SnmpServer::Enable::EnableChoice::Traps::Atm> atm;
        std::shared_ptr<Cisco_IOS_XE_native::Native::SnmpServer::Enable::EnableChoice::Traps::AuthFramework> auth_framework; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::SnmpServer::Enable::EnableChoice::Traps::BgpConf> bgp_conf;
        std::shared_ptr<Cisco_IOS_XE_native::Native::SnmpServer::Enable::EnableChoice::Traps::Bridge> bridge; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::SnmpServer::Enable::EnableChoice::Traps::Bulkstat> bulkstat; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::SnmpServer::Enable::EnableChoice::Traps::C6Kxbar> c6kxbar; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::SnmpServer::Enable::EnableChoice::Traps::CallHome> call_home; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::SnmpServer::Enable::EnableChoice::Traps::Cef> cef;
        std::shared_ptr<Cisco_IOS_XE_native::Native::SnmpServer::Enable::EnableChoice::Traps::Cpu> cpu; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::SnmpServer::Enable::EnableChoice::Traps::Csg> csg; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::SnmpServer::Enable::EnableChoice::Traps::Dot1X> dot1x;
        std::shared_ptr<Cisco_IOS_XE_native::Native::SnmpServer::Enable::EnableChoice::Traps::Dsp> dsp; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::SnmpServer::Enable::EnableChoice::Traps::Energywise> energywise; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::SnmpServer::Enable::EnableChoice::Traps::EntityDiag> entity_diag; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::SnmpServer::Enable::EnableChoice::Traps::Envmon> envmon; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::SnmpServer::Enable::EnableChoice::Traps::Errdisable> errdisable; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::SnmpServer::Enable::EnableChoice::Traps::Ethernet> ethernet;
        std::shared_ptr<Cisco_IOS_XE_native::Native::SnmpServer::Enable::EnableChoice::Traps::Firewall> firewall; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::SnmpServer::Enable::EnableChoice::Traps::Flash> flash; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::SnmpServer::Enable::EnableChoice::Traps::FlexLinks> flex_links; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::SnmpServer::Enable::EnableChoice::Traps::FrameRelay> frame_relay; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::SnmpServer::Enable::EnableChoice::Traps::Ike> ike;
        std::shared_ptr<Cisco_IOS_XE_native::Native::SnmpServer::Enable::EnableChoice::Traps::Ipsec> ipsec;
        std::shared_ptr<Cisco_IOS_XE_native::Native::SnmpServer::Enable::EnableChoice::Traps::Isakmp> isakmp;
        std::shared_ptr<Cisco_IOS_XE_native::Native::SnmpServer::Enable::EnableChoice::Traps::Isdn> isdn; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::SnmpServer::Enable::EnableChoice::Traps::L2Tc> l2tc; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::SnmpServer::Enable::EnableChoice::Traps::L2Tun> l2tun;
        std::shared_ptr<Cisco_IOS_XE_native::Native::SnmpServer::Enable::EnableChoice::Traps::License> license; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::SnmpServer::Enable::EnableChoice::Traps::MacNotification> mac_notification; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::SnmpServer::Enable::EnableChoice::Traps::MacNotification2> mac_notification2; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::SnmpServer::Enable::EnableChoice::Traps::Memory> memory; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::SnmpServer::Enable::EnableChoice::Traps::Mpls> mpls; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::SnmpServer::Enable::EnableChoice::Traps::Nhrp> nhrp; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::SnmpServer::Enable::EnableChoice::Traps::Ospf> ospf;
        std::shared_ptr<Cisco_IOS_XE_native::Native::SnmpServer::Enable::EnableChoice::Traps::Ospfv3> ospfv3;
        std::shared_ptr<Cisco_IOS_XE_native::Native::SnmpServer::Enable::EnableChoice::Traps::Pim> pim; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::SnmpServer::Enable::EnableChoice::Traps::Plogd> plogd; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::SnmpServer::Enable::EnableChoice::Traps::PortSecurity> port_security; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::SnmpServer::Enable::EnableChoice::Traps::PowerEthernet> power_ethernet;
        std::shared_ptr<Cisco_IOS_XE_native::Native::SnmpServer::Enable::EnableChoice::Traps::Pw> pw; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::SnmpServer::Enable::EnableChoice::Traps::Slb> slb; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::SnmpServer::Enable::EnableChoice::Traps::Snmp> snmp;
        std::shared_ptr<Cisco_IOS_XE_native::Native::SnmpServer::Enable::EnableChoice::Traps::Stackwise> stackwise; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::SnmpServer::Enable::EnableChoice::Traps::Stpx> stpx; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::SnmpServer::Enable::EnableChoice::Traps::Transceiver> transceiver;
        std::shared_ptr<Cisco_IOS_XE_native::Native::SnmpServer::Enable::EnableChoice::Traps::Trustsec> trustsec; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecInterface> trustsec_interface; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecPolicy> trustsec_policy; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecServer> trustsec_server; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecSxp> trustsec_sxp; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::SnmpServer::Enable::EnableChoice::Traps::Udld> udld; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::SnmpServer::Enable::EnableChoice::Traps::Vrfmib> vrfmib;
        std::shared_ptr<Cisco_IOS_XE_native::Native::SnmpServer::Enable::EnableChoice::Traps::Vstack> vstack; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::SnmpServer::Enable::EnableChoice::Traps::Vswitch> vswitch; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::SnmpServer::Enable::EnableChoice::Traps::Wireless> wireless; // presence node
        
}; // Native::SnmpServer::Enable::EnableChoice::Traps


class Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecSxp : public Entity
{
    public:
        TrustsecSxp();
        ~TrustsecSxp();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf binding_conflict; //type: empty
        YLeaf binding_err; //type: empty
        YLeaf binding_expn_fail; //type: empty
        YLeaf conn_config_err; //type: empty
        YLeaf conn_down; //type: empty
        YLeaf conn_srcaddr_err; //type: empty
        YLeaf conn_up; //type: empty
        YLeaf msg_parse_err; //type: empty
        YLeaf oper_nodeid_change; //type: empty

}; // Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecSxp


class Native::SnmpServer::Enable::EnableChoice::Traps::Vswitch : public Entity
{
    public:
        Vswitch();
        ~Vswitch();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class DualActive; //type: Native::SnmpServer::Enable::EnableChoice::Traps::Vswitch::DualActive

        std::shared_ptr<Cisco_IOS_XE_native::Native::SnmpServer::Enable::EnableChoice::Traps::Vswitch::DualActive> dual_active; // presence node
        
}; // Native::SnmpServer::Enable::EnableChoice::Traps::Vswitch


class Native::SnmpServer::Enable::EnableChoice::Traps::Vswitch::DualActive : public Entity
{
    public:
        DualActive();
        ~DualActive();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf vsl; //type: empty

}; // Native::SnmpServer::Enable::EnableChoice::Traps::Vswitch::DualActive


class Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecServer : public Entity
{
    public:
        TrustsecServer();
        ~TrustsecServer();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class RadiusServer; //type: Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecServer::RadiusServer

        std::shared_ptr<Cisco_IOS_XE_native::Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecServer::RadiusServer> radius_server; // presence node
        
}; // Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecServer


class Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecServer::RadiusServer : public Entity
{
    public:
        RadiusServer();
        ~RadiusServer();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf provision_secret; //type: empty

}; // Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecServer::RadiusServer


class Native::SnmpServer::Enable::EnableChoice::Traps::Trustsec : public Entity
{
    public:
        Trustsec();
        ~Trustsec();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class AuthzFileError; //type: Native::SnmpServer::Enable::EnableChoice::Traps::Trustsec::AuthzFileError

        std::shared_ptr<Cisco_IOS_XE_native::Native::SnmpServer::Enable::EnableChoice::Traps::Trustsec::AuthzFileError> authz_file_error; // presence node
        
}; // Native::SnmpServer::Enable::EnableChoice::Traps::Trustsec


class Native::SnmpServer::Enable::EnableChoice::Traps::Trustsec::AuthzFileError : public Entity
{
    public:
        AuthzFileError();
        ~AuthzFileError();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class CacheFileError; //type: Native::SnmpServer::Enable::EnableChoice::Traps::Trustsec::AuthzFileError::CacheFileError

        std::shared_ptr<Cisco_IOS_XE_native::Native::SnmpServer::Enable::EnableChoice::Traps::Trustsec::AuthzFileError::CacheFileError> cache_file_error; // presence node
        
}; // Native::SnmpServer::Enable::EnableChoice::Traps::Trustsec::AuthzFileError


class Native::SnmpServer::Enable::EnableChoice::Traps::Trustsec::AuthzFileError::CacheFileError : public Entity
{
    public:
        CacheFileError();
        ~CacheFileError();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class KeystoreFileError; //type: Native::SnmpServer::Enable::EnableChoice::Traps::Trustsec::AuthzFileError::CacheFileError::KeystoreFileError

        std::shared_ptr<Cisco_IOS_XE_native::Native::SnmpServer::Enable::EnableChoice::Traps::Trustsec::AuthzFileError::CacheFileError::KeystoreFileError> keystore_file_error; // presence node
        
}; // Native::SnmpServer::Enable::EnableChoice::Traps::Trustsec::AuthzFileError::CacheFileError


class Native::SnmpServer::Enable::EnableChoice::Traps::Trustsec::AuthzFileError::CacheFileError::KeystoreFileError : public Entity
{
    public:
        KeystoreFileError();
        ~KeystoreFileError();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class KeystoreSyncFail; //type: Native::SnmpServer::Enable::EnableChoice::Traps::Trustsec::AuthzFileError::CacheFileError::KeystoreFileError::KeystoreSyncFail

        std::shared_ptr<Cisco_IOS_XE_native::Native::SnmpServer::Enable::EnableChoice::Traps::Trustsec::AuthzFileError::CacheFileError::KeystoreFileError::KeystoreSyncFail> keystore_sync_fail; // presence node
        
}; // Native::SnmpServer::Enable::EnableChoice::Traps::Trustsec::AuthzFileError::CacheFileError::KeystoreFileError


class Native::SnmpServer::Enable::EnableChoice::Traps::Trustsec::AuthzFileError::CacheFileError::KeystoreFileError::KeystoreSyncFail : public Entity
{
    public:
        KeystoreSyncFail();
        ~KeystoreSyncFail();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class RandomNumberFail; //type: Native::SnmpServer::Enable::EnableChoice::Traps::Trustsec::AuthzFileError::CacheFileError::KeystoreFileError::KeystoreSyncFail::RandomNumberFail

        std::shared_ptr<Cisco_IOS_XE_native::Native::SnmpServer::Enable::EnableChoice::Traps::Trustsec::AuthzFileError::CacheFileError::KeystoreFileError::KeystoreSyncFail::RandomNumberFail> random_number_fail; // presence node
        
}; // Native::SnmpServer::Enable::EnableChoice::Traps::Trustsec::AuthzFileError::CacheFileError::KeystoreFileError::KeystoreSyncFail


class Native::SnmpServer::Enable::EnableChoice::Traps::Trustsec::AuthzFileError::CacheFileError::KeystoreFileError::KeystoreSyncFail::RandomNumberFail : public Entity
{
    public:
        RandomNumberFail();
        ~RandomNumberFail();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf src_entropy_fail; //type: empty

}; // Native::SnmpServer::Enable::EnableChoice::Traps::Trustsec::AuthzFileError::CacheFileError::KeystoreFileError::KeystoreSyncFail::RandomNumberFail


class Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecInterface : public Entity
{
    public:
        TrustsecInterface();
        ~TrustsecInterface();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Unauthorized; //type: Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecInterface::Unauthorized

        std::shared_ptr<Cisco_IOS_XE_native::Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecInterface::Unauthorized> unauthorized; // presence node
        
}; // Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecInterface


class Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecInterface::Unauthorized : public Entity
{
    public:
        Unauthorized();
        ~Unauthorized();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class SapFail; //type: Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecInterface::Unauthorized::SapFail

        std::shared_ptr<Cisco_IOS_XE_native::Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecInterface::Unauthorized::SapFail> sap_fail; // presence node
        
}; // Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecInterface::Unauthorized


class Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecInterface::Unauthorized::SapFail : public Entity
{
    public:
        SapFail();
        ~SapFail();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class AuthcFail; //type: Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecInterface::Unauthorized::SapFail::AuthcFail

        std::shared_ptr<Cisco_IOS_XE_native::Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecInterface::Unauthorized::SapFail::AuthcFail> authc_fail; // presence node
        
}; // Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecInterface::Unauthorized::SapFail


class Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecInterface::Unauthorized::SapFail::AuthcFail : public Entity
{
    public:
        AuthcFail();
        ~AuthcFail();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class SupplicantFail; //type: Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecInterface::Unauthorized::SapFail::AuthcFail::SupplicantFail

        std::shared_ptr<Cisco_IOS_XE_native::Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecInterface::Unauthorized::SapFail::AuthcFail::SupplicantFail> supplicant_fail; // presence node
        
}; // Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecInterface::Unauthorized::SapFail::AuthcFail


class Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecInterface::Unauthorized::SapFail::AuthcFail::SupplicantFail : public Entity
{
    public:
        SupplicantFail();
        ~SupplicantFail();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf authz_fail; //type: empty

}; // Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecInterface::Unauthorized::SapFail::AuthcFail::SupplicantFail


class Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecPolicy : public Entity
{
    public:
        TrustsecPolicy();
        ~TrustsecPolicy();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class PeerPolicyUpdated; //type: Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecPolicy::PeerPolicyUpdated

        std::shared_ptr<Cisco_IOS_XE_native::Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecPolicy::PeerPolicyUpdated> peer_policy_updated; // presence node
        
}; // Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecPolicy


class Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecPolicy::PeerPolicyUpdated : public Entity
{
    public:
        PeerPolicyUpdated();
        ~PeerPolicyUpdated();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf authz_sgacl_fail; //type: empty

}; // Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecPolicy::PeerPolicyUpdated


class Native::SnmpServer::Enable::EnableChoice::Traps::Ospfv3 : public Entity
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

        YLeaf state_change; //type: empty
        YLeaf errors; //type: empty

}; // Native::SnmpServer::Enable::EnableChoice::Traps::Ospfv3


class Native::SnmpServer::Enable::EnableChoice::Traps::Ike : public Entity
{
    public:
        Ike();
        ~Ike();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Policy; //type: Native::SnmpServer::Enable::EnableChoice::Traps::Ike::Policy
        class Tunnel; //type: Native::SnmpServer::Enable::EnableChoice::Traps::Ike::Tunnel

        std::shared_ptr<Cisco_IOS_XE_native::Native::SnmpServer::Enable::EnableChoice::Traps::Ike::Policy> policy;
        std::shared_ptr<Cisco_IOS_XE_native::Native::SnmpServer::Enable::EnableChoice::Traps::Ike::Tunnel> tunnel;
        
}; // Native::SnmpServer::Enable::EnableChoice::Traps::Ike


class Native::SnmpServer::Enable::EnableChoice::Traps::Ike::Policy : public Entity
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

        YLeaf add; //type: empty
        YLeaf delete_; //type: empty

}; // Native::SnmpServer::Enable::EnableChoice::Traps::Ike::Policy


class Native::SnmpServer::Enable::EnableChoice::Traps::Ike::Tunnel : public Entity
{
    public:
        Tunnel();
        ~Tunnel();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf start; //type: empty
        YLeaf stop; //type: empty

}; // Native::SnmpServer::Enable::EnableChoice::Traps::Ike::Tunnel


class Native::SnmpServer::Enable::EnableChoice::Traps::Alarms : public Entity
{
    public:
        Alarms();
        ~Alarms();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf alarm_type; //type: one of uint8, enumeration
        class AlarmTypeEnum;

}; // Native::SnmpServer::Enable::EnableChoice::Traps::Alarms


class Native::SnmpServer::Enable::EnableChoice::Traps::Atm : public Entity
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

        class Pvc; //type: Native::SnmpServer::Enable::EnableChoice::Traps::Atm::Pvc
        class Subif; //type: Native::SnmpServer::Enable::EnableChoice::Traps::Atm::Subif

        std::shared_ptr<Cisco_IOS_XE_native::Native::SnmpServer::Enable::EnableChoice::Traps::Atm::Pvc> pvc; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::SnmpServer::Enable::EnableChoice::Traps::Atm::Subif> subif; // presence node
        
}; // Native::SnmpServer::Enable::EnableChoice::Traps::Atm


class Native::SnmpServer::Enable::EnableChoice::Traps::Atm::Pvc : public Entity
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

        YLeaf interval; //type: uint16
        YLeaf fail_interval; //type: uint16
        class Extension; //type: Native::SnmpServer::Enable::EnableChoice::Traps::Atm::Pvc::Extension

        std::shared_ptr<Cisco_IOS_XE_native::Native::SnmpServer::Enable::EnableChoice::Traps::Atm::Pvc::Extension> extension;
        
}; // Native::SnmpServer::Enable::EnableChoice::Traps::Atm::Pvc


class Native::SnmpServer::Enable::EnableChoice::Traps::Atm::Pvc::Extension : public Entity
{
    public:
        Extension();
        ~Extension();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf down; //type: empty
        YLeaf up; //type: empty
        YLeaf mibversion; //type: MibversionEnum
        class Oam; //type: Native::SnmpServer::Enable::EnableChoice::Traps::Atm::Pvc::Extension::Oam

        std::shared_ptr<Cisco_IOS_XE_native::Native::SnmpServer::Enable::EnableChoice::Traps::Atm::Pvc::Extension::Oam> oam;
                class MibversionEnum;

}; // Native::SnmpServer::Enable::EnableChoice::Traps::Atm::Pvc::Extension


class Native::SnmpServer::Enable::EnableChoice::Traps::Atm::Pvc::Extension::Oam : public Entity
{
    public:
        Oam();
        ~Oam();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Failure; //type: Native::SnmpServer::Enable::EnableChoice::Traps::Atm::Pvc::Extension::Oam::Failure

        std::shared_ptr<Cisco_IOS_XE_native::Native::SnmpServer::Enable::EnableChoice::Traps::Atm::Pvc::Extension::Oam::Failure> failure;
        
}; // Native::SnmpServer::Enable::EnableChoice::Traps::Atm::Pvc::Extension::Oam


class Native::SnmpServer::Enable::EnableChoice::Traps::Atm::Pvc::Extension::Oam::Failure : public Entity
{
    public:
        Failure();
        ~Failure();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf loopback; //type: empty

}; // Native::SnmpServer::Enable::EnableChoice::Traps::Atm::Pvc::Extension::Oam::Failure


class Native::SnmpServer::Enable::EnableChoice::Traps::Atm::Subif : public Entity
{
    public:
        Subif();
        ~Subif();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf interval; //type: uint16
        YLeaf count; //type: uint16

}; // Native::SnmpServer::Enable::EnableChoice::Traps::Atm::Subif


class Native::SnmpServer::Enable::EnableChoice::Traps::AuthFramework : public Entity
{
    public:
        AuthFramework();
        ~AuthFramework();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf sec_violation; //type: empty

}; // Native::SnmpServer::Enable::EnableChoice::Traps::AuthFramework


class Native::SnmpServer::Enable::EnableChoice::Traps::BgpConf : public Entity
{
    public:
        BgpConf();
        ~BgpConf();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf cbgp2; //type: empty

}; // Native::SnmpServer::Enable::EnableChoice::Traps::BgpConf


class Native::SnmpServer::Enable::EnableChoice::Traps::Bridge : public Entity
{
    public:
        Bridge();
        ~Bridge();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf newroot; //type: empty
        YLeaf topologychange; //type: empty

}; // Native::SnmpServer::Enable::EnableChoice::Traps::Bridge


class Native::SnmpServer::Enable::EnableChoice::Traps::Bulkstat : public Entity
{
    public:
        Bulkstat();
        ~Bulkstat();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf collection; //type: empty
        YLeaf transfer; //type: empty

}; // Native::SnmpServer::Enable::EnableChoice::Traps::Bulkstat


class Native::SnmpServer::Enable::EnableChoice::Traps::CallHome : public Entity
{
    public:
        CallHome();
        ~CallHome();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf message_send_fail; //type: empty
        YLeaf server_fail; //type: empty

}; // Native::SnmpServer::Enable::EnableChoice::Traps::CallHome


class Native::SnmpServer::Enable::EnableChoice::Traps::C6Kxbar : public Entity
{
    public:
        C6Kxbar();
        ~C6Kxbar();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf intbus_crcexcd; //type: empty
        YLeaf intbus_crcrcvrd; //type: empty
        YLeaf swbus; //type: empty

}; // Native::SnmpServer::Enable::EnableChoice::Traps::C6Kxbar


class Native::SnmpServer::Enable::EnableChoice::Traps::Cef : public Entity
{
    public:
        Cef();
        ~Cef();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf resource_failure; //type: empty
        YLeaf peer_state_change; //type: empty
        YLeaf peer_fib_state_change; //type: empty
        YLeaf inconsistency; //type: empty

}; // Native::SnmpServer::Enable::EnableChoice::Traps::Cef


class Native::SnmpServer::Enable::EnableChoice::Traps::Cpu : public Entity
{
    public:
        Cpu();
        ~Cpu();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf threshold; //type: empty

}; // Native::SnmpServer::Enable::EnableChoice::Traps::Cpu


class Native::SnmpServer::Enable::EnableChoice::Traps::Csg : public Entity
{
    public:
        Csg();
        ~Csg();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf agent; //type: empty
        YLeaf database; //type: empty
        YLeaf quota_server; //type: empty

}; // Native::SnmpServer::Enable::EnableChoice::Traps::Csg


class Native::SnmpServer::Enable::EnableChoice::Traps::Dot1X : public Entity
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

        YLeaf auth_fail_vlan; //type: empty
        YLeaf guest_vlan; //type: empty
        YLeaf no_auth_fail_vlan; //type: empty
        YLeaf no_guest_vlan; //type: empty

}; // Native::SnmpServer::Enable::EnableChoice::Traps::Dot1X


class Native::SnmpServer::Enable::EnableChoice::Traps::Dsp : public Entity
{
    public:
        Dsp();
        ~Dsp();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf card_status; //type: empty
        YLeaf oper_state; //type: empty

}; // Native::SnmpServer::Enable::EnableChoice::Traps::Dsp


class Native::SnmpServer::Enable::EnableChoice::Traps::Energywise : public Entity
{
    public:
        Energywise();
        ~Energywise();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf event_occured; //type: empty
        YLeaf level_change; //type: empty
        YLeaf neighbor_added; //type: empty
        YLeaf neighbor_deleted; //type: empty

}; // Native::SnmpServer::Enable::EnableChoice::Traps::Energywise


class Native::SnmpServer::Enable::EnableChoice::Traps::EntityDiag : public Entity
{
    public:
        EntityDiag();
        ~EntityDiag();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf boot_up_fail; //type: empty
        YLeaf hm_test_recover; //type: empty
        YLeaf hm_thresh_reached; //type: empty
        YLeaf scheduled_test_fail; //type: empty

}; // Native::SnmpServer::Enable::EnableChoice::Traps::EntityDiag


class Native::SnmpServer::Enable::EnableChoice::Traps::Envmon : public Entity
{
    public:
        Envmon();
        ~Envmon();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf fan; //type: empty
        YLeaf shutdown; //type: empty
        YLeaf supply; //type: empty
        YLeaf temperature; //type: empty
        YLeaf status; //type: empty

}; // Native::SnmpServer::Enable::EnableChoice::Traps::Envmon


class Native::SnmpServer::Enable::EnableChoice::Traps::Errdisable : public Entity
{
    public:
        Errdisable();
        ~Errdisable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf notification_rate; //type: uint16

}; // Native::SnmpServer::Enable::EnableChoice::Traps::Errdisable


class Native::SnmpServer::Enable::EnableChoice::Traps::Ethernet : public Entity
{
    public:
        Ethernet();
        ~Ethernet();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Cfm; //type: Native::SnmpServer::Enable::EnableChoice::Traps::Ethernet::Cfm
        class Evc; //type: Native::SnmpServer::Enable::EnableChoice::Traps::Ethernet::Evc

        std::shared_ptr<Cisco_IOS_XE_native::Native::SnmpServer::Enable::EnableChoice::Traps::Ethernet::Cfm> cfm;
        std::shared_ptr<Cisco_IOS_XE_native::Native::SnmpServer::Enable::EnableChoice::Traps::Ethernet::Evc> evc; // presence node
        
}; // Native::SnmpServer::Enable::EnableChoice::Traps::Ethernet


class Native::SnmpServer::Enable::EnableChoice::Traps::Ethernet::Cfm : public Entity
{
    public:
        Cfm();
        ~Cfm();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf alarm; //type: empty
        class Cc; //type: Native::SnmpServer::Enable::EnableChoice::Traps::Ethernet::Cfm::Cc
        class Crosscheck; //type: Native::SnmpServer::Enable::EnableChoice::Traps::Ethernet::Cfm::Crosscheck

        std::shared_ptr<Cisco_IOS_XE_native::Native::SnmpServer::Enable::EnableChoice::Traps::Ethernet::Cfm::Cc> cc; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::SnmpServer::Enable::EnableChoice::Traps::Ethernet::Cfm::Crosscheck> crosscheck; // presence node
        
}; // Native::SnmpServer::Enable::EnableChoice::Traps::Ethernet::Cfm


class Native::SnmpServer::Enable::EnableChoice::Traps::Ethernet::Cfm::Cc : public Entity
{
    public:
        Cc();
        ~Cc();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf config; //type: empty
        YLeaf cross_connect; //type: empty
        YLeaf loop; //type: empty
        YLeaf mep_down; //type: empty
        YLeaf mep_up; //type: empty

}; // Native::SnmpServer::Enable::EnableChoice::Traps::Ethernet::Cfm::Cc


class Native::SnmpServer::Enable::EnableChoice::Traps::Ethernet::Cfm::Crosscheck : public Entity
{
    public:
        Crosscheck();
        ~Crosscheck();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf mep_missing; //type: empty
        YLeaf mep_unknown; //type: empty
        YLeaf service_up; //type: empty

}; // Native::SnmpServer::Enable::EnableChoice::Traps::Ethernet::Cfm::Crosscheck


class Native::SnmpServer::Enable::EnableChoice::Traps::Ethernet::Evc : public Entity
{
    public:
        Evc();
        ~Evc();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf create; //type: empty
        YLeaf delete_; //type: empty
        YLeaf status; //type: empty

}; // Native::SnmpServer::Enable::EnableChoice::Traps::Ethernet::Evc


class Native::SnmpServer::Enable::EnableChoice::Traps::Firewall : public Entity
{
    public:
        Firewall();
        ~Firewall();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf serverstatus; //type: empty

}; // Native::SnmpServer::Enable::EnableChoice::Traps::Firewall


class Native::SnmpServer::Enable::EnableChoice::Traps::Flash : public Entity
{
    public:
        Flash();
        ~Flash();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf insertion; //type: empty
        YLeaf removal; //type: empty

}; // Native::SnmpServer::Enable::EnableChoice::Traps::Flash


class Native::SnmpServer::Enable::EnableChoice::Traps::FlexLinks : public Entity
{
    public:
        FlexLinks();
        ~FlexLinks();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf status; //type: empty

}; // Native::SnmpServer::Enable::EnableChoice::Traps::FlexLinks


class Native::SnmpServer::Enable::EnableChoice::Traps::FrameRelay : public Entity
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

        class Multilink; //type: Native::SnmpServer::Enable::EnableChoice::Traps::FrameRelay::Multilink
        class Subif; //type: Native::SnmpServer::Enable::EnableChoice::Traps::FrameRelay::Subif

        std::shared_ptr<Cisco_IOS_XE_native::Native::SnmpServer::Enable::EnableChoice::Traps::FrameRelay::Multilink> multilink;
        std::shared_ptr<Cisco_IOS_XE_native::Native::SnmpServer::Enable::EnableChoice::Traps::FrameRelay::Subif> subif; // presence node
        
}; // Native::SnmpServer::Enable::EnableChoice::Traps::FrameRelay


class Native::SnmpServer::Enable::EnableChoice::Traps::FrameRelay::Multilink : public Entity
{
    public:
        Multilink();
        ~Multilink();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf bundle_mismatch; //type: empty

}; // Native::SnmpServer::Enable::EnableChoice::Traps::FrameRelay::Multilink


class Native::SnmpServer::Enable::EnableChoice::Traps::FrameRelay::Subif : public Entity
{
    public:
        Subif();
        ~Subif();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;


}; // Native::SnmpServer::Enable::EnableChoice::Traps::FrameRelay::Subif


class Native::SnmpServer::Enable::EnableChoice::Traps::Ipsec : public Entity
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

        YLeaf too_many_sas; //type: empty
        class Cryptomap; //type: Native::SnmpServer::Enable::EnableChoice::Traps::Ipsec::Cryptomap
        class Tunnel; //type: Native::SnmpServer::Enable::EnableChoice::Traps::Ipsec::Tunnel

        std::shared_ptr<Cisco_IOS_XE_native::Native::SnmpServer::Enable::EnableChoice::Traps::Ipsec::Cryptomap> cryptomap;
        std::shared_ptr<Cisco_IOS_XE_native::Native::SnmpServer::Enable::EnableChoice::Traps::Ipsec::Tunnel> tunnel;
        
}; // Native::SnmpServer::Enable::EnableChoice::Traps::Ipsec


class Native::SnmpServer::Enable::EnableChoice::Traps::Ipsec::Cryptomap : public Entity
{
    public:
        Cryptomap();
        ~Cryptomap();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf add; //type: empty
        YLeaf attach; //type: empty
        YLeaf delete_; //type: empty
        YLeaf detach; //type: empty

}; // Native::SnmpServer::Enable::EnableChoice::Traps::Ipsec::Cryptomap


class Native::SnmpServer::Enable::EnableChoice::Traps::Ipsec::Tunnel : public Entity
{
    public:
        Tunnel();
        ~Tunnel();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf start; //type: empty
        YLeaf stop; //type: empty

}; // Native::SnmpServer::Enable::EnableChoice::Traps::Ipsec::Tunnel


class Native::SnmpServer::Enable::EnableChoice::Traps::Isakmp : public Entity
{
    public:
        Isakmp();
        ~Isakmp();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Policy; //type: Native::SnmpServer::Enable::EnableChoice::Traps::Isakmp::Policy
        class Tunnel; //type: Native::SnmpServer::Enable::EnableChoice::Traps::Isakmp::Tunnel

        std::shared_ptr<Cisco_IOS_XE_native::Native::SnmpServer::Enable::EnableChoice::Traps::Isakmp::Policy> policy;
        std::shared_ptr<Cisco_IOS_XE_native::Native::SnmpServer::Enable::EnableChoice::Traps::Isakmp::Tunnel> tunnel;
        
}; // Native::SnmpServer::Enable::EnableChoice::Traps::Isakmp


class Native::SnmpServer::Enable::EnableChoice::Traps::Isakmp::Policy : public Entity
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

        YLeaf add; //type: empty
        YLeaf delete_; //type: empty

}; // Native::SnmpServer::Enable::EnableChoice::Traps::Isakmp::Policy


class Native::SnmpServer::Enable::EnableChoice::Traps::Isakmp::Tunnel : public Entity
{
    public:
        Tunnel();
        ~Tunnel();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf start; //type: empty
        YLeaf stop; //type: empty

}; // Native::SnmpServer::Enable::EnableChoice::Traps::Isakmp::Tunnel


class Native::SnmpServer::Enable::EnableChoice::Traps::Isdn : public Entity
{
    public:
        Isdn();
        ~Isdn();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf call_information; //type: empty
        YLeaf chan_not_avail; //type: empty
        YLeaf ietf; //type: empty
        YLeaf layer2; //type: empty

}; // Native::SnmpServer::Enable::EnableChoice::Traps::Isdn


class Native::SnmpServer::Enable::EnableChoice::Traps::L2Tc : public Entity
{
    public:
        L2Tc();
        ~L2Tc();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf sys_threshold; //type: empty
        YLeaf threshold; //type: empty

}; // Native::SnmpServer::Enable::EnableChoice::Traps::L2Tc


class Native::SnmpServer::Enable::EnableChoice::Traps::L2Tun : public Entity
{
    public:
        L2Tun();
        ~L2Tun();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf session; //type: empty
        class Pseudowire; //type: Native::SnmpServer::Enable::EnableChoice::Traps::L2Tun::Pseudowire

        std::shared_ptr<Cisco_IOS_XE_native::Native::SnmpServer::Enable::EnableChoice::Traps::L2Tun::Pseudowire> pseudowire;
        
}; // Native::SnmpServer::Enable::EnableChoice::Traps::L2Tun


class Native::SnmpServer::Enable::EnableChoice::Traps::L2Tun::Pseudowire : public Entity
{
    public:
        Pseudowire();
        ~Pseudowire();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf status; //type: empty

}; // Native::SnmpServer::Enable::EnableChoice::Traps::L2Tun::Pseudowire


class Native::SnmpServer::Enable::EnableChoice::Traps::License : public Entity
{
    public:
        License();
        ~License();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf deploy; //type: empty
        YLeaf error; //type: empty
        YLeaf usage; //type: empty

}; // Native::SnmpServer::Enable::EnableChoice::Traps::License


class Native::SnmpServer::Enable::EnableChoice::Traps::MacNotification : public Entity
{
    public:
        MacNotification();
        ~MacNotification();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf change; //type: empty
        YLeaf move; //type: empty
        YLeaf threshold; //type: empty

}; // Native::SnmpServer::Enable::EnableChoice::Traps::MacNotification


class Native::SnmpServer::Enable::EnableChoice::Traps::MacNotification2 : public Entity
{
    public:
        MacNotification2();
        ~MacNotification2();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf change; //type: empty
        YLeaf move; //type: empty
        YLeaf threshold; //type: empty

}; // Native::SnmpServer::Enable::EnableChoice::Traps::MacNotification2


class Native::SnmpServer::Enable::EnableChoice::Traps::Memory : public Entity
{
    public:
        Memory();
        ~Memory();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf bufferpeak; //type: empty

}; // Native::SnmpServer::Enable::EnableChoice::Traps::Memory


class Native::SnmpServer::Enable::EnableChoice::Traps::Mpls : public Entity
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

        YLeaf vpn; //type: empty
        class TrafficEng; //type: Native::SnmpServer::Enable::EnableChoice::Traps::Mpls::TrafficEng
        class FastReroute; //type: Native::SnmpServer::Enable::EnableChoice::Traps::Mpls::FastReroute
        class Rfc; //type: Native::SnmpServer::Enable::EnableChoice::Traps::Mpls::Rfc
        class Ldp; //type: Native::SnmpServer::Enable::EnableChoice::Traps::Mpls::Ldp

        std::shared_ptr<Cisco_IOS_XE_native::Native::SnmpServer::Enable::EnableChoice::Traps::Mpls::FastReroute> fast_reroute; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::SnmpServer::Enable::EnableChoice::Traps::Mpls::Ldp> ldp; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::SnmpServer::Enable::EnableChoice::Traps::Mpls::Rfc> rfc; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::SnmpServer::Enable::EnableChoice::Traps::Mpls::TrafficEng> traffic_eng; // presence node
        
}; // Native::SnmpServer::Enable::EnableChoice::Traps::Mpls


class Native::SnmpServer::Enable::EnableChoice::Traps::Mpls::TrafficEng : public Entity
{
    public:
        TrafficEng();
        ~TrafficEng();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf up; //type: empty
        YLeaf down; //type: empty
        YLeaf reroute; //type: empty

}; // Native::SnmpServer::Enable::EnableChoice::Traps::Mpls::TrafficEng


class Native::SnmpServer::Enable::EnableChoice::Traps::Mpls::FastReroute : public Entity
{
    public:
        FastReroute();
        ~FastReroute();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf protected_; //type: empty

}; // Native::SnmpServer::Enable::EnableChoice::Traps::Mpls::FastReroute


class Native::SnmpServer::Enable::EnableChoice::Traps::Mpls::Rfc : public Entity
{
    public:
        Rfc();
        ~Rfc();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ldp; //type: empty

}; // Native::SnmpServer::Enable::EnableChoice::Traps::Mpls::Rfc


class Native::SnmpServer::Enable::EnableChoice::Traps::Mpls::Ldp : public Entity
{
    public:
        Ldp();
        ~Ldp();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf pv_limit; //type: empty
        YLeaf session_down; //type: empty
        YLeaf session_up; //type: empty
        YLeaf threshold; //type: empty

}; // Native::SnmpServer::Enable::EnableChoice::Traps::Mpls::Ldp


class Native::SnmpServer::Enable::EnableChoice::Traps::Nhrp : public Entity
{
    public:
        Nhrp();
        ~Nhrp();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Nhs; //type: Native::SnmpServer::Enable::EnableChoice::Traps::Nhrp::Nhs
        class Nhc; //type: Native::SnmpServer::Enable::EnableChoice::Traps::Nhrp::Nhc
        class Nhp; //type: Native::SnmpServer::Enable::EnableChoice::Traps::Nhrp::Nhp
        class QuotaExceeded; //type: Native::SnmpServer::Enable::EnableChoice::Traps::Nhrp::QuotaExceeded

        std::shared_ptr<Cisco_IOS_XE_native::Native::SnmpServer::Enable::EnableChoice::Traps::Nhrp::Nhc> nhc; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::SnmpServer::Enable::EnableChoice::Traps::Nhrp::Nhp> nhp; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::SnmpServer::Enable::EnableChoice::Traps::Nhrp::Nhs> nhs; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::SnmpServer::Enable::EnableChoice::Traps::Nhrp::QuotaExceeded> quota_exceeded; // presence node
        
}; // Native::SnmpServer::Enable::EnableChoice::Traps::Nhrp


class Native::SnmpServer::Enable::EnableChoice::Traps::Nhrp::Nhs : public Entity
{
    public:
        Nhs();
        ~Nhs();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;


}; // Native::SnmpServer::Enable::EnableChoice::Traps::Nhrp::Nhs


class Native::SnmpServer::Enable::EnableChoice::Traps::Nhrp::Nhc : public Entity
{
    public:
        Nhc();
        ~Nhc();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;


}; // Native::SnmpServer::Enable::EnableChoice::Traps::Nhrp::Nhc


class Native::SnmpServer::Enable::EnableChoice::Traps::Nhrp::Nhp : public Entity
{
    public:
        Nhp();
        ~Nhp();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;


}; // Native::SnmpServer::Enable::EnableChoice::Traps::Nhrp::Nhp


class Native::SnmpServer::Enable::EnableChoice::Traps::Nhrp::QuotaExceeded : public Entity
{
    public:
        QuotaExceeded();
        ~QuotaExceeded();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;


}; // Native::SnmpServer::Enable::EnableChoice::Traps::Nhrp::QuotaExceeded


class Native::SnmpServer::Enable::EnableChoice::Traps::Ospf : public Entity
{
    public:
        Ospf();
        ~Ospf();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class StateChange; //type: Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::StateChange
        class Errors; //type: Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::Errors
        class Retransmit; //type: Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::Retransmit
        class Lsa; //type: Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::Lsa
        class CiscoSpecific; //type: Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::CiscoSpecific

        std::shared_ptr<Cisco_IOS_XE_native::Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::CiscoSpecific> cisco_specific; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::Errors> errors; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::Lsa> lsa; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::Retransmit> retransmit; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::StateChange> state_change; // presence node
        
}; // Native::SnmpServer::Enable::EnableChoice::Traps::Ospf


class Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::StateChange : public Entity
{
    public:
        StateChange();
        ~StateChange();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf if_state_change; //type: empty
        YLeaf neighbor_state_change; //type: empty
        YLeaf virtif_state_change; //type: empty
        YLeaf virtneighbor_state_change; //type: empty

}; // Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::StateChange


class Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::Errors : public Entity
{
    public:
        Errors();
        ~Errors();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;


}; // Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::Errors


class Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::Retransmit : public Entity
{
    public:
        Retransmit();
        ~Retransmit();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf packets; //type: empty
        YLeaf virt_packets; //type: empty

}; // Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::Retransmit


class Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::Lsa : public Entity
{
    public:
        Lsa();
        ~Lsa();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf lsa_maxage; //type: empty
        YLeaf lsa_originate; //type: empty

}; // Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::Lsa


class Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::CiscoSpecific : public Entity
{
    public:
        CiscoSpecific();
        ~CiscoSpecific();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class StateChange; //type: Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::CiscoSpecific::StateChange
        class Errors; //type: Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::CiscoSpecific::Errors
        class Errdisable; //type: Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::CiscoSpecific::Errdisable
        class Retransmit; //type: Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::CiscoSpecific::Retransmit
        class Lsa; //type: Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::CiscoSpecific::Lsa

        std::shared_ptr<Cisco_IOS_XE_native::Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::CiscoSpecific::Errdisable> errdisable; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::CiscoSpecific::Errors> errors; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::CiscoSpecific::Lsa> lsa; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::CiscoSpecific::Retransmit> retransmit; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::CiscoSpecific::StateChange> state_change; // presence node
        
}; // Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::CiscoSpecific


class Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::CiscoSpecific::StateChange : public Entity
{
    public:
        StateChange();
        ~StateChange();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf nssa_trans_change; //type: empty
        class Shamlink; //type: Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::CiscoSpecific::StateChange::Shamlink

        std::shared_ptr<Cisco_IOS_XE_native::Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::CiscoSpecific::StateChange::Shamlink> shamlink; // presence node
        
}; // Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::CiscoSpecific::StateChange


class Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::CiscoSpecific::StateChange::Shamlink : public Entity
{
    public:
        Shamlink();
        ~Shamlink();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf interface; //type: empty
        YLeaf interface_old; //type: empty
        YLeaf neighbor; //type: empty

}; // Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::CiscoSpecific::StateChange::Shamlink


class Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::CiscoSpecific::Errors : public Entity
{
    public:
        Errors();
        ~Errors();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;


}; // Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::CiscoSpecific::Errors


class Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::CiscoSpecific::Errdisable : public Entity
{
    public:
        Errdisable();
        ~Errdisable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf notification_rate; //type: uint16

}; // Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::CiscoSpecific::Errdisable


class Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::CiscoSpecific::Retransmit : public Entity
{
    public:
        Retransmit();
        ~Retransmit();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;


}; // Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::CiscoSpecific::Retransmit


class Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::CiscoSpecific::Lsa : public Entity
{
    public:
        Lsa();
        ~Lsa();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf lsa_maxage; //type: empty
        YLeaf lsa_originate; //type: empty

}; // Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::CiscoSpecific::Lsa


class Native::SnmpServer::Enable::EnableChoice::Traps::Pim : public Entity
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

        YLeaf invalid_pim_message; //type: empty
        YLeaf neighbor_change; //type: empty
        YLeaf rp_mapping_change; //type: empty

}; // Native::SnmpServer::Enable::EnableChoice::Traps::Pim


class Native::SnmpServer::Enable::EnableChoice::Traps::Plogd : public Entity
{
    public:
        Plogd();
        ~Plogd();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;


}; // Native::SnmpServer::Enable::EnableChoice::Traps::Plogd


class Native::SnmpServer::Enable::EnableChoice::Traps::PortSecurity : public Entity
{
    public:
        PortSecurity();
        ~PortSecurity();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf trap_rate; //type: uint16

}; // Native::SnmpServer::Enable::EnableChoice::Traps::PortSecurity


class Native::SnmpServer::Enable::EnableChoice::Traps::PowerEthernet : public Entity
{
    public:
        PowerEthernet();
        ~PowerEthernet();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf group; //type: string
        YLeaf police; //type: empty

}; // Native::SnmpServer::Enable::EnableChoice::Traps::PowerEthernet


class Native::SnmpServer::Enable::EnableChoice::Traps::Pw : public Entity
{
    public:
        Pw();
        ~Pw();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf vc; //type: empty

}; // Native::SnmpServer::Enable::EnableChoice::Traps::Pw


class Native::SnmpServer::Enable::EnableChoice::Traps::Slb : public Entity
{
    public:
        Slb();
        ~Slb();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf csrp; //type: empty
        YLeaf real; //type: empty
        YLeaf virtual_; //type: empty

}; // Native::SnmpServer::Enable::EnableChoice::Traps::Slb


class Native::SnmpServer::Enable::EnableChoice::Traps::Snmp : public Entity
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

        YLeaf authentication; //type: empty
        YLeaf coldstart; //type: empty
        YLeaf linkdown; //type: empty
        YLeaf linkup; //type: empty
        YLeaf warmstart; //type: empty

}; // Native::SnmpServer::Enable::EnableChoice::Traps::Snmp


class Native::SnmpServer::Enable::EnableChoice::Traps::Stackwise : public Entity
{
    public:
        Stackwise();
        ~Stackwise();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf gls; //type: empty
        YLeaf ils; //type: empty
        YLeaf srls; //type: empty
        YLeaf insufficient_power; //type: empty
        YLeaf invalid_input_current; //type: empty
        YLeaf invalid_output_current; //type: empty
        YLeaf member_removed; //type: empty
        YLeaf member_upgrade_notification; //type: empty
        YLeaf new_master; //type: empty
        YLeaf new_member; //type: empty
        YLeaf port_change; //type: empty
        YLeaf power_budget_warning; //type: empty
        YLeaf power_invalid_topology; //type: empty
        YLeaf power_link_status_changed; //type: empty
        YLeaf power_oper_status_changed; //type: empty
        YLeaf power_priority_conflict; //type: empty
        YLeaf power_version_mismatch; //type: empty
        YLeaf ring_redundant; //type: empty
        YLeaf stack_mismatch; //type: empty
        YLeaf unbalanced_power_supplies; //type: empty
        YLeaf under_budget; //type: empty
        YLeaf under_voltage; //type: empty

}; // Native::SnmpServer::Enable::EnableChoice::Traps::Stackwise


class Native::SnmpServer::Enable::EnableChoice::Traps::Stpx : public Entity
{
    public:
        Stpx();
        ~Stpx();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf inconsistency; //type: empty
        YLeaf root_inconsistency; //type: empty
        YLeaf loop_inconsistency; //type: empty

}; // Native::SnmpServer::Enable::EnableChoice::Traps::Stpx


class Native::SnmpServer::Enable::EnableChoice::Traps::Transceiver : public Entity
{
    public:
        Transceiver();
        ~Transceiver();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf all; //type: empty

}; // Native::SnmpServer::Enable::EnableChoice::Traps::Transceiver


class Native::SnmpServer::Enable::EnableChoice::Traps::Udld : public Entity
{
    public:
        Udld();
        ~Udld();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf link_fail_rpt; //type: empty
        YLeaf status_change; //type: empty

}; // Native::SnmpServer::Enable::EnableChoice::Traps::Udld


class Native::SnmpServer::Enable::EnableChoice::Traps::Vrfmib : public Entity
{
    public:
        Vrfmib();
        ~Vrfmib();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf vrf_up; //type: empty
        YLeaf vrf_down; //type: empty
        YLeaf vnet_trunk_up; //type: empty
        YLeaf vnet_trunk_down; //type: empty

}; // Native::SnmpServer::Enable::EnableChoice::Traps::Vrfmib

class Native::Otv::Site::Default_::Otv_::Isis::Authentication::ModeEnum : public Enum
{
    public:
        static const Enum::YLeaf md5;
        static const Enum::YLeaf text;

};

class Native::Otv::Site::Otv_::Isis::Authentication::ModeEnum : public Enum
{
    public:
        static const Enum::YLeaf md5;
        static const Enum::YLeaf text;

};

class Native::Snmp::Mib::Persist::PersistEnumEnum : public Enum
{
    public:
        static const Enum::YLeaf cbqos;
        static const Enum::YLeaf circuit;
        static const Enum::YLeaf v3mibs;

};

class Native::SnmpServer::Enable::EnableChoice::Traps::Alarms::AlarmTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf critical;
        static const Enum::YLeaf informational;
        static const Enum::YLeaf major;
        static const Enum::YLeaf minor;

};

class Native::SnmpServer::Enable::EnableChoice::Traps::Atm::Pvc::Extension::MibversionEnum : public Enum
{
    public:
        static const Enum::YLeaf Y_1;
        static const Enum::YLeaf Y_2;

};


}
}

#endif /* _CISCO_IOS_XE_NATIVE_150_ */

