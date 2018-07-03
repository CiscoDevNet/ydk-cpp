#ifndef _UDP_MIB_
#define _UDP_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>


namespace cisco_ios_xe {
namespace UDP_MIB {

class UDPMIB : public ydk::Entity
{
    public:
        UDPMIB();
        ~UDPMIB();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
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

        class Udp; //type: UDPMIB::Udp
        class UdpTable; //type: UDPMIB::UdpTable
        class UdpEndpointTable; //type: UDPMIB::UdpEndpointTable

        std::shared_ptr<cisco_ios_xe::UDP_MIB::UDPMIB::Udp> udp;
        std::shared_ptr<cisco_ios_xe::UDP_MIB::UDPMIB::UdpTable> udptable;
        std::shared_ptr<cisco_ios_xe::UDP_MIB::UDPMIB::UdpEndpointTable> udpendpointtable;
        
}; // UDPMIB


class UDPMIB::Udp : public ydk::Entity
{
    public:
        Udp();
        ~Udp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf udpindatagrams; //type: uint32
        ydk::YLeaf udpnoports; //type: uint32
        ydk::YLeaf udpinerrors; //type: uint32
        ydk::YLeaf udpoutdatagrams; //type: uint32
        ydk::YLeaf udphcindatagrams; //type: uint64
        ydk::YLeaf udphcoutdatagrams; //type: uint64

}; // UDPMIB::Udp


class UDPMIB::UdpTable : public ydk::Entity
{
    public:
        UdpTable();
        ~UdpTable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class UdpEntry; //type: UDPMIB::UdpTable::UdpEntry

        ydk::YList udpentry;
        
}; // UDPMIB::UdpTable


class UDPMIB::UdpTable::UdpEntry : public ydk::Entity
{
    public:
        UdpEntry();
        ~UdpEntry();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf udplocaladdress; //type: string
        ydk::YLeaf udplocalport; //type: int32

}; // UDPMIB::UdpTable::UdpEntry


class UDPMIB::UdpEndpointTable : public ydk::Entity
{
    public:
        UdpEndpointTable();
        ~UdpEndpointTable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class UdpEndpointEntry; //type: UDPMIB::UdpEndpointTable::UdpEndpointEntry

        ydk::YList udpendpointentry;
        
}; // UDPMIB::UdpEndpointTable


class UDPMIB::UdpEndpointTable::UdpEndpointEntry : public ydk::Entity
{
    public:
        UdpEndpointEntry();
        ~UdpEndpointEntry();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf udpendpointlocaladdresstype; //type: InetAddressType
        ydk::YLeaf udpendpointlocaladdress; //type: binary
        ydk::YLeaf udpendpointlocalport; //type: uint16
        ydk::YLeaf udpendpointremoteaddresstype; //type: InetAddressType
        ydk::YLeaf udpendpointremoteaddress; //type: binary
        ydk::YLeaf udpendpointremoteport; //type: uint16
        ydk::YLeaf udpendpointinstance; //type: uint32
        ydk::YLeaf udpendpointprocess; //type: uint32

}; // UDPMIB::UdpEndpointTable::UdpEndpointEntry


}
}

#endif /* _UDP_MIB_ */

