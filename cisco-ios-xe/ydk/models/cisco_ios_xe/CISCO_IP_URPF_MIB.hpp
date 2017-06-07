#ifndef _CISCO_IP_URPF_MIB_
#define _CISCO_IP_URPF_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace ydk {
namespace CISCO_IP_URPF_MIB {

class CiscoIpUrpfMib : public Entity
{
    public:
        CiscoIpUrpfMib();
        ~CiscoIpUrpfMib();

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

        class Cipurpfscalar; //type: CiscoIpUrpfMib::Cipurpfscalar
        class Cipurpftable; //type: CiscoIpUrpfMib::Cipurpftable
        class Cipurpfifmontable; //type: CiscoIpUrpfMib::Cipurpfifmontable
        class Cipurpfvrfiftable; //type: CiscoIpUrpfMib::Cipurpfvrfiftable
        class Cipurpfvrftable; //type: CiscoIpUrpfMib::Cipurpfvrftable

        std::shared_ptr<CISCO_IP_URPF_MIB::CiscoIpUrpfMib::Cipurpfifmontable> cipurpfifmontable;
        std::shared_ptr<CISCO_IP_URPF_MIB::CiscoIpUrpfMib::Cipurpfscalar> cipurpfscalar;
        std::shared_ptr<CISCO_IP_URPF_MIB::CiscoIpUrpfMib::Cipurpftable> cipurpftable;
        std::shared_ptr<CISCO_IP_URPF_MIB::CiscoIpUrpfMib::Cipurpfvrfiftable> cipurpfvrfiftable;
        std::shared_ptr<CISCO_IP_URPF_MIB::CiscoIpUrpfMib::Cipurpfvrftable> cipurpfvrftable;
        
}; // CiscoIpUrpfMib


class CiscoIpUrpfMib::Cipurpfscalar : public Entity
{
    public:
        Cipurpfscalar();
        ~Cipurpfscalar();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf cipurpfdropratewindow; //type: int32
        YLeaf cipurpfcomputeinterval; //type: int32
        YLeaf cipurpfdropnotifyholddowntime; //type: int32

}; // CiscoIpUrpfMib::Cipurpfscalar


class CiscoIpUrpfMib::Cipurpftable : public Entity
{
    public:
        Cipurpftable();
        ~Cipurpftable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Cipurpfentry; //type: CiscoIpUrpfMib::Cipurpftable::Cipurpfentry

        std::vector<std::shared_ptr<CISCO_IP_URPF_MIB::CiscoIpUrpfMib::Cipurpftable::Cipurpfentry> > cipurpfentry;
        
}; // CiscoIpUrpfMib::Cipurpftable


class CiscoIpUrpfMib::Cipurpftable::Cipurpfentry : public Entity
{
    public:
        Cipurpfentry();
        ~Cipurpfentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf cipurpfipversion; //type: CipurpfipversionEnum
        YLeaf cipurpfdrops; //type: uint32
        YLeaf cipurpfdroprate; //type: uint32
        class CipurpfipversionEnum;

}; // CiscoIpUrpfMib::Cipurpftable::Cipurpfentry


class CiscoIpUrpfMib::Cipurpfifmontable : public Entity
{
    public:
        Cipurpfifmontable();
        ~Cipurpfifmontable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Cipurpfifmonentry; //type: CiscoIpUrpfMib::Cipurpfifmontable::Cipurpfifmonentry

        std::vector<std::shared_ptr<CISCO_IP_URPF_MIB::CiscoIpUrpfMib::Cipurpfifmontable::Cipurpfifmonentry> > cipurpfifmonentry;
        
}; // CiscoIpUrpfMib::Cipurpfifmontable


class CiscoIpUrpfMib::Cipurpfifmontable::Cipurpfifmonentry : public Entity
{
    public:
        Cipurpfifmonentry();
        ~Cipurpfifmonentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        //type: int32 (refers to IF_MIB::IfMib::Iftable::Ifentry::ifindex)
        YLeaf ifindex;
        YLeaf cipurpfifipversion; //type: CipurpfifipversionEnum
        YLeaf cipurpfifdrops; //type: uint32
        YLeaf cipurpfifsuppresseddrops; //type: uint32
        YLeaf cipurpfifdroprate; //type: uint32
        YLeaf cipurpfifdiscontinuitytime; //type: uint32
        YLeaf cipurpfifdropratenotifyenable; //type: boolean
        YLeaf cipurpfifnotifydropratethreshold; //type: uint32
        YLeaf cipurpfifnotifydrholddownreset; //type: boolean
        YLeaf cipurpfifcheckstrict; //type: CipurpfifcheckstrictEnum
        YLeaf cipurpfifwhichroutetableid; //type: CipurpfifwhichroutetableidEnum
        YLeaf cipurpfifvrfname; //type: string
        class CipurpfifipversionEnum;
        class CipurpfifcheckstrictEnum;
        class CipurpfifwhichroutetableidEnum;

}; // CiscoIpUrpfMib::Cipurpfifmontable::Cipurpfifmonentry


class CiscoIpUrpfMib::Cipurpfvrfiftable : public Entity
{
    public:
        Cipurpfvrfiftable();
        ~Cipurpfvrfiftable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Cipurpfvrfifentry; //type: CiscoIpUrpfMib::Cipurpfvrfiftable::Cipurpfvrfifentry

        std::vector<std::shared_ptr<CISCO_IP_URPF_MIB::CiscoIpUrpfMib::Cipurpfvrfiftable::Cipurpfvrfifentry> > cipurpfvrfifentry;
        
}; // CiscoIpUrpfMib::Cipurpfvrfiftable


class CiscoIpUrpfMib::Cipurpfvrfiftable::Cipurpfvrfifentry : public Entity
{
    public:
        Cipurpfvrfifentry();
        ~Cipurpfvrfifentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        //type: string (refers to CISCO_IP_URPF_MIB::CiscoIpUrpfMib::Cipurpfvrftable::Cipurpfvrfentry::cipurpfvrfname)
        YLeaf cipurpfvrfname;
        //type: int32 (refers to IF_MIB::IfMib::Iftable::Ifentry::ifindex)
        YLeaf ifindex;
        YLeaf cipurpfvrfifdrops; //type: uint32
        YLeaf cipurpfvrfifdiscontinuitytime; //type: uint32

}; // CiscoIpUrpfMib::Cipurpfvrfiftable::Cipurpfvrfifentry


class CiscoIpUrpfMib::Cipurpfvrftable : public Entity
{
    public:
        Cipurpfvrftable();
        ~Cipurpfvrftable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Cipurpfvrfentry; //type: CiscoIpUrpfMib::Cipurpfvrftable::Cipurpfvrfentry

        std::vector<std::shared_ptr<CISCO_IP_URPF_MIB::CiscoIpUrpfMib::Cipurpfvrftable::Cipurpfvrfentry> > cipurpfvrfentry;
        
}; // CiscoIpUrpfMib::Cipurpfvrftable


class CiscoIpUrpfMib::Cipurpfvrftable::Cipurpfvrfentry : public Entity
{
    public:
        Cipurpfvrfentry();
        ~Cipurpfvrfentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf cipurpfvrfname; //type: string

}; // CiscoIpUrpfMib::Cipurpfvrftable::Cipurpfvrfentry

class UnicastrpftypeEnum : public Enum
{
    public:
        static const Enum::YLeaf strict;
        static const Enum::YLeaf loose;
        static const Enum::YLeaf disabled;

};

class CiscoIpUrpfMib::Cipurpftable::Cipurpfentry::CipurpfipversionEnum : public Enum
{
    public:
        static const Enum::YLeaf ipv4;
        static const Enum::YLeaf ipv6;

};

class CiscoIpUrpfMib::Cipurpfifmontable::Cipurpfifmonentry::CipurpfifipversionEnum : public Enum
{
    public:
        static const Enum::YLeaf ipv4;
        static const Enum::YLeaf ipv6;

};

class CiscoIpUrpfMib::Cipurpfifmontable::Cipurpfifmonentry::CipurpfifcheckstrictEnum : public Enum
{
    public:
        static const Enum::YLeaf strict;
        static const Enum::YLeaf loose;

};

class CiscoIpUrpfMib::Cipurpfifmontable::Cipurpfifmonentry::CipurpfifwhichroutetableidEnum : public Enum
{
    public:
        static const Enum::YLeaf default_;
        static const Enum::YLeaf vrf;

};


}
}

#endif /* _CISCO_IP_URPF_MIB_ */

