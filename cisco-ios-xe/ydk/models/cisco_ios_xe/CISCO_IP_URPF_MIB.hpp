#ifndef _CISCO_IP_URPF_MIB_
#define _CISCO_IP_URPF_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xe {
namespace CISCO_IP_URPF_MIB {

class CiscoIpUrpfMib : public ydk::Entity
{
    public:
        CiscoIpUrpfMib();
        ~CiscoIpUrpfMib();

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


class CiscoIpUrpfMib::Cipurpfscalar : public ydk::Entity
{
    public:
        Cipurpfscalar();
        ~Cipurpfscalar();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf cipurpfdropratewindow; //type: int32
        ydk::YLeaf cipurpfcomputeinterval; //type: int32
        ydk::YLeaf cipurpfdropnotifyholddowntime; //type: int32

}; // CiscoIpUrpfMib::Cipurpfscalar


class CiscoIpUrpfMib::Cipurpftable : public ydk::Entity
{
    public:
        Cipurpftable();
        ~Cipurpftable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Cipurpfentry; //type: CiscoIpUrpfMib::Cipurpftable::Cipurpfentry

        std::vector<std::shared_ptr<CISCO_IP_URPF_MIB::CiscoIpUrpfMib::Cipurpftable::Cipurpfentry> > cipurpfentry;
        
}; // CiscoIpUrpfMib::Cipurpftable


class CiscoIpUrpfMib::Cipurpftable::Cipurpfentry : public ydk::Entity
{
    public:
        Cipurpfentry();
        ~Cipurpfentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf cipurpfipversion; //type: Cipurpfipversion
        ydk::YLeaf cipurpfdrops; //type: uint32
        ydk::YLeaf cipurpfdroprate; //type: uint32
        class Cipurpfipversion;

}; // CiscoIpUrpfMib::Cipurpftable::Cipurpfentry


class CiscoIpUrpfMib::Cipurpfifmontable : public ydk::Entity
{
    public:
        Cipurpfifmontable();
        ~Cipurpfifmontable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Cipurpfifmonentry; //type: CiscoIpUrpfMib::Cipurpfifmontable::Cipurpfifmonentry

        std::vector<std::shared_ptr<CISCO_IP_URPF_MIB::CiscoIpUrpfMib::Cipurpfifmontable::Cipurpfifmonentry> > cipurpfifmonentry;
        
}; // CiscoIpUrpfMib::Cipurpfifmontable


class CiscoIpUrpfMib::Cipurpfifmontable::Cipurpfifmonentry : public ydk::Entity
{
    public:
        Cipurpfifmonentry();
        ~Cipurpfifmonentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: int32 (refers to IF_MIB::IfMib::Iftable::Ifentry::ifindex)
        ydk::YLeaf ifindex;
        ydk::YLeaf cipurpfifipversion; //type: Cipurpfifipversion
        ydk::YLeaf cipurpfifdrops; //type: uint32
        ydk::YLeaf cipurpfifsuppresseddrops; //type: uint32
        ydk::YLeaf cipurpfifdroprate; //type: uint32
        ydk::YLeaf cipurpfifdiscontinuitytime; //type: uint32
        ydk::YLeaf cipurpfifdropratenotifyenable; //type: boolean
        ydk::YLeaf cipurpfifnotifydropratethreshold; //type: uint32
        ydk::YLeaf cipurpfifnotifydrholddownreset; //type: boolean
        ydk::YLeaf cipurpfifcheckstrict; //type: Cipurpfifcheckstrict
        ydk::YLeaf cipurpfifwhichroutetableid; //type: Cipurpfifwhichroutetableid
        ydk::YLeaf cipurpfifvrfname; //type: string
        class Cipurpfifipversion;
        class Cipurpfifcheckstrict;
        class Cipurpfifwhichroutetableid;

}; // CiscoIpUrpfMib::Cipurpfifmontable::Cipurpfifmonentry


class CiscoIpUrpfMib::Cipurpfvrfiftable : public ydk::Entity
{
    public:
        Cipurpfvrfiftable();
        ~Cipurpfvrfiftable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Cipurpfvrfifentry; //type: CiscoIpUrpfMib::Cipurpfvrfiftable::Cipurpfvrfifentry

        std::vector<std::shared_ptr<CISCO_IP_URPF_MIB::CiscoIpUrpfMib::Cipurpfvrfiftable::Cipurpfvrfifentry> > cipurpfvrfifentry;
        
}; // CiscoIpUrpfMib::Cipurpfvrfiftable


class CiscoIpUrpfMib::Cipurpfvrfiftable::Cipurpfvrfifentry : public ydk::Entity
{
    public:
        Cipurpfvrfifentry();
        ~Cipurpfvrfifentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: string (refers to CISCO_IP_URPF_MIB::CiscoIpUrpfMib::Cipurpfvrftable::Cipurpfvrfentry::cipurpfvrfname)
        ydk::YLeaf cipurpfvrfname;
        //type: int32 (refers to IF_MIB::IfMib::Iftable::Ifentry::ifindex)
        ydk::YLeaf ifindex;
        ydk::YLeaf cipurpfvrfifdrops; //type: uint32
        ydk::YLeaf cipurpfvrfifdiscontinuitytime; //type: uint32

}; // CiscoIpUrpfMib::Cipurpfvrfiftable::Cipurpfvrfifentry


class CiscoIpUrpfMib::Cipurpfvrftable : public ydk::Entity
{
    public:
        Cipurpfvrftable();
        ~Cipurpfvrftable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Cipurpfvrfentry; //type: CiscoIpUrpfMib::Cipurpfvrftable::Cipurpfvrfentry

        std::vector<std::shared_ptr<CISCO_IP_URPF_MIB::CiscoIpUrpfMib::Cipurpfvrftable::Cipurpfvrfentry> > cipurpfvrfentry;
        
}; // CiscoIpUrpfMib::Cipurpfvrftable


class CiscoIpUrpfMib::Cipurpfvrftable::Cipurpfvrfentry : public ydk::Entity
{
    public:
        Cipurpfvrfentry();
        ~Cipurpfvrfentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf cipurpfvrfname; //type: string

}; // CiscoIpUrpfMib::Cipurpfvrftable::Cipurpfvrfentry

class Unicastrpftype : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf strict;
        static const ydk::Enum::YLeaf loose;
        static const ydk::Enum::YLeaf disabled;

};

class CiscoIpUrpfMib::Cipurpftable::Cipurpfentry::Cipurpfipversion : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ipv4;
        static const ydk::Enum::YLeaf ipv6;

};

class CiscoIpUrpfMib::Cipurpfifmontable::Cipurpfifmonentry::Cipurpfifipversion : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ipv4;
        static const ydk::Enum::YLeaf ipv6;

};

class CiscoIpUrpfMib::Cipurpfifmontable::Cipurpfifmonentry::Cipurpfifcheckstrict : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf strict;
        static const ydk::Enum::YLeaf loose;

};

class CiscoIpUrpfMib::Cipurpfifmontable::Cipurpfifmonentry::Cipurpfifwhichroutetableid : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf default_;
        static const ydk::Enum::YLeaf vrf;

};


}
}

#endif /* _CISCO_IP_URPF_MIB_ */

