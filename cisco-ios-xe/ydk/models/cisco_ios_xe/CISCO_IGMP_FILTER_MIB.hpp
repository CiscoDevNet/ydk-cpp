#ifndef _CISCO_IGMP_FILTER_MIB_
#define _CISCO_IGMP_FILTER_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>


namespace ydk {
namespace CISCO_IGMP_FILTER_MIB {

class CiscoIgmpFilterMib : public Entity
{
    public:
        CiscoIgmpFilterMib();
        ~CiscoIgmpFilterMib();

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

        class Cigmpfiltergeneral; //type: CiscoIgmpFilterMib::Cigmpfiltergeneral
        class Cigmpfiltereditor; //type: CiscoIgmpFilterMib::Cigmpfiltereditor
        class Cigmpfiltertable; //type: CiscoIgmpFilterMib::Cigmpfiltertable
        class Cigmpfilterinterfacetable; //type: CiscoIgmpFilterMib::Cigmpfilterinterfacetable

        std::shared_ptr<CISCO_IGMP_FILTER_MIB::CiscoIgmpFilterMib::Cigmpfiltereditor> cigmpfiltereditor_;
        std::shared_ptr<CISCO_IGMP_FILTER_MIB::CiscoIgmpFilterMib::Cigmpfiltergeneral> cigmpfiltergeneral_;
        std::shared_ptr<CISCO_IGMP_FILTER_MIB::CiscoIgmpFilterMib::Cigmpfilterinterfacetable> cigmpfilterinterfacetable_;
        std::shared_ptr<CISCO_IGMP_FILTER_MIB::CiscoIgmpFilterMib::Cigmpfiltertable> cigmpfiltertable_;
        
}; // CiscoIgmpFilterMib


class CiscoIgmpFilterMib::Cigmpfiltergeneral : public Entity
{
    public:
        Cigmpfiltergeneral();
        ~Cigmpfiltergeneral();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf cigmpfilterenable; //type: boolean
        YLeaf cigmpfiltermaxprofiles; //type: uint32

}; // CiscoIgmpFilterMib::Cigmpfiltergeneral


class CiscoIgmpFilterMib::Cigmpfiltereditor : public Entity
{
    public:
        Cigmpfiltereditor();
        ~Cigmpfiltereditor();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf cigmpfiltereditspinlock; //type: int32
        YLeaf cigmpfiltereditprofileindex; //type: uint32
        YLeaf cigmpfiltereditstartaddresstype; //type: InetaddresstypeEnum
        YLeaf cigmpfiltereditstartaddress; //type: binary
        YLeaf cigmpfiltereditendaddresstype; //type: InetaddresstypeEnum
        YLeaf cigmpfiltereditendaddress; //type: binary
        YLeaf cigmpfiltereditprofileaction; //type: CigmpfiltereditprofileactionEnum
        YLeaf cigmpfiltereditoperation; //type: CigmpfiltereditoperationEnum
        YLeaf cigmpfilterapplystatus; //type: CigmpfilterapplystatusEnum
        class CigmpfiltereditprofileactionEnum;
        class CigmpfiltereditoperationEnum;
        class CigmpfilterapplystatusEnum;

}; // CiscoIgmpFilterMib::Cigmpfiltereditor


class CiscoIgmpFilterMib::Cigmpfiltertable : public Entity
{
    public:
        Cigmpfiltertable();
        ~Cigmpfiltertable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Cigmpfilterentry; //type: CiscoIgmpFilterMib::Cigmpfiltertable::Cigmpfilterentry

        std::vector<std::shared_ptr<CISCO_IGMP_FILTER_MIB::CiscoIgmpFilterMib::Cigmpfiltertable::Cigmpfilterentry> > cigmpfilterentry_;
        
}; // CiscoIgmpFilterMib::Cigmpfiltertable


class CiscoIgmpFilterMib::Cigmpfiltertable::Cigmpfilterentry : public Entity
{
    public:
        Cigmpfilterentry();
        ~Cigmpfilterentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf cigmpfilterprofileindex; //type: uint32
        YLeaf cigmpfilterstartaddresstype; //type: InetaddresstypeEnum
        YLeaf cigmpfilterstartaddress; //type: binary
        YLeaf cigmpfilterendaddresstype; //type: InetaddresstypeEnum
        YLeaf cigmpfilterendaddress; //type: binary
        YLeaf cigmpfilterprofileaction; //type: CigmpfilterprofileactionEnum
        class CigmpfilterprofileactionEnum;

}; // CiscoIgmpFilterMib::Cigmpfiltertable::Cigmpfilterentry


class CiscoIgmpFilterMib::Cigmpfilterinterfacetable : public Entity
{
    public:
        Cigmpfilterinterfacetable();
        ~Cigmpfilterinterfacetable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Cigmpfilterinterfaceentry; //type: CiscoIgmpFilterMib::Cigmpfilterinterfacetable::Cigmpfilterinterfaceentry

        std::vector<std::shared_ptr<CISCO_IGMP_FILTER_MIB::CiscoIgmpFilterMib::Cigmpfilterinterfacetable::Cigmpfilterinterfaceentry> > cigmpfilterinterfaceentry_;
        
}; // CiscoIgmpFilterMib::Cigmpfilterinterfacetable


class CiscoIgmpFilterMib::Cigmpfilterinterfacetable::Cigmpfilterinterfaceentry : public Entity
{
    public:
        Cigmpfilterinterfaceentry();
        ~Cigmpfilterinterfaceentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        //type: int32 (refers to IF_MIB::IfMib::Iftable::Ifentry::ifindex)
        YLeaf ifindex;
        YLeaf cigmpfilterinterfaceprofileindex; //type: uint32

}; // CiscoIgmpFilterMib::Cigmpfilterinterfacetable::Cigmpfilterinterfaceentry

class CiscoIgmpFilterMib::Cigmpfiltereditor::CigmpfiltereditprofileactionEnum : public Enum
{
    public:
        static const Enum::YLeaf unSpecified;
        static const Enum::YLeaf permit;
        static const Enum::YLeaf deny;

};

class CiscoIgmpFilterMib::Cigmpfiltereditor::CigmpfiltereditoperationEnum : public Enum
{
    public:
        static const Enum::YLeaf none;
        static const Enum::YLeaf add;
        static const Enum::YLeaf delete_;
        static const Enum::YLeaf modify;

};

class CiscoIgmpFilterMib::Cigmpfiltereditor::CigmpfilterapplystatusEnum : public Enum
{
    public:
        static const Enum::YLeaf someOtherError;
        static const Enum::YLeaf succeeded;
        static const Enum::YLeaf inconsistentEdit;
        static const Enum::YLeaf entryPresentError;
        static const Enum::YLeaf entryNotPresentError;

};

class CiscoIgmpFilterMib::Cigmpfiltertable::Cigmpfilterentry::CigmpfilterprofileactionEnum : public Enum
{
    public:
        static const Enum::YLeaf permit;
        static const Enum::YLeaf deny;

};


}
}

#endif /* _CISCO_IGMP_FILTER_MIB_ */

