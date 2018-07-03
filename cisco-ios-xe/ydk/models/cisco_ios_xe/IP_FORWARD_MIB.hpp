#ifndef _IP_FORWARD_MIB_
#define _IP_FORWARD_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>


namespace cisco_ios_xe {
namespace IP_FORWARD_MIB {

class IPFORWARDMIB : public ydk::Entity
{
    public:
        IPFORWARDMIB();
        ~IPFORWARDMIB();

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

        class IpForward; //type: IPFORWARDMIB::IpForward
        class IpForwardTable; //type: IPFORWARDMIB::IpForwardTable
        class IpCidrRouteTable; //type: IPFORWARDMIB::IpCidrRouteTable

        std::shared_ptr<cisco_ios_xe::IP_FORWARD_MIB::IPFORWARDMIB::IpForward> ipforward;
        std::shared_ptr<cisco_ios_xe::IP_FORWARD_MIB::IPFORWARDMIB::IpForwardTable> ipforwardtable;
        std::shared_ptr<cisco_ios_xe::IP_FORWARD_MIB::IPFORWARDMIB::IpCidrRouteTable> ipcidrroutetable;
        
}; // IPFORWARDMIB


class IPFORWARDMIB::IpForward : public ydk::Entity
{
    public:
        IpForward();
        ~IpForward();

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

        ydk::YLeaf ipforwardnumber; //type: uint32
        ydk::YLeaf ipcidrroutenumber; //type: uint32

}; // IPFORWARDMIB::IpForward


class IPFORWARDMIB::IpForwardTable : public ydk::Entity
{
    public:
        IpForwardTable();
        ~IpForwardTable();

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

        class IpForwardEntry; //type: IPFORWARDMIB::IpForwardTable::IpForwardEntry

        ydk::YList ipforwardentry;
        
}; // IPFORWARDMIB::IpForwardTable


class IPFORWARDMIB::IpForwardTable::IpForwardEntry : public ydk::Entity
{
    public:
        IpForwardEntry();
        ~IpForwardEntry();

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

        ydk::YLeaf ipforwarddest; //type: string
        ydk::YLeaf ipforwardproto; //type: IpForwardProto
        ydk::YLeaf ipforwardpolicy; //type: int32
        ydk::YLeaf ipforwardnexthop; //type: string
        ydk::YLeaf ipforwardmask; //type: string
        ydk::YLeaf ipforwardifindex; //type: int32
        ydk::YLeaf ipforwardtype; //type: IpForwardType
        ydk::YLeaf ipforwardage; //type: int32
        ydk::YLeaf ipforwardinfo; //type: string
        ydk::YLeaf ipforwardnexthopas; //type: int32
        ydk::YLeaf ipforwardmetric1; //type: int32
        ydk::YLeaf ipforwardmetric2; //type: int32
        ydk::YLeaf ipforwardmetric3; //type: int32
        ydk::YLeaf ipforwardmetric4; //type: int32
        ydk::YLeaf ipforwardmetric5; //type: int32
        class IpForwardProto;
        class IpForwardType;

}; // IPFORWARDMIB::IpForwardTable::IpForwardEntry


class IPFORWARDMIB::IpCidrRouteTable : public ydk::Entity
{
    public:
        IpCidrRouteTable();
        ~IpCidrRouteTable();

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

        class IpCidrRouteEntry; //type: IPFORWARDMIB::IpCidrRouteTable::IpCidrRouteEntry

        ydk::YList ipcidrrouteentry;
        
}; // IPFORWARDMIB::IpCidrRouteTable


class IPFORWARDMIB::IpCidrRouteTable::IpCidrRouteEntry : public ydk::Entity
{
    public:
        IpCidrRouteEntry();
        ~IpCidrRouteEntry();

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

        ydk::YLeaf ipcidrroutedest; //type: string
        ydk::YLeaf ipcidrroutemask; //type: string
        ydk::YLeaf ipcidrroutetos; //type: int32
        ydk::YLeaf ipcidrroutenexthop; //type: string
        ydk::YLeaf ipcidrrouteifindex; //type: int32
        ydk::YLeaf ipcidrroutetype; //type: IpCidrRouteType
        ydk::YLeaf ipcidrrouteproto; //type: IpCidrRouteProto
        ydk::YLeaf ipcidrrouteage; //type: int32
        ydk::YLeaf ipcidrrouteinfo; //type: string
        ydk::YLeaf ipcidrroutenexthopas; //type: int32
        ydk::YLeaf ipcidrroutemetric1; //type: int32
        ydk::YLeaf ipcidrroutemetric2; //type: int32
        ydk::YLeaf ipcidrroutemetric3; //type: int32
        ydk::YLeaf ipcidrroutemetric4; //type: int32
        ydk::YLeaf ipcidrroutemetric5; //type: int32
        ydk::YLeaf ipcidrroutestatus; //type: RowStatus
        class IpCidrRouteType;
        class IpCidrRouteProto;

}; // IPFORWARDMIB::IpCidrRouteTable::IpCidrRouteEntry

class IPFORWARDMIB::IpForwardTable::IpForwardEntry::IpForwardProto : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf other;
        static const ydk::Enum::YLeaf local;
        static const ydk::Enum::YLeaf netmgmt;
        static const ydk::Enum::YLeaf icmp;
        static const ydk::Enum::YLeaf egp;
        static const ydk::Enum::YLeaf ggp;
        static const ydk::Enum::YLeaf hello;
        static const ydk::Enum::YLeaf rip;
        static const ydk::Enum::YLeaf is_is;
        static const ydk::Enum::YLeaf es_is;
        static const ydk::Enum::YLeaf ciscoIgrp;
        static const ydk::Enum::YLeaf bbnSpfIgp;
        static const ydk::Enum::YLeaf ospf;
        static const ydk::Enum::YLeaf bgp;
        static const ydk::Enum::YLeaf idpr;

};

class IPFORWARDMIB::IpForwardTable::IpForwardEntry::IpForwardType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf other;
        static const ydk::Enum::YLeaf invalid;
        static const ydk::Enum::YLeaf local;
        static const ydk::Enum::YLeaf remote;

};

class IPFORWARDMIB::IpCidrRouteTable::IpCidrRouteEntry::IpCidrRouteType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf other;
        static const ydk::Enum::YLeaf reject;
        static const ydk::Enum::YLeaf local;
        static const ydk::Enum::YLeaf remote;

};

class IPFORWARDMIB::IpCidrRouteTable::IpCidrRouteEntry::IpCidrRouteProto : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf other;
        static const ydk::Enum::YLeaf local;
        static const ydk::Enum::YLeaf netmgmt;
        static const ydk::Enum::YLeaf icmp;
        static const ydk::Enum::YLeaf egp;
        static const ydk::Enum::YLeaf ggp;
        static const ydk::Enum::YLeaf hello;
        static const ydk::Enum::YLeaf rip;
        static const ydk::Enum::YLeaf isIs;
        static const ydk::Enum::YLeaf esIs;
        static const ydk::Enum::YLeaf ciscoIgrp;
        static const ydk::Enum::YLeaf bbnSpfIgp;
        static const ydk::Enum::YLeaf ospf;
        static const ydk::Enum::YLeaf bgp;
        static const ydk::Enum::YLeaf idpr;
        static const ydk::Enum::YLeaf ciscoEigrp;

};


}
}

#endif /* _IP_FORWARD_MIB_ */

