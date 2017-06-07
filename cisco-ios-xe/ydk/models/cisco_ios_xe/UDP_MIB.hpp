#ifndef _UDP_MIB_
#define _UDP_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>


namespace ydk {
namespace UDP_MIB {

class UdpMib : public Entity
{
    public:
        UdpMib();
        ~UdpMib();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;
        std::shared_ptr<Entity> clone_ptr() const override;
        augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;

        class Udp; //type: UdpMib::Udp
        class Udptable; //type: UdpMib::Udptable
        class Udpendpointtable; //type: UdpMib::Udpendpointtable

        std::shared_ptr<UDP_MIB::UdpMib::Udp> udp;
        std::shared_ptr<UDP_MIB::UdpMib::Udpendpointtable> udpendpointtable;
        std::shared_ptr<UDP_MIB::UdpMib::Udptable> udptable;
        
}; // UdpMib


class UdpMib::Udp : public Entity
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

        YLeaf udpindatagrams; //type: uint32
        YLeaf udpnoports; //type: uint32
        YLeaf udpinerrors; //type: uint32
        YLeaf udpoutdatagrams; //type: uint32
        YLeaf udphcindatagrams; //type: uint64
        YLeaf udphcoutdatagrams; //type: uint64

}; // UdpMib::Udp


class UdpMib::Udptable : public Entity
{
    public:
        Udptable();
        ~Udptable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Udpentry; //type: UdpMib::Udptable::Udpentry

        std::vector<std::shared_ptr<UDP_MIB::UdpMib::Udptable::Udpentry> > udpentry;
        
}; // UdpMib::Udptable


class UdpMib::Udptable::Udpentry : public Entity
{
    public:
        Udpentry();
        ~Udpentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf udplocaladdress; //type: string
        YLeaf udplocalport; //type: int32

}; // UdpMib::Udptable::Udpentry


class UdpMib::Udpendpointtable : public Entity
{
    public:
        Udpendpointtable();
        ~Udpendpointtable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Udpendpointentry; //type: UdpMib::Udpendpointtable::Udpendpointentry

        std::vector<std::shared_ptr<UDP_MIB::UdpMib::Udpendpointtable::Udpendpointentry> > udpendpointentry;
        
}; // UdpMib::Udpendpointtable


class UdpMib::Udpendpointtable::Udpendpointentry : public Entity
{
    public:
        Udpendpointentry();
        ~Udpendpointentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf udpendpointlocaladdresstype; //type: InetaddresstypeEnum
        YLeaf udpendpointlocaladdress; //type: binary
        YLeaf udpendpointlocalport; //type: uint16
        YLeaf udpendpointremoteaddresstype; //type: InetaddresstypeEnum
        YLeaf udpendpointremoteaddress; //type: binary
        YLeaf udpendpointremoteport; //type: uint16
        YLeaf udpendpointinstance; //type: uint32
        YLeaf udpendpointprocess; //type: uint32

}; // UdpMib::Udpendpointtable::Udpendpointentry


}
}

#endif /* _UDP_MIB_ */

