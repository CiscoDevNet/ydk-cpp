#ifndef _UDP_MIB_
#define _UDP_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>


namespace cisco_ios_xe {
namespace UDP_MIB {

class UdpMib : public ydk::Entity
{
    public:
        UdpMib();
        ~UdpMib();

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

        class Udp; //type: UdpMib::Udp
        class Udptable; //type: UdpMib::Udptable
        class Udpendpointtable; //type: UdpMib::Udpendpointtable

        std::shared_ptr<UDP_MIB::UdpMib::Udp> udp;
        std::shared_ptr<UDP_MIB::UdpMib::Udpendpointtable> udpendpointtable;
        std::shared_ptr<UDP_MIB::UdpMib::Udptable> udptable;
        
}; // UdpMib


class UdpMib::Udp : public ydk::Entity
{
    public:
        Udp();
        ~Udp();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf udpindatagrams; //type: uint32
        ydk::YLeaf udpnoports; //type: uint32
        ydk::YLeaf udpinerrors; //type: uint32
        ydk::YLeaf udpoutdatagrams; //type: uint32
        ydk::YLeaf udphcindatagrams; //type: uint64
        ydk::YLeaf udphcoutdatagrams; //type: uint64

}; // UdpMib::Udp


class UdpMib::Udptable : public ydk::Entity
{
    public:
        Udptable();
        ~Udptable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Udpentry; //type: UdpMib::Udptable::Udpentry

        std::vector<std::shared_ptr<UDP_MIB::UdpMib::Udptable::Udpentry> > udpentry;
        
}; // UdpMib::Udptable


class UdpMib::Udptable::Udpentry : public ydk::Entity
{
    public:
        Udpentry();
        ~Udpentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf udplocaladdress; //type: string
        ydk::YLeaf udplocalport; //type: int32

}; // UdpMib::Udptable::Udpentry


class UdpMib::Udpendpointtable : public ydk::Entity
{
    public:
        Udpendpointtable();
        ~Udpendpointtable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Udpendpointentry; //type: UdpMib::Udpendpointtable::Udpendpointentry

        std::vector<std::shared_ptr<UDP_MIB::UdpMib::Udpendpointtable::Udpendpointentry> > udpendpointentry;
        
}; // UdpMib::Udpendpointtable


class UdpMib::Udpendpointtable::Udpendpointentry : public ydk::Entity
{
    public:
        Udpendpointentry();
        ~Udpendpointentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf udpendpointlocaladdresstype; //type: Inetaddresstype
        ydk::YLeaf udpendpointlocaladdress; //type: binary
        ydk::YLeaf udpendpointlocalport; //type: uint16
        ydk::YLeaf udpendpointremoteaddresstype; //type: Inetaddresstype
        ydk::YLeaf udpendpointremoteaddress; //type: binary
        ydk::YLeaf udpendpointremoteport; //type: uint16
        ydk::YLeaf udpendpointinstance; //type: uint32
        ydk::YLeaf udpendpointprocess; //type: uint32

}; // UdpMib::Udpendpointtable::Udpendpointentry


}
}

#endif /* _UDP_MIB_ */

