#ifndef _CISCO_IGMP_FILTER_MIB_
#define _CISCO_IGMP_FILTER_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>


namespace cisco_ios_xe {
namespace CISCO_IGMP_FILTER_MIB {

class CiscoIgmpFilterMib : public ydk::Entity
{
    public:
        CiscoIgmpFilterMib();
        ~CiscoIgmpFilterMib();

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

        class Cigmpfiltergeneral; //type: CiscoIgmpFilterMib::Cigmpfiltergeneral
        class Cigmpfiltereditor; //type: CiscoIgmpFilterMib::Cigmpfiltereditor
        class Cigmpfiltertable; //type: CiscoIgmpFilterMib::Cigmpfiltertable
        class Cigmpfilterinterfacetable; //type: CiscoIgmpFilterMib::Cigmpfilterinterfacetable

        std::shared_ptr<CISCO_IGMP_FILTER_MIB::CiscoIgmpFilterMib::Cigmpfiltereditor> cigmpfiltereditor;
        std::shared_ptr<CISCO_IGMP_FILTER_MIB::CiscoIgmpFilterMib::Cigmpfiltergeneral> cigmpfiltergeneral;
        std::shared_ptr<CISCO_IGMP_FILTER_MIB::CiscoIgmpFilterMib::Cigmpfilterinterfacetable> cigmpfilterinterfacetable;
        std::shared_ptr<CISCO_IGMP_FILTER_MIB::CiscoIgmpFilterMib::Cigmpfiltertable> cigmpfiltertable;
        
}; // CiscoIgmpFilterMib


class CiscoIgmpFilterMib::Cigmpfiltergeneral : public ydk::Entity
{
    public:
        Cigmpfiltergeneral();
        ~Cigmpfiltergeneral();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf cigmpfilterenable; //type: boolean
        ydk::YLeaf cigmpfiltermaxprofiles; //type: uint32

}; // CiscoIgmpFilterMib::Cigmpfiltergeneral


class CiscoIgmpFilterMib::Cigmpfiltereditor : public ydk::Entity
{
    public:
        Cigmpfiltereditor();
        ~Cigmpfiltereditor();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf cigmpfiltereditspinlock; //type: int32
        ydk::YLeaf cigmpfiltereditprofileindex; //type: uint32
        ydk::YLeaf cigmpfiltereditstartaddresstype; //type: Inetaddresstype
        ydk::YLeaf cigmpfiltereditstartaddress; //type: binary
        ydk::YLeaf cigmpfiltereditendaddresstype; //type: Inetaddresstype
        ydk::YLeaf cigmpfiltereditendaddress; //type: binary
        ydk::YLeaf cigmpfiltereditprofileaction; //type: Cigmpfiltereditprofileaction
        ydk::YLeaf cigmpfiltereditoperation; //type: Cigmpfiltereditoperation
        ydk::YLeaf cigmpfilterapplystatus; //type: Cigmpfilterapplystatus
        class Cigmpfiltereditprofileaction;
        class Cigmpfiltereditoperation;
        class Cigmpfilterapplystatus;

}; // CiscoIgmpFilterMib::Cigmpfiltereditor


class CiscoIgmpFilterMib::Cigmpfiltertable : public ydk::Entity
{
    public:
        Cigmpfiltertable();
        ~Cigmpfiltertable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Cigmpfilterentry; //type: CiscoIgmpFilterMib::Cigmpfiltertable::Cigmpfilterentry

        std::vector<std::shared_ptr<CISCO_IGMP_FILTER_MIB::CiscoIgmpFilterMib::Cigmpfiltertable::Cigmpfilterentry> > cigmpfilterentry;
        
}; // CiscoIgmpFilterMib::Cigmpfiltertable


class CiscoIgmpFilterMib::Cigmpfiltertable::Cigmpfilterentry : public ydk::Entity
{
    public:
        Cigmpfilterentry();
        ~Cigmpfilterentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf cigmpfilterprofileindex; //type: uint32
        ydk::YLeaf cigmpfilterstartaddresstype; //type: Inetaddresstype
        ydk::YLeaf cigmpfilterstartaddress; //type: binary
        ydk::YLeaf cigmpfilterendaddresstype; //type: Inetaddresstype
        ydk::YLeaf cigmpfilterendaddress; //type: binary
        ydk::YLeaf cigmpfilterprofileaction; //type: Cigmpfilterprofileaction
        class Cigmpfilterprofileaction;

}; // CiscoIgmpFilterMib::Cigmpfiltertable::Cigmpfilterentry


class CiscoIgmpFilterMib::Cigmpfilterinterfacetable : public ydk::Entity
{
    public:
        Cigmpfilterinterfacetable();
        ~Cigmpfilterinterfacetable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Cigmpfilterinterfaceentry; //type: CiscoIgmpFilterMib::Cigmpfilterinterfacetable::Cigmpfilterinterfaceentry

        std::vector<std::shared_ptr<CISCO_IGMP_FILTER_MIB::CiscoIgmpFilterMib::Cigmpfilterinterfacetable::Cigmpfilterinterfaceentry> > cigmpfilterinterfaceentry;
        
}; // CiscoIgmpFilterMib::Cigmpfilterinterfacetable


class CiscoIgmpFilterMib::Cigmpfilterinterfacetable::Cigmpfilterinterfaceentry : public ydk::Entity
{
    public:
        Cigmpfilterinterfaceentry();
        ~Cigmpfilterinterfaceentry();

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
        ydk::YLeaf cigmpfilterinterfaceprofileindex; //type: uint32

}; // CiscoIgmpFilterMib::Cigmpfilterinterfacetable::Cigmpfilterinterfaceentry

class CiscoIgmpFilterMib::Cigmpfiltereditor::Cigmpfiltereditprofileaction : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unSpecified;
        static const ydk::Enum::YLeaf permit;
        static const ydk::Enum::YLeaf deny;

};

class CiscoIgmpFilterMib::Cigmpfiltereditor::Cigmpfiltereditoperation : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf add;
        static const ydk::Enum::YLeaf delete_;
        static const ydk::Enum::YLeaf modify;

};

class CiscoIgmpFilterMib::Cigmpfiltereditor::Cigmpfilterapplystatus : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf someOtherError;
        static const ydk::Enum::YLeaf succeeded;
        static const ydk::Enum::YLeaf inconsistentEdit;
        static const ydk::Enum::YLeaf entryPresentError;
        static const ydk::Enum::YLeaf entryNotPresentError;

};

class CiscoIgmpFilterMib::Cigmpfiltertable::Cigmpfilterentry::Cigmpfilterprofileaction : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf permit;
        static const ydk::Enum::YLeaf deny;

};


}
}

#endif /* _CISCO_IGMP_FILTER_MIB_ */

